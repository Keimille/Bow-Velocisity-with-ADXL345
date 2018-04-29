#include <stdio.h>
#include <math.h>

int main(void) {

int xf; //final position (meters)
int xi; //intial position (meters)
int t; //time (in seconds)
int Velocity;

printf("Enter distance in meters");
scanf("%d", &xf);
xi = 0;
printf("Enter the amount of seconds it took for you to get to final position");
scanf("%d", &t);
Velocity = xf - xi / t;
printf("Velocity is %d - %d / %d = %d meters per second", xf,xi,t, Velocity);

return 0;    
}
