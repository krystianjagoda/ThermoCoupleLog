/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.0
        Device            :  PIC16F1512
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set CS_CH1 aliases
#define CS_CH1_TRIS               TRISAbits.TRISA0
#define CS_CH1_LAT                LATAbits.LATA0
#define CS_CH1_PORT               PORTAbits.RA0
#define CS_CH1_ANS                ANSELAbits.ANSA0
#define CS_CH1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define CS_CH1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define CS_CH1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define CS_CH1_GetValue()           PORTAbits.RA0
#define CS_CH1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define CS_CH1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define CS_CH1_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define CS_CH1_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set CS_CH2 aliases
#define CS_CH2_TRIS               TRISAbits.TRISA1
#define CS_CH2_LAT                LATAbits.LATA1
#define CS_CH2_PORT               PORTAbits.RA1
#define CS_CH2_ANS                ANSELAbits.ANSA1
#define CS_CH2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define CS_CH2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define CS_CH2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define CS_CH2_GetValue()           PORTAbits.RA1
#define CS_CH2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define CS_CH2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define CS_CH2_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define CS_CH2_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set CS_CH3 aliases
#define CS_CH3_TRIS               TRISAbits.TRISA2
#define CS_CH3_LAT                LATAbits.LATA2
#define CS_CH3_PORT               PORTAbits.RA2
#define CS_CH3_ANS                ANSELAbits.ANSA2
#define CS_CH3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define CS_CH3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define CS_CH3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define CS_CH3_GetValue()           PORTAbits.RA2
#define CS_CH3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define CS_CH3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define CS_CH3_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define CS_CH3_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set CS_CH4 aliases
#define CS_CH4_TRIS               TRISAbits.TRISA3
#define CS_CH4_LAT                LATAbits.LATA3
#define CS_CH4_PORT               PORTAbits.RA3
#define CS_CH4_ANS                ANSELAbits.ANSA3
#define CS_CH4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define CS_CH4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define CS_CH4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define CS_CH4_GetValue()           PORTAbits.RA3
#define CS_CH4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define CS_CH4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define CS_CH4_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define CS_CH4_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set CS_CH5 aliases
#define CS_CH5_TRIS               TRISAbits.TRISA4
#define CS_CH5_LAT                LATAbits.LATA4
#define CS_CH5_PORT               PORTAbits.RA4
#define CS_CH5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define CS_CH5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define CS_CH5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define CS_CH5_GetValue()           PORTAbits.RA4
#define CS_CH5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define CS_CH5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set CS_CH6 aliases
#define CS_CH6_TRIS               TRISAbits.TRISA5
#define CS_CH6_LAT                LATAbits.LATA5
#define CS_CH6_PORT               PORTAbits.RA5
#define CS_CH6_ANS                ANSELAbits.ANSA5
#define CS_CH6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define CS_CH6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define CS_CH6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define CS_CH6_GetValue()           PORTAbits.RA5
#define CS_CH6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define CS_CH6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define CS_CH6_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define CS_CH6_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set CS_CH8 aliases
#define CS_CH8_TRIS               TRISAbits.TRISA6
#define CS_CH8_LAT                LATAbits.LATA6
#define CS_CH8_PORT               PORTAbits.RA6
#define CS_CH8_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define CS_CH8_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define CS_CH8_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define CS_CH8_GetValue()           PORTAbits.RA6
#define CS_CH8_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define CS_CH8_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set CS_CH7 aliases
#define CS_CH7_TRIS               TRISAbits.TRISA7
#define CS_CH7_LAT                LATAbits.LATA7
#define CS_CH7_PORT               PORTAbits.RA7
#define CS_CH7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define CS_CH7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define CS_CH7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define CS_CH7_GetValue()           PORTAbits.RA7
#define CS_CH7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define CS_CH7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set LED_B aliases
#define LED_B_TRIS               TRISBbits.TRISB3
#define LED_B_LAT                LATBbits.LATB3
#define LED_B_PORT               PORTBbits.RB3
#define LED_B_WPU                WPUBbits.WPUB3
#define LED_B_ANS                ANSELBbits.ANSB3
#define LED_B_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_B_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_B_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_B_GetValue()           PORTBbits.RB3
#define LED_B_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_B_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_B_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_B_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_B_SetAnalogMode()  do { ANSELBbits.ANSB3 = 1; } while(0)
#define LED_B_SetDigitalMode() do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set LED_G aliases
#define LED_G_TRIS               TRISBbits.TRISB4
#define LED_G_LAT                LATBbits.LATB4
#define LED_G_PORT               PORTBbits.RB4
#define LED_G_WPU                WPUBbits.WPUB4
#define LED_G_ANS                ANSELBbits.ANSB4
#define LED_G_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_G_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_G_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_G_GetValue()           PORTBbits.RB4
#define LED_G_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_G_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_G_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_G_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_G_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_G_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LED_R aliases
#define LED_R_TRIS               TRISBbits.TRISB5
#define LED_R_LAT                LATBbits.LATB5
#define LED_R_PORT               PORTBbits.RB5
#define LED_R_WPU                WPUBbits.WPUB5
#define LED_R_ANS                ANSELBbits.ANSB5
#define LED_R_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED_R_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED_R_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED_R_GetValue()           PORTBbits.RB5
#define LED_R_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED_R_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LED_R_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define LED_R_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define LED_R_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define LED_R_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set SW1 aliases
#define SW1_TRIS               TRISCbits.TRISC1
#define SW1_LAT                LATCbits.LATC1
#define SW1_PORT               PORTCbits.RC1
#define SW1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SW1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SW1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SW1_GetValue()           PORTCbits.RC1
#define SW1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set SW2 aliases
#define SW2_TRIS               TRISCbits.TRISC2
#define SW2_LAT                LATCbits.LATC2
#define SW2_PORT               PORTCbits.RC2
#define SW2_ANS                ANSELCbits.ANSC2
#define SW2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SW2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SW2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SW2_GetValue()           PORTCbits.RC2
#define SW2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SW2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SW2_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define SW2_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()    do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()   do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()   do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()         PORTCbits.RC3
#define RC3_SetDigitalInput()   do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()  do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetAnalogMode() do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()    do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()   do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()   do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()         PORTCbits.RC4
#define RC4_SetDigitalInput()   do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()  do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetAnalogMode() do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()    do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()   do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()   do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()         PORTCbits.RC5
#define RC5_SetDigitalInput()   do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()  do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetAnalogMode() do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode() do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/