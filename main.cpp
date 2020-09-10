#include <iostream>
#include <fstream>
#include <stack>
#include "Score.hpp"

using namespace std;
int main() {
  stack<Score> scores;

  ifstream lecteur("asterostorm.txt");
    
    while (lecteur.eof() == false) {
        if(!lecteur.eof()) {
            long identifiantPartie;
            lecteur >> identifiantPartie;

            string login;
            lecteur >> login;

            long highScore;
            lecteur >> highScore;

            Score score = Score(login, identifiantPartie, highScore);

            scores.push(score);
            
            
        }
    }

    lecteur.close();

    for(score : scores) {
      cout << scores.top().getLogin() << " " << scores.top().getIdentifiantPartie() << " = " << scores.top().getHighScore() << endl;

      scores.pop();
    }
    
    
}