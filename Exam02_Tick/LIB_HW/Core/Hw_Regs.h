//----------------------------------------------------------------------------
//    프로그램명 	: 하드웨어 레지스터 Define
//
//    만든이     	: 
//
//    날  짜     	:
//
//    최종 수정  	:
//
//    MPU_Type		:
//
//    파일명     	: Hw_Regs.h
//----------------------------------------------------------------------------


#ifndef _HW_REGS_H_
#define _HW_REGS_H_



//-- PWR - F429
//
#define REG_PWR_BASE					0x40007000
#define REG_PWR_CR						(*(volatile unsigned long *)(REG_PWR_BASE + 0x0000))
#define REG_PWR_CSR						(*(volatile unsigned long *)(REG_PWR_BASE + 0x0004))



//-- RCC (reset and clock control ) - F429
//
#define REG_RCC_BASE					0x40023800
#define REG_RCC_CR						(*(volatile unsigned long *)(REG_RCC_BASE + 0x0000))
#define REG_RCC_PLLCFGR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0004))
#define REG_RCC_CFGR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0008))
#define REG_RCC_CIR						(*(volatile unsigned long *)(REG_RCC_BASE + 0x000C))
#define REG_RCC_AHB1RSTR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0010))
#define REG_RCC_AHB2RSTR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0014))
#define REG_RCC_AHB3RSTR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0018))
#define REG_RCC_APB1RSTR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0020))
#define REG_RCC_APB2RSTR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0024))
#define REG_RCC_AHB1ENR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0030))
#define REG_RCC_AHB2ENR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0034))
#define REG_RCC_AHB3ENR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0038))
#define REG_RCC_APB1ENR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0040))
#define REG_RCC_APB2ENR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0044))
#define REG_RCC_AHB1LPENR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0050))
#define REG_RCC_AHB2LPENR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0054))
#define REG_RCC_AHB3LPENR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0058))
#define REG_RCC_APB1LPENR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0060))
#define REG_RCC_APB2LPENR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0064))
#define REG_RCC_BDCR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0070))
#define REG_RCC_CSR						(*(volatile unsigned long *)(REG_RCC_BASE + 0x0074))
#define REG_RCC_SSCGR					(*(volatile unsigned long *)(REG_RCC_BASE + 0x0080))
#define REG_RCC_PLLI2SCFGR				(*(volatile unsigned long *)(REG_RCC_BASE + 0x0084))



//-- FLASH Memory - F429
//
#define REG_FLASH_BASE					0x40023C00
#define REG_FLASH_ACR					(*(volatile unsigned long *)(REG_FLASH_BASE + 0x0000))
#define REG_FLASH_KEYR					(*(volatile unsigned long *)(REG_FLASH_BASE + 0x0004))
#define REG_FLASH_OPTKEYR				(*(volatile unsigned long *)(REG_FLASH_BASE + 0x0008))
#define REG_FLASH_SR					(*(volatile unsigned long *)(REG_FLASH_BASE + 0x000C))
#define REG_FLASH_CR					(*(volatile unsigned long *)(REG_FLASH_BASE + 0x0010))
#define REG_FLASH_OTPCR					(*(volatile unsigned long *)(REG_FLASH_BASE + 0x0014))
#define REG_FLASH_OTPCR1				(*(volatile unsigned long *)(REG_FLASH_BASE + 0x0018))



//-- USART1
//
#define REG_USART1_BASE					0x40013800
#define REG_USART1_SR					(*(volatile unsigned long *)(REG_USART1_BASE + 0x0000))
#define REG_USART1_DR					(*(volatile unsigned long *)(REG_USART1_BASE + 0x0004))
#define REG_USART1_BRR					(*(volatile unsigned long *)(REG_USART1_BASE + 0x0008))
#define REG_USART1_CR1					(*(volatile unsigned long *)(REG_USART1_BASE + 0x000C))
#define REG_USART1_CR2					(*(volatile unsigned long *)(REG_USART1_BASE + 0x0010))
#define REG_USART1_CR3					(*(volatile unsigned long *)(REG_USART1_BASE + 0x0014))
#define REG_USART1_GTPR					(*(volatile unsigned long *)(REG_USART1_BASE + 0x0018))



