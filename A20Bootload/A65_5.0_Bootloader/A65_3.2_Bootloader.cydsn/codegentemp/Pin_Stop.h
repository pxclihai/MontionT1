/*******************************************************************************
* File Name: Pin_Stop.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_Stop_H) /* Pins Pin_Stop_H */
#define CY_PINS_Pin_Stop_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_Stop_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Pin_Stop__PORT == 15 && ((Pin_Stop__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_Stop_Write(uint8 value) ;
void    Pin_Stop_SetDriveMode(uint8 mode) ;
uint8   Pin_Stop_ReadDataReg(void) ;
uint8   Pin_Stop_Read(void) ;
uint8   Pin_Stop_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_Stop_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Pin_Stop_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Pin_Stop_DM_RES_UP          PIN_DM_RES_UP
#define Pin_Stop_DM_RES_DWN         PIN_DM_RES_DWN
#define Pin_Stop_DM_OD_LO           PIN_DM_OD_LO
#define Pin_Stop_DM_OD_HI           PIN_DM_OD_HI
#define Pin_Stop_DM_STRONG          PIN_DM_STRONG
#define Pin_Stop_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Pin_Stop_MASK               Pin_Stop__MASK
#define Pin_Stop_SHIFT              Pin_Stop__SHIFT
#define Pin_Stop_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_Stop_PS                     (* (reg8 *) Pin_Stop__PS)
/* Data Register */
#define Pin_Stop_DR                     (* (reg8 *) Pin_Stop__DR)
/* Port Number */
#define Pin_Stop_PRT_NUM                (* (reg8 *) Pin_Stop__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_Stop_AG                     (* (reg8 *) Pin_Stop__AG)                       
/* Analog MUX bux enable */
#define Pin_Stop_AMUX                   (* (reg8 *) Pin_Stop__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_Stop_BIE                    (* (reg8 *) Pin_Stop__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_Stop_BIT_MASK               (* (reg8 *) Pin_Stop__BIT_MASK)
/* Bypass Enable */
#define Pin_Stop_BYP                    (* (reg8 *) Pin_Stop__BYP)
/* Port wide control signals */                                                   
#define Pin_Stop_CTL                    (* (reg8 *) Pin_Stop__CTL)
/* Drive Modes */
#define Pin_Stop_DM0                    (* (reg8 *) Pin_Stop__DM0) 
#define Pin_Stop_DM1                    (* (reg8 *) Pin_Stop__DM1)
#define Pin_Stop_DM2                    (* (reg8 *) Pin_Stop__DM2) 
/* Input Buffer Disable Override */
#define Pin_Stop_INP_DIS                (* (reg8 *) Pin_Stop__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_Stop_LCD_COM_SEG            (* (reg8 *) Pin_Stop__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_Stop_LCD_EN                 (* (reg8 *) Pin_Stop__LCD_EN)
/* Slew Rate Control */
#define Pin_Stop_SLW                    (* (reg8 *) Pin_Stop__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_Stop_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_Stop__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_Stop_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_Stop__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_Stop_PRTDSI__OE_SEL0        (* (reg8 *) Pin_Stop__PRTDSI__OE_SEL0) 
#define Pin_Stop_PRTDSI__OE_SEL1        (* (reg8 *) Pin_Stop__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_Stop_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_Stop__PRTDSI__OUT_SEL0) 
#define Pin_Stop_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_Stop__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_Stop_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_Stop__PRTDSI__SYNC_OUT) 


#if defined(Pin_Stop__INTSTAT)  /* Interrupt Registers */

    #define Pin_Stop_INTSTAT                (* (reg8 *) Pin_Stop__INTSTAT)
    #define Pin_Stop_SNAP                   (* (reg8 *) Pin_Stop__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Pin_Stop_H */


/* [] END OF FILE */
