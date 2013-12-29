//----------------------------------------------------------------------------
//    프로그램명 	: LED 관련 함수
//
//    만든이     	: 
//
//    날  짜     	: 
//    
//    최종 수정  	:
//
//    MPU_Type		:
//
//    파일명     	: Hw_Led.c
//----------------------------------------------------------------------------


//----- 헤더파일 열기
//
#define  HW_LED_LOCAL


#include "Hw_Led.h"





/*---------------------------------------------------------------------------
     TITLE   : Hw_Led_Init
     WORK    : 
     ARG     : void
     RET     : void
---------------------------------------------------------------------------*/
void Hw_Led_Init( void )
{

	REG_GPIOG_MODER 	&= ~(0x03 << (13*2));	// PG.13 MODE Clear
	REG_GPIOG_MODER 	|=  (0x01 << (13*2));	// PG.13 General purpose output mode
	REG_GPIOG_OTYPER 	&= ~(0x01 << (13*1));	// PG.13 Output push-pull 

	REG_GPIOG_OSPEEDR 	&= ~(0x03 << (13*2));	// PG.13 SPEED Clear
	REG_GPIOG_OSPEEDR 	|=  (0x03 << (13*2));	// PG.13 High speed

	REG_GPIOG_PUPDR 	&= ~(0x03 << (13*2));	// PG.13 Clear
	REG_GPIOG_PUPDR 	|=  (0x01 << (13*2));	// PG.13 0:Float, 1:Pull-up, 2:Pull-down, 
		

	Hw_Led_Off(0);
}





/*---------------------------------------------------------------------------
     TITLE   : Hw_Led_On
     WORK    :
     ARG     : void
     RET     : void
---------------------------------------------------------------------------*/
void Hw_Led_On( u8 Ch )
{	
	switch( Ch )
	{
		case 0:
			SET_BIT( REG_GPIOG_ODR, 13 );
			break;
	}
}





/*---------------------------------------------------------------------------
     TITLE   : Hw_Led_On
     WORK    :
     ARG     : void
     RET     : void
---------------------------------------------------------------------------*/
void Hw_Led_Off( u8 Ch )
{
	switch( Ch )
	{
		case 0:
			CLR_BIT( REG_GPIOG_ODR, 13 );
			break;
	}
}





/*---------------------------------------------------------------------------
     TITLE   : Hw_Led_On
     WORK    :
     ARG     : void
     RET     : void
---------------------------------------------------------------------------*/
void Hw_Led_Toggle( u8 Ch )
{
	switch( Ch )
	{
		case 0:
			TGL_BIT( REG_GPIOG_ODR, 13 );
			break;
	}
}





/*---------------------------------------------------------------------------
     TITLE   : Hw_Led_Wait
     WORK    : 
     ARG     : void
     RET     : void
---------------------------------------------------------------------------*/
void Hw_Led_Wait( u32 delay )
{
    volatile u32 i;
    for ( i = 0 ; i < delay ; i++ ){ };
}



















 
