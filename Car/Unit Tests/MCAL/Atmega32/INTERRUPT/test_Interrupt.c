#include "dio.h"
#include "delay.h"
#include "test.h"
#include "test_config.h"
#include "../../Infrastructure/interrupt_registers.h"
#include "../../Infrastructure/registers.h"
#include "../../Infrastructure/types.h"
#include "../../Infrastructure/utils.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/INTERRUPT/interrupt.h"

/*Driver ==> INTERRUPT*/
void test_INTERRUPT(uint8_t external_INT_number,uint8_t edge_number )
{
	/*LEDs_OFF at the begining*/
	DIO_WritePIN(TESTING_PORT,TESTING_LED_0,LOW);
	DIO_WritePIN(TESTING_PORT,TESTING_LED_1,LOW);

	uint8_t uint8_tCheckState = StateInitializtion;
	StateInitializtion = external_interrupt_init(external_INT_number,edge_number);
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
