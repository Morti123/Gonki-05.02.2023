#include <SFML/Graphics.hpp>
#include "settings.h"

using namespace sf;

int main()
{
    // Объект, который, собственно, является главным окном приложения
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML Works!");
    window.setFramerateLimit(FPS);

    Image Trava; 
    Trava.loadFromFile("trava (3).jpg");
    Texture  Travatexture;
    Travatexture.loadFromImage(Trava);
    Sprite  Travasprite;
    Travasprite.setTexture(Travatexture);
    Travasprite.setPosition(TravaStartPos);

    Image Doroga;
    Doroga.loadFromFile("Doroga (1).png");
    Texture  Dorogatexture;
    Dorogatexture.loadFromImage(Doroga);
    Sprite  Dorogasprite;
    Dorogasprite.setTexture(Dorogatexture);
    Dorogasprite.setPosition(DorogaStartPos);

    Image Pesok;
    Pesok.loadFromFile("Pesok (2).jpg");
    Texture  Pesoktexture;
    Pesoktexture.loadFromImage(Pesok);
    Sprite  Pesoksprite;
    Pesoksprite.setTexture(Pesoktexture);
    Pesoksprite.setPosition(PesokStartPos);

    while (window.isOpen())
    {
        
        Event event;
        while (window.pollEvent(event))
        {
           
            if (event.type == Event::Closed)
                
                window.close();
        }

        window.draw(Travasprite);
        window.draw(Pesoksprite);
        window.draw(Dorogasprite);
        window.display();
    }

    return 0;
}