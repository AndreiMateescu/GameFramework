#include "Enemy.h"
#include "CGameApp.h"

extern CGameApp g_App;
Enemy::Enemy(const BackBuffer *pBackBuffer)
{
	m_pSprite = new Sprite("data/en.bmp", RGB(0xff, 0x00, 0xff));
	m_pSprite->setBackBuffer(pBackBuffer);
	m_pSprite->mPosition = Vec2(100, 100);
}


Enemy::~Enemy()
{
}

void Enemy::move()
{
	this->m_pSprite->mPosition.y += .1;
}

void Enemy::Shoot()
{
	if (shootCooldown < 5) {
		Bullet bullet(g_App.m_pBBuffer, "enemy");
		bullet.m_pSprite->mPosition = this->m_pSprite->mPosition;
		g_App.bulletsOnScreen.push_back(bullet);
		shootCooldown = 500;
	}
}



