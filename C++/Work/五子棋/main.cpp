#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define Black 1
#define White 2
#define SIZE 15
int ChessBoard[SIZE][SIZE] = {0};

string func(int *arr)
{
    string str;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        str += to_string(arr[i]);
    }
    return str;
}

vector<string> evaluates;

struct Pattern
{
    string pattern;
    int score;
};

vector<Pattern>
    patterns{
        {"11111", 50000},
        {"011110", 4320},
        {"011100", 720},
        {"001110", 720},
        {"011010", 720},
        {"010110", 720},
        {"11110", 720},
        {"01111", 720},
        {"11011", 720},
        {"10111", 720},
        {"11101", 720},
        {"001100", 120},
        {"001010", 120},
        {"010100", 120},
        {"000100", 20},
        {"001000", 20},
    };

class Position
{
public:
    int x;
    int y;
    int hm_type;
    int ai_type = 3 - hm_type;
};

class AIService
{
public:
    void PositionX(int x, int y)
    {
        string str;
        int i1 = 0;
        int chessdata[9] = {0};
        for (int i = x - 4; i < x + 4; i++)
        {
            if (i < 0)
                continue;
            if (i > 14)
                break;
            chessdata[i1] = ChessBoard[i][y];
            i1++;
        }
        str = func(chessdata);
        evaluates.push_back(str);
    }
    void PositionY(int x, int y)
    {
        string str;
        int i1 = 0;
        int chessdata[9] = {0};
        for (int i = y - 4; i < y + 4; i++)
        {
            if (i < 0)
                continue;
            if (i > 14)
                break;
            chessdata[i1] = ChessBoard[x][i];
            i1++;
        }
        str = func(chessdata);
        evaluates.push_back(str);
    }
    void PositionXY(int x, int y)
    {
        string str;
        int i1 = 0;
        int j = y - 4;
        int chessdata[9] = {0};
        for (int i = x - 4; i < x + 4; i++)
        {
            if (i < 0)
                continue;
            if (i > 14)
                break;
            j++;
            chessdata[i1] = ChessBoard[x][y];
            i1++;
        }
        str = func(chessdata);
        evaluates.push_back(str);
    }
    void PositionYX(int x, int y)
    {
        string str;
        int i1 = 0;
        int j = y + 4;
        int chessdata[9] = {0};
        for (int i = x - 4; i < x + 4; i++)
        {
            if (i < 0)
                continue;
            if (i > 14)
                break;
            j--;
            chessdata[i1] = ChessBoard[x][y];
            i1++;
        }
        str = func(chessdata);
        evaluates.push_back(str);
    }
    int Point(int x, int y)
    {
        int score = 0;
        PositionX(x, y);
        PositionY(x, y);
        PositionXY(x, y);
        PositionYX(x, y);
        for (int i = 0; i < evaluates.size(); i++)
        {
            for (int j = 0; j < patterns.size(); j++)
            {
                if (evaluates[i] == patterns[j].pattern)
                {
                    score += patterns[j].score;
                }
            }
        }
        // cout << score;
        return score;
    }
    Position BestPoint()
    {
        int score = 0;
        int var = 0;
        Position best;
        best.x = 0;
        best.y = 0;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (ChessBoard[i][j] != 0)
                    continue;
                score = Point(i, j);
                if (score > var)
                {
                    var = score;
                    best.x = i;
                    best.y = j;
                }
            }
        }
        cout << endl;
        cout << best.x << " " << best.y << endl;
        ChessBoard[best.x][best.y] = 2;
        return best;
    }
};
class PeopleService
{
public:
    void test()
    {
        Position people;
        cin >> people.x >> people.y;
        ChessBoard[people.y - 1][people.x - 1] = 1;
    }
};
int main()
{
    AIService aitest;
    PeopleService pptest;
    while (1)
    {
        aitest.BestPoint();
        pptest.test();
    }
    return 0;
}