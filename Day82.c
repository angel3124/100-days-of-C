/**Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight currentLight = YELLOW;

    switch (currentLight)
    {
    case RED:
        printf("Stop\n");
        break;
    case YELLOW:
        printf("Wait\n");
        break;
    case GREEN:
        printf("Go\n");
        break;
    default:
        printf("Invalid traffic light\n");
        break;
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day82.out
Wait
*/