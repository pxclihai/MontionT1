/*******************************************************************************
* File Name: OUT_XS.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "OUT_XS.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 OUT_XS__PORT == 15 && ((OUT_XS__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: OUT_XS_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void OUT_XS_Write(uint8 value) 
{
    uint8 staticBits = (OUT_XS_DR & (uint8)(~OUT_XS_MASK));
    OUT_XS_DR = staticBits | ((uint8)(value << OUT_XS_SHIFT) & OUT_XS_MASK);
}


/*******************************************************************************
* Function Name: OUT_XS_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  None
*
*******************************************************************************/
void OUT_XS_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(OUT_XS_0, mode);
}


/*******************************************************************************
* Function Name: OUT_XS_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro OUT_XS_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 OUT_XS_Read(void) 
{
    return (OUT_XS_PS & OUT_XS_MASK) >> OUT_XS_SHIFT;
}


/*******************************************************************************
* Function Name: OUT_XS_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 OUT_XS_ReadDataReg(void) 
{
    return (OUT_XS_DR & OUT_XS_MASK) >> OUT_XS_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(OUT_XS_INTSTAT) 

    /*******************************************************************************
    * Function Name: OUT_XS_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 OUT_XS_ClearInterrupt(void) 
    {
        return (OUT_XS_INTSTAT & OUT_XS_MASK) >> OUT_XS_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
