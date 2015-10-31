#include <iostream>
#include <cmath>
#include <vector>
#include <SFML/Graphics.hpp>

#include "vessel.hpp"

void Vessel::update()
{
	//Nop
}

Vessel::Vessel(sf::RenderWindow* app, TextureManager* texmgr)
{

	int height = app->getSize().y;
	int width  = app->getSize().x;

	//Init texture
	this->sprite = new sf::Sprite;
	this->tex = &texmgr->getRef("tks_shell.png");

	sprite->setTexture(*tex);
	sprite->setOrigin((tex->getSize().x) / 2, (tex->getSize().y) / 2); //Middle of image
	sprite->setPosition(width/2, height/2); //Middle of screen
	sprite->setRotation(0);
	sprite->setScale(2, 2);
}

/* void Vessel::draw_panel(Game *game)
{
	switch(game->player.cur_panel)
	{
		case Player::COMPUTER:

			break;
		default:
			//uhhh
			game->player.cur_state = Player::FREE;
			game->player.cur_panel = Player::NONE;
			break;
	}
} */

void Vessel::render(sf::RenderWindow *win)
{
	win->draw(*sprite);
}
