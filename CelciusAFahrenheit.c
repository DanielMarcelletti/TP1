/* Escribe en pantalla una tabla con una cierta temperatura en grados celcius
 * y a su derecha dicha temperatura expresada en fahrenheit
 * Daniel Marcelletti
 * 13/04/2015
 */

#include <stdio.h>
main()
{
	float fahr, celcius;
	float lower, upper, step;

/*seteo los valores de tope y el intervalo*/
	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;
	while (celcius <= upper) {
		fahr = ((fahr*9.0) /  5.0) + 32.0;
		printf("%6.1f %3.0f \n", celcius, fahr);
		celcius = celcius + step;
	}
}
