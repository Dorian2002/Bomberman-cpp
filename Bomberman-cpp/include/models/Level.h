#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include "Entity.h"
#include "Brick.h"
#include "Grass.h"
#include "Player.h"
#include "Wall.h"
#include "Bombs.h"

class Level
{
public:
	Level() = default;
	virtual ~Level();
	bool LoadLevel(const std::string& _fileName);
	Vec2f GetSize(const Vec2f& _tileSize);
	void RenderLevel(sf::RenderTarget& _target, const Vec2f& _tileSize, bool& _placeBomb);
	void MovePlayer(Vec2f _pos, Vec2f _direction);
	Player* GetPlayer();
	Bombs* GetBombs();
	void GenerateBox();
	EntityType GetCaseType(Vec2f _pos, Vec2f _direction);

private:
	Player* m_player;
	Bombs* m_bomb;
	std::vector<std::vector<Entity*>> m_map;
	std::vector<Vec2u> m_emptyPos;
};
