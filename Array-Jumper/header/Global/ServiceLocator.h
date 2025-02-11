#pragma once
#include "../../header/Graphics/GraphicService.h"
#include "../../header/Event/EventService.h"
#include "../../header/UI/UIService.h"
#include "../../header/Sound/SoundService.h"
#include "..//../header/Player/PlayerService.h"
#include "..//../header/Level/LevelService.h"

namespace Global
{
    class ServiceLocator
    {
    private:
        Graphics::GraphicService* graphic_service;
        Event::EventService* event_service;
        Sound::SoundService* sound_service;
        UI::UIService* ui_service;
        Player::PlayerService* player_service;//--------------added the player services (bhusan)
        Level::LevelService* level_service;//--------------added (bhusan)
        ~ServiceLocator();

        void createServices();
        void clearAllServices();

    public:
        ServiceLocator();
        static ServiceLocator* getInstance();

        void initialize();
        void update();
        void render();

        Graphics::GraphicService* getGraphicService();
        Event::EventService* getEventService();
        Sound::SoundService* getSoundService();
        UI::UIService* getUIService();
        Player::PlayerService* getPlayerService();//--------------------- added getter methord (bhusan)
        Level::LevelService* getLevel_service();  //--------------------- added getter methord (bhusan)


    };


}
    