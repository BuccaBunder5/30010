/*
 * bullets.h
 *
 *  Created on: 13. jun. 2023
 *      Author: danie
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "stm32f30x_conf.h"
#include "30010_io.h"
#include "stdint.h"
#include "stdio.h"
#include "math.h"
#include "ansi.h"

typedef struct {
	int32_t positionX;
	int32_t positionY;
	int32_t vectorX;
	int32_t vectorY;
	int32_t nextPosX;
	int32_t nextPosY;
	int8_t active;
	int8_t counter;
} bullet_t;

typedef struct {
	int32_t x, y, rotation, velX, velY, nextPosX, nextPosY;
} spaceship_t ;

void SpawnBullet(bullet_t bullet[], int8_t scope);
void Shoot(int8_t count,bullet_t  bullet[], spaceship_t * spaceship);
#endif /* BULLET_H_ */