//-- USART2
//
#define REG_USART2_BASE					0x40004400
#define REG_USART2_SR					(*(volatile unsigned long *)(REG_USART2_BASE + 0x0000))
#define REG_USART2_DR					(*(volatile unsigned long *)(REG_USART2_BASE + 0x0004))
#define REG_USART2_BRR					(*(volatile unsigned long *)(REG_USART2_BASE + 0x0008))
#define REG_USART2_CR1					(*(volatile unsigned long *)(REG_USART2_BASE + 0x000C))
#define REG_USART2_CR2					(*(volatile unsigned long *)(REG_USART2_BASE + 0x0010))
#define REG_USART2_CR3					(*(volatile unsigned long *)(REG_USART2_BASE + 0x0014))
#define REG_USART2_GTPR					(*(volatile unsigned long *)(REG_USART2_BASE + 0x0018))



//-- AFIO
//
#define REG_AFIO_BASE					0x40010000
#define REG_AFIO_EVCR					(*(volatile unsigned long *)(REG_AFIO_BASE + 0x0000))
#define REG_AFIO_MAPR					(*(volatile unsigned long *)(REG_AFIO_BASE + 0x0004))
#define REG_AFIO_EXTICR1				(*(volatile unsigned long *)(REG_AFIO_BASE + 0x0008))
#define REG_AFIO_EXTICR2				(*(volatile unsigned long *)(REG_AFIO_BASE + 0x000C))
#define REG_AFIO_EXTICR3				(*(volatile unsigned long *)(REG_AFIO_BASE + 0x0010))
#define REG_AFIO_EXTICR4				(*(volatile unsigned long *)(REG_AFIO_BASE + 0x0014))
#define REG_AFIO_MAPR2					(*(volatile unsigned long *)(REG_AFIO_BASE + 0x001C))



//-- GPIO - F429
//
#define REG_GPIOA_BASE					0x40020000
#define REG_GPIOA_MODER					(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x0000))
#define REG_GPIOA_OTYPER				(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x0004))
#define REG_GPIOA_OSPEEDR				(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x0008))
#define REG_GPIOA_PUPDR					(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x000C))
#define REG_GPIOA_IDR					(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x0010))
#define REG_GPIOA_ODR					(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x0014))
#define REG_GPIOA_BSRR					(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x0018))
#define REG_GPIOA_LCKR					(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x001C))
#define REG_GPIOA_AFRL					(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x0020))
#define REG_GPIOA_AFRH					(*(volatile unsigned long *)(REG_GPIOA_BASE + 0x0024))


#define REG_GPIOB_BASE					0x40020400
#define REG_GPIOB_MODER					(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x0000))
#define REG_GPIOB_OTYPER				(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x0004))
#define REG_GPIOB_OSPEEDR				(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x0008))
#define REG_GPIOB_PUPDR					(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x000C))
#define REG_GPIOB_IDR					(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x0010))
#define REG_GPIOB_ODR					(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x0014))
#define REG_GPIOB_BSRR					(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x0018))
#define REG_GPIOB_LCKR					(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x001C))
#define REG_GPIOB_AFRL					(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x0020))
#define REG_GPIOB_AFRH					(*(volatile unsigned long *)(REG_GPIOB_BASE + 0x0024))


#define REG_GPIOC_BASE					0x40020800
#define REG_GPIOC_MODER					(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x0000))
#define REG_GPIOC_OTYPER				(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x0004))
#define REG_GPIOC_OSPEEDR				(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x0008))
#define REG_GPIOC_PUPDR					(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x000C))
#define REG_GPIOC_IDR					(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x0010))
#define REG_GPIOC_ODR					(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x0014))
#define REG_GPIOC_BSRR					(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x0018))
#define REG_GPIOC_LCKR					(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x001C))
#define REG_GPIOC_AFRL					(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x0020))
#define REG_GPIOC_AFRH					(*(volatile unsigned long *)(REG_GPIOC_BASE + 0x0024))


#define REG_GPIOD_BASE					0x40020C00
#define REG_GPIOD_MODER					(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x0000))
#define REG_GPIOD_OTYPER				(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x0004))
#define REG_GPIOD_OSPEEDR				(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x0008))
#define REG_GPIOD_PUPDR					(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x000C))
#define REG_GPIOD_IDR					(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x0010))
#define REG_GPIOD_ODR					(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x0014))
#define REG_GPIOD_BSRR					(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x0018))
#define REG_GPIOD_LCKR					(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x001C))
#define REG_GPIOD_AFRL					(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x0020))
#define REG_GPIOD_AFRH					(*(volatile unsigned long *)(REG_GPIOD_BASE + 0x0024))


