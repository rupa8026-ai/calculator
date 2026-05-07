#include "stdio.h"
// #define PI= 3.14;// declare constants

void main()
{
    // RECTANGLE
    float height;
    float width = 0;
    
    printf("Enter Height and Width of a Rectangle");
    // Save in local vars
    scanf("%f %f", &height, &width);
      //Process Input
    float a_rectangle= calculateAreaOfRectangle(height, width);
    printf("The area of a_rectangle for given height %f is %f ", a_rectangle);
    
    
    // CIRCLE 
    float radius = 0;
    const float PI = 3.14; // declare constants
    // INPUT
    printf("Enter Radius of a circle.");
    // Save in local vars
    scanf("%f", &radius);
    //Process Input
    float a_circle= calculateAreaOfCircle(PI, radius);
    printf("The area of circle for given radius %f is %f ", a_circle);


}

float calculateAreaOfCircle(float PI, float radius)
{
    float area = PI * (radius);
    return area;
}

float calculateAreaOfRectangle(float height, float width)
{
    float area = height * width;
    return area;
}