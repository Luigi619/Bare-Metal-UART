#ifndef _MCAL_REG_H
#define _MCAL_REG_H

#include <cstdint>
#include "mcal_reg_access.h"
#include "mcal_reg_access_dynamic.h"



namespace mcal{
	
	namespace reg{
		
		//Global base addresses
		const std::uint32_t periph_base = 0x40000000U;
		
		//Individual unit base addresses
		const std::uint32_t ahb1_periph_base = periph_base + 0x00020000U;
		const std::uint32_t rcc_base = ahb1_periph_base + 0x3800U;
		
		const std::uint32_t ahb1enr = rcc_base + 0x30;
		const std::uint32_t ahb2enr = rcc_base + 0x34;
		const std::uint32_t ahb3enr = rcc_base + 0x38;
		const std::uint32_t apb1enr = rcc_base + 0x40;
		const std::uint32_t apb2enr = rcc_base + 0x44;
		
		
		const std::uint32_t gpioa = ahb1_periph_base + 0x0000U;
		const std::uint32_t gpiob = ahb1_periph_base + 0x0400U;
		const std::uint32_t gpioc = ahb1_periph_base + 0x0800U;
		const std::uint32_t gpiod = ahb1_periph_base + 0x0C00U;
		const std::uint32_t gpioe = ahb1_periph_base + 0x1000U;
		const std::uint32_t gpiof = ahb1_periph_base + 0x1400U;
		const std::uint32_t gpiog = ahb1_periph_base + 0x1800U;
		const std::uint32_t gpioh = ahb1_periph_base + 0x1C00U;
		
		const std::uint32_t uart1_base = 0x40011000;
		const std::uint32_t uart2_base = 0x40004400;
		const std::uint32_t uart3_base = 0x40004800;
		const std::uint32_t uart6_base = 0x40011400;
		
			
		// Port registers
		const std::uint32_t moder_offset = 0x00;
		const std::uint32_t idr_offset = 0x10;
		const std::uint32_t otyper_offset = 0x04;
		const std::uint32_t ospeedr_offset = 0x08;
		const std::uint32_t pupdr_offset = 0x0C;
		const std::uint32_t odr_offset = 0x14;
		const std::uint32_t bsrr_offset = 0x18;
		const std::uint32_t lckr_offset = 0x1C;
		const std::uint32_t afrl_offset = 0x20;
		const std::uint32_t afrh_offset = 0x24;
				
		const std::uint32_t gpioa_moder = gpioa + moder_offset;
		const std::uint32_t gpioa_idr = gpioa + idr_offset;
		const std::uint32_t gpioa_otyper = gpioa + otyper_offset;
		const std::uint32_t gpioa_ospeedr = gpioa + ospeedr_offset;
		const std::uint32_t gpioa_pupdr = gpioa + pupdr_offset;
		const std::uint32_t gpioa_odr = gpioa + odr_offset;
		const std::uint32_t gpioa_bsrr = gpioa + bsrr_offset;
		const std::uint32_t gpioa_lckr = gpioa + lckr_offset;
		const std::uint32_t gpioa_afrl = gpioa + afrl_offset;
		const std::uint32_t gpioa_afrh = gpioa + afrh_offset;

		
		const std::uint32_t gpiob_moder = gpiob + moder_offset;
		const std::uint32_t gpiob_idr = gpiob + idr_offset;
		const std::uint32_t gpiob_otyper = gpiob + otyper_offset;
		const std::uint32_t gpiob_ospeedr = gpiob + ospeedr_offset;
		const std::uint32_t gpiob_pupdr = gpiob + pupdr_offset;
		const std::uint32_t gpiob_odr = gpiob + odr_offset;
		const std::uint32_t gpiob_bsrr = gpiob + bsrr_offset;
		const std::uint32_t gpiob_lckr = gpiob + lckr_offset;
		const std::uint32_t gpiob_afrl = gpiob + afrl_offset;
		const std::uint32_t gpiob_afrh = gpiob + afrh_offset;
				

		const std::uint32_t gpioc_moder = gpioc + moder_offset;
		const std::uint32_t gpioc_idr = gpioc + idr_offset;
		const std::uint32_t gpioc_otyper = gpioc + otyper_offset;
		const std::uint32_t gpioc_ospeedr = gpioc + ospeedr_offset;
		const std::uint32_t gpioc_pupdr = gpioc + pupdr_offset;
		const std::uint32_t gpioc_odr = gpioc + odr_offset;
		const std::uint32_t gpioc_bsrr = gpioc + bsrr_offset;
		const std::uint32_t gpioc_lckr = gpioc + lckr_offset;
		const std::uint32_t gpioc_afrl = gpioc + afrl_offset;
		const std::uint32_t gpioc_afrh = gpioc + afrh_offset;


