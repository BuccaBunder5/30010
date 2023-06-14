/*
 * bullets.h
 *
 *  Created on: 13. jun. 2023
 *      Author: danie
 */
#include

#ifndef BULLET_H_
#define BULLET_H_

enum boolean {TRUE, FALSE};

typedef struct {
	struct vectorb position;
	struct vectorb bulletspeed;
	enum boolean primed;

} bullet;

typedef struct {
    float x;
	float y;

} vectorb;


void Adder(vectorb* a, vectorb* b);
void ShipPosRead(spaceship_t);
void ShipSpeedRead(spaceship_t);
void ShootBullets(*spaceship, s);

#endif /* BULLET_H_ */
