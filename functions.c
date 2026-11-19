#include <stdio.h>

// Q1: Electric Bill
float calculateElectricBill(int units) {
    float bill = 0.0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}

// Q2: Fare Calculator
float calculateFare(float distance) {
    return distance * 50;
}

// Q3: Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int units;
    float distance, fahrenheit;

    // Test Electric Bill
    printf("Enter units consumed: ");
    scanf("%d", &units);
    printf("Electric Bill: KSh. %.2f\n\n", calculateElectricBill(units));

    // Test Fare
    printf("Enter distance (km): ");
    scanf("%f", &distance);
    printf("Total Fare: KSh. %.2f\n\n", calculateFare(distance));

    // Test Temperature Conversion
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Temperature in Celsius: %.2f°C\n", convertToCelsius(fahrenheit));

    return 0;
}
