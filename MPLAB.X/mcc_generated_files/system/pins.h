/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA1 aliases
#define LED_LD1_TRIS                 TRISAbits.TRISA1
#define LED_LD1_LAT                  LATAbits.LATA1
#define LED_LD1_PORT                 PORTAbits.RA1
#define LED_LD1_WPU                  WPUAbits.WPUA1
#define LED_LD1_OD                   ODCONAbits.ODCA1
#define LED_LD1_ANS                  ANSELAbits.ANSELA1
#define LED_LD1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_LD1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_LD1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_LD1_GetValue()           PORTAbits.RA1
#define LED_LD1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_LD1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_LD1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_LD1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_LD1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_LD1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_LD1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define LED_LD1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)
   
// get/set RA3 aliases
#define LED_LD10_TRIS                 TRISAbits.TRISA3
#define LED_LD10_LAT                  LATAbits.LATA3
#define LED_LD10_PORT                 PORTAbits.RA3
#define LED_LD10_WPU                  WPUAbits.WPUA3
#define LED_LD10_OD                   ODCONAbits.ODCA3
#define LED_LD10_ANS                  ANSELAbits.ANSELA3
#define LED_LD10_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED_LD10_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED_LD10_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED_LD10_GetValue()           PORTAbits.RA3
#define LED_LD10_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED_LD10_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED_LD10_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED_LD10_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED_LD10_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED_LD10_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED_LD10_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define LED_LD10_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)
   
// get/set RA4 aliases
#define LED_LD9_TRIS                 TRISAbits.TRISA4
#define LED_LD9_LAT                  LATAbits.LATA4
#define LED_LD9_PORT                 PORTAbits.RA4
#define LED_LD9_WPU                  WPUAbits.WPUA4
#define LED_LD9_OD                   ODCONAbits.ODCA4
#define LED_LD9_ANS                  ANSELAbits.ANSELA4
#define LED_LD9_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_LD9_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_LD9_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_LD9_GetValue()           PORTAbits.RA4
#define LED_LD9_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_LD9_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_LD9_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_LD9_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_LD9_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_LD9_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_LD9_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define LED_LD9_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)
   
// get/set RB1 aliases
#define LED_LD11_TRIS                 TRISBbits.TRISB1
#define LED_LD11_LAT                  LATBbits.LATB1
#define LED_LD11_PORT                 PORTBbits.RB1
#define LED_LD11_WPU                  WPUBbits.WPUB1
#define LED_LD11_OD                   ODCONBbits.ODCB1
#define LED_LD11_ANS                  ANSELBbits.ANSELB1
#define LED_LD11_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED_LD11_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED_LD11_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED_LD11_GetValue()           PORTBbits.RB1
#define LED_LD11_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED_LD11_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED_LD11_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LED_LD11_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LED_LD11_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define LED_LD11_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define LED_LD11_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define LED_LD11_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)
   
// get/set RB2 aliases
#define LED_LD12_TRIS                 TRISBbits.TRISB2
#define LED_LD12_LAT                  LATBbits.LATB2
#define LED_LD12_PORT                 PORTBbits.RB2
#define LED_LD12_WPU                  WPUBbits.WPUB2
#define LED_LD12_OD                   ODCONBbits.ODCB2
#define LED_LD12_ANS                  ANSELBbits.ANSELB2
#define LED_LD12_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED_LD12_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED_LD12_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED_LD12_GetValue()           PORTBbits.RB2
#define LED_LD12_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED_LD12_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED_LD12_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED_LD12_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED_LD12_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define LED_LD12_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define LED_LD12_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define LED_LD12_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)
   
// get/set RB3 aliases
#define LED_LD7_TRIS                 TRISBbits.TRISB3
#define LED_LD7_LAT                  LATBbits.LATB3
#define LED_LD7_PORT                 PORTBbits.RB3
#define LED_LD7_WPU                  WPUBbits.WPUB3
#define LED_LD7_OD                   ODCONBbits.ODCB3
#define LED_LD7_ANS                  ANSELBbits.ANSELB3
#define LED_LD7_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_LD7_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_LD7_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_LD7_GetValue()           PORTBbits.RB3
#define LED_LD7_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_LD7_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_LD7_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_LD7_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_LD7_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED_LD7_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED_LD7_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define LED_LD7_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)
   
// get/set RB4 aliases
#define SW0_TRIS                 TRISBbits.TRISB4
#define SW0_LAT                  LATBbits.LATB4
#define SW0_PORT                 PORTBbits.RB4
#define SW0_WPU                  WPUBbits.WPUB4
#define SW0_OD                   ODCONBbits.ODCB4
#define SW0_ANS                  ANSELBbits.ANSELB4
#define SW0_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SW0_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SW0_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SW0_GetValue()           PORTBbits.RB4
#define SW0_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SW0_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SW0_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SW0_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SW0_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SW0_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SW0_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define SW0_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)
   
// get/set RC4 aliases
#define LED_LD6_TRIS                 TRISCbits.TRISC4
#define LED_LD6_LAT                  LATCbits.LATC4
#define LED_LD6_PORT                 PORTCbits.RC4
#define LED_LD6_WPU                  WPUCbits.WPUC4
#define LED_LD6_OD                   ODCONCbits.ODCC4
#define LED_LD6_ANS                  ANSELCbits.ANSELC4
#define LED_LD6_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_LD6_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_LD6_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_LD6_GetValue()           PORTCbits.RC4
#define LED_LD6_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_LD6_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_LD6_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_LD6_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_LD6_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED_LD6_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED_LD6_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define LED_LD6_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)
   