#define REG_GPIOE_BASE					0x40021000
#define REG_GPIOE_MODER					(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x0000))
#define REG_GPIOE_OTYPER				(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x0004))
#define REG_GPIOE_OSPEEDR				(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x0008))
#define REG_GPIOE_PUPDR					(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x000C))
#define REG_GPIOE_IDR					(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x0010))
#define REG_GPIOE_ODR					(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x0014))
#define REG_GPIOE_BSRR					(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x0018))
#define REG_GPIOE_LCKR					(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x001C))
#define REG_GPIOE_AFRL					(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x0020))
#define REG_GPIOE_AFRH					(*(volatile unsigned long *)(REG_GPIOE_BASE + 0x0024))


#define REG_GPIOF_BASE					0x40021400
#define REG_GPIOF_MODER					(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x0000))
#define REG_GPIOF_OTYPER				(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x0004))
#define REG_GPIOF_OSPEEDR				(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x0008))
#define REG_GPIOF_PUPDR					(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x000C))
#define REG_GPIOF_IDR					(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x0010))
#define REG_GPIOF_ODR					(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x0014))
#define REG_GPIOF_BSRR					(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x0018))
#define REG_GPIOF_LCKR					(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x001C))
#define REG_GPIOF_AFRL					(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x0020))
#define REG_GPIOF_AFRH					(*(volatile unsigned long *)(REG_GPIOF_BASE + 0x0024))


#define REG_GPIOG_BASE					0x40021800
#define REG_GPIOG_MODER					(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x0000))
#define REG_GPIOG_OTYPER				(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x0004))
#define REG_GPIOG_OSPEEDR				(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x0008))
#define REG_GPIOG_PUPDR					(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x000C))
#define REG_GPIOG_IDR					(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x0010))
#define REG_GPIOG_ODR					(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x0014))
#define REG_GPIOG_BSRR					(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x0018))
#define REG_GPIOG_LCKR					(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x001C))
#define REG_GPIOG_AFRL					(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x0020))
#define REG_GPIOG_AFRH					(*(volatile unsigned long *)(REG_GPIOG_BASE + 0x0024))



//-- NVIC - F429
//
#define REG_NVIC_BASE					0xE000E100
#define REG_NVIC_ISER(x)				(*(volatile unsigned long *)(REG_NVIC_BASE + 0x0000 + 4*(x)))
#define REG_NVIC_ICER(x)				(*(volatile unsigned long *)(REG_NVIC_BASE + 0x0080 + 4*(x)))
#define REG_NVIC_ISPR(x)				(*(volatile unsigned long *)(REG_NVIC_BASE + 0x0100 + 4*(x)))
#define REG_NVIC_ICPR(x)				(*(volatile unsigned long *)(REG_NVIC_BASE + 0x0180 + 4*(x)))
#define REG_NVIC_IABR(x)				(*(volatile unsigned long *)(REG_NVIC_BASE + 0x0200 + 4*(x)))
#define REG_NVIC_IPR(x)					(*(volatile unsigned long *)(REG_NVIC_BASE + 0x0300 + 4*(x)))
#define REG_NVIC_STIR					(*(volatile unsigned long *)(0xE000EF00)



//-- SCB - F429
//
#define REG_SCB_BASE					0xE000ED00
#define REG_SCB_ACTLR					(*(volatile unsigned long *)(0xE000E008))
#define REG_SCB_CPUID					(*(volatile unsigned long *)(REG_SCB_BASE + 0x0000))
#define REG_SCB_ICSR					(*(volatile unsigned long *)(REG_SCB_BASE + 0x0004))
#define REG_SCB_VTOR					(*(volatile unsigned long *)(REG_SCB_BASE + 0x0008))
#define REG_SCB_AIRCR					(*(volatile unsigned long *)(REG_SCB_BASE + 0x000C))
#define REG_SCB_SCR						(*(volatile unsigned long *)(REG_SCB_BASE + 0x0010))
#define REG_SCB_CCR						(*(volatile unsigned long *)(REG_SCB_BASE + 0x0014))
#define REG_SCB_SHPR1					(*(volatile unsigned long *)(REG_SCB_BASE + 0x0018))
#define REG_SCB_SHPR2					(*(volatile unsigned long *)(REG_SCB_BASE + 0x001C))
#define REG_SCB_SHPR3					(*(volatile unsigned long *)(REG_SCB_BASE + 0x0020))
#define REG_SCB_SHCRS					(*(volatile unsigned long *)(REG_SCB_BASE + 0x0024))
#define REG_SCB_CFSR					(*(volatile unsigned long *)(REG_SCB_BASE + 0x0028))

