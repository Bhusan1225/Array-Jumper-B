#include "../../header/Level/LevelView.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Global/Config.h"

namespace Level
{
	using namespace Global;
	using namespace UI::UIElement;
	using namespace Level;

	LevelView::LevelView(LevelController* controller)
	{
		game_window = nullptr;
		level_controller = controller;
		createImages();
	}

	LevelView::~LevelView()
	{
		deleteImages();
	}

	void LevelView::initialize()
	{
		game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		calculateBoxDimensions();
		initializeImages();
	}

	void LevelView::update()
	{
		updateImages();
	}

	void LevelView::render()
	{
		drawLevel();
	}



	/// /////////////////////////////////////////////////////////////////////////////////////////// helper functions - starts here


	void LevelView::createImages() //---------------------------------helping constructor(levelview)
	{
		background_image = new ImageView();
		box_image = new ImageView();
	}

	void LevelView::initializeImages()//------------------------------helping initialize();
	{
		//background image
		background_image->initialize(Config::array_jumper_bg_texture_path, game_window->getSize().x, game_window->getSize().y, sf::Vector2f(0, 0));
		background_image->setImageAlpha(background_alpha);

		//box image
		box_image->initialize(Config::box_texture_path, box_dimensions.box_width, box_dimensions.box_height, sf::Vector2f(0, 0));


	}

	void LevelView::updateImages()
	{
		background_image->update();//---------------------------------helping update();
		box_image->update();
	}

	void LevelView::drawLevel()//-------------------------------------helping render();
	{
		background_image->render();
		box_image->render();
	}

	void LevelView::deleteImages() //---------------------------------helping deconstructor();
	{
		delete(background_image);
		deleteImages();
	}

	void LevelView::calculateBoxDimensions()
	{
		if (!game_window) return; //Return if there is no game window

		box_dimensions.box_width = 300.f;
		box_dimensions.box_height = 300.f;
	}
}