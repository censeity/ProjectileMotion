#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (){
    float velocityinitial = get_float("What is the initial velocity in m/s?\n");
    float radians = get_float("What is the angle of launch in degrees?\n");
    float angle = radians * (3.1415/180);
    float vxi = velocityinitial*cos(angle);
    float vyi = velocityinitial*sin(angle);
    printf("velocity x is %f\n",vxi);
    printf("velocity y is %f\n",vyi);
    float tHalf = (0-vyi)/-9.8;
    float totaltime = tHalf*2;
    float totaldistance = vxi*totaltime;
    float height = (vyi*tHalf)+(0.5*-9.8*(tHalf*tHalf));
    printf("The total time is %f seconds\n",totaltime);
    printf("The total distance is %f meters\n",totaldistance);
    printf("The max height is %f meters\n",height);
}
