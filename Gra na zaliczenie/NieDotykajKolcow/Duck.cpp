#include "Duck.h"


CDuck::CDuck(sf::RenderWindow &App, bool tabSpike[])
{

	srand(time(NULL)); 
	ptrApp = &App;
	cSide = (rand() % 2);

	SpikeTab = tabSpike;
	
	
	// setup model
	if (!modelTexture.loadFromFile(  TEXTURE_FOLDER  "duck.png" )) exit(TEXTURE_NOT_FOUND);

	model.setTexture(modelTexture);
	model.setTextureRect( sf::IntRect( 0, cSide * DUCK_H, DUCK_W, DUCK_H ));
	model.setPosition(WINDOW_X / 2, (WINDOW_Y / 2));
	model.setOrigin(sf::Vector2f(DUCK_W / 2, DUCK_H / 2 ));

	gravity.x = 2.0f;
	gravity.y = 0.2f;


	sb1.loadFromFile( MUSIC_FOLDER "jump.wav" );
	sb2.loadFromFile( MUSIC_FOLDER "reflection.wav"  );
}


CDuck::~CDuck()
{
}


void CDuck::Jump()
{
	modelMove.x = (cSide == 0 ? 1 : -1);
	modelMove.y = -5.0f;

	sound.setVolume(20);
	sound.setBuffer(sb1);
	sound.play();
	 
}
 
void CDuck::Update()
{
	if (model.getPosition().x - (DUCK_W / 2) < 10 )
	{
		cSide = 0;
		uPoints += 1;
		modelMove.x = ( modelMove.x * -1) ;
		CDuck::RandSpike();
		sound.setBuffer(sb2);
		sound.setVolume(100);
		sound.play();
		
	}
	
	if (model.getPosition().x + (DUCK_W / 2) > WINDOW_X-10 )
	{
		cSide = 1;
		uPoints += 1;
		modelMove.x = (modelMove.x * -1) ;
		CDuck::RandSpike();
		sound.setBuffer(sb2);
		sound.setVolume(100);
		sound.play();
	}
	if (model.getPosition().y + (DUCK_H / 2)  > WINDOW_Y - 10) model.setPosition(WINDOW_X / 2, (WINDOW_Y / 2));

	modelMove.x = (cSide == 0 ? 1 : -1 ) * gravity.x;


	modelMove.y += gravity.y;
	model.setTextureRect(sf::IntRect(0, cSide * DUCK_H, DUCK_W, DUCK_H));
	model.move(modelMove);

	

	ptrApp->draw(model);
}


// random Spike

void CDuck::RandSpike()
{
	for (int i = 0; i < static_cast<unsigned>(WINDOW_Y / SPIKE_H); i++)
	{
		SpikeTab[i] = (rand() % 2 == 0 ? false : true);
	}


}