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
    
    long getHighScore();
    
    long getIdentifiantPartie();
    
    std::string getLogin();
    
};

#endif