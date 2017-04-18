#pragma once
#include "Main.h"
#include "Sprite.h"
#include "../Bullet.h"

class Enemy
{
public:
	Enemy(const BackBuffer *pBackBuffer);
	~Enemy();

	Sprite*					m_pSprite;
	int shootCooldown = 500;
	void move();
	void Shoot();
};

