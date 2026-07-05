#include <stdio.h>
#include <math.h>

int main() {

    float radius;
    float area;
    float surfaceArea;
    float volume;
    float pi = 3.141592;

    printf("Enter desired radius: ");
    scanf("%f", &radius);

    printf("aaa");
    area = pi * (pow(radius,2));
    surfaceArea = 4 * area;
    volume = (4.0 / 3.0) * pi * (pow(radius,3));
    
    printf("Chosen radius: %.2f\n", radius);
    printf("Area: %.2f\n", area);
    printf("Surface Area: %.2f\n", surfaceArea);
    printf("Volume: %.2f\n", volume);

    return 0;
}