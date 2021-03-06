
#ifndef _PIR_ceiling_thin_2wire_16f723a_H_
#define	_PIR_ceiling_thin_2wire_16f723a_H_

//Include
#include <stdio.h>


/**Version information
                Name_Version 			:	1~255

                Name_SerialNumber		:	1~255
 
                Properties_Product		:	1:Switch
                                                        2:PIR

                Properties_Keys			:	1:1key
                                                        2:2key
                                                        3:3key

                Properties_Country		:	1:USA
                                                        2:EP
                                                        3:TW
                                                        4:CHI
 **/

#define	Name_Version_Value 		1	//1
#define Name_SerialNumber_Value		1	//2
#define Properties_Product_Value	2	//3
#define Properties_Keys_Value		1	//4
#define Properties_Country_Value	3	//5

//Control Option
#define Control_Method_Mosfet_Value         0
#define Control_Method_Triac_Value          0
#define Control_Method_Relay_Value          0
#define Control_Method_TriacRelay_Value     1
#define Properties_Neutral_Value            0
#define Properties_Dimmer_Value             0
#define Debug_Value                         0
#define Create_Date "2015/01/07"
#define PCB_Name "PIR-Ceiling_V01-4(20140516)"


//MCU define
#define	OverLoad1			RA0		//pin2  1
#define CDS_1                           RA1		//pin3	1
#define PIR_1                           RA2		//pin4	1
#define	AD_Vref				RA3		//pin5	1
#define	empty1                    	RA4		//pin6 	0
#define SYSC1				RA5		//pin7	1
#define LED1                            RA6		//pin10 0  red
#define LED2                            RA7		//pin9	0  blue

#define CC2500_GDO0			RB0		//pin21 1
#define CDS1_VR				RB1		//pin22 1
#define Triac1 				RB2		//pin23 0
#define Relay1				RB3		//pin24	0
#define PIR1_VR				RB4		//pin25 1
#define empty2				RB5		//pin26	0	
#define ICSPCLK				RB6		//pin27	0
#define ICSPAT				RB7		//pin28 0

#define CC2500_SI			RC0		//pin11	0
#define CC2500_SCK			RC1		//pin12	0
#define CC2500_SO			RC2		//pin13	1
#define	CC2500_GDO2			RC3		//pin14	1
#define CC2500_CSN			RC4		//pin15	0
#define	empty3                          RC5		//pin16	0
#define TX				RC6		//pin17	0	
#define	RX				RC7		//pin18	0


//I/O
#define _TRISA 	0b00101111;
#define _TRISB 	0b00010011;
#define _TRISC 	0b00001100;
#define _ANSELA 0b00001111;
#define _ANSELB 0b00010010;
#define _PORTA 	0b10101111;
#define _PORTB 	0b00010011;
#define _PORTC 	0b00001100;

#define _WPUB   0b00000000;

//ADC channel
#define CDS_Signal_Channel		AN1
#define CDS_VR_Channel			AN10
#define PIR_Signal_Channel		AN2
#define PIR_VR_Channel			AN11
#define OverLoad_Channel		AN0
#define OverTemp_Channel		AN4

//Mcu Function Option
//MCU
#define MCU_16F723A
//Oscillator (System FOSC)
#define	System_Fosc_16M		//_16M
//ADC
#define ADC_use_Value 1
//interrupt time
#define IntrTime_100us
//Main Time
#define Main_Time_Value         20
//Timer0
#define Timer0_use_Value	0
//Timer1
#define Timer1_use_Value	1
//Timer2
#define Timer2_use_Value	0
//INT
#define INT_use_Value           0
//UART
#define UART_use_Value              0
#define UART_Master_Value           1
#define UART_Slave_Value            0
#define UART_Data_Length_Vallue     9
#define UART_Rx_Enable_bit          1
#define BAUD 19200
//I2C
#define I2C_use_Value 0
#define Master_Mode_Value 1
#define Slave_Mode_Value 0
//IOC
#define IOC_use_Value 0
#define _IOCBP_Value    0b00000100; //Positive edge
#define _IOCBN_Value    0b00000000; //Negative edge
//FlashMemory
#define FlashMemory_use_Value 0
//watchdog timer
#define WDT_use_Value 1

//Function Option

//SYSC
#define SYSC_use_Value 1
//OverTemperature
#define OverTemperature_use_Value 1
#define Cut_Off_electricity_Value 1
//#define TempDangerValueH_Value    0x70		//NTC 68 value 500
//#define TempSafeValueH_Value      0x85		//NTC 47 value 600
//#define TempDangerValueL_Value    0x40		//NTC 68 value 500
//#define TempSafeValueL_Value      0x4f		//NTC 47 value 600
#define TempDangerValue_Value     0x6a
#define TempSafeValue_Value       0x39
/*
 * lights on max temperature value      0xaa
 * lights on mini temperature value     0x64
 * lights off max temperature value     0x6f
 * lights off mini temperature value    0x3c
 */

//OverLoad
#define OverLoad_use_Value  1
#define LimitCurrent_Value  8//A
#define LinearParam_Value   1.7
//LED
#define LED_use_Value 1
#define PIRLED_use_Value 1
//Buzzer
#define Buzzer_use_Value 0
//Switch
#define Switch_use_Value 0
#define Switch_Mode_Value 1
//Lights
#define LightsControl_use_Value 	1
#define setLights_SwOn_Value 1
#define setLights_SwOff_Value 1
#define setLights_Value 1
//RF cc2500
#define CC2500_use_Value	0
#define Tx_Enable               1
#define Rx_Enable               1
//DelayOff
#define DelayOff_use_Value      0
//PowerFault
#define PowerFault_use_Value    0
//Dimmer Lights
#define Dimmer_use_Value            0
#define Dimmer_Half_Wave_Value      1
#define Dimmer_Full_Wave_Value      0
#define Max_Percent                 70
#define Mini_Percent                30
#define Med_Percent                 (char)((Max_Percent-Mini_Percent)/2)
//SegmentDisplay
#define SegmentDisplay_use_Value 0
//PIR
#define  PIR_use_Value  1
#define PIR_Control_Mode_Value 1
//CDS
#define CDS_use_Value  1
//UART to RF
#define myUARTtoRF_use_Value 0
//Main
#define Exception_Main_Value 2

//include
#include "../src/Activity_B1.h"
#include "../src/MCU_B1.h"
#include "../src/Main_B1.h"
#include "../src/Switch_B1.h"
#include "../src/Buzzer_B1.h"
#include "../src/LED_B1.h"
#include "../src/OverTemperature_B1.h"
#include "../src/CC2500_B1.h"
#include "../src/RF_Control_B1.h"
#include "../src/OverLoad_B1.h"
#include "../src/Dimmer_B1.h"
#include "../src/DelayOff_B1.h"
#include "../src/PowerFault_B1.h"
#include "../src/CDS_B1.h"
#include "../src/PIR_B1.h"
#include "../src/SYSC_B1.h"
#include "../src/TriacRelay_B1.h"
#include "../src/SegmentDisplay_A2.h"
#include "../src/myUARTtoRF.h"
//end file
#endif