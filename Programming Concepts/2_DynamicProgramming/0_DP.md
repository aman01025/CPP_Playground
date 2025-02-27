Dynamic Programming is a concept of memorization by storing the output. In recursion, we use DP to save the output of the fucntion we sometimes have to call for multiple times for the same paramter.

This makes recursion faster.


Example-1:
Fibonacci series:

1, 1, 2, 3, 5, 8, 13, ....
Fib(n) = Fib(n-1) + Fib(n-2)   ;   n->pos

Base Condition: When n = 1 and n = 2, we return 1.

Eg: Fib(5) = Fib(4) + Fib(3)
            =   3    +   2     
and, Fib(4) = Fib(3) + Fib(2)
            =   2    +   1

Here, we can see that Fib(3) is getting called twice, and for larger values of n, smaller values will be called for multiple times.
This can be avoided by storing the return values and use them instead of recalling the function.
Refer to the code.




Q-1: There is a staircase with 'n' number of stairs. You can either take one step or two steps. How many ways are there to reach the top?

In this expample as well, we calculate no. of ways from higher steps to reach the top again and again. So, here also we can store the no of ways from particular step, say i, to reach the top and use it again.
A-1: Refer to code 2_climbTheStairs_DP.cpp


Q-2: There is a staircase with 'n' number of stairs. You can either take any number of steps between 1 to k. Find the number of to reach the top?
A-2: Refer to code 3_climbTheStairsWithkSteps_DP.cpp



Q-3: Two players are playing a game on a board with a number 'n' written on the board. Each player on its turn update the number 'n' to 'n-x' such that 0 < x < n and n%x==0. Game ends if there are no possibilities left for a player to update the number and that player loses. If player 1 starts the game, will it win?
A-3: Refer to code 



######## SUBSET OF AN ARRAY ############

The idea is to include an element in one step and ignore it one step...

                           {1,2,3}        ---> ss1     
                         /
                   1,2,_  
                 /       \
                /          {1,2,_}        ---> ss2
          1,_,_            
        /       \         {1,_,3}         ---> ss3
       /         \      /
{1,2,3}           1,_,_  
       \                \
        \                 {1,_,_}         ---> ss4    
         \
          \                    {_,2,3}    ---> ss5           
           \                  /     
            \            _,2,_                     
             \         /      \
              \       /        {_,2,_}    ---> ss6
                _,_,_         
                      \        {_,_,3}    ---> ss7
                       \      /
                         _,_,_ 
                              \              
                                {_,_,_}   ---> ss8

From the above diagram, in step-1, we excluded '1' and included '1' to create 2 possibilities,
in step-2, we excluded '2' and included '2' to create 2x2 possibilities, and finally,
in step-3, we excluded '3' and included '3' to create 2x2x2 = 8 possible subsets.



Q-5: Generate Valid Paranthesis for n
If n = 1; Ans -> {()}
if n = 2, Ans -> {()(), (())}
if n = 3, Ans -> {((())), ()()(), (())(), ()(()), (()())} -> Total 5

A-5: Just memorize the code for now. Write an explation later.




############# N-Queen Problem ############
How many queens can you placed on an n*n chess board such that they don't kill each other?




Apart from the concept of memorization, there is another type of DP called tabularization. This can replace the recursion. Refer to the program 5_robbingHouses.cpp
Problem statement:-
A professional robber is planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.


