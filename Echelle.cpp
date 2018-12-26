#include "pch.h"
#include "Echelle.h"


Echelle::Echelle(sf::Texture text) : Entity(text)
{
}

Echelle::Echelle(sf::Texture text, sf::Vector2f pos) : Entity(text, pos)
{
}

Echelle::~Echelle()
{
}

void Echelle::Update(sf::Time elapsedTime)
{
	Entity::Update(elapsedTime);
}

void Echelle::Render()
{
	Entity::Render();
}