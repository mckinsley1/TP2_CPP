#ifndef Score_hpp
#define Score_hpp

#include <stdio.h>
#include <string>

class Score {
private:
    long highScore;
    std::string login;
    long identifiantPartie;
public:
    Score(std::string login, long identifiantPartie, long highScore);
    Score();
    
    long getHighScore();
    void setHighScore(long highScore);
    
    long getIdentifiantPartie();
    void setIdentifiantPartie(long identifiantPartie);
    
    std::string getLogin();
    void setLogin(std::string login);
    
    bool operator<(const Score& autre_score) const {
        if(autre_score.highScore < this->highScore) {
            return true;
        } else return false;
    }
    
    std::string toString();
};

#endif