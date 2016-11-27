/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.0
        Device            :  PIC16F1512
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "mcc_generated_files/mcc.h"

uint8_t ReceiveCount = 0;
uint8_t ReceivedByte = 0;

char CH_1_RAW[4] ="NONE";
char CH_2_RAW[4] ="NONE";
char CH_3_RAW[4] ="NONE";
char CH_4_RAW[4] ="NONE";
char CH_5_RAW[4] ="NONE";
char CH_6_RAW[4] ="NONE";
char CH_7_RAW[4] ="NONE";
char CH_8_RAW[4] ="NONE";


int SendData(char Data[]){
    for(int i=0; i<20; i++)
    {
        EUSART_Write(Data[i]);
    }
    EUSART_Write(0x0D);
    EUSART_Write(0x0A);
}


void SendDataFrame(){
    
    uint16_t FrameSum = 0;
    uint8_t Checksum = 0;
    
    
    EUSART_Write('#');                      FrameSum = FrameSum + '#';
    EUSART_Write('|');                      FrameSum = FrameSum + '|';
    for(int i=0; i<4; i++)
    {
        EUSART_Write(CH_1_RAW[i]);          FrameSum = FrameSum + CH_1_RAW[i];
    }
    EUSART_Write('|');                      FrameSum = FrameSum + '|';
    
    for(int i=0; i<4; i++)
    {
        EUSART_Write(CH_2_RAW[i]);          FrameSum = FrameSum + CH_2_RAW[i];
    }      
    EUSART_Write('|');                      FrameSum = FrameSum + '|';
    for(int i=0; i<4; i++)
    {
        EUSART_Write(CH_3_RAW[i]);          FrameSum = FrameSum + CH_3_RAW[i];
    }
    EUSART_Write('|');                      FrameSum = FrameSum + '|';
    
    for(int i=0; i<4; i++)
    {
        EUSART_Write(CH_4_RAW[i]);          FrameSum = FrameSum + CH_4_RAW[i];
    }      
    EUSART_Write('|');                      FrameSum = FrameSum + '|';
    for(int i=0; i<4; i++)
    {
        EUSART_Write(CH_5_RAW[i]);          FrameSum = FrameSum + CH_5_RAW[i];
    }
    EUSART_Write('|');                      FrameSum = FrameSum + '|';
    
    for(int i=0; i<4; i++)
    {
        EUSART_Write(CH_6_RAW[i]);          FrameSum = FrameSum + CH_6_RAW[i];
    }      
    EUSART_Write('|');                      FrameSum = FrameSum + '|';
    for(int i=0; i<4; i++)
    {
        EUSART_Write(CH_7_RAW[i]);          FrameSum = FrameSum + CH_7_RAW[i];
    }
    EUSART_Write('|');                      FrameSum = FrameSum + '|';
    
    for(int i=0; i<4; i++)
    {
        EUSART_Write(CH_8_RAW[i]);          FrameSum = FrameSum + CH_8_RAW[i];
    }      
    EUSART_Write('|');                      FrameSum = FrameSum + '|';  
    
    Checksum = FrameSum%255;
    EUSART_Write(Checksum);
    EUSART_Write('|');
    
    EUSART_Write(0x0D);
    EUSART_Write(0x0A);
}

