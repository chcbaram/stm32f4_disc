//----------------------------------------------------------------------------
//    프로그램명 	: PLL 관련 함수
//
//    만든이     	: 
//
//    날  짜     	: 2013. 8.20.
//    
//    최종 수정  	:
//
//    MPU_Type		:
//
//    파일명     	: Hw_PLL.c
//----------------------------------------------------------------------------


//----- 헤더파일 열기
//
#define  HW_PLL_LOCAL


#include "Hw_PLL.h"




#define PLL_M      8
#define PLL_N      360
#define PLL_P      2 			// SYSCLK = PLL_VCO / PLL_P
#define PLL_Q      7 			// USB OTG FS, SDIO and RNG Clock =  PLL_VCO / PLLQ 




/*---------------------------------------------------------------------------
     TITLE   : Hw_PLL_Init
     WORK    : 
     ARG     : void
     RET     : void
---------------------------------------------------------------------------*/
void Hw_PLL_Init( void )
{
	u32 TimeOutCnt  = 0;
	u32 HSEStatus 	= 0;


    //-- HSE 선택        
    //
	REG_RCC_CR |= (1<<16);	
	

	//-- 설정된 clock 이 설정 되었는지 확인
	//
	do
	{	
		HSEStatus = REG_RCC_CR & (1<<17);	// HSE 인경우
		TimeOutCnt++;		
	} while( (HSEStatus == 0) && (TimeOutCnt < 1280) );


	if( (REG_RCC_CR & (1<<17)) != 0 )
	{
    	HSEStatus = 1;
	}
	else
	{
		HSEStatus = 0;
	}


	//-- PLL 설정 180Mhz로 설정함
	//
	//   f(VCO clock) = f(PLL clock input) × (PLLN / PLLM)
	//   f(PLL general clock output) = f(VCO clock) / PLLP    
	//   f(USB OTG FS, SDIO, RNG clock output) = f(VCO clock) / PLLQ
	//
	//   f(VCO clock) = 8Mhz x (360 / 8) = 8 x 45   = 360Mhz
	//   f(PLL )      = 360Mhz / 2                  = 180Mhz
	//   f(USB OTG FS, SDIO, RNG clock output)      = 51Mhz
	// 
    REG_RCC_PLLCFGR = PLL_M | (PLL_N << 6) | (((PLL_P >> 1) -1) << 16) | (1<<22) | (PLL_Q << 24);


    REG_RCC_APB1ENR |= (1<<28);		// PWREN
    REG_PWR_CR 		|= (3<<14);		// VOS = Scale 1 mode    


   

 	//-- HCLK = 180Mhz
 	//
	REG_RCC_CFGR |= (1<<4);		// HPRE = DIV1 = 180Mhz
      
    //-- PCLK2 = HCLK / 2 = 90Mhz
    //
    REG_RCC_CFGR |= (4<<13);	// PPRE2 = DIV2 = 90Mhz;
    
	//-- PCLK1 = HCLK / 4 = 45Mhz
	//
	REG_RCC_CFGR |= (5<<10);	// PPRE1 = DIV4 = 45Mhz;

 	//-- Enable the main PLL
    //
    REG_RCC_CR 	 |= (1<<24);	// PLLON


	//-- Wait till the main PLL is ready
	//
    while((REG_RCC_CR & (1<<25)) == 0)		// wait for PLLRDY = 1
    {
    }

	//-- Enable the Over-drive to extend the clock frequency to 180 Mhz */
	//
	REG_PWR_CR |= (1<<16);					// PWR_CR_ODEN;
    while((REG_PWR_CSR & (1<<16)) == 0)		// PWR_CSR_ODRDY
    {
    }

	REG_PWR_CR |= (1<<17);					// PWR_CR_ODSWEN;
    while((REG_PWR_CSR & (1<<17)) == 0)		// PWR_CSR_ODSWRDY
    {
    } 
     

	//-- Configure Flash prefetch, Instruction cache, Data cache and wait state 
	//
    REG_FLASH_ACR = 0 	|
    		( 1 << 14 )	|	// FLASH_ACR_PRFTEN
    		( 1 <<  9 )	|	// FLASH_ACR_ICEN
    		( 1 << 10 )	|	// FLASH_ACR_DCEN
    		( 5 <<  0 );	// FLASH_ACR_LATENCY_5WS


	//-- Select the main PLL as system clock source
    //
	REG_RCC_CFGR &= ~(3<<0);	// RCC_CFGR_SW;
    REG_RCC_CFGR |=  (2<<0);	// RCC_CFGR_SW_PLL;

	//-- Wait till the main PLL is used as system clock source 
	//
    while ((REG_RCC_CFGR & (3<<0) ) != 0x02);
    {
    }



    
    //-- AHB1에 주변장치에 Clock 소스 동작제어
    //
	REG_RCC_AHB1ENR |=  0  	|
				( 1 <<  0 ) |	// GPIO_A Enable
				( 1 <<  1 ) |	// GPIO_B Enable
				( 1 <<  2 ) |	// GPIO_C Enable
				( 1 <<  3 ) |	// GPIO_D Enable
				( 1 <<  4 ) |	// GPIO_E Enable
				( 1 <<  5 ) |	// GPIO_F Enable
				( 1 <<  6 ) |	// GPIO_G Enable
				( 1 <<  7 ) |	// GPIO_H Enable
				( 1 <<  8 ) |	// GPIO_I Enable
				( 1 <<  9 ) |	// GPIO_J Enable
				( 1 << 10 );	// GPIO_K Enable

}