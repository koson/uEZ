/*-------------------------------------------------------------------------*
 * File:  LPC1756_USBDeviceController.h
 *-------------------------------------------------------------------------*/
#ifndef LPC1756_USBDEVICECONTROLLER_H_
#define LPC1756_USBDEVICECONTROLLER_H_

/*--------------------------------------------------------------------------
 * uEZ(tm) - Copyright (C) 2007-2011 Future Designs, Inc.
 *--------------------------------------------------------------------------
 * This file is part of the uEZ(tm) distribution.
 *
 * uEZ(tm) is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * uEZ(tm) is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with uEZ(tm); if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 * A special exception to the GPL can be applied should you wish to
 * distribute a combined work that includes uEZ(tm), without being obliged
 * to provide the source code for any proprietary components.  See the
 * licensing section of http://www.teamfdi.com/uez for full details of how
 * and when the exception can be applied.
 *
 *    *===============================================================*
 *    |  Future Designs, Inc. can port uEZ(tm) to your own hardware!  |
 *    |             We can get you up and running fast!               |
 *    |      See http://www.teamfdi.com/uez for more details.         |
 *    *===============================================================*
 *
 *-------------------------------------------------------------------------*/
/**
 *  @file   LPC1756_USBDeviceController.h
 *  @brief  uEZ 1756 USB Device Controller
 *
 *  uEZ 1756 USB Device Controller
 */
/*-------------------------------------------------------------------------*
 * Includes:
 *-------------------------------------------------------------------------*/
#include <HAL/USBDeviceController.h>
#include <Types/GPIO.h>

/*-------------------------------------------------------------------------*
 * Constants:
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Types:
 *-------------------------------------------------------------------------*/
typedef struct {
        T_uezGPIOPortPin iVBUS;     // USB_VBUS:            VBUS pin
        T_uezGPIOPortPin iDP;       // USB_D+:      (IO)    USB Connector
        T_uezGPIOPortPin iDM;       // USB_D-:      (IO)    USB Connector
        T_uezGPIOPortPin iCONNECT;  // USB_CONNECT: (O)     Control
        T_uezGPIOPortPin iUP_LED;   // USB_UP_LED:  (O)     Control
} T_LPC1756_USBDevice_Settings;


/*-------------------------------------------------------------------------*
 * Prototypes:
 *-------------------------------------------------------------------------*/
extern const HAL_USBDeviceController LPC1756_USBDev_Interface;
void LPC1756_USBDevice_Require(
        const T_LPC1756_USBDevice_Settings *aSettings);

#endif // LPC1756_USBDEVICECONTROLLER_H_
/*-------------------------------------------------------------------------*
 * End of File:  LPC1756_USBDeviceController.h
 *-------------------------------------------------------------------------*/