void SetChannel(int ChannelNumber){
    switch (ChannelNumber){           
        case 0:
            CS_CH1_SetHigh();
            CS_CH2_SetHigh();
            CS_CH3_SetHigh();
            CS_CH4_SetHigh();
            CS_CH5_SetHigh();
            CS_CH6_SetHigh();
            CS_CH7_SetHigh();
            CS_CH8_SetHigh();  
            break;
        case 1:
            CS_CH1_SetLow();
            CS_CH2_SetHigh();
            CS_CH3_SetHigh();
            CS_CH4_SetHigh();
            CS_CH5_SetHigh();
            CS_CH6_SetHigh();
            CS_CH7_SetHigh();
            CS_CH8_SetHigh();  
            break;
        case 2:
            CS_CH1_SetHigh();
            CS_CH2_SetLow();
            CS_CH3_SetHigh();
            CS_CH4_SetHigh();
            CS_CH5_SetHigh();
            CS_CH6_SetHigh();
            CS_CH7_SetHigh();
            CS_CH8_SetHigh();
            break;
        case 3:
            CS_CH1_SetHigh();
            CS_CH2_SetHigh();
            CS_CH3_SetLow();
            CS_CH4_SetHigh();
            CS_CH5_SetHigh();
            CS_CH6_SetHigh();
            CS_CH7_SetHigh();
            CS_CH8_SetHigh();
            break; 
        case 4:
            CS_CH1_SetHigh();
            CS_CH2_SetHigh();
            CS_CH3_SetHigh();
            CS_CH4_SetLow();
            CS_CH5_SetHigh();
            CS_CH6_SetHigh();
            CS_CH7_SetHigh();
            CS_CH8_SetHigh();
            break; 
        case 5:
            CS_CH1_SetHigh();
            CS_CH2_SetHigh();
            CS_CH3_SetHigh();
            CS_CH4_SetHigh();
            CS_CH5_SetLow();
            CS_CH6_SetHigh();
            CS_CH7_SetHigh();
            CS_CH8_SetHigh();
            break; 
        case 6:
            CS_CH1_SetHigh();
            CS_CH2_SetHigh();
            CS_CH3_SetHigh();
            CS_CH4_SetHigh();
            CS_CH5_SetHigh();
            CS_CH6_SetLow();
            CS_CH7_SetHigh();
            CS_CH8_SetHigh();
            break; 
        case 7:
            CS_CH1_SetHigh();
            CS_CH2_SetHigh();
            CS_CH3_SetHigh();
            CS_CH4_SetHigh();
            CS_CH5_SetHigh();
            CS_CH6_SetHigh();
            CS_CH7_SetLow();
            CS_CH8_SetHigh();
            break; 
        case 8:
            CS_CH1_SetHigh();
            CS_CH2_SetHigh();
            CS_CH3_SetHigh();
            CS_CH4_SetHigh();
            CS_CH5_SetHigh();
            CS_CH6_SetHigh();
            CS_CH7_SetHigh();
            CS_CH8_SetLow();
            break; 
            
        default:
            CS_CH1_SetHigh();
            CS_CH2_SetHigh();
            CS_CH3_SetHigh();
            CS_CH4_SetHigh();
            CS_CH5_SetHigh();
            CS_CH6_SetHigh();
            CS_CH7_SetHigh();
            CS_CH8_SetHigh();
            break;           
    }

    
}

void GetData(uint8_t ChannelNumber){

    char *ArrayPointer;
    
    if(ChannelNumber == 1) ArrayPointer = &CH_1_RAW;
    if(ChannelNumber == 2) ArrayPointer = &CH_2_RAW;
    if(ChannelNumber == 3) ArrayPointer = &CH_3_RAW;
    if(ChannelNumber == 4) ArrayPointer = &CH_4_RAW;
    if(ChannelNumber == 5) ArrayPointer = &CH_5_RAW;
    if(ChannelNumber == 6) ArrayPointer = &CH_6_RAW;
    if(ChannelNumber == 7) ArrayPointer = &CH_7_RAW;
    if(ChannelNumber == 8) ArrayPointer = &CH_8_RAW;
    
    SetChannel(ChannelNumber);
    
    *(ArrayPointer+0) = SPI_Exchange8bit(0);  // D31-D24
    *(ArrayPointer+1) = SPI_Exchange8bit(0);  // D23-D16
    *(ArrayPointer+2) = SPI_Exchange8bit(0);  // D15-D8
    *(ArrayPointer+3) = SPI_Exchange8bit(0);  // D7-D0
    
    SetChannel(0);
       
}



/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    SetChannel(0);
    
    LED_G_SetHigh();
    
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        // Add your application code
               
          
        /* Check the UART status */
        while(!PIR1bits.RCIF)
        {
        }
        
        /* If byte received */            
        ReceivedByte = EUSART_Read();

        else if((ReceivedByte == 'g') && ReceiveCount == 1) ReceiveCount++;
        else if((ReceivedByte == 'e') && ReceiveCount == 2) ReceiveCount++;
        else if((ReceivedByte == 't') && ReceiveCount == 3) ReceiveCount++;        
        else if((ReceivedByte == '_') && ReceiveCount == 4) ReceiveCount++;
        else if((ReceivedByte == 'd') && ReceiveCount == 5) ReceiveCount++;
        else if((ReceivedByte == 'a') && ReceiveCount == 6) ReceiveCount++;   
        else if((ReceivedByte == 't') && ReceiveCount == 7) ReceiveCount++;
        else if((ReceivedByte == 'a') && ReceiveCount == 8) ReceiveCount++;                  
        else ReceiveCount = 0;
        
        /* If #get_data command received */ 
        if(ReceiveCount >= 9)
        {           
            LED_B_SetHigh();
            for(uint8_t ChannelCount = 1; ChannelCount <=8; ChannelCount++)
            {
                GetData(ChannelCount);
            }

            SendDataFrame();
            ReceiveCount = 0;
            LED_B_SetLow();
 
        }
        
        // 8 Thermocouples Scan = 680us
        // Scan + Data Send Time = 4.7ms
        
    }
}
/**
 End of File
*/