#include "../../header/Player/PlayerModel.h"


namespace Player
{

	
	//PlayerModel::PlayerModel() :current_position(0){} //here initialize the position 0


	void PlayerModel::initialize()
	{
		player_state = PlayerState::ALIVE;
	}



	void PlayerModel::setCurrentPosition(int new_Position)
	{
		current_position = new_Position;
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////

	PlayerState PlayerModel::getPlayerState() // get the player state
	{
		
		return player_state;
	}

	void PlayerModel::setPlayerState(PlayerState new_State) //set the player state
	{
		player_state = new_State;

	}

	int PlayerModel::getCurrentPosition() { return current_position; }
	int PlayerModel::getCurrentLives() { return current_lives; }

	void PlayerModel::resetPlayer()
	{
		current_position = 0;
		player_state = PlayerState::ALIVE;
		current_lives = max_lives;
	}
	void PlayerModel::resetPlayer()
	{
		current_position = 0;
			
	}

	void PlayerModel::decrementLife() { current_lives--; }
}