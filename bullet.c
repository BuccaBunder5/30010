/*
 * bullet.c
 *
 *  Created on: 14. jun. 2023
 *      Author: danie
 */
/*
 * bullet.c
 *  Created on: 13. jun. 2023
 *      Author: danie
 */
#include "bullet.h"

void SpawnBullet(bullet_t bullet[], int8_t scope) {
	int8_t i;
	for(i = 0; i<scope; i++) {

	bullet[i].positionX = 0;
	bullet[i].positionY = 0;
	bullet[i].vectorX = 0;
	bullet[i].vectorY = 0;
	bullet[i].active = 0;
	}
}

void Shoot(int8_t count,bullet_t  bullet[], spaceship_t * spaceship) {
	int8_t i;
	i = count;
	bullet[i].positionX = (*spaceship).x;
	bullet[i].positionY = (*spaceship).y;
	bullet[i].active = 1;

	switch((*spaceship).rotation){
	case 0:
		bullet[i].vectorX = 0;
		bullet[i].vectorY = -128;
		break;

	case 1:
		bullet[i].vectorX = 128;
		bullet[i].vectorY = -128;
		break;

	case 2:
		bullet[i].vectorX = 128;
		bullet[i].vectorY = 0;
		break;

	case 3:
		bullet[i].vectorX = 128;
		bullet[i].vectorY = 128;
		break;

	case 4:
		bullet[i].vectorX = 0;
		bullet[i].vectorY = 128;
		break;

	case 5:
		bullet[i].vectorX = -128;
		bullet[i].vectorY = 128;
		break;

	case 6:
		bullet[i].vectorX = -128;
		bullet[i].vectorY = 0;
		break;

	case 7:
		bullet[i].vectorX = -128;
		bullet[i].vectorY = -128;
		break;
	}
		gotoxy(bullet[i].positionX,bullet[i].positionY);
		printf("*");

}

void moveBullet(bullet_t * bullet) {
	(*bullet).nextPosX = (*bullet).positionX + (*bullet).vectorX;
	if((*bullet).nextPosX > 128*190) {
		(*bullet).nextPosX = 0;
	} else if((*bullet).nextPosX < 0) {
		(*bullet).nextPosX = 128*190;
	}

	(*bullet).nextPosY = (*bullet).positionY + (*bullet).vectorY;
	if((*bullet).nextPosX > 128*55) {
		(*bullet).nextPosX = 0;
	} else if((*bullet).nextPosX < 0) {
		(*bullet).nextPosX = 128*55;
	}
	gotoxy((*bullet).positionX, (*bullet).positionY);
	printf(" ");
	(*bullet).positionX = (*bullet).nextPosX;
	(*bullet).positionY = (*bullet).nextPosY;
	gotoxy((*bullet).positionX, (*bullet).positionY);
	printf("*");
 }


/*void BulletDecay(bullet b[]) {
		int32_t i;
		for (i=0 ; i<8; i++){
			if (!(b[i].active == 0)) {
				int32_t positionX = b[i].positionX>>8;
				int32_t positionY = b[i].positionY>>8;
				b[i].positionX = b[i].positionX + b[i].vectorX;
				b[i].positionY = b[i].positionY + b[i].vectorY;
				int32_t nextPosX = b[i].positionX>>8;
				int32_t nextPosY = b[i].positionY>>8;
				if (nextPosY<grænse && nextPosY>grænse && nextPosX>grænse && nextPosX<grænse) {
					gotoxy(x,y);
					fgcolor(0);
					printf("\x2A");
					gotoxy(nextPosX, nextPosY);
					fgcolor(15);
					printf("\x2A");
				}else {
					gotoxy(x,y);
					fgcolor(0);
					printf("\x2A");
					a[i].active = 0;
					a[i].positionX = 0;
					a[i].positionY = 0;
					a[i].vectorX = 0;
					a[i].vectorY = 0;
				}
			}
		}
	}
*/
