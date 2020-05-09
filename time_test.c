#include <avr/io.h>
//#include <util/delay.h>
#include "../time/time.h"

int main() {

	DDRB = 1 << 5; //PB5 -> LED
	initTime();

	while(1) {
		PORTB ^= 1 << 5; //menja stanje izlaznog pina PB5
		delay(1000);
	}

	return 0;
}

