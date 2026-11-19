#include <stdio.h>

double calculateElectricBill(int units) {
    double bill = 0.0;

    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }

    return bill;
}

int main(void) {
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Units cannot be negative.\\n");
        return 1;
    }

    printf("Total electricity bill: KSh. %.2f\\n",
           calculateElectricBill(units));

    return 0;
}
