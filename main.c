/*
 * Author: C2C Scout Wallace
 * Created: 8 Oct 2013
 * Description: Pong. This program bounces a ball in a screen
 * Although it does not actually create a ball in a screen,
 * it still has its information, to include its x and y positions,
 * its radius, and its x and y velocities.
 */

#include <stdio.h>
#include "pong.h"

int main(int argc, const char *argv[])
{
    ball myBall = PlaceBall(250, 200, 10, -20, 15);

    while (1)
    {
        myBall = MoveBall(myBall);
    }
}
