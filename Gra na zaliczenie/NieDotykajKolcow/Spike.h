#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <time.h>
#include "headers.h"

enum Position
{
	Top,
	Bottom,
	Left,
	Right
};


class CSpike
{
public:
	CSpike(sf::RenderWindow &App, Position pos, float x, float y);
	~CSpike();


	// var. to model 
	sf::Texture modelTexture; // Texture file 
	sf::Sprite model;	      // Model 
	
	void Update();

private:
	//
	sf::RenderWindow  *ptrApp;
	
};

