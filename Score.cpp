#include "Score.hpp"
#include <string>

Score::Score (std::string login, long identifiantPartie, long highScore) {
    this->login = login;
    this->identifiantPartie = identifiantPartie;
    this->highScore = highScore;
};

std::string Score::getLogin() {
    return login;
}

long Score::getIdentifiantPartie() {
    return identifiantPartie;
}

long Score::getHighScore() {
    return highScore;
}