		const std::uint32_t gpiod_moder = gpiod + moder_offset;
		const std::uint32_t gpiod_idr = gpiod + idr_offset;
		const std::uint32_t gpiod_otyper = gpiod + otyper_offset;
		const std::uint32_t gpiod_ospeedr = gpiod + ospeedr_offset;
		const std::uint32_t gpiod_pupdr = gpiod + pupdr_offset;
		const std::uint32_t gpiod_odr = gpiod + odr_offset;
		const std::uint32_t gpiod_bsrr = gpiod + bsrr_offset;
		const std::uint32_t gpiod_lckr = gpiod + lckr_offset;
		const std::uint32_t gpiod_afrl = gpiod + afrl_offset;
		const std::uint32_t gpiod_afrh = gpiod + afrh_offset;

				
		const std::uint32_t gpioe_moder = gpioe + moder_offset;
		const std::uint32_t gpioe_idr = gpioe + idr_offset;
		const std::uint32_t gpioe_otyper = gpioe + otyper_offset;
		const std::uint32_t gpioe_ospeedr = gpioe + ospeedr_offset;
		const std::uint32_t gpioe_pupdr = gpioe + pupdr_offset;
		const std::uint32_t gpioe_odr = gpioe + odr_offset;
		const std::uint32_t gpioe_bsrr = gpioe + bsrr_offset;
		const std::uint32_t gpioe_lckr = gpioe + lckr_offset;
		const std::uint32_t gpioe_afrl = gpioe + afrl_offset;
		const std::uint32_t gpioe_afrh = gpioe + afrh_offset;		

		const std::uint32_t gpiof_moder = gpiof + moder_offset;
		const std::uint32_t gpiof_idr = gpiof + idr_offset;
		const std::uint32_t gpiof_otyper = gpiof + otyper_offset;
		const std::uint32_t gpiof_ospeedr = gpiof + ospeedr_offset;
		const std::uint32_t gpiof_pupdr = gpiof + pupdr_offset;
		const std::uint32_t gpiof_odr = gpiof + odr_offset;
		const std::uint32_t gpiof_bsrr = gpiof + bsrr_offset;
		const std::uint32_t gpiof_lckr = gpiof + lckr_offset;
		const std::uint32_t gpiof_afrl = gpiof + afrl_offset;
		const std::uint32_t gpiof_afrh = gpiof + afrh_offset;
				
				
		const std::uint32_t gpiog_moder = gpiog + moder_offset;
		const std::uint32_t gpiog_idr = gpiog + idr_offset;
		const std::uint32_t gpiog_otyper = gpiog + otyper_offset;
		const std::uint32_t gpiog_ospeedr = gpiog + ospeedr_offset;
		const std::uint32_t gpiog_pupdr = gpiog + pupdr_offset;
		const std::uint32_t gpiog_odr = gpiog + odr_offset;
		const std::uint32_t gpiog_bsrr = gpiog + bsrr_offset;
		const std::uint32_t gpiog_lckr = gpiog + lckr_offset;
		const std::uint32_t gpiog_afrl = gpiog + afrl_offset;
		const std::uint32_t gpiog_afrh = gpiog + afrh_offset;
				
		const std::uint32_t gpioh_moder = gpioh + moder_offset;
		const std::uint32_t gpioh_idr = gpioh + idr_offset;
		const std::uint32_t gpioh_otyper = gpioh + otyper_offset;
		const std::uint32_t gpioh_ospeedr = gpioh + ospeedr_offset;
		const std::uint32_t gpioh_pupdr = gpioh + pupdr_offset;
		const std::uint32_t gpioh_odr = gpioh + odr_offset;
		const std::uint32_t gpioh_bsrr = gpioh + bsrr_offset;
		const std::uint32_t gpioh_lckr = gpioh + lckr_offset;
		const std::uint32_t gpioh_afrl = gpioh + afrl_offset;
		const std::uint32_t gpioh_afrh = gpioh + afrh_offset;
		
		//USART Registers
		const std::uint32_t sr_offset  = 0x00;
		const std::uint32_t dr_offset  = 0x04;
		const std::uint32_t brr_offset = 0x08;
		const std::uint32_t cr1_offset = 0x0C;
		const std::uint32_t cr2_offset = 0x10;
		const std::uint32_t cr3_offset = 0x14;
		
		const std::uint32_t uart2_sr = uart2_base + sr_offset;
		const std::uint32_t uart2_dr = uart2_base + dr_offset;
		const std::uint32_t uart2_brr = uart2_base + brr_offset;
		const std::uint32_t uart2_cr1 = uart2_base + cr1_offset;
		const std::uint32_t uart2_cr2 = uart2_base + cr2_offset;
		const std::uint32_t uart2_cr3 = uart2_base + cr3_offset;
	
		typedef struct
		{
			volatile std::uint32_t SR;			/*!<USART Status register, 				Address offset: 0x00 */
			volatile std::uint32_t DR;			/*!<USART Data register, 				  Address offset: 0x04 */
			volatile std::uint32_t BRR;			/*!<USART Baud rate register,			Address offset: 0x08 */
			volatile std::uint32_t CR1;			/*!<USART Control register 1, 		Address offset: 0x0C */
			volatile std::uint32_t CR2;			/*!<USART Control register 2,			Address offset: 0x10 */
			volatile std::uint32_t CR3;			/*!<USART Control register 3,			Address offset: 0x14 */
		}USART_TypeDef;
		
		USART_TypeDef * UART2			=			((USART_TypeDef *) mcal::reg::uart2_base);
	}

}

#endif