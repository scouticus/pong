/*
 * pong.c
 *
 *  Created on: May 20, 2014
 *      Author: C15Scout.Wallace
 */

#include "pong.h"

ball myBall(int x, int y, int radius, int dx, int dy)
{
	ball myNewBall;

	myNewBall.position.x_ = x;
	myNewBall.position.y_ = y;
	myNewBall.radius = radius;
	myNewBall.velocity.x_ = dx;
	myNewBall.velocity.y_ = dy;

    return myNewBall;
}


// Go to test for if the ball hit the wall
ball didBallHitWall_L_R(ball testBallWall);
ball didBallHitWall_T_B(ball testBallWall);

// Performs change in the Ball's position
ball MoveBall(ball movingball)
{
    movingball.position.x_ += movingball.velocity.x_;
    movingball.position.y_ += movingball.velocity.y_;

    movingball = didBallHitWall_L_R(movingball);
    movingball = didBallHitWall_T_B(movingball);

    return movingball;
}


// Tests if Ball hit the left or right walls
ball didBallHitWall_L_R(ball testBallWall)
{
    if (testBallWall.position.x_ - testBallWall.radius < 0)
    {
    	testBallWall.position.x_ = (-testBallWall.position.x_ + 2*testBallWall.radius); //reflects position
    	testBallWall.velocity.x_ = -testBallWall.velocity.x_; //reflects velocity
    }
    else if (testBallWall.position.x_ + testBallWall.radius > WINDOW_W)
    {
    	testBallWall.position.x_ = (2*WINDOW_W - testBallWall.position.x_ - 2*testBallWall.radius);
    	testBallWall.velocity.x_ = -testBallWall.velocity.x_;
    }

    return testBallWall;
}

ball didBallHitWall_T_B(ball testBallWall)
{
    if (testBallWall.position.y_ - testBallWall.radius < 0)
    {
    	testBallWall.position.y_ = (-testBallWall.position.y_ + 2*testBallWall.radius);
    	testBallWall.velocity.y_ = -testBallWall.velocity.y_;
    }
    else if (testBallWall.position.y_ + testBallWall.radius > WINDOW_H)
    {
    	testBallWall.position.y_ = (2*WINDOW_H - testBallWall.position.y_ - 2*testBallWall.radius);
    	testBallWall.velocity.y_ = -testBallWall.velocity.y_;
    }

    return testBallWall;
}
