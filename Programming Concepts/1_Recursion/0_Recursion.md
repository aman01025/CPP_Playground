Calling of a function calling itself is called Recursion. Most common exaple would be factorial.

Recursion is used in Backtracking, Dynamic Programming, and most oftenly in trees.

To avoid the infinite calling of the function inside a function, there must be a condition, called "Base Condition" which stops the calling of function recursively at some point.

Example-1:
Sum of 'n' Natural numbers:
    1 + 2 + 3 + .... + (n-1) + n

    sum(n) = sum(n-1) + n
    sum(n-1) = sum(n-2) + (n-1)
    ...
    We can do this until n == 1. When n = 1, just return 1. This n==1 is our Base condition.
    
    Time Complexity: bigO(n)

Whenever a function gets called, it gets some memory in the Stack. The first function which gets the memory is main(). Then main calls some other function and that function will get the memory in the Stack. The memory of this function will get freed once the function gets exited after its return is called.
If the Base Condition is not present or if this condition is not satisfied, the stack memory being limited will get overflowed, viz. called Stack Overflow.


Why recursion is slower than iteration?
Because whenever a function is called from any function, a "transfer of control" takes place from caller to callee. And again when transfer is sent back to the callee. This transfer takes some time.
This involves the  Registers in the CPU... (read about this later)


!!!IMPORTANT!!!
All iteration problems can be solved with Reursion.


Example-2:
Factorial of 'n':
    n! = n * (n-1) * ..... * 3 * 2 * 1
       = n * (n-1)!

    fact(n) = n * fact(n-1)
    Base Condition: if n==1 return 1;

    Time complexity: bigO(n)


Example-3:
    Fibonacci series:
    
    1, 1, 2, 3, 5, 8, 13, ....
    Fib(n) = Fib(n-1) + Fib(n-2)   ;   n->pos
    
    Base Condition: When n = 1 and n = 2, we return 1.

        
    We can't use cout to print the Fibonacci series. We have to store the elements in a data structure and then print the elements.
    Eg: Fib(5) = Fib(4) + Fib(3)
               =   3    +   2     
    and, Fib(4) = Fib(3) + Fib(2)
                =   2    +   1
    So '2'(Fib(3)) will be printed twice. So, the elements will be printed multiple times depending upon the value of n.




Q-1: There is a staircase with 'n' number of stairs. You can either take one step or two steps. How many ways are there to reach the top?

A-1: Refer to code 9_climbTheStairs.cpp

 

Q-2: There is a staircase with 'n' number of stairs. You can either go down one step or two steps. How many ways are there to reach the ground from top of staircase?

A-2: Refer to code 10_downTheStairs.cpp


Q-3: (VERY IMP!!!) 
There is a staircase with 'n' number of stairs. You can either take one step or two steps. An array of length 'n' is given where value at index i represents the cost to step on the ith step. Find the min. cost to reach the top?

Approach-1: You are at ground.. (say at pos i) you check the cost at i+1 and i+2 position, whichever is cheaper you step on it. But, this approach will fail in the scenario [10, 15, 20] your ans: 30  correct ans: 15

Approach-2: You think of iterated from top to bottom. Let's say you are at top pos i. and you check for ith and i-1 pos. This also failed for scenario.. [0,2,2,1] Your ans:3 Correct ans:2

Approach-3(Ans by Fraz) --> If we can get min cost to reach the top from 1st and 2nd pos, we can add the cost of 1st and 2nd pos to those costs and compare the costs for min to reach from 0th to nth.
Hence, we will use recursion


IMPORTANT (by Fraz):
Think of recursion as a tool for now. Don't try to think of the flow of the recursion. Try to just use it as a tool in the code. Learn to use recursion in the code first. Flow will automatically starts to make sense.


Q-4: Two players are playing a game on a board with a number 'n' written on the board. Each player on its turn update the number 'n' to 'n-x' such that 0 < x < n and n%x==0. Game ends if there are no possibilities left for a player to update the number and that player loses. If player 1 starts the game, will it win?

A-4: First of all, the player which ends up with the condition 0 < x < 1 (i.e. n = 1), will lose the game because for all the numbers n>1, 1 can still be chosen as the value of x.

How to use recursion in this problem:
    1. i(n == 1) return 0;   (means player loses) // BASE CONDITION
    2. check for all i = 0; i<n && n%%i == 0
        If there exists a value i for which opponent player loses.
            Opponent player will lose if recFun(n-i) ==0 
        In this case we return 1 because if opponent is losing that means we ae winning
    3. If we are not winning for any of the possible factors, then we return 0 as our defeat.



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





