#ifndef SNAKELADDER_H
#define SNAKELADDER_H

#include <iostream>
#include <string>

class snakesAndladders
{
public:
    bool leavingGame();

    void draw_line(int n, char ch);
    void board();
    void gamescore(const std::string* playerNames, const int* playerPositions, int playerCount, int rounds);
    void play_dice(int& score);
    int findPlayerPosition(const std::string& playerName, const std::string* pNames, const int* pPositions, int playerCount);
};

#endif // SNAKELADDER_H