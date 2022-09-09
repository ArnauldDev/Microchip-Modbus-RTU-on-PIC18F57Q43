/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
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
#include "mcc_generated_files/system/system.h"

#define IVT1_BASE_ADDRESS 8

#define FW_TITLE "Implementation of UART FIFO Microchip API Driver"
#define FW_VERSION "v0.1.0"

// A set of numerical definitions for use with the button APIs indicating the state of a button.
#define BUTTON_PRESSED  0 // Button state is pressed
#define BUTTON_RELEASED 1 // Button state is released

volatile uint8_t switch_counter = 0;

// TODO: RB0/INT0 détection de front descendant sur signal SW0 (appuis bouton poussoir)
// possibilité de sortir du mode SLEEP
// ou sur détection d'une donnée entrante sur la ligne RX de l'UART

void ISR_ButtonPressed(void)
{
    // Increment counter variable
    ++switch_counter;
}

// C:\Program Files\Microchip\xc8\v2.40\docs
//INTERRUPT SERVICE ROUTINE (ISR)
//http://ww1.microchip.com/downloads/en/AppNotes/TB3162-Vectored-Interrupt-Controller-on-8-bit-PIC-MCU-90003162B.pdf

//FIXME: Timer0 Configuration:
//? Timer0 mode = 8-bit
//? Clock Source = FOSC/4 (250 kHz)
//? Synchronous operation
//? Prescaler = 1:1
//? Postscaler = 1:1
//In this case, the TMR0_out toggles every one rollovers of TMR0L.
//i.e., (255)*1*(1/250 kHz) = 1,02 ms
//       255*1*1/250= 1,02

void __interrupt(irq(IRQ_TMR0), base(IVT1_BASE_ADDRESS), low_priority) TMR0_ISR()
{
    //EXT_TMR0_InterruptFlagClear();
    PIR3bits.TMR0IF = 0; // Clear the interrupt flag
    LED0_Toggle();
}

/**
 * @ingroup SERIAL
 * @brief Receiver Task
 * @param None.
 * @return None.
 */
void SERIAL_receivedTask(void)
{
    // Get RX DATA if available
    //    if (SERIAL_getRxData())
    //    {
    //
    //    }
}

// TODO: Sending data using serial task

/*
    Main application
 */