#define REG_SCB_CPACR					(*(volatile unsigned long *)(0xE000ED88))
#define REG_SCB_FPCCR					(*(volatile unsigned long *)(0xE000EF34))
#define REG_SCB_FPCAR					(*(volatile unsigned long *)(0xE000EF38))
#define REG_SCB_FPDSCR					(*(volatile unsigned long *)(0xE000EF3C))





//-- STK ( SysTick )
//
#define REG_STK_BASE					0xE000E010
#define REG_STK_CTRL					(*(volatile unsigned long *)(REG_STK_BASE + 0x0000))
#define REG_STK_LOAD					(*(volatile unsigned long *)(REG_STK_BASE + 0x0004))
#define REG_STK_VAL						(*(volatile unsigned long *)(REG_STK_BASE + 0x0008))
#define REG_STK_CALIB					(*(volatile unsigned long *)(REG_STK_BASE + 0x000C))



//-- EXTI 
//
#define REG_EXTI_BASE					0x40010400
#define REG_EXTI_IMR					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0000))
#define REG_EXTI_EMR					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0004))
#define REG_EXTI_RTSR					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0008))
#define REG_EXTI_FTSR					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x000C))
#define REG_EXTI_SWIER					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0010))
#define REG_EXTI_PR						(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0014))



//-- I2C
//
#define REG_I2C1_BASE					0x40005400
#define REG_I2C1_CR1					(*(volatile unsigned long *)(REG_I2C1_BASE + 0x0000))
#define REG_I2C1_CR2					(*(volatile unsigned long *)(REG_I2C1_BASE + 0x0004))
#define REG_I2C1_OAR1					(*(volatile unsigned long *)(REG_I2C1_BASE + 0x0008))
#define REG_I2C1_OAR2					(*(volatile unsigned long *)(REG_I2C1_BASE + 0x000C))
#define REG_I2C1_DR						(*(volatile unsigned long *)(REG_I2C1_BASE + 0x0010))
#define REG_I2C1_SR1					(*(volatile unsigned long *)(REG_I2C1_BASE + 0x0014))
#define REG_I2C1_SR2					(*(volatile unsigned long *)(REG_I2C1_BASE + 0x0018))
#define REG_I2C1_CCR					(*(volatile unsigned long *)(REG_I2C1_BASE + 0x001C))
#define REG_I2C1_TRISE					(*(volatile unsigned long *)(REG_I2C1_BASE + 0x0020))


#define REG_I2C2_BASE					0x40005800
#define REG_I2C2_CR1					(*(volatile unsigned long *)(REG_I2C2_BASE + 0x0000))
#define REG_I2C2_CR2					(*(volatile unsigned long *)(REG_I2C2_BASE + 0x0004))
#define REG_I2C2_OAR1					(*(volatile unsigned long *)(REG_I2C2_BASE + 0x0008))
#define REG_I2C2_OAR2					(*(volatile unsigned long *)(REG_I2C2_BASE + 0x000C))
#define REG_I2C2_DR						(*(volatile unsigned long *)(REG_I2C2_BASE + 0x0010))
#define REG_I2C2_SR1					(*(volatile unsigned long *)(REG_I2C2_BASE + 0x0014))
#define REG_I2C2_SR2					(*(volatile unsigned long *)(REG_I2C2_BASE + 0x0018))
#define REG_I2C2_CCR					(*(volatile unsigned long *)(REG_I2C2_BASE + 0x001C))
#define REG_I2C2_TRISE					(*(volatile unsigned long *)(REG_I2C2_BASE + 0x0020))



