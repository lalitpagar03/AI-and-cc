#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string name;
    string currentAffairs;
    cout << "Hi, I'm ChatBot! What's your name?"<< endl;
    getline(cin, name);
    cout << "Nice to meet you, " << name << "!" << endl;
    string input;

        cout << "How are you feeling today, " << name << "?" << endl;
        getline(cin, input);
        if (input.find("good") != string::npos || input.find("fine") != string::npos) {
            cout << "I'm glad to hear that!" << endl;
        }
        else if (input.find("not good") != string::npos || input.find("bad") != string::npos) {
            cout << "Oh no, I'm sorry to hear that. Is there anything I can do to help?" << endl;
        }
    while (true) 
    54{
        string input;
        cout << "\n\nHow should i help you , " << name << "?" << endl;
        getline(cin, input);
        if (input.find("current affairs") != string::npos) {
            // Show the latest news
            cout << "Here are the latest current affairs:" << endl;
            cout << "Climate Change: Climate change is a major issue that is affecting the world. Several countries have announced new climate targets to reduce greenhouse gas emissions and slow down the warming of the planet.";
            cout<<"\nTechnology: The technology sector continues to grow rapidly, with advancements in fields like artificial intelligence, blockchain, and quantum computing. There have also been concerns about the role of social media in spreading misinformation and its impact on society.";
            cout<<"\nBusiness and Finance: The global economy has been impacted by the pandemic, with many businesses struggling to survive. There have also been major developments in the financial markets, including the rise of cryptocurrencies and the GameStop stock saga" << endl;
        }
        else if (input.find("sports") != string::npos) {
            // Show information on sports and players
            cout << "Which sport would you like to know about?" << endl;
            getline(cin, input);

            if (input == "cricket") {
                cout << "Here is some information on cricket:" << endl<<"Cricket is a team sport played between two teams, with each team consisting of 11 players. \nThe game is played with a bat and ball, with the objective of scoring as many runs as possible while also trying to dismiss the opposition's players. \nThe team that scores the most runs at the end of the game wins. Cricket matches can be played in different formats, such as Test cricket (which can last up to five days), One Day Internationals (ODIs), and Twenty20 (T20) matches. \nThe sport originated in England and is now played in many countries around the world, with the International Cricket Council (ICC) governing the sport globally.";
                cout<<"\nSachin Tendulkar (India)\nSir Don Bradman (Australia)\nVivian Richards (West Indies)\nJacques Kallis (South Africa)\nWasim Akram (Pakistan)\nShane Warne (Australia)\nBrian Lara (West Indies)\nRicky Ponting (Australia)\nImran Khan (Pakistan)\nMuttiah Muralitharan (Sri Lanka)\nKumar Sangakkara (Sri Lanka)";
            }
            else if (input == "football") {
                cout << "Here is some information on football:" << endl<<"Football, also known as soccer in some countries, is a popular sport played all around the world. \nThe game is played between two teams, with each team consisting of eleven players, including a goalkeeper.\nThe objective of the game is to score more goals than the opposing team.\nThe game is played on a rectangular field, with a goal on each end.\nA match is divided into two halves, each lasting 45 minutes, with a 15-minute break in between.\nThe game begins with a kick-off, with the team that wins the coin toss choosing which end of the field they want to attack.";
                
            }
            else {
                cout << "I'm sorry, I don't have information on that sport." << endl;
            }
        }
        else {
            cout << "I'm sorry, I don't understand. Could you please rephrase?" << endl;
        }
    }

    return 0;
}
