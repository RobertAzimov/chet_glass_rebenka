#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("CHCP 1251");
    string X, Y, K, Z, G;
    K = "�����";
    Z = "�������";
    G = "�������";
    cout << "����������� �������� ������ � ������������ �������� ���� " << endl;
    cout << "������� ���� ���� �������� 1 ";
    cin >> X;
    cout << "������� ���� ���� �������� 2 ";
    cin >> Y;
    cout << " ���� ���� ������� ";
    if ((X == K) && (Y == K))
    {
        cout << K << " 75 % ";
        cout << Z << " 18 % ";
        cout << G << " 7 % " << endl;

    }
    if ((X == K) && (Y == Z) || (X == Z) && (Y == K))
    {
        cout << K << " 50 % ";
        cout << Z << " 78 % ";
        cout << G << " 12 % " << endl;

    }
    if ((X == K) && (Y == G) || (X == G) && (Y == K))
    {
        cout << K << " 50 % ";
        cout << Z << " 0 % ";
        cout << G << " 50 % " << endl;

    }
    if ((X == Z) && (Y == Z))
    {
        cout << K << " 1 % ";
        cout << Z << " 75 % ";
        cout << G << " 24 % " << endl;

    }
    if ((X == Z) && (Y == G) || (X == G) && (Y == Z))
    {
        cout << K << " 0 % ";
        cout << Z << " 50 % ";
        cout << G << " 50 % " << endl;

    }
    if ((X == G) && (Y == G))
    {
        cout << K << " 0 % ";
        cout << Z << " 1 % ";
        cout << G << " 99 % " << endl;

    }

}