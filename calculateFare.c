#include <stdio.h>

double calculateFare(double distance) {
    return distance * 50.0;
}

int main(void) {
    double distance;

    printf("Enter distance travelled in kilometres: ");
    scanf("%lf", &distance);

    if (distance < 0) {
        printf("Distance cannot be negative.\\n");
        return 1;
    }

    printf("Total fare: KSh. %.2f\\n", calculateFare(distance));

    return 0;
}
