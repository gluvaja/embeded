/*
 * main.c
 *
 *  Created on: 7 Apr 2023
 *      Author: LENOVO
 */

#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

void ledBlink(int16_t high_time, int16_t low_time)
{
	PORTB |= 1 << 5;
	_delay_ms(high_time);
	PORTB &= ~(1 << 5);
	_delay_ms(low_time);
}

void ledInit()
{
	DDRB |= 1 << 5;
}
int16_t main()
{
	int16_t high_time = 300;
	int16_t low_time = 700;

	ledInit();

	while(1)
	{
		ledBlink(high_time, low_time);
	}

	return 0;
}

