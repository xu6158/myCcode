
#ifndef _Switch_3Key_Dimmer_Neutral_V1.1.1.3.1_H_
#define	_Switch_3Key_Dimmer_Neutral_V1.1.1.3.1_H_


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

#define	Name_Version_Value 			1	//1
#define Name_SerialNumber_Value                 3	//2
#define Properties_Product_Value		1	//3
#define Properties_Keys_Value			3	//4
#define Properties_Country_Value		1	//5

//Control Option
#define Control_Method_Mosfet_Value		0
#define Control_Method_Triac_Value		1
#define Control_Method_Relay_Value		0
#define Control_Method_TriacRelay_Value 	0
#define Properties_Neutral_Value		0
#define Properties_Dimmer_Value                 1
#define Debug_Value                             1
#define Properties_TwoPhase_Value_Value         0
#define Micro_Switch                            0


//MCU define
#define	Key1				RA0		//pin2  1
#define OverLoad1			RA1		//pin3	1
#define SYSC1				RA2		//pin4	1
#define	LED2				RA3		//pin5	0
#define	Key3				RA4		//pin6 	1
#define PFV1				RA5		//pin7	1
#define	Key2				RA6		//pin10 1
#define	Triac2				RA7		//pin9	0

#define CC2500_GDO0			RB0		//pin21 1
#define Triac3				RB1		//pin22 0
#define DimmerReference1                RB2		//pin23 1
#define Buzzer1				RB3		//pin24	0
#define Triac1				RB4		//pin25 0
#define ErrLED				RB5		//pin26	0
#define PinEmpty1			RB6		//pin27	0
#define PinEmpty2			RB7		//pin28 0

#define CC2500_SI			RC0		//pin11	0
#define CC2500_SCK			RC1		//pin12	0
#define CC2500_SO			RC2		//pin13	1
#define	CC2500_GDO2			RC3		//pin14	1
#define CC2500_CSN			RC4		//pin15	0
#define	TTPW				RC5		//pin16	0
#define LED3				RC6		//pin17	0
#define	LED1				RC7		//pin18	0

//I/O
#define _TRISA 	0b01110111;
#define _TRISB 	0b00000101;
#define _TRISC 	0b00001100;
#define _LATA	0b00000000;
#define _LATB	0b00000000;
#define _LATC	0b00000000;
#define _ANSELA 0b00000010;
#define _ANSELB 0b00000000;
#define _ANSELC 0b00000000;
#define _PORTA 	0b01110111;
#define _PORTB 	0b00000101;
#define _PORTC 	0b00001100;

#define _WPUB   0b00000000;

//ADC channel
#define OverLoad_Channel		AN1
#define OverTemp_Channel		AN2
#define PFV_Channel			AN4

//Mcu Function Option

//MCU
#define MCU_16F1518
//Oscillator (System FOSC)
#define	System_Fosc_16M			//_16M
//Interrupt Time
#define IntrTime_100us
//Main Time
#define Main_Time_Value 20//ms
//Timer0
#define Timer0_use_Value	0
//Timer1
#define Timer1_use_Value	1
//Timer2
#define Timer2_use_Value	0
//ADC
#define ADC_use_Value           1
//INT
#define INT_use_Value           0
//UART
#define UART_use_Value          0
#define UART_Master_Value       1
#define UART_Slave_Value        0
//I2C
#define I2C_use_Value            0
#define Master_Mode_Value        1
#define Slave_Mode_Value         0
//IOC
#define IOC_use_Value            1
#define _IOCBP_Value    0b00000100; //Positive edge
#define _IOCBN_Value    0b00000100; //Negative edge
//FlashMemory
#define FlashMemory_use_Value    1
//Watchdog timer 
#define WDT_use_Value            1


//Function Option

//SYSC
#define SYSC_use_Value           0
//OverTemperature
#define OverTemperature_use_Value 0
#define TempDangerValue_Value       365     //NTC 70度
#define TempSafeValue_Value         420     //NTC 61度
//OverLoad
#define OverLoad_use_Value 0
#define LimitCurrent_Value  1.2//A
#define LinearParam_Value   56
//LED
#define LED_use_Value       1
#define PIRLED_use_Value    0
//Buzzer
#define Buzzer_use_Value    1
//Switch
#define Switch_use_Value    1
#define Switch_Mode_Value   1
//Lights
#define LightsControl_use_Value     0
#define setLights_SwOn_Value        1
#define setLights_SwOff_Value       1
#define setLights_Value             1
//RF cc2500
#define CC2500_use_Value	1
#define Tx_Enable               1
#define Rx_Enable               1
//DelayOff
#define DelayOff_use_Value      1
//PowerFault
#define PowerFault_use_Value    0
//Dimmer Lights
#define Dimmer_use_Value                1
#define Dimmer_Trigger_Mode_Value       3
#define Dimmer_Half_Wave_Value          1
#define Dimmer_Full_Wave_Value  	0
#define Dimmable_Func                   1
#define Max_Percent                     67
#define Mini_Percent                    5
//SegmentDisplay
#define SegmentDisplay_use_Value        0
//CDS
#define CDS_use_Value                   0
//PIR
#define PIR_use_Value                   0
//UART to RF
#define myUARTtoRF_use_Value    0
//Main
#define Exception_Main_Value    2

//include
#include "../src/Main_B1.h"
#include "../src/Activity_B1.h"
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
#include "../src/MCU_B1.h"
#include "../src/SegmentDisplay_A2.h"
#include "../src/myUARTtoRF.h"

//end file
#endif