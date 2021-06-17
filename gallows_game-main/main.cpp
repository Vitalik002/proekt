#include <iostream>
#include <fstream>
#include <vector>
#include <cassert>
#include <SFML/Graphics.hpp>
#include "word.h"

using namespace std;
using namespace sf;


/**
 * играем в нашу игру
 */
void game() {
    srand(time(nullptr));
    string str = selectWordFromFile(); ///выбор слово
    Word w(str);
    int countLives = 6;  ///6 жизней

    char a = w.str[randomInt(w.n)];
    char b = w.str[randomInt(w.n)];
    while (b == a) {
        b = w.str[randomInt(w.n)];
    }
    for (int i = 0; i < w.n; i++) {
        w.openLetters[i] = w.str[i] == a || w.str[i] == b;
    }

    RenderWindow window(sf::VideoMode(400, 300), "gallows_game");

    Font font;
    if (!font.loadFromFile("resources/arial.ttf")) {
        exit(1);
    }

///настройка текста
    Text livesText;
    livesText.setFont(font);
    livesText.setFillColor(sf::Color::Black);
    livesText.setString("lives: " + to_string(countLives));
    livesText.setPosition(Vector2f(10, 10));

    Text textQuestion;
    textQuestion.setFont(font);
    textQuestion.setFillColor(sf::Color::Black);
    textQuestion.setString("What is it?");
    FloatRect textRect = textQuestion.getLocalBounds();
    textQuestion.setOrigin(textRect.width / 2, textRect.height / 2);
    textQuestion.setPosition(Vector2f(float(window.getSize().x) / 2.0f, float(window.getSize().y) / 4.0f));

    Text text;
    text.setFont(font);
    text.setFillColor(sf::Color::Black);
    text.setString(createDisplayString(w));
    textRect = text.getLocalBounds();
    text.setOrigin(textRect.width / 2, textRect.height / 2);
    text.setPosition(Vector2f(float(window.getSize().x) / 2.0f, float(window.getSize().y) / 2.0f));

    Text textTab;
    textTab.setFont(font);
    textTab.setFillColor(sf::Color::Black);
    textTab.setString("tab any letter");
    textRect = textTab.getLocalBounds();
    textTab.setOrigin(textRect.width / 2, textRect.height / 2);
    textTab.setPosition(Vector2f(float(window.getSize().x) / 2.0f, float(window.getSize().y) / 4.0f * 3.0f));

    while (window.isOpen()) {
        Event event{}; ///?
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
            if (event.type == Event::KeyReleased) {
                if (countLives == 0 || calcCountClosedLetters(w) == 0) {
                    window.close();
                }
                Keyboard::Key keycode = event.key.code;
                if (keycode >= Keyboard::A && keycode <= Keyboard::Z) {
                    char letter = static_cast<char>(keycode - Keyboard::A + 'a');
                    bool newLetter = step(letter, w);
                    text.setString(createDisplayString(w));
                    textRect = text.getLocalBounds(); ///получает границы 
                    text.setOrigin(textRect.width / 2, textRect.height / 2);
                    text.setPosition(Vector2f(float(window.getSize().x) / 2.0f, float(window.getSize().y) / 2.0f));
                    if (!newLetter && countLives) {
                        countLives--;
                    }
                    /// игра заканчивается выигрышем или проигрышем и выводом тестка
                    if (!runGame(countLives, calcCountClosedLetters(w))) {
                        if (countLives) {
                            textTab.setString("WIN!!!");
                        } else {
                            textTab.setString("LOSE!!!");
                        }
                        textRect = textTab.getLocalBounds();
                        textTab.setOrigin(textRect.width / 2, textRect.height / 2);
                        textTab.setPosition(Vector2f(
                                float(window.getSize().x) / 2.0f,
                                float(window.getSize().y) / 4.0f * 3.0f)
                        );
                    }
                    livesText.setString("lives: " + to_string(countLives));
                }
            }
        }
///стираем
        window.clear(Color::White);
        window.draw(livesText);
        window.draw(textQuestion);
        window.draw(text);
        window.draw(textTab);
        window.display();
    }
}

int main() {
    game();
    return 0;
}
