/*******************************************************************************
* File Name: KA_6.h  
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

#if !defined(CY_PINS_KA_6_H) /* Pins KA_6_H */
#define CY_PINS_KA_6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "KA_6_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 KA_6__PORT == 15 && ((KA_6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    KA_6_Write(uint8 value) ;
void    KA_6_SetDriveMode(uint8 mode) ;
uint8   KA_6_ReadDataReg(void) ;
uint8   KA_6_Read(void) ;
uint8   KA_6_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define KA_6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define KA_6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define KA_6_DM_RES_UP          PIN_DM_RES_UP
#define KA_6_DM_RES_DWN         PIN_DM_RES_DWN
#define KA_6_DM_OD_LO           PIN_DM_OD_LO
#define KA_6_DM_OD_HI           PIN_DM_OD_HI
#define KA_6_DM_STRONG          PIN_DM_STRONG
#define KA_6_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define KA_6_MASK               KA_6__MASK
#define KA_6_SHIFT              KA_6__SHIFT
#define KA_6_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define KA_6_PS                     (* (reg8 *) KA_6__PS)
/* Data Register */
#define KA_6_DR                     (* (reg8 *) KA_6__DR)
/* Port Number */
#define KA_6_PRT_NUM                (* (reg8 *) KA_6__PRT) 
/* Connect to Analog Globals */                                                  
#define KA_6_AG                     (* (reg8 *) KA_6__AG)                       
/* Analog MUX bux enable */
#define KA_6_AMUX                   (* (reg8 *) KA_6__AMUX) 
/* Bidirectional Enable */                                                        
#define KA_6_BIE                    (* (reg8 *) KA_6__BIE)
/* Bit-mask for Aliased Register Access */
#define KA_6_BIT_MASK               (* (reg8 *) KA_6__BIT_MASK)
/* Bypass Enable */
#define KA_6_BYP                    (* (reg8 *) KA_6__BYP)
/* Port wide control signals */                                                   
#define KA_6_CTL                    (* (reg8 *) KA_6__CTL)
/* Drive Modes */
#define KA_6_DM0                    (* (reg8 *) KA_6__DM0) 
#define KA_6_DM1                    (* (reg8 *) KA_6__DM1)
#define KA_6_DM2                    (* (reg8 *) KA_6__DM2) 
/* Input Buffer Disable Override */
#define KA_6_INP_DIS                (* (reg8 *) KA_6__INP_DIS)
/* LCD Common or Segment Drive */
#define KA_6_LCD_COM_SEG            (* (reg8 *) KA_6__LCD_COM_SEG)
/* Enable Segment LCD */
#define KA_6_LCD_EN                 (* (reg8 *) KA_6__LCD_EN)
/* Slew Rate Control */
#define KA_6_SLW                    (* (reg8 *) KA_6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define KA_6_PRTDSI__CAPS_SEL       (* (reg8 *) KA_6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define KA_6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) KA_6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define KA_6_PRTDSI__OE_SEL0        (* (reg8 *) KA_6__PRTDSI__OE_SEL0) 
#define KA_6_PRTDSI__OE_SEL1        (* (reg8 *) KA_6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define KA_6_PRTDSI__OUT_SEL0       (* (reg8 *) KA_6__PRTDSI__OUT_SEL0) 
#define KA_6_PRTDSI__OUT_SEL1       (* (reg8 *) KA_6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define KA_6_PRTDSI__SYNC_OUT       (* (reg8 *) KA_6__PRTDSI__SYNC_OUT) 


#if defined(KA_6__INTSTAT)  /* Interrupt Registers */

    #define KA_6_INTSTAT                (* (reg8 *) KA_6__INTSTAT)
    #define KA_6_SNAP                   (* (reg8 *) KA_6__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_KA_6_H */


/* [] END OF FILE */
