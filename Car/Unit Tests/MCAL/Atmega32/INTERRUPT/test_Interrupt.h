
#ifndef _TEST_H
#define _TEST_H
/*****************************************************************************/


/*external_INT_number*/
#define interrupt0					0
#define interrupt1					1
#define interrupt2					2
#define NonSupportedInterruptNumber 6

/*edge_number*/
#define low_lvl						0
#define any_logic_lvl				1
#define falling_edge				2
#define rising_edge				    3
#define NonSupportedEdge			6

/**/


void test_INTERRUPT(uint8_t external_INT_number,uint8_t edge_number );





#endif