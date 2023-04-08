#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <deque>
#include <cstring>
using namespace std;
#define Black 1
#define White 2
class Game
{
    class Node
    {
    public:
        int value;                     // 估值得分/max/min
        int depth;                     // 深度
        char ltx;                      // 最后x坐标
        char lty;                      // 最后y坐标
        Node *father;                  // 父节点
        set<Node *> children;          // 孩子节点
        char ChessBoard[15][15] = {0}; // 棋盘

        int evaluate_black(string s) // 黑色估值
        {
            string patterns[31] = {
                "10000",
                "01000",
                "00100",
                "00010",
                "00001",
                "11000",
                "01100",
                "00110",
                "00011",
                "10100",
                "01010",
                "00101",
                "10010",
                "01001",
                "10001",
                "11100",
                "01110",
                "00111",
                "11010",
                "01101",
                "10110",
                "01011",
                "11001",
                "10011",
                "10101",
                "11110",
                "11101",
                "11011",
                "10111",
                "01111",
                "11111",
            };
            int scores[31] = {
                1,
                1,
                1,
                1,
                1,
                10,
                10,
                10,
                10,
                10,
                10,
                10,
                10,
                10,
                10,
                100,
                100,
                100,
                100,
                100,
                100,
                100,
                100,
                100,
                100,
                10000,
                10000,
                10000,
                10000,
                10000,
                1000000,
            };
            for (int i = 0; i < 31; i++)
            {
                // cout << s << endl;
                return scores[i];
            }
            return 0;
        }

        int evaluate_white(string s) // 白色估值
        {
            string patterns[31] = {
                "20000",
                "02000",
                "00200",
                "00020",
                "00002",
                "22000",
                "02200",
                "00220",
                "00022",
                "20200",
                "02020",
                "00202",
                "20020",
                "02002",
                "20002",
                "22200",
                "02220",
                "00222",
                "22020",
                "02202",
                "20220",
                "02022",
                "22002",
                "20022",
                "20202",
                "22220",
                "22202",
                "22022",
                "20222",
                "02222",
                "22222",
            };
            int scores[31] = {
                1,
                1,
                1,
                1,
                1,
                10,
                10,
                10,
                10,
                10,
                10,
                10,
                10,
                10,
                10,
                1000,
                2000,
                1000,
                1000,
                1000,
                1000,
                1000,
                1000,
                1000,
                1000,
                100000,
                100000,
                100000,
                100000,
                100000,
                10000000,
            };
            for (int i = 0; i < 31; i++)
                if (s == patterns[i])
                {
                    // cout << s << endl;
                    return scores[i];
                }
            return 0;
        }
        Node()
        {
            father = nullptr;
            children.clear();
            value = INT_MIN;
            depth = ltx = lty = 0;
            memset(ChessBoard, 0, sizeof(ChessBoard));
        }

        Node(Node *node, int opeX, int opeY)
        {
            depth = node->depth + 1;
            value = is_max_node() ? INT_MIN : INT_MAX;
            father = node;
            children.clear();
            ltx = opeX;
            lty = opeY;
            memcpy(ChessBoard, node->ChessBoard, sizeof(ChessBoard));
            ChessBoard[ltx][lty] = (depth & 1u) ? '1' : '2';
        }

        bool is_max_node()
        {
            return (depth & 1u) ^ 1u;
        }
        string convert(int str) // int->string
        {

            if (str == 0)
                return "0";
            if (str == 1)
                return "1";
            else
                return "2";
        }

