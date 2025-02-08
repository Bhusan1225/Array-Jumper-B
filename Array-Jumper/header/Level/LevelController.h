#pragma once
#include "LevelModel.h"

namespace Level
{
	class LevelView; //forward declaration
	class LevelModel;// forward declaration

	
	
	
	class LevelController
	{
	private:
		LevelView* level_view;
		LevelModel* level_model;

	public:
		LevelController();
		~LevelController();

		void initialize();
		void update();
		void render();
	};
}