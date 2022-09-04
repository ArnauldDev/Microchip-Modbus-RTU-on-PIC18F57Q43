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

    while (1)
    {
        volatile uint8_t rxData;

        // Logic to echo received data
        if (UART1_IsRxReady())
        {
            rxData = UART1_Read();
            if (UART1_IsTxReady())
            {
                UART1_Write(rxData);
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
