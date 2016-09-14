/*******************************************************************************
* File Name: FRAM_IO_1_SDA.c  
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
#include "FRAM_IO_1_SDA.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 FRAM_IO_1_SDA__PORT == 15 && ((FRAM_IO_1_SDA__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: FRAM_IO_1_SDA_Write
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
void FRAM_IO_1_SDA_Write(uint8 value) 
{
    uint8 staticBits = (FRAM_IO_1_SDA_DR & (uint8)(~FRAM_IO_1_SDA_MASK));
    FRAM_IO_1_SDA_DR = staticBits | ((uint8)(value << FRAM_IO_1_SDA_SHIFT) & FRAM_IO_1_SDA_MASK);
}


/*******************************************************************************
* Function Name: FRAM_IO_1_SDA_SetDriveMode
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
void FRAM_IO_1_SDA_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(FRAM_IO_1_SDA_0, mode);
}


/*******************************************************************************
* Function Name: FRAM_IO_1_SDA_Read
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
*  Macro FRAM_IO_1_SDA_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 FRAM_IO_1_SDA_Read(void) 
{
    return (FRAM_IO_1_SDA_PS & FRAM_IO_1_SDA_MASK) >> FRAM_IO_1_SDA_SHIFT;
}


/*******************************************************************************
* Function Name: FRAM_IO_1_SDA_ReadDataReg
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
uint8 FRAM_IO_1_SDA_ReadDataReg(void) 
{
    return (FRAM_IO_1_SDA_DR & FRAM_IO_1_SDA_MASK) >> FRAM_IO_1_SDA_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(FRAM_IO_1_SDA_INTSTAT) 

    /*******************************************************************************
    * Function Name: FRAM_IO_1_SDA_ClearInterrupt
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
    uint8 FRAM_IO_1_SDA_ClearInterrupt(void) 
    {
        return (FRAM_IO_1_SDA_INTSTAT & FRAM_IO_1_SDA_MASK) >> FRAM_IO_1_SDA_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
