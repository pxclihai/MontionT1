/*******************************************************************************
* File Name: LCD_DATA.h  
* Version 1.80
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LCD_DATA_H) /* Pins LCD_DATA_H */
#define CY_PINS_LCD_DATA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LCD_DATA_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_80 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LCD_DATA__PORT == 15 && ((LCD_DATA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    LCD_DATA_Write(uint8 value) ;
void    LCD_DATA_SetDriveMode(uint8 mode) ;
uint8   LCD_DATA_ReadDataReg(void) ;
uint8   LCD_DATA_Read(void) ;
uint8   LCD_DATA_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define LCD_DATA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define LCD_DATA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define LCD_DATA_DM_RES_UP          PIN_DM_RES_UP
#define LCD_DATA_DM_RES_DWN         PIN_DM_RES_DWN
#define LCD_DATA_DM_OD_LO           PIN_DM_OD_LO
#define LCD_DATA_DM_OD_HI           PIN_DM_OD_HI
#define LCD_DATA_DM_STRONG          PIN_DM_STRONG
#define LCD_DATA_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define LCD_DATA_MASK               LCD_DATA__MASK
#define LCD_DATA_SHIFT              LCD_DATA__SHIFT
#define LCD_DATA_WIDTH              8u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LCD_DATA_PS                     (* (reg8 *) LCD_DATA__PS)
/* Data Register */
#define LCD_DATA_DR                     (* (reg8 *) LCD_DATA__DR)
/* Port Number */
#define LCD_DATA_PRT_NUM                (* (reg8 *) LCD_DATA__PRT) 
/* Connect to Analog Globals */                                                  
#define LCD_DATA_AG                     (* (reg8 *) LCD_DATA__AG)                       
/* Analog MUX bux enable */
#define LCD_DATA_AMUX                   (* (reg8 *) LCD_DATA__AMUX) 
/* Bidirectional Enable */                                                        
#define LCD_DATA_BIE                    (* (reg8 *) LCD_DATA__BIE)
/* Bit-mask for Aliased Register Access */
#define LCD_DATA_BIT_MASK               (* (reg8 *) LCD_DATA__BIT_MASK)
/* Bypass Enable */
#define LCD_DATA_BYP                    (* (reg8 *) LCD_DATA__BYP)
/* Port wide control signals */                                                   
#define LCD_DATA_CTL                    (* (reg8 *) LCD_DATA__CTL)
/* Drive Modes */
#define LCD_DATA_DM0                    (* (reg8 *) LCD_DATA__DM0) 
#define LCD_DATA_DM1                    (* (reg8 *) LCD_DATA__DM1)
#define LCD_DATA_DM2                    (* (reg8 *) LCD_DATA__DM2) 
/* Input Buffer Disable Override */
#define LCD_DATA_INP_DIS                (* (reg8 *) LCD_DATA__INP_DIS)
/* LCD Common or Segment Drive */
#define LCD_DATA_LCD_COM_SEG            (* (reg8 *) LCD_DATA__LCD_COM_SEG)
/* Enable Segment LCD */
#define LCD_DATA_LCD_EN                 (* (reg8 *) LCD_DATA__LCD_EN)
/* Slew Rate Control */
#define LCD_DATA_SLW                    (* (reg8 *) LCD_DATA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LCD_DATA_PRTDSI__CAPS_SEL       (* (reg8 *) LCD_DATA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LCD_DATA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LCD_DATA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LCD_DATA_PRTDSI__OE_SEL0        (* (reg8 *) LCD_DATA__PRTDSI__OE_SEL0) 
#define LCD_DATA_PRTDSI__OE_SEL1        (* (reg8 *) LCD_DATA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LCD_DATA_PRTDSI__OUT_SEL0       (* (reg8 *) LCD_DATA__PRTDSI__OUT_SEL0) 
#define LCD_DATA_PRTDSI__OUT_SEL1       (* (reg8 *) LCD_DATA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LCD_DATA_PRTDSI__SYNC_OUT       (* (reg8 *) LCD_DATA__PRTDSI__SYNC_OUT) 


#if defined(LCD_DATA__INTSTAT)  /* Interrupt Registers */

    #define LCD_DATA_INTSTAT                (* (reg8 *) LCD_DATA__INTSTAT)
    #define LCD_DATA_SNAP                   (* (reg8 *) LCD_DATA__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LCD_DATA_H */


/* [] END OF FILE */
