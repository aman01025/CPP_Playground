/*
Two players are playing a game on a board with a number 'n' written on the board. Each player on its turn update the number 'n' to 'n-x' such that 0 < x < n and n%x==0. Game ends if there are no possibilities left for a player to update the number and that player loses. If player 1 starts the game, will it win?
*/

#include<iostream>
#include<vector>

int game(int n, std::vector<int>& dp)
{
    //Think of this function as a prototype for the game

    if(n==1)
    {
        return 0;
    }
    for(int i = 1; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            if(game(n-i)==0)
            {
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
    int n;
    std::cout << "Enter the starting value for the board game: ";
    std::cin >> n;
    std::vector<int> dp(n, -1);
    std::cout << std::endl << game(n, dp) << std::endl;    
    return 0;
}