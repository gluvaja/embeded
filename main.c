/*
 * main.c
 *
 *  Created on: 7 Apr 2023
 *      Author: LENOVO
 */

#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

int16_t main()
{
	int16_t high_time = 300;
	int16_t low_time = 700;

	DDRB |= 1 << 5;


	while(1)
	{
		PORTB |= 1 << 5;
		_delay_ms(high_time);
		PORTB &= ~(1 << 5);
		_delay_ms(low_time);
	}

	return 0;
}