int main(void)
{
    uart1_status_t uart_error_status;

    // Initialize the device
    SYSTEM_Initialize();
    INT0_SetInterruptHandler(ISR_ButtonPressed); // IRQ_INT0 High Priority

    TMR0IF = 0; // Clear interrupt flags
    TMR0IP = 0; // IRQ_TMR0 Low Priority
    TMR0IE = 1; // Enable interrupts

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global High Interrupts 
    INTERRUPT_GlobalInterruptHighEnable();

    // Disable the Global High Interrupts 
    //INTERRUPT_GlobalInterruptHighDisable(); 

    // Enable the Global Low Interrupts 
    INTERRUPT_GlobalInterruptLowEnable();

    // Disable the Global Low Interrupts 
    //INTERRUPT_GlobalInterruptLowDisable(); 

    // Séquence de clignotement de la LED0
    int i;
    for (i = 0; i < 10; i++)
    {
        // LED0 flashing sequence
        LED0_Toggle();
        __delay_ms(250);
    }
    LED0_SetHigh(); // extinction de la LED0

    printf("Demo PIC18F57Q43 Curiosity Nano Evaluation Kit\r\n");

    // Date of compliation
    printf("__DATE__: " __DATE__ "\r\n");

    // Time of compilation
    printf("__TIME__: " __TIME__ "\r\n");

    // Firmware identification
    printf("FW Title: " FW_TITLE "\r\n");
    // Firmware identification
    printf("Firmware: " FW_VERSION "\r\n");

    uart_error_status.status = UART1_ErrorGet();
    UART1_Write(uart_error_status.status);

    while (true)
    {
        static uint8_t previous_counter_value = 0;
        uint8_t num_led_rx;

        // Logic to echo received data
        if (UART1_IsRxReady())
        {
            num_led_rx = UART1_Read();

            switch (num_led_rx)
            {
                case '0':
                    printf("All LED Off\r\n");
                    LED_LD1_SetLow();
                    LED_LD2_SetLow();
                    LED_LD3_SetLow();
                    LED_LD4_SetLow();
                    LED_LD5_SetLow();
                    LED_LD6_SetLow();
                    LED_LD7_SetLow();
                    LED_LD8_SetLow();
                    LED_LD9_SetLow();
                    LED_LD10_SetLow();
                    LED_LD11_SetLow();
                    LED_LD12_SetLow();
                    break;

                case '1':
                    printf("LED_LD1 On\r\n");
                    LED_LD1_SetHigh();
                    break;

                case '2':
                    printf("LED_LD2 On\r\n");
                    LED_LD2_SetHigh();
                    break;

                case '3':
                    printf("LED_LD3 On\r\n");
                    LED_LD3_SetHigh();
                    break;

                case '4':
                    printf("LED_LD4 On\r\n");
                    LED_LD4_SetHigh();
                    break;

                case '5':
                    printf("LED_LD5 On\r\n");
                    LED_LD5_SetHigh();
                    break;

                case '6':
                    printf("LED_LD6 On\r\n");
                    LED_LD6_SetHigh();
                    break;

                case '7':
                    printf("LED_LD7 On\r\n");
                    LED_LD7_SetHigh();
                    break;

                case '8':
                    printf("LED_LD8 On\r\n");
                    LED_LD8_SetHigh();
                    break;

                case '9':
                    printf("LED_LD9 On\r\n");
                    LED_LD9_SetHigh();
                    break;

                case 'A':
                case 'a':
                    printf("LED_LD10 On\r\n");
                    LED_LD10_SetHigh();
                    break;

                case 'B':
                case 'b':
                    printf("LED_LD11 On\r\n");
                    LED_LD11_SetHigh();
                    break;

                case 'C':
                case 'c':
                    printf("LED_LD12 On\r\n");
                    LED_LD12_SetHigh();
                    break;

                case 'F':
                case 'f':
                    printf("All LED On\r\n");
                    LED_LD1_SetHigh();
                    LED_LD2_SetHigh();
                    LED_LD3_SetHigh();
                    LED_LD4_SetHigh();
                    LED_LD5_SetHigh();
                    LED_LD6_SetHigh();
                    LED_LD7_SetHigh();
                    LED_LD8_SetHigh();
                    LED_LD9_SetHigh();
                    LED_LD10_SetHigh();
                    LED_LD11_SetHigh();
                    LED_LD12_SetHigh();
                    break;

                case 'T':
                case 't':
                    if (T0CON0bits.EN)
                    {
                        printf("Timer 0 Off\r\n");
                        T0CON0bits.EN = 0; // The module TMR0 is disabled
                        LED0_SetHigh(); // extinction de la LED0
                    }
                    else
                    {
                        printf("Timer 0 On\r\n");
                        T0CON0bits.EN = 1; // The module TMR0 is enabled and operating
                    }
                    break;

                default:
                    printf("Error num LED unknown!\r\n");
            }
        }

        // Check the state of the SW0 switch
        // Read the state of the switch here.
        //if (BUTTON_PRESSED == SW0_GetValue())
        if (switch_counter != previous_counter_value)
        {
            previous_counter_value = switch_counter;
            LED0_SetLow(); // allumage de la LED0
            printf("BUTTON PRESSED\r\n"); // send message to serial port
            T0CON0bits.EN = 1; // The module TMR0 is enabled and operating
            // Attendre le relâchement du bouton poussoir
            while (!SW0_GetValue()); // wait for the push button to release
            // BUTTON RELEASED
            printf("Counter incremented. Current = %u \n", switch_counter); // %i
            T0CON0bits.EN = 0; // The module TMR0 is disabled
            LED0_SetHigh(); // extinction de la LED0
        }
    }
}

/**
 End of File
 */
