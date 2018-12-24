#pragma once

class Entity
{
public:
	Entity(sf::Texture text);
	Entity(sf::Texture text, sf::Vector2f pos);
	virtual ~Entity();

	virtual void Update(sf::Time elapsedTime) = 0;
	virtual void Render() = 0;
	void HandleCollision();

	void SetPosition(sf::Vector2f position);
	void SetEnable(bool enable);

	sf::Texture GetTexture();
	sf::Sprite GetSprite();
	sf::Vector2f GetPosition();
	bool GetEnable();

protected:
	sf::Texture m_texture;
	sf::Sprite m_sprite;

	bool m_enabled = true;

};

