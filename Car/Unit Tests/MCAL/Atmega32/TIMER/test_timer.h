
#ifndef _TEST_H
#define _TEST_H
/*****************************************************************************/

/*Function_name*/
#define TIM_voidInitialize			0
#define	TIM_voidEnableInt			1
#define TIM_voidDisableInt			2	
#define TIM_uint8_tDeInit			3	
#define TIM_voidSetRegister			4
#define TIM_voidSetCTCRegister		5
#define TIM_voidSetCallBack			6


/*TIMER_Number*/
#define TIMER_0						0
#define TIMER_1						1
#define NonSupportedTimerNumber 	6



void test_TIMER(uint8_t Function_name,uint8_t TIMER_NUMBER);

#endif