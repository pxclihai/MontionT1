/*******************************************************************************
* File Name: OUT_11.h  
* Version 1.90
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

#if !defined(CY_PINS_OUT_11_H) /* Pins OUT_11_H */
#define CY_PINS_OUT_11_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "OUT_11_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 OUT_11__PORT == 15 && ((OUT_11__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    OUT_11_Write(uint8 value) ;
void    OUT_11_SetDriveMode(uint8 mode) ;
uint8   OUT_11_ReadDataReg(void) ;
uint8   OUT_11_Read(void) ;
uint8   OUT_11_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define OUT_11_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define OUT_11_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define OUT_11_DM_RES_UP          PIN_DM_RES_UP
#define OUT_11_DM_RES_DWN         PIN_DM_RES_DWN
#define OUT_11_DM_OD_LO           PIN_DM_OD_LO
#define OUT_11_DM_OD_HI           PIN_DM_OD_HI
#define OUT_11_DM_STRONG          PIN_DM_STRONG
#define OUT_11_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define OUT_11_MASK               OUT_11__MASK
#define OUT_11_SHIFT              OUT_11__SHIFT
#define OUT_11_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define OUT_11_PS                     (* (reg8 *) OUT_11__PS)
/* Data Register */
#define OUT_11_DR                     (* (reg8 *) OUT_11__DR)
/* Port Number */
#define OUT_11_PRT_NUM                (* (reg8 *) OUT_11__PRT) 
/* Connect to Analog Globals */                                                  
#define OUT_11_AG                     (* (reg8 *) OUT_11__AG)                       
/* Analog MUX bux enable */
#define OUT_11_AMUX                   (* (reg8 *) OUT_11__AMUX) 
/* Bidirectional Enable */                                                        
#define OUT_11_BIE                    (* (reg8 *) OUT_11__BIE)
/* Bit-mask for Aliased Register Access */
#define OUT_11_BIT_MASK               (* (reg8 *) OUT_11__BIT_MASK)
/* Bypass Enable */
#define OUT_11_BYP                    (* (reg8 *) OUT_11__BYP)
/* Port wide control signals */                                                   
#define OUT_11_CTL                    (* (reg8 *) OUT_11__CTL)
/* Drive Modes */
#define OUT_11_DM0                    (* (reg8 *) OUT_11__DM0) 
#define OUT_11_DM1                    (* (reg8 *) OUT_11__DM1)
#define OUT_11_DM2                    (* (reg8 *) OUT_11__DM2) 
/* Input Buffer Disable Override */
#define OUT_11_INP_DIS                (* (reg8 *) OUT_11__INP_DIS)
/* LCD Common or Segment Drive */
#define OUT_11_LCD_COM_SEG            (* (reg8 *) OUT_11__LCD_COM_SEG)
/* Enable Segment LCD */
#define OUT_11_LCD_EN                 (* (reg8 *) OUT_11__LCD_EN)
/* Slew Rate Control */
#define OUT_11_SLW                    (* (reg8 *) OUT_11__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define OUT_11_PRTDSI__CAPS_SEL       (* (reg8 *) OUT_11__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define OUT_11_PRTDSI__DBL_SYNC_IN    (* (reg8 *) OUT_11__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define OUT_11_PRTDSI__OE_SEL0        (* (reg8 *) OUT_11__PRTDSI__OE_SEL0) 
#define OUT_11_PRTDSI__OE_SEL1        (* (reg8 *) OUT_11__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define OUT_11_PRTDSI__OUT_SEL0       (* (reg8 *) OUT_11__PRTDSI__OUT_SEL0) 
#define OUT_11_PRTDSI__OUT_SEL1       (* (reg8 *) OUT_11__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define OUT_11_PRTDSI__SYNC_OUT       (* (reg8 *) OUT_11__PRTDSI__SYNC_OUT) 


#if defined(OUT_11__INTSTAT)  /* Interrupt Registers */

    #define OUT_11_INTSTAT                (* (reg8 *) OUT_11__INTSTAT)
    #define OUT_11_SNAP                   (* (reg8 *) OUT_11__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_OUT_11_H */


/* [] END OF FILE */