// get/set RC5 aliases
#define LED_LD5_TRIS                 TRISCbits.TRISC5
#define LED_LD5_LAT                  LATCbits.LATC5
#define LED_LD5_PORT                 PORTCbits.RC5
#define LED_LD5_WPU                  WPUCbits.WPUC5
#define LED_LD5_OD                   ODCONCbits.ODCC5
#define LED_LD5_ANS                  ANSELCbits.ANSELC5
#define LED_LD5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_LD5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_LD5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_LD5_GetValue()           PORTCbits.RC5
#define LED_LD5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_LD5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_LD5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_LD5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_LD5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED_LD5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED_LD5_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define LED_LD5_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)
   
// get/set RC6 aliases
#define LED_LD4_TRIS                 TRISCbits.TRISC6
#define LED_LD4_LAT                  LATCbits.LATC6
#define LED_LD4_PORT                 PORTCbits.RC6
#define LED_LD4_WPU                  WPUCbits.WPUC6
#define LED_LD4_OD                   ODCONCbits.ODCC6
#define LED_LD4_ANS                  ANSELCbits.ANSELC6
#define LED_LD4_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LED_LD4_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LED_LD4_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LED_LD4_GetValue()           PORTCbits.RC6
#define LED_LD4_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LED_LD4_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LED_LD4_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LED_LD4_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LED_LD4_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LED_LD4_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LED_LD4_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define LED_LD4_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)
   
// get/set RC7 aliases
#define LED_LD2_TRIS                 TRISCbits.TRISC7
#define LED_LD2_LAT                  LATCbits.LATC7
#define LED_LD2_PORT                 PORTCbits.RC7
#define LED_LD2_WPU                  WPUCbits.WPUC7
#define LED_LD2_OD                   ODCONCbits.ODCC7
#define LED_LD2_ANS                  ANSELCbits.ANSELC7
#define LED_LD2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED_LD2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED_LD2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED_LD2_GetValue()           PORTCbits.RC7
#define LED_LD2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED_LD2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED_LD2_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LED_LD2_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LED_LD2_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define LED_LD2_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define LED_LD2_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define LED_LD2_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)
   
// get/set RD6 aliases
#define LED_LD3_TRIS                 TRISDbits.TRISD6
#define LED_LD3_LAT                  LATDbits.LATD6
#define LED_LD3_PORT                 PORTDbits.RD6
#define LED_LD3_WPU                  WPUDbits.WPUD6
#define LED_LD3_OD                   ODCONDbits.ODCD6
#define LED_LD3_ANS                  ANSELDbits.ANSELD6
#define LED_LD3_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define LED_LD3_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define LED_LD3_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define LED_LD3_GetValue()           PORTDbits.RD6
#define LED_LD3_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define LED_LD3_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define LED_LD3_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define LED_LD3_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define LED_LD3_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define LED_LD3_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define LED_LD3_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define LED_LD3_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)
   
// get/set RE2 aliases
#define LED_LD8_TRIS                 TRISEbits.TRISE2
#define LED_LD8_LAT                  LATEbits.LATE2
#define LED_LD8_PORT                 PORTEbits.RE2
#define LED_LD8_WPU                  WPUEbits.WPUE2
#define LED_LD8_OD                   ODCONEbits.ODCE2
#define LED_LD8_ANS                  ANSELEbits.ANSELE2
#define LED_LD8_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define LED_LD8_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define LED_LD8_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define LED_LD8_GetValue()           PORTEbits.RE2
#define LED_LD8_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define LED_LD8_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define LED_LD8_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define LED_LD8_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define LED_LD8_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define LED_LD8_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define LED_LD8_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define LED_LD8_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)
   
// get/set RF0 aliases
#define IO_RF0_TRIS                 TRISFbits.TRISF0
#define IO_RF0_LAT                  LATFbits.LATF0
#define IO_RF0_PORT                 PORTFbits.RF0
#define IO_RF0_WPU                  WPUFbits.WPUF0
#define IO_RF0_OD                   ODCONFbits.ODCF0
#define IO_RF0_ANS                  ANSELFbits.ANSELF0
#define IO_RF0_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define IO_RF0_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define IO_RF0_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define IO_RF0_GetValue()           PORTFbits.RF0
#define IO_RF0_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define IO_RF0_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define IO_RF0_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define IO_RF0_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define IO_RF0_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define IO_RF0_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define IO_RF0_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define IO_RF0_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)
   
// get/set RF1 aliases
#define IO_RF1_TRIS                 TRISFbits.TRISF1
#define IO_RF1_LAT                  LATFbits.LATF1
#define IO_RF1_PORT                 PORTFbits.RF1
#define IO_RF1_WPU                  WPUFbits.WPUF1
#define IO_RF1_OD                   ODCONFbits.ODCF1
#define IO_RF1_ANS                  ANSELFbits.ANSELF1
#define IO_RF1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define IO_RF1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define IO_RF1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define IO_RF1_GetValue()           PORTFbits.RF1
#define IO_RF1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define IO_RF1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define IO_RF1_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define IO_RF1_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define IO_RF1_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define IO_RF1_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define IO_RF1_SetAnalogMode()      do { ANSELFbits.ANSELF1 = 1; } while(0)
#define IO_RF1_SetDigitalMode()     do { ANSELFbits.ANSELF1 = 0; } while(0)
   
// get/set RF3 aliases
#define LED0_TRIS                 TRISFbits.TRISF3
#define LED0_LAT                  LATFbits.LATF3
#define LED0_PORT                 PORTFbits.RF3
#define LED0_WPU                  WPUFbits.WPUF3
#define LED0_OD                   ODCONFbits.ODCF3
#define LED0_ANS                  ANSELFbits.ANSELF3
#define LED0_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED0_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED0_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED0_GetValue()           PORTFbits.RF3
#define LED0_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED0_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/