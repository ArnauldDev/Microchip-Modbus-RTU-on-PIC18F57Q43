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

#define BUTTON_PRESSED  0
#define BUTTON_RELEASED 1

/*
    Main application
 */

int main(void)
{
    uart1_status_t uart_error_status;

    // Initialize the device
    SYSTEM_Initialize();
    SW0_SetPullup();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Séquence de clignotement de la LED0
    int i;
    for (i = 0; i < 10; i++)
    {
        // LED0 flashing sequence
        LED0_Toggle();
        __delay_ms(250);
    }

    printf("Demo PIC18F57Q43 Curiosity Nano Evaluation Kit\r\n");

    // Date of compliation
    printf("__DATE__: " __DATE__ "\r\n");

    // Time of compilation
    printf("__TIME__: " __TIME__ "\r\n");

    uart_error_status.status = UART1_ErrorGet();
    UART1_Write(uart_error_status.status);

    while (true)
    {
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

                default:
                    printf("Error num LED unknown!\r\n");
            }
        }

        if (BUTTON_PRESSED == SW0_GetValue())
        {
            LED0_SetLow();
            printf("BUTTON PRESSED\r\n"); // send message to serial port
            // Attendre le relâchement du bouton poussoir
            while (!SW0_GetValue()); // wait for the push button to release
            // BUTTON RELEASED
        }
        else
        {
            LED0_SetHigh();
        }
    }
}

/**
 End of File
 */
