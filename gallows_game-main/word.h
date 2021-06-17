#include <iostream>
#include <cassert>
#include <vector>

/**
 * слово для игры
 */
class Word {

public:
    /**
     * конструктор слова
     * @param word слово для игры
     */
    explicit Word(const std::string &word) {
        this->str = word;
        this->n = int(word.length());
        for (int i = 0; i < n; i++) {
            this->openLetters.push_back(false);
        }
    }

    /**
     * количество букв в слове
     */
    int n;

    /**
     * вектор для хранения признаков открытости букв
     */
    std::vector<bool> openLetters;

    /**
     * загаданное слово
     */
    std::string str;
};

/**
 * создание случайного целого числа от 0 до n
 * @param n верхняя граница требуемого числа, целое число больше 0
 * @return целое число от 0 до n
 */
int randomInt(int n) {
    return rand() % n;
}

/**
 * выбор слова из файла-словаря words.txt
 * @return строка - слово
 */
std::string selectWordFromFile() {
    int number = randomInt(10);///выбираем слово из файла
    std::string str;
    std::ifstream file("resources/words.txt");
    for (int i = 0; i < number; i++) {
        getline(file, str);
    }
    file.close();
    return str;
}

/**
 * подсчет количества закрытых букв
 * @param w слово типа Word
 * @return количества закрытых букв в слове
 */
int calcCountClosedLetters(const Word &w) {
    int countClosedLetters = 0; ///счетчик закрытых букв
    for (int i = 0; i < w.n; i++) {
        if (!w.openLetters[i]) {
            countClosedLetters++;
        }
    }
    return countClosedLetters;
}

/**
 * проверка продолжения игры
 * @param countLives количество оставшихся жизней, число от 0 до 6
 * @param countClosedLetters количество закрытых букв в слове
 * @return признак продолжения игры
 */
bool runGame(int countLives, int countClosedLetters) {
    return countLives && countClosedLetters;
}

/**
 * ход игры
 * @param letter буква которую ввел пользователь
 * @param w слово типа Word
 * @return признак успеха игрока
 */
bool step(char letter, Word &w) {
    bool newLetter = false;
    for (int i = 0; i < w.n; i++) {
        if (w.str[i] == letter && !w.openLetters[i]) {
            w.openLetters[i] = true;
            newLetter = true;
        }
    }
    return newLetter;
}

/**
 * вывод текущего состояния игры
 * @param w слово типа Word
 */
std::string createDisplayString(Word w) {
    std::string s;
    for (int i = 0; i < w.n; i++) {
        if (w.openLetters[i]) {
            s += w.str.at(i);
        } else {
            s += "_";
        }
        s += " ";
    }
    return s;
}

