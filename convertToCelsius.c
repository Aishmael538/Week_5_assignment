#include <stdio.h>

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void) {
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("Temperature in Celsius: %.2f C\\n",
           convertToCelsius(fahrenheit));

    return 0;
}
