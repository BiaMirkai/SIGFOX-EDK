#ifndef _CONSOLE_USB_H
#define _CONSOLE_USB_H


/*************************************************************************************************/
/*    INCLUDES                                                                                   */
/*************************************************************************************************/


/*************************************************************************************************/
/*    DEFINES                                                                                    */
/*************************************************************************************************/


/*************************************************************************************************/
/*    TYPEDEFS                                                                                   */
/*************************************************************************************************/


/*************************************************************************************************/
/*    EXTERNAL PROTOTYPES                                                                        */
/*************************************************************************************************/

// Use this function to initialize the USB Virtual COM Port communication
// Do not enable this in low-power applications, use only for debugging
void fnCONSOLE_USB_Init ( void );


#endif  /* _CONSOLE_USB_H */


/*************************************************************************************************/
/*    END OF FILE                                                                                */
/*************************************************************************************************/