//-- SPI1
//
#define REG_SPI1_BASE					0x40013000
#define REG_SPI1_CR1					(*(volatile unsigned long *)(REG_SPI1_BASE + 0x0000))
#define REG_SPI1_CR2					(*(volatile unsigned long *)(REG_SPI1_BASE + 0x0004))
#define REG_SPI1_SR						(*(volatile unsigned long *)(REG_SPI1_BASE + 0x0008))
#define REG_SPI1_DR						(*(volatile unsigned long *)(REG_SPI1_BASE + 0x000C))
#define REG_SPI1_CRCPR					(*(volatile unsigned long *)(REG_SPI1_BASE + 0x0010))
#define REG_SPI1_RXCRCR					(*(volatile unsigned long *)(REG_SPI1_BASE + 0x0014))
#define REG_SPI1_TXCRCR					(*(volatile unsigned long *)(REG_SPI1_BASE + 0x0018))
#define REG_SPI1_I2SCFGR				(*(volatile unsigned long *)(REG_SPI1_BASE + 0x001C))
#define REG_SPI1_I2SPR					(*(volatile unsigned long *)(REG_SPI1_BASE + 0x0020))



//-- SPI2
//
#define REG_SPI2_BASE					0x40003800
#define REG_SPI2_CR1					(*(volatile unsigned long *)(REG_SPI2_BASE + 0x0000))
#define REG_SPI2_CR2					(*(volatile unsigned long *)(REG_SPI2_BASE + 0x0004))
#define REG_SPI2_SR						(*(volatile unsigned long *)(REG_SPI2_BASE + 0x0008))
#define REG_SPI2_DR						(*(volatile unsigned long *)(REG_SPI2_BASE + 0x000C))
#define REG_SPI2_CRCPR					(*(volatile unsigned long *)(REG_SPI2_BASE + 0x0010))
#define REG_SPI2_RXCRCR					(*(volatile unsigned long *)(REG_SPI2_BASE + 0x0014))
#define REG_SPI2_TXCRCR					(*(volatile unsigned long *)(REG_SPI2_BASE + 0x0018))
#define REG_SPI2_I2SCFGR				(*(volatile unsigned long *)(REG_SPI2_BASE + 0x001C))
#define REG_SPI2_I2SPR					(*(volatile unsigned long *)(REG_SPI2_BASE + 0x0020))



//-- DMA1
//
#define REG_DMA1_BASE					0x40020000
#define REG_DMA1_ISR					(*(volatile unsigned long *)(REG_DMA1_BASE + 0x0000))
#define REG_DMA1_IFCR					(*(volatile unsigned long *)(REG_DMA1_BASE + 0x0004))
#define REG_DMA1_CCR(x)					(*(volatile unsigned long *)(REG_DMA1_BASE + 0x0008 + 20*((x)-1)))
#define REG_DMA1_CNDTR(x)				(*(volatile unsigned long *)(REG_DMA1_BASE + 0x000C + 20*((x)-1)))
#define REG_DMA1_CPAR(x)				(*(volatile unsigned long *)(REG_DMA1_BASE + 0x0010 + 20*((x)-1)))
#define REG_DMA1_CMAR(x)				(*(volatile unsigned long *)(REG_DMA1_BASE + 0x0014 + 20*((x)-1)))



//-- DMA2
//
#define REG_DMA2_BASE					0x40020400
#define REG_DMA2_ISR					(*(volatile unsigned long *)(REG_DMA2_BASE + 0x0000))
#define REG_DMA2_IFCR					(*(volatile unsigned long *)(REG_DMA2_BASE + 0x0004))
#define REG_DMA2_CCR(x)					(*(volatile unsigned long *)(REG_DMA2_BASE + 0x0008 + 20*((x)-1)))
#define REG_DMA2_CNDTR(x)				(*(volatile unsigned long *)(REG_DMA2_BASE + 0x000C + 20*((x)-1)))
#define REG_DMA2_CPAR(x)				(*(volatile unsigned long *)(REG_DMA2_BASE + 0x0010 + 20*((x)-1)))
#define REG_DMA2_CMAR(x)				(*(volatile unsigned long *)(REG_DMA2_BASE + 0x0014 + 20*((x)-1)))



