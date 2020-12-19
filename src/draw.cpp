#include "engine.hpp"

void Engine::draw(){
    window.clear(Color::Black);

    //Draw walls
    for(auto & w : wallSections){
        window.draw(w.getShape());
    }

    //Draw Apple
    window.draw(apple.getSprite());

    //Draw Snake sections
    for(auto & s : snake){
        window.draw(s.getShape());
    }

    //Draw Text
    window.draw(titleText);
    window.draw(currentLevelText);
    window.draw(applesEatenText);
    window.draw(scoreText);

    //Draw GameOver State
    if(currentGameState ==GameState::GAMEOVER){
        window.draw(gameOverText);
        window.draw(pressEnterText);
    }
    window.display();
}