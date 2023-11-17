#pragma once

#include <chrono>
#include <iostream>

#include "tilemap.h"
#include "HUD.h"

class Game
{
public:

	Tilemap tilemap_;
	sf::Vector2f player_pos_ = sf::Vector2f(00, 30);
	sf::Vector2f player_vel_ = sf::Vector2f(0, 0);
	bool grounded;
	sf::Vector2f player_size = sf::Vector2f(20, 30);
	sf::RenderWindow window_;

	sf::RectangleShape tile_shape_;
	sf::RectangleShape cursor_shape_;
	sf::RectangleShape debug_limit_shape_vertical_;
	sf::RectangleShape debug_limit_shape_horizontal_;
	sf::CircleShape player_origin_shape_;
	sf::RectangleShape player_box_shape_;

	sf::Sprite tile_sprite;
	sf::Texture tile_texture;
	sf::Sprite player_sprite; 
	sf::Texture player_texture;
	
	sf::Vector2f checkpoint_pos_ = sf::Vector2f(50,50 );
	bool passed_checkpoint_ = false;

	sf::RectangleShape endZone_;
	bool gameFinished_ = false;

	sf::Texture endScreenTexture;


	std::chrono::high_resolution_clock::time_point frameStart;
	std::chrono::high_resolution_clock::time_point frameEnd;

	HUD hud_;
	float deltaTime_;

	void init();

	void update();
};

