#include <iostream>
#include <string>

using namespace std;

class TicTacToe
{
private:
    char grid[9];
    char waiting;
    int getFieldInput()
    {

        cout << "123" << endl
             << "456" << endl
             << "789" << endl;
        cout << "Select empty field: ";

        int field;
        cin >> field;
        cout << endl;

        return field;
    }

public:
    char onTurn;
    TicTacToe()
    {
        for (int i = 0; i < 9; i++)
        {
            grid[i] = ' ';
        }
        onTurn = 'X';
        waiting = 'O';
    }
    void print()
    {
        cout << grid[0] << " | " << grid[1] << " | " << grid[2] << endl;
        cout << grid[3] << " | " << grid[4] << " | " << grid[5] << endl;
        cout << grid[6] << " | " << grid[7] << " | " << grid[8] << endl;
    }
    bool checkForWin()
    {
        if (grid[0] == onTurn && grid[1] == onTurn && grid[2] == onTurn ||
            grid[3] == onTurn && grid[4] == onTurn && grid[5] == onTurn ||
            grid[6] == onTurn && grid[7] == onTurn && grid[8] == onTurn ||
            grid[0] == onTurn && grid[4] == onTurn && grid[8] == onTurn ||
            grid[6] == onTurn && grid[4] == onTurn && grid[2] == onTurn ||
            grid[0] == onTurn && grid[3] == onTurn && grid[6] == onTurn ||
            grid[1] == onTurn && grid[4] == onTurn && grid[7] == onTurn ||
            grid[2] == onTurn && grid[5] == onTurn && grid[8] == onTurn)
        {
            return true;
        }
        return false;
    }

    void turn()
    {
        cout << onTurn << " is on turn." << endl;

        int field = getFieldInput();

        field--;

        while (grid[field] == onTurn || grid[field] == waiting)
        {
            field = getFieldInput();
        }

        grid[field] = onTurn;

        print();
    }
    void swap()
    {
        char tmp = onTurn;
        onTurn = waiting;
        waiting = tmp;
    }
};

int main()
{
    TicTacToe game;

    game.print();
    while (true)
    {
        game.turn();
        if (game.checkForWin())
        {
            cout << game.onTurn << " has won." << endl;
            return 0;
        }
        game.swap();
    }

    return 0;
}