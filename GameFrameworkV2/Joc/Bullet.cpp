#include "Bullet.h"

Bullet::Bullet(const BackBuffer *pBackBuffer, std::string owner)
{
	this->owner = owner;
	m_pSprite = new Sprite("data/b.bmp", "data/bm.bmp");
	m_pSprite->setBackBuffer(pBackBuffer);
}

Bullet::~Bullet()
{
}

void Bullet::Move()
{
	if(owner == "enemy")
		this->m_pSprite->mPosition.y += 1;
	else
		this->m_pSprite->mPosition.y -= 1;
}

void Bullet::Stop()
{
	this->m_pSprite->mPosition.y -= .001;
}
