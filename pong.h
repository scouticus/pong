/*
 * pong.h
 *
 *  Created on: May 20, 2014
 *      Author: C15Scout.Wallace
 */

#ifndef PONG_H_
#define PONG_H_

// Initializes the window screen dimensions
#define WINDOW_W 500
#define	WINDOW_H 500

// Initializes x and y vectors (position and velocity values)
typedef struct {
	int x_;
	int y_;
} vector2d; // labels as a 2 dimension vector

typedef struct {
	vector2d position;
	int radius;
	vector2d velocity;
} ball; // labels this structure as ball

ball myBall(int x, int y, int radius, int dx, int dy);
ball MoveBall(ball movingball);

#endif /* PONG_H_ */
