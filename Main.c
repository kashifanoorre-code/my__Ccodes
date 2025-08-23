//code yo find volume of a cylinder

#include <stdio.h>
#define PI 3.14

int main() {
    float radius, height, volume, volumeofcylinder;
    printf("enter radius and height: ");
    scanf("%f %f", &radius , &height);
    volumeofcylinder = PI*radius*radius*height;
    printf("\nthe volume of cylinder is: %f ", volumeofcylinder);
    

    return 0;
}
