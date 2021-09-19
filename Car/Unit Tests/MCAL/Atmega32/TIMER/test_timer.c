#include "test.h"
#include "test_config.h"
#include "../../Infrastructure/timer_registers.h"
#include "../../Infrastructure/registers.h"
#include "../../Infrastructure/types.h"
#include "../../Infrastructure/utils.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/TIMER/timer.h"



/*return */
#define Timer_SUCCESS 1
#define Timer_FAIL    0
#define StateInitializtion  5
#define NonSupportedTimerNumber 6


void test_TIMER(uint8_t Function_name,uint8_t TIMER_NUMBER)
{
		/*LEDs_OFF at the begining*/
		DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
		DIO_WritePIN(TESTING_PORT,TESTING_LED_1,LOW);

		/*********************************************************/
		/*Test the error state of all the functions (by sending valid and invalid arguments)*/
		/***********************************************************/
		uint8_t uint8_tCheckState = StateInitializtion;
		
		Switch(Function_name)
		{
	/*******************************************************************************************/
			case TIM_voidInitialize:
			{

				/*function call*/
				/*1-->TIM_voidInitialize()*/
				StateInitializtion = TIM_voidInitialize(TIMER_NUMBER);
				if(StateInitializtion == Timer_SUCCESS)
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,HIGH);
					_delay_ms(1000);
				}
				else
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
					_delay_ms(1000);
				
				}
			}
			break;
				
	/*******************************************************************************************/		
			case TIM_uint8_tDeInit:
			{
				/*2-->TIM_uint8_tDeInit()*/
				StateInitializtion = TIM_uint8_tDeInit(TIMER_NUMBER);
				if(StateInitializtion == Timer_SUCCESS)
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,HIGH);
					_delay_ms(1000);
				}
				else
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
					_delay_ms(1000);	
				}
			}
			break;
	/*******************************************************************************************/
			case TIM_voidEnableInt:
			{
				/*3->TIM_voidEnableInt()*/
				StateInitializtion = TIM_voidEnableInt(TIMER_NUMBER);
				if(StateInitializtion == Timer_SUCCESS)
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,HIGH);
					_delay_ms(1000);
				}
				else
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
					_delay_ms(1000);	
				}
			}
			break;
	/*******************************************************************************************/
			case TIM_voidDisableInt:
			{
				/*4->TIM_voidDisableInt()*/
				StateInitializtion = TIM_voidDisableInt(TIMER_NUMBER);
				if(StateInitializtion == Timer_SUCCESS)
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,HIGH);
					_delay_ms(1000);
				}
				else
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
					_delay_ms(1000);	
				}
			}
			break;
	/*******************************************************************************************/
			case TIM_voidSetRegister:
			{
				/*5->TIM_voidSetRegister()*/
				StateInitializtion = TIM_voidSetRegister(TIMER_NUMBER);
				if(StateInitializtion == Timer_SUCCESS)
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,HIGH);
					_delay_ms(1000);
				}
				else
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
					_delay_ms(1000);	
				}
			}
			break;
	/*******************************************************************************************/
			case TIM_voidSetCTCRegister:
			{
				/*6->TIM_voidSetCTCRegister()*/
				StateInitializtion = TIM_voidSetCTCRegister(TIMER_NUMBER);
				if(StateInitializtion == Timer_SUCCESS)
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,HIGH);
					_delay_ms(1000);
				}
				else
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
					_delay_ms(1000);	
				}
			}
			break;
	/*******************************************************************************************/
			case TIM_voidSetCallBack:
			{
				/*7->TIM_voidSetCallBack()*/
				StateInitializtion = TIM_voidSetCallBack(TIMER_NUMBER);
				if(StateInitializtion == Timer_SUCCESS)
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,HIGH);
					_delay_ms(1000);
				}
				else
				{
					DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
					_delay_ms(1000);	
				}
			}
			break;
		}	
}






























