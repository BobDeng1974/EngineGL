/*
 * EngineGL
 * Copyright (C) 2015 Tudor Marcu. All rights reserved.
 */

#ifndef STRUCTS_H
#define STRUCTS_H

/* Screen data we want to incorporate */
#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080
#define SCREEN_HALF_WIDTH SCREEN_WIDTH/2
#define SCREEN_HALF_HEIGHT SCREEN_HEIGHT/2
#define SCREEN_BPP 32

struct Vector3D {
	float x, y, z;
};

struct face {
	unsigned int vertindex[3];
	unsigned int uvindex[3];
	unsigned int normindex[3];
};
#endif
