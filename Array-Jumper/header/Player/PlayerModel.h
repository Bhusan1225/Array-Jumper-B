#pragma once


namespace Player 
{

	enum class PlayerState {
		ALIVE, DEAD
	};

	class PlayerModel
	{
	private:
		int current_position;
		PlayerState player_state;


	public:
		PlayerModel();

		int getPlayerPosition(); //getter
		void setPlayerPosition(int  new_Position); //setter - set the player position


		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_State);


	};


}

