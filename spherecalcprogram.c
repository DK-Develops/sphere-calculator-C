#include <stdio.h>
#include <math.h>
// %s, - string, %c - char, %d - int, %f - float, %lf - double
int main()
{

double radius = 0.0; double area = 0.0; double surfaceArea = 0.0, volume = 0.0;
const double PI = 3.141592653589793;
printf("Welcome to the sphere Calculator in C programming language!\n");
printf("Enter the radius: ");
scanf("%lf", &radius);
surfaceArea = 4 * PI * pow(radius,2);
area = PI * pow(radius,2);
volume = 4/3 * PI * pow(radius,3);

printf("Area of the sphere is %.2lf\n", area);
printf("Surface area of the sphere is %.2lf\n",surfaceArea);
printf("Volume of the sphere is %.2lf\n",volume);

}