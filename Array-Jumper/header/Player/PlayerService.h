#pragma once

namespace Player
{
	class PlayerController;//forwar declaration
	
	class PlayerService
	{
	private:
		PlayerController* player_controller;

		void destroy();

	public:
		//lifeclycle methord
		PlayerService();
		~PlayerService();

		void initialize();
		void update();
		void render();
	};
}

