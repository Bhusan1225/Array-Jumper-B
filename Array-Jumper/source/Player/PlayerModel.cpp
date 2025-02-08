#include "../../header/Player/PlayerModel.h"


namespace Player
{

	
	PlayerModel::PlayerModel() :current_position(0){} //here initialize the position 0


	void PlayerModel::initialize()
	{

	}

	int PlayerModel::getPlayerPosition() //get the player health 
	{
		return current_position;
	}

	void PlayerModel::setPlayerPosition(int new_Position) //set the player health
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

}