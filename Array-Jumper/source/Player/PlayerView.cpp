#include "../../header/Player/PlayerView.h"
#include "../../header/Global/Config.h" 
#include "../../header/Global/ServiceLocator.h" 

using namespace UI::UIElement;
using namespace Global;

namespace Player 
{

	PlayerView::PlayerView()
	{
		game_window = nullptr;
		player_image = new ImageView();

	}

	PlayerView::~PlayerView() {}

	void PlayerView::initialize()
	{
		game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}

	void PlayerView::update()
	{
		//Yet to implement
	}

	void PlayerView::render()
	{
		drawPlayer();
	}

	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();//------------------player dimention
		initializePlayerImage();    //------------------player image
	}

	void PlayerView::calculatePlayerDimensions() //player dimention
	{
		//temporary value of the player - we will change after we decide the box dimention
		player_height = 1000.f;
		player_width = 1000.f;
	}

	void PlayerView::initializePlayerImage() //player image
	{
		player_image->initialize(Config::character_texture_path, player_width,player_height, sf::Vector2f(0, 0));
	}

	sf::Vector2f PlayerView::calculatePlayerPosition()
	{
		return sf::Vector2f(0, 0);
	}
	
	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calculatePlayerPosition());
	}

	void PlayerView::drawPlayer()
	{
		player_image->render();
	}
}