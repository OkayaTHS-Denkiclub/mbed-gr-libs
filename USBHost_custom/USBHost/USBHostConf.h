/* mbed USBHost Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef USBHOST_CONF_H
#define USBHOST_CONF_H

#if defined(TARGET_RZ_A1XX) || defined(TARGET_RZ_A2M_EVB) || defined(TARGET_RZ_A2M_EVB_HF) || defined(TARGET_RZ_A2M_SBEV)

/*
* Maximum number of devices that can be connected
* to the usb host
*/
#define MAX_DEVICE_CONNECTED        5

/*
* Maximum of Hub connected to the usb host
*/
#define MAX_HUB_NB                  2

/*
* Maximum number of ports on a USB hub
*/
#define MAX_HUB_PORT                4

/*
* Enable USBHostMSD
*/
#define USBHOST_MSD                 1

/*
* Enable USBHostKeyboard
*/
#define USBHOST_KEYBOARD            1

/*
* Enable USBHostMouse
*/
#define USBHOST_MOUSE               1

/*
* Enable USBHostSerial or USBHostMultiSerial (if set > 1)
*/
#define USBHOST_SERIAL              1

/*
* Enable USB3Gmodule
*/
#define USBHOST_3GMODULE            1

/*
* Enable USB MIDI
*/
#define USBHOST_MIDI                1 

/*
* Maximum number of interfaces of a usb device
*/
#define MAX_INTF                    4

/*
* Maximum number of endpoints on each interface
*/
#define MAX_ENDPOINT_PER_INTERFACE  3

/*
* Maximum number of endpoint descriptors that can be allocated
*/
#define MAX_ENDPOINT                (MAX_DEVICE_CONNECTED * MAX_INTF * MAX_ENDPOINT_PER_INTERFACE)

#else

#define MAX_DEVICE_CONNECTED        5
#define MAX_HUB_NB                  2
#define MAX_HUB_PORT                4
#define USBHOST_MSD                 0
#define USBHOST_KEYBOARD            0
#define USBHOST_MOUSE               0
#define USBHOST_SERIAL              0
#define USBHOST_3GMODULE            0
#define USBHOST_MIDI                0 
#define MAX_INTF                    4
#define MAX_ENDPOINT_PER_INTERFACE  3
#define MAX_ENDPOINT                (MAX_DEVICE_CONNECTED * MAX_INTF * MAX_ENDPOINT_PER_INTERFACE)
#endif
/*
* Maximum number of transfer descriptors that can be allocated
*/
#define MAX_TD                      (MAX_ENDPOINT*2)

/*
* usb_thread stack size
*/
#define USB_THREAD_STACK            (256*4 + 2*256*4)

#endif
