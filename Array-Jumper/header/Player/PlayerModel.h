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
		const int max_lives = 3;
		int current_lives;

	public:
		void initialize();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);

		void resetPlayer();
		void resetPosition();
		
		int getCurrentPosition();
		void setCurrentPosition(int new_position);
		
		void decrementLife();
		int getCurrentLives();
		

	};


}