//-- ADC1
//
#define REG_ADC1_BASE					0x40012400
#define REG_ADC1_SR						(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0000))
#define REG_ADC1_CR1					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0004))
#define REG_ADC1_CR2					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0008))
#define REG_ADC1_SMPR1					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x000C))
#define REG_ADC1_SMPR2					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0010))
#define REG_ADC1_JOFR1					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0014))
#define REG_ADC1_JOFR2					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0018))
#define REG_ADC1_JOFR3					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x001C))
#define REG_ADC1_JOFR4					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0020))
#define REG_ADC1_HTR					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0024))
#define REG_ADC1_LTR					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0028))
#define REG_ADC1_SQR1					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x002C))
#define REG_ADC1_SQR2					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0030))
#define REG_ADC1_SQR3					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0034))
#define REG_ADC1_JSQR					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0038))
#define REG_ADC1_JDR1					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x003C))
#define REG_ADC1_JDR2					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0040))
#define REG_ADC1_JDR3					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0044))
#define REG_ADC1_JDR4					(*(volatile unsigned long *)(REG_ADC1_BASE + 0x0048))
#define REG_ADC1_DR						(*(volatile unsigned long *)(REG_ADC1_BASE + 0x004C))



//-- ADC2
//
#define REG_ADC2_BASE					0x40012800
#define REG_ADC2_SR						(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0000))
#define REG_ADC2_CR1					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0004))
#define REG_ADC2_CR2					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0008))
#define REG_ADC2_SMPR1					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x000C))
#define REG_ADC2_SMPR2					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0010))
#define REG_ADC2_JOFR1					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0014))
#define REG_ADC2_JOFR2					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0018))
#define REG_ADC2_JOFR3					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x001C))
#define REG_ADC2_JOFR4					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0020))
#define REG_ADC2_HTR					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0024))
#define REG_ADC2_LTR					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0028))
#define REG_ADC2_SQR1					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x002C))
#define REG_ADC2_SQR2					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0030))
#define REG_ADC2_SQR3					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0034))
#define REG_ADC2_JSQR					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0038))
#define REG_ADC2_JDR1					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x003C))
#define REG_ADC2_JDR2					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0040))
#define REG_ADC2_JDR3					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0044))
#define REG_ADC2_JDR4					(*(volatile unsigned long *)(REG_ADC2_BASE + 0x0048))
#define REG_ADC2_DR						(*(volatile unsigned long *)(REG_ADC2_BASE + 0x004C))



//-- ADC3
//
#define REG_ADC3_BASE					0x40013C00
#define REG_ADC3_SR						(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0000))
#define REG_ADC3_CR1					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0004))
#define REG_ADC3_CR2					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0008))
#define REG_ADC3_SMPR1					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x000C))
#define REG_ADC3_SMPR2					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0010))
#define REG_ADC3_JOFR1					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0014))
#define REG_ADC3_JOFR2					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0018))
#define REG_ADC3_JOFR3					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x001C))
#define REG_ADC3_JOFR4					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0020))
#define REG_ADC3_HTR					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0024))
#define REG_ADC3_LTR					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0028))
#define REG_ADC3_SQR1					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x002C))
#define REG_ADC3_SQR2					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0030))
#define REG_ADC3_SQR3					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0034))
#define REG_ADC3_JSQR					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0038))
#define REG_ADC3_JDR1					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x003C))
#define REG_ADC3_JDR2					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0040))
#define REG_ADC3_JDR3					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0044))
#define REG_ADC3_JDR4					(*(volatile unsigned long *)(REG_ADC3_BASE + 0x0048))
#define REG_ADC3_DR						(*(volatile unsigned long *)(REG_ADC3_BASE + 0x004C))



//-- EXTI
//
#define REG_EXTI_BASE					0x40010400
#define REG_EXTI_IMR					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0000))
#define REG_EXTI_EMR					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0004))
#define REG_EXIT_RTSR					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0008))
#define REG_EXIT_FTSR					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x000C))
#define REG_EXIT_SWIER					(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0010))
#define REG_EXIT_PR						(*(volatile unsigned long *)(REG_EXTI_BASE + 0x0014))



