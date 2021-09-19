

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
/* ---INCLUDES --------------------*/
#include "../../Utils/utils.h"
#include "../../MCAL/DIO/dio.h"
#include "../../MCAL/PWM/PWM.h"
#include "DC_MotorConfig.h"
/* ---FUNCTION DECLARATIONS --------------------*/
Motor_ERROR_state_t DC_MotorInit(uint8_t Motor);
Motor_ERROR_state_t DC_MotorStart(uint8_t Motor,uint8_t Motor_speed,uint8_t Motor_direction);
Motor_ERROR_state_t DC_MotorStop(uint8_t Motor);

#endif /* DC_MOTOR_H_ */