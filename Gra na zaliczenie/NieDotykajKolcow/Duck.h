#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <time.h>
#include "headers.h"
#include "SFML\Audio.hpp"
extern unsigned uPoints;

 
class CDuck
{
public:
	CDuck(sf::RenderWindow &App, bool tabSpike[]);
	~CDuck();


	// Update Duck model	
	void Update();
	void RandSpike();
	void Jump();

	// gravity
	sf::Vector2f gravity;

	// to change side
	unsigned cSide;
	
	// var. to model 
	sf::Texture modelTexture; // Texture file 
	sf::Sprite model;	      // Model 
	bool *SpikeTab;

	// movement 
	sf::Vector2f modelMove;
private:


	//
	sf::RenderWindow  *ptrApp;

	sf::SoundBuffer sb1, sb2,sb3;
	sf::Sound sound;


};

