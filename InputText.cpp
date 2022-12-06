#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

int project()
{
    // Get the screen resolution and create an SFML window
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    RenderWindow window(VideoMode(resolution.x, resolution.y),
        "Bank Account", Style::Default);

    Font font;
    font.loadFromFile("fonts/bankaccount.ttf");

    string input_text;
    Text text("", font);
    text.move({ 200,200 });

    sf::Clock clock;

    bool show_cursor = false;
    Time text_effect_time;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            else if (event.type == sf::Event::TextEntered) {
                if (std::isprint(event.text.unicode))
                    input_text += event.text.unicode;
            }
            else if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::BackSpace) {
                    if (!input_text.empty())
                        input_text.pop_back();
                }
                if (event.key.code == sf::Keyboard::Return) {
                    input_text += '\n';
                }
            }
        }
        
        text_effect_time += clock.restart();

        if (text_effect_time >= seconds(0.5f))
        {
            show_cursor = !show_cursor;
            text_effect_time = Time::Zero;
        }

        text.setString(input_text + (show_cursor ? '_' : ' '));

        window.clear();
        window.draw(text);
        window.display();
    }
    return 0;
}