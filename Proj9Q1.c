#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

int main()

{

int time, hour, minute;

printf("Enter the time in the format of 24-hours time: ");

scanf("%d", &time);

hour = time/100;
minute = time % 100;

if(hour > 24 || minute > 60)
printf("The hours must be range 0 to 24 and minutes must be in the range 0 to 59 inclusive.");

else if(hour < 12 && minute < 60)
printf("The time in the format of 12-hour, a.m.-p.m. is: %d:%02d a.m",(hour == 0) ? 12 : hour, minute);

else if(hour == 12 && minute < 60)
printf("The time in the format of 12-hour, a.m.-p.m. is: %d:%02d p.m",hour, minute);

else if(hour > 12 && hour < 24 && minute < 60)
printf("The time in the format of 12-hour, a.m.-p.m. is: %d:%02d p.m",hour - 12, minute);

else if(hour == 24 && minute == 0)
printf("The time in the format of 12-hour, a.m.-p.m. is: %d:%02d a.m",hour - 12, minute);

else
printf("The hours must be range 0 to 24 and minutes must be in the range 0 to 59 inclusive.");


printf("\n");

system("Pause");

}