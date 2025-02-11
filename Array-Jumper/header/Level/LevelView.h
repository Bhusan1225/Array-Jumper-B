#pragma once

#include "LevelController.h"
#include "../../header/UI/UIElement/ImageView.h"


namespace Level
{
	
	class LevelView
	{
	private:
		sf::RenderWindow* game_window;
		LevelController* level_controller;
		
		 

		UI::UIElement::ImageView* background_image;
		const float background_alpha = 110.f;

		BoxDimensions box_dimensions;
		UI::UIElement::ImageView* box_image;



		void createImages();
		void initializeImages();
		void updateImages();
		void drawLevel();
		void deleteImages();
		void calculateBoxDimensions();

	public:
		LevelView(LevelController* controller);
		~LevelView();

		void initialize();
		void update();
		void render();
	};
}








