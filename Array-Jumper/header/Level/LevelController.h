#pragma once
//#include "LevelModel.h"
#include "LevelData.h"

namespace Level
{
	class LevelView; //forward declaration
	class LevelModel;// forward declaration

	
	
	
	class LevelController
	{
	private:
		LevelView* level_view;
		LevelModel* level_model;

		LevelData current_level_data;

	public:
		LevelController();
		~LevelController();

		void initialize();
		void update();
		void render();
		BlockType getCurrentBoxValue(int currentPosition);
	};
}