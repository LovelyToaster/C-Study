#include <iostream>
using namespace std;
class Matrix
{
    int a[2][3];

public:
    Matrix()
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++)
                a[i][j] = 0;
    };
    Matrix operator+(Matrix &c);
    void display();
    void input();
};
void Matrix::input()
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
}
void Matrix::display()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
Matrix Matrix::operator+(Matrix &c)
{
    Matrix m;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            m.a[i][j] = a[i][j] + c.a[i][j];
    return m;
}
int main()
{
    Matrix A, B, C;
    cout << "请输入2*3矩阵A:" << endl;
    A.input();
    cout << endl;
    cout << "请输入2*3矩阵B:" << endl;
    B.input();
    cout << endl;
    cout << "A=" << endl;
    A.display();
    cout << "B=" << endl;
    B.display();
    C=A+B;
    cout << "A+B=" << endl;
    C.display();
    return 0;
}
