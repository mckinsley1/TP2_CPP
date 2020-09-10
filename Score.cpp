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
void Score::setLogin(std::string login) {
    this->login = login;
}

long Score::getIdentifiantPartie() {
    return identifiantPartie;
}
void Score::setIdentifiantPartie(long identifiantPartie) {
    this->identifiantPartie = identifiantPartie;
}

long Score::getHighScore() {
    return highScore;
}
void Score::setHighScore(long highScore) {
    this->highScore = highScore;
}

std::string Score::toString() {
    return login;
}