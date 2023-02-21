#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include "Entity.h"
#include "Brick.h"
#include "Grass.h"
#include "Wall.h"

class Level
{
public:
	Level() = default;
	virtual ~Level();
	bool LoadLevel(const std::string& _fileName);
	Vec2f GetSize(const Vec2f& _tileSize);
	void RenderLevel(sf::RenderTarget& _target, const Vec2f& _tileSize);
	void MovePlayer(Vec2f _pos);
	void GenerateBox();

private:
	std::vector<std::vector<Entity*>> m_map;
	std::vector<Vec2u> m_emptyPos;
};