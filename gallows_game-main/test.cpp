#include <iostream>
#include <fstream>
#include <vector>
#include <cassert>
#include "word.h"

int main() {
    ///проверка работа функции *передаем количество жизней и количество открытых букв
    assert(runGame(0, 0) == false);
    assert(runGame(1, 0) == false);
    assert(runGame(0, 1) == false);
    assert(runGame(1, 1) == true);
    std::cout << "tests runGame ok" << std::endl;

    Word w1("toy"); ///если слово угадал
    assert(calcCountClosedLetters(w1) == 3);
    w1.openLetters[0] = true;
    assert(calcCountClosedLetters(w1) == 2);
    w1.openLetters[1] = true;
    assert(calcCountClosedLetters(w1) == 1);
    w1.openLetters[2] = true;
    assert(calcCountClosedLetters(w1) == 0);
    std::cout << "tests calcCountClosedLetters ok" << std::endl;

    Word w2("toy"); ///нажатие два раза на одну букву
    assert(calcCountClosedLetters(w2) == 3);
    assert(step('t', w2) == true);
    assert(calcCountClosedLetters(w2) == 2);
    assert(step('t', w2) == false);
    assert(calcCountClosedLetters(w2) == 2);
    assert(step('o', w2) == true);
    assert(calcCountClosedLetters(w2) == 1);
    assert(step('y', w2) == true);
    assert(calcCountClosedLetters(w2) == 0);
    std::cout << "tests step ok" << std::endl;

    Word w3("toy"); /// место черточек саму букву
    assert(createDisplayString(w3) == "_ _ _ ");
    w3.openLetters[1] = true;
    assert(createDisplayString(w3) == "_ o _ ");
    w3.openLetters[2] = true;
    assert(createDisplayString(w3) == "_ o y ");
    w3.openLetters[0] = true;
    assert(createDisplayString(w3) == "t o y ");
    std::cout << "tests createDisplayString ok" << std::endl;
}