        string board_identify() // 判断输赢
        {
            for (int i = 0; i < 15; i++)
                for (int j = 0; j < 15; j++)
                {
                    if (j + 4 < 15)
                    {
                        string s;
                        for (int k = 0; k < 5; k++)
                            s += convert(ChessBoard[i][j + k]);
                        if (s == "11111")
                            return "1";
                        if (s == "22222")
                            return "2";
                    }
                    if (i + 4 < 15)
                    {
                        string s;
                        for (int k = 0; k < 5; k++)
                            s += convert(ChessBoard[i + k][j]);
                        if (s == "11111")
                            return "1";
                        if (s == "22222")
                            return "2";
                    }
                    if (i + 4 < 15 && j + 4 < 15)
                    {
                        string s;
                        for (int k = 0; k < 5; k++)
                            s += convert(ChessBoard[i + k][j + k]);
                        if (s == "11111")
                            return "1";
                        if (s == "22222")
                            return "2";
                    }
                    if (i + 4 < 15 && j - 4 >= 0)
                    {
                        string s;
                        for (int k = 0; k < 5; k++)
                            s += convert(ChessBoard[i + k][j - k]);
                        if (s == "11111")
                            return "1";
                        if (s == "22222")
                            return "2";
                    }
                }
            return "0";
        }
        void evaluate()
        {
            value = 0;
            for (int i = 0; i < 15; i++)
                for (int j = 0; j < 15; j++)
                {
                    if (j + 4 < 15)
                    {
                        string s;
                        for (int k = 0; k < 5; k++)
                            s += convert(ChessBoard[i][j + k]);
                        // cout << s << endl;
                        value += evaluate_black(s) - evaluate_white(s);
                    }
                    if (i + 4 < 15)
                    {
                        string s;
                        for (int k = 0; k < 5; k++)
                            s += convert(ChessBoard[i + k][j]);
                        value += evaluate_black(s) - evaluate_white(s);
                    }
                    if (i + 4 < 15 && j + 4 < 15)
                    {
                        string s;
                        for (int k = 0; k < 5; k++)
                            s += convert(ChessBoard[i + k][j + k]);
                        value += evaluate_black(s) - evaluate_white(s);
                    }
                    if (i + 4 < 15 && j - 4 >= 0)
                    {
                        string s;
                        for (int k = 0; k < 5; k++)
                            s += convert(ChessBoard[i + k][j - k]);
                        value += evaluate_black(s) - evaluate_white(s);
                    }
                }
            // cout << value << endl;
        }
    };
    int expandRadius = 2;
    int maxDepth = 5;
    Node *nodeRoot = new Node();
    Node *nodeNext = nullptr;
    deque<Node *> openTable;
    deque<Node *> closedTable;
    void set_next_chess()
    {
        nodeNext = *nodeRoot->children.begin();
        for (Node *n : nodeRoot->children)
            if (n->value > nodeNext->value)
                nodeNext = n;
    }
    vector<pair<int, int>> get_search_nodes(Node *node)
    {
        bool hasChess = false, newBoard[15][15];
        memset(newBoard, false, sizeof(newBoard));
        for (int i = 0; i < 15; i++)
            for (int j = 0; j < 15; j++)
            {
                if (node->ChessBoard[i][j] == 0)
                    continue;
                hasChess = true;
                int x1 = max(0, i - expandRadius), x2 = min(14, i + expandRadius);
                int y1 = max(0, j - expandRadius), y2 = min(14, j + expandRadius);
                for (int x = x1; x <= x2; x++)
                    for (int y = y1; y <= y2; y++)
                        if (node->ChessBoard[x][y] == 0)
                            newBoard[x][y] = true;
            }

        vector<pair<int, int>> mask;

        if (!hasChess)
        {
            mask.emplace_back(pair<int, int>(7, 7));
        }
        else
        {
            for (int i = 0; i < 15; i++)
                for (int j = 0; j < 15; j++)
                    if (newBoard[i][j])
                        mask.emplace_back(pair<int, int>(i, j));
        }

        return mask;
    }
    int expand_children_nodes(Node *node)
    {
        vector<pair<int, int>> mask = get_search_nodes(node);
        for (auto pos : mask)
        {
            Node *n = new Node(node, pos.first, pos.second);
            node->children.insert(n);
            openTable.push_front(n);
        }
        return mask.size();
    }
    bool is_alpha_beta_cut(Node *node)
    {
        if (node == nullptr || node->father == nullptr)
            return false;
        if (node->is_max_node() && node->value > node->father->value)
            return true;
        if (!node->is_max_node() && node->value < node->father->value)
            return true;
        return is_alpha_beta_cut(node->father);
    }
    void update_value_from_node(Node *node)
    {
        if (node == nullptr)
            return;
        if (node->children.empty())
        {
            update_value_from_node(node->father);
            return;
        }
        if (node->is_max_node())
        {
            int cntValue = INT_MIN;
            for (Node *n : node->children)
                if (n->value != INT_MAX)
                    cntValue = max(cntValue, n->value);
            if (cntValue > node->value)
            {
                node->value = cntValue;
                update_value_from_node(node->father);
            }
        }
        else
        {
            int cntValue = INT_MAX;
            for (Node *n : node->children)
                if (n->value != INT_MIN)
                    cntValue = min(cntValue, n->value);
            if (cntValue < node->value)
            {
                node->value = cntValue;
                update_value_from_node(node->father);
            }
        }
    }

public:
    Game() = default;

    Game(int maxDepth, int expandRadius) : maxDepth(maxDepth), expandRadius(expandRadius)
    {
    }

    Game(int maxDepth, int expandRadius, int (&ChessBoard)[15][15]) : maxDepth(maxDepth), expandRadius(expandRadius)
    {
        memcpy(nodeRoot->ChessBoard, ChessBoard, sizeof(ChessBoard));
    }
    string game()
    {
        string result = nodeRoot->board_identify();
        if (result == "1")
            return "1";
        if (result == "2")
            return "2";

        openTable.push_back(nodeRoot);
        while (!openTable.empty())
        {
            Node *node = openTable.front();
            openTable.pop_front();
            closedTable.push_back(node);
            if (is_alpha_beta_cut(node->father))
                continue;
            if (node->depth < maxDepth)
            {
                int numExpand = expand_children_nodes(node);
                if (numExpand != 0)
                    continue;
            }
            node->evaluate();
            update_value_from_node(node);
        }

        set_next_chess();
        return "0";
    }
    pair<int, int> get_next_chess()
    {
        if (nodeNext == nullptr)
            return pair<int, int>(-1, -1);
        else
            return pair<int, int>(nodeNext->ltx, nodeNext->lty);
    }

    void show_next_chess()
    {
        if (nodeNext == nullptr)
            cout << "错误！" << endl;
        else
            cout << "(" << nodeNext->ltx << "," << nodeNext->lty << ")" << endl;
    }
};
void play()
{
    cout << endl;
    int x = 0, y = 0;
    int board[15][15]{};
    for (int k = 0; k < 225; k++)
    {
        system("cls");
        Game get = Game(9, 2, board);
        string result = get.game();
        if (result == "1")
        {
            cout << "黑子赢 !" << endl;
            return;
        }
        if (result == "2")
        {
            cout << "白子赢 !" << endl;
            return;
        }
        get.show_next_chess();
        auto chess = get.get_next_chess();
        if (chess.first != -1 && chess.second != -1)
            board[chess.first][chess.second] = 1;
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 15; j++)
            {
                cout << board[j][i] << " ";
            }
            cout << endl;
        }
        do
        {
            cin >> x >> y;
            if (board[x][y] != 0)
                cout << "重复输入!" << endl;
        } while (board[x][y] != 0);
        board[x][y] = 2;
    }
}
int main()
{
    play();
    return 0;
}