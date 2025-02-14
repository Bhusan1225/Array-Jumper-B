#pragma once


namespace Player 
{

	enum class PlayerState 
	{
		ALIVE, 
		DEAD
	};

	class PlayerModel
	{
	private:
		int current_position;
		PlayerState player_state;


	public:
		void initialize();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);

		void resetPlayer();
		//void resetPosition();
		
		int getCurrentPosition();
		void setCurrentPosition(int new_position);
		
		/*void decreamentLife();
		int getCurrentLives();*/
		

	};


}