//-- Timer1
//
#define REG_TIM1_BASE					0x40012C00
#define REG_TIM1_CR1					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0000))
#define REG_TIM1_CR2					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0004))
#define REG_TIM1_SMCR					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0008))
#define REG_TIM1_DIER					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x000C))
#define REG_TIM1_SR						(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0010))
#define REG_TIM1_EGR					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0014))
#define REG_TIM1_CCMR1					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0018))
#define REG_TIM1_CCMR2					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x001C))
#define REG_TIM1_CCER					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0020))
#define REG_TIM1_CNT					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0024))
#define REG_TIM1_PSC					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0028))
#define REG_TIM1_ARR					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x002C))
#define REG_TIM1_RCR					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0030))
#define REG_TIM1_CCR1					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0034))
#define REG_TIM1_CCR2					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0038))
#define REG_TIM1_CCR3					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x003C))
#define REG_TIM1_CCR4					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0040))
#define REG_TIM1_BDTR					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0044))
#define REG_TIM1_DCR					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x0048))
#define REG_TIM1_DMAR					(*(volatile unsigned long *)(REG_TIM1_BASE + 0x004C))



//-- Timer2
//
#define REG_TIM2_BASE					0x40000000
#define REG_TIM2_CR1					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0000))
#define REG_TIM2_CR2					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0004))
#define REG_TIM2_SMCR					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0008))
#define REG_TIM2_DIER					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x000C))
#define REG_TIM2_SR						(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0010))
#define REG_TIM2_EGR					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0014))
#define REG_TIM2_CCMR1					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0018))
#define REG_TIM2_CCMR2					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x001C))
#define REG_TIM2_CCER					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0020))
#define REG_TIM2_CNT					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0024))
#define REG_TIM2_PSC					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0028))
#define REG_TIM2_ARR					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x002C))
#define REG_TIM2_RCR					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0030))
#define REG_TIM2_CCR1					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0034))
#define REG_TIM2_CCR2					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0038))
#define REG_TIM2_CCR3					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x003C))
#define REG_TIM2_CCR4					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0040))
#define REG_TIM2_BDTR					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0044))
#define REG_TIM2_DCR					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x0048))
#define REG_TIM2_DMAR					(*(volatile unsigned long *)(REG_TIM2_BASE + 0x004C))



//-- Timer3
//
#define REG_TIM3_BASE					0x40000400
#define REG_TIM3_CR1					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0000))
#define REG_TIM3_CR2					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0004))
#define REG_TIM3_SMCR					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0008))
#define REG_TIM3_DIER					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x000C))
#define REG_TIM3_SR						(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0010))
#define REG_TIM3_EGR					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0014))
#define REG_TIM3_CCMR1					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0018))
#define REG_TIM3_CCMR2					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x001C))
#define REG_TIM3_CCER					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0020))
#define REG_TIM3_CNT					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0024))
#define REG_TIM3_PSC					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0028))
#define REG_TIM3_ARR					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x002C))
#define REG_TIM3_RCR					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0030))
#define REG_TIM3_CCR1					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0034))
#define REG_TIM3_CCR2					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0038))
#define REG_TIM3_CCR3					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x003C))
#define REG_TIM3_CCR4					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0040))
#define REG_TIM3_BDTR					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0044))
#define REG_TIM3_DCR					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x0048))
#define REG_TIM3_DMAR					(*(volatile unsigned long *)(REG_TIM3_BASE + 0x004C))



//-- Timer4
//
#define REG_TIM4_BASE					0x40000800
#define REG_TIM4_CR1					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0000))
#define REG_TIM4_CR2					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0004))
#define REG_TIM4_SMCR					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0008))
#define REG_TIM4_DIER					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x000C))
#define REG_TIM4_SR						(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0010))
#define REG_TIM4_EGR					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0014))
#define REG_TIM4_CCMR1					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0018))
#define REG_TIM4_CCMR2					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x001C))
#define REG_TIM4_CCER					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0020))
#define REG_TIM4_CNT					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0024))
#define REG_TIM4_PSC					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0028))
#define REG_TIM4_ARR					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x002C))
#define REG_TIM4_RCR					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0030))
#define REG_TIM4_CCR1					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0034))
#define REG_TIM4_CCR2					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0038))
#define REG_TIM4_CCR3					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x003C))
#define REG_TIM4_CCR4					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0040))
#define REG_TIM4_BDTR					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0044))
#define REG_TIM4_DCR					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x0048))
#define REG_TIM4_DMAR					(*(volatile unsigned long *)(REG_TIM4_BASE + 0x004C))


#endif






















