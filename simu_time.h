/*
* simu_time.h
*
*  Created on: Jan 23, 2018
*      Author: kalman
*/

#ifndef SIMU_TIME_H_
#define SIMU_TIME_H_
#include <stdint.h>

class simu_time
{
public:
	simu_time()
	{
		micro = 1;
	}

	uint32_t Micro() const { return micro; }
	uint32_t Milli() const { return micro / 1000; }
	void MicroIncMs() { micro += 1000; }
private:
	uint32_t micro;
};



#endif /* SIMU_TIME_H_ */
#pragma once
