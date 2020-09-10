#include <iostream>
#include <fstream>
#include <stack>
#include "Score.hpp"
using namespace std;

stack<Score> sortStack(stack<Score> &input) 
{ 
    stack<Score> tmpStack; 
  
    while (!input.empty()) 
    { 
        // pop out the first element 
        Score tmp = input.top(); 
        input.pop(); 
  
        // while temporary stack is not empty and top 
        // of stack is greater than temp 
        while (!tmpStack.empty() && tmpStack.top().getHighScore() > tmp.getHighScore()) 
        { 
            // pop from temporary stack and push 
            // it to the input stack 
            input.push(tmpStack.top()); 
            tmpStack.pop(); 
        } 
  
        // push temp in tempory of stack 
        tmpStack.push(tmp); 
    } 
  
    return tmpStack; 
} 


int main() {
  stack<Score> scores;

  ifstream lecteur("hiscore.txt");
    
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

    stack<Score> scoresSorted = sortStack(scores);

    while(!scoresSorted.empty()) {
      ofstream fichier;

      fichier.open("asterostorm.txt", std::ios::app);
      fichier << scoresSorted.top().getLogin() << endl;
      fichier << scoresSorted.top().getIdentifiantPartie() << endl;
      fichier << "Asterostorm=" << scoresSorted.top().getHighScore() << endl;
      scoresSorted.pop();
      
      fichier.close();
    }
    
    
}