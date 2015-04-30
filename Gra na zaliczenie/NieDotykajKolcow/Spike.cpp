#include "Spike.h"


CSpike::CSpike(sf::RenderWindow &App, Position pos, float x, float y)
{
	srand(time(NULL));
	ptrApp = &App;
	

	// setup model
	if (!modelTexture.loadFromFile(  TEXTURE_FOLDER "spike.png" )) exit(TEXTURE_NOT_FOUND);

	model.setTexture(modelTexture);
	int alpha = 0;
	model.setTextureRect(sf::IntRect(0, 0,  SPIKE_W,  SPIKE_H));
	switch (pos)
	{
	case Top:
		alpha = 90;
		model.setPosition(x, y);
		break;
	case Bottom:
		alpha = 270;
		model.setPosition(x, WINDOW_Y - 10 );
		break;
	case Left:
		alpha = 0;
		model.setPosition(x, y);
		break;
	case Right:
		alpha = 180;
		model.setPosition(WINDOW_X - 10, y);
		break;
	default:
		break;
	}
	

	model.rotate(alpha);
	 

}


CSpike::~CSpike()
{
}


void CSpike::Update()
{
	ptrApp->draw(model);
}