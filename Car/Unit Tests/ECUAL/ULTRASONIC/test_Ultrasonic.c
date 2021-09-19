#include "dio.h"
#include "delay.h"
#include "test.h"
#include "test_config.h"
#include "../../Infrastructure/registers.h"
#include "../../Infrastructure/types.h"
#include "../../Infrastructure/utils.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../ECUAL/ULTRASONIC/Ultrasonic.h"


void test_ULTRASONIC(uint8_t Function_name)
{
	/*LEDs_OFF at the begining*/
	DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
	DIO_WritePIN(TESTING_PORT,TESTING_LED_1,LOW);
	uint8_t uint8_tCheckState = StateInitializtion;
	Switch(Function_name)
		{
			case ULTRASONIC_INIT:
			{
				StateInitializtion = ULTRASONIC_INIT();
				if(StateInitializtion == E_OK)
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
			case ULTRASONIC_GetDist:
			{
				StateInitializtion = ULTRASONIC_GetDist();
				if(StateInitializtion == E_OK)
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
