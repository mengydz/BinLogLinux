#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "simu_time.h"
#include "logger.h"



int main(int arg, char ** argc)
{
	Log_Init();
	for (uint16_t k = 0; k < 1000; k++)
	{
		t.MicroIncMs();
		Write_Test(t.Milli(), k);
		Write_PWM(k, k + 1, k + 2, k + 3);
	}
	return 0;
}

