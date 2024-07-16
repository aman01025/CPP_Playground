#include<iostream>
#include<vector>
using namespace std;

bool isSafePos(int i, int j, vector<string> &board)
{
    /*
        We check if the position (i,j) is safe to place a queen or not. For this, we
        check the following directions: Top, Top-left and top-right
        We wont check for left-right as once we place a queen, we move to next row so
        already know no queen is present in the current row, and,
        since we are moving top to bottom, we wont have to check any of the bottom rows
    */
    bool flag = false;
    //Checking top-left
    int x = i, y = j;
    while(x >= 0 && y >= 0)
    {
        if(board[x][y] == 'Q')
        {
            flag = true;
        }
        x--;
        y--;
    }
    if(flag)
    {
        return false;
    }

    //Checking top
    x = i, y = j;
    while(x >= 0)
    {
        if(board[x][y] == 'Q')
        flag = true;
        x--;
    }
    if(flag)
    {
        return false;
    }

    x = i, y = j;
    while(x >= 0 && y < board[i].size())
    {
        if(board[x][y] == 'Q')
        {
            flag = true;
        }
        x--;
        y++;
    }
    if(flag)
    {
        return false;
    }

    //If no killing queen found...
    return true;
}


void placeQueen(int i, vector<string>& board, vector<vector<string>>& ans)
{
    if(i == board.size())
    {
        ans.push_back(board);
    }
    else
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            if(isSafePos(i, j, board))
            {
                board[i][j] = 'Q';
                placeQueen(i+1, board, ans);
                board[i][j] = '.';
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the board: ";
    cin >> n;
    vector<string> board;
    string temp;
    for(int i = 0; i < n; i++)
    {
        temp += ".";
    }
    for(int i = 0; i < n; i++)
    {
        board.push_back(temp);
    }
    vector<vector<string>> res;
    for(auto str : board)
    {
        //cout << str << endl;
    }
    placeQueen(0, board, res);
    for(auto x : res)
    {
        for(auto str : x)
        {
            cout << str << endl;
        }
        cout << "\n\n\n";
    }
    return 0;
}