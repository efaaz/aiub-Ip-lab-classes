#include <iostream>
#include <string>
using namespace std;

struct FootballPlayer
{
    string name;
    int jerseyNumber;
    int goalScored;
    int goalAssists;
    int gamesPlayed;

    void playerInfo(string name, int num, int score, int assist, int played)
    {
        this->name = name;
        this->jerseyNumber = num;
        this->goalScored = score;
        this->goalAssists = assist;
        this->gamesPlayed = played;
    }

    float goalInvolvementRatio()
    {
        if (gamesPlayed == 0) return 0;
        float ratio = (float)(goalScored + goalAssists) / gamesPlayed;
        return ratio;
    }
};

int main()
{
    FootballPlayer P1, P2;
    P1.playerInfo("Harry", 3, 18, 6, 30);
    P2.playerInfo("John", 8, 22, 3, 30);

    cout << "Player 1 Goal Involvement Ratio: " << P1.goalInvolvementRatio() << endl;
    cout << "Player 2 Goal Involvement Ratio: " << P2.goalInvolvementRatio() << endl;

    return 0;
}