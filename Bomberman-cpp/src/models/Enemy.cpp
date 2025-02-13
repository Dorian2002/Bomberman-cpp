﻿#include "models/Enemy.h"
#include <random>
#include <iostream>
#include <managers/GameManager.h>
#include <managers/WindowManager.h>

Enemy::Enemy(const Vec2f& position)
{
    m_direction = nullptr;
    m_steps = 0;
    m_speed = 1.0f;
    m_speedCoeficient = 1.0f;
    SetPosition(position);
    m_destroyable = true;
    SetEntityType(TEnemy);
    SetSprite("F1");
    GetNextPosition();
}

void Enemy::Move(std::vector<std::vector<Entity*>> Map, float* DeltaT, Player* Player)
{
    Vec2f move = *m_direction;
    //détermine le movement
    move.x *= (m_speed * m_speedCoeficient);
    move.y *= (m_speed * m_speedCoeficient);
    Vec2f currentPosition = *GetPosition();
    currentPosition.Add(move * *DeltaT);
    float x1, x2, y1, y2;
    if (m_direction->x != 0)
    {
        x1 = m_direction->x == 1 ? ceil(currentPosition.x - 0.05f) : floor(currentPosition.x + 0.05);
        x2 = m_direction->x == 1 ? ceil(currentPosition.x - 0.05) : floor(currentPosition.x + 0.05);
        y1 = floor(currentPosition.y + 0.05);
        y2 = ceil(currentPosition.y - 0.05);
    }
    else if (m_direction->y != 0)
    {
        x1 = floor(currentPosition.x + 0.05f);
        x2 = ceil(currentPosition.x - 0.05f);
        y1 = m_direction->y == 1 ? ceil(currentPosition.y - 0.05) : floor(currentPosition.y + 0.05);
        y2 = m_direction->y == 1 ? ceil(currentPosition.y - 0.05) : floor(currentPosition.y + 0.05);
    }


    if (roundf(currentPosition.x) == roundf(Player->GetPosition()->x) && roundf(currentPosition.y) == roundf(Player->GetPosition()->y)) {
        WindowManager::GetInstance()->GetWindow()->close();
    }

    if (m_steps<=0 || 
        Map[y1][x1]->GetEntityType() != TGrass || Map[y2][x2]->GetEntityType() != TGrass)
    {
        m_steps = 0;
        GetNextPosition();
        Move(Map, DeltaT, Player);
        return;
    }    
    SetPosition(currentPosition);
    m_steps -= 64**DeltaT;
}

void Enemy::GetNextPosition()
{
    std::random_device device;
    std::mt19937 rng(device());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(3, 10);

    // Génération d'une direction aléatoire

    int rnd = dist6(rng);
    m_direction = new Vec2f();
    if (rnd <= 4) {
        m_direction->Set(1, 0);
    }
    else if (rnd <= 6) {
        m_direction->Set(-1, 0);
    }
    else if (rnd <= 8) {
        m_direction->Set(0, 1);
    }
    else if (rnd <= 10) {
        m_direction->Set(0, -1);
    }

    m_steps = dist6(rng)*64;
}
