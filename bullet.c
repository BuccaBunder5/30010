/*
 * bullet.c
 *142
 *152
 *200
 *224
 *292
 *300
 *  Created on: 13. jun. 2023
 *      Author: danie
 */
#include "stdint.h"
#include "stdio.h"

void Adder(vectorb* a, vectorb* b) {
	a->x += b->x;
	a->y += b->y;
}
void ShipPosRead(spaceship_t) {
	(*spaceship).positionX + 0.2;
	(*spaceship).positionY + 0.2;

}

void ShipSpeedRead(spaceship_t) {
	(*spaceship).vectorX + 1.5;
	(*spaceship).vectorY + 1.5;

}

void ShootBullets(spaceship_t) {
	int i = 0;
	for(int i = 0; BULLETS; i++) {

		if (spaceship_t->bullets[i].active == FALSE) {

			spaceship_t->bullets[i].active = TRUE;
			spaceship_t->bullets[i].position= ShipPosRead;
			spaceship_t->bullets[i].bspeed = ShipSpeedRead;
			break;
		}
	}
}

