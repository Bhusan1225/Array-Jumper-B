#pragma once
#include "../../header/Event/EventService.h"
#include "MovementDirection.h"


namespace Player
{
	class PlayerView;       //forward declaration
	class PlayerModel;      //forward declaration
	enum class PlayerState; //forward declaration
	
	class PlayerController
	{

	private:

		PlayerModel* player_model;
		PlayerView* player_view;
		
		Event::EventService* event_service;

		void destroy();
	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);
		int getCurrentPosition();
		void move(MovementDirection direction);
		void readInput();
		bool isPositionInBound(int targetPosition);
		void jump(MovementDirection direction);
		void takeDamage();
		void resetPlayer();
	};
}


