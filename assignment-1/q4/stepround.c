#include <stdio.h>

int main(void) {

float power=1;
float step=0.0;
int i = 0;

for (i = 0; i < 7; i++)
{
    power = power * 100;
    step=1/power;
    printf("%.15lf\n",step);

}


	return 0;
}

// It divides the initial value of power by 100 repeatedly upto seven times.
