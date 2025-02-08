#pragma once


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

		void destroy();
	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);

	};
}


