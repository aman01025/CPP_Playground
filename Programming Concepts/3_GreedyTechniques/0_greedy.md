Most greedy problems will be like dealing with min value, max value, top 3 values, etc...

To solve using greedy, we will be probably using or or more of the below:
---> Sorting
---> Heaps

Example-1:
Given two arrays prices and weights containing price and weight of items 'i' in a shop. We have a carrybag of capacity 'k' Kgs and we want to rob the shop. return the array of items you are going to pick!
                
                Items   ->  1   2   3    4
                Prices  -> [90, 20, 50, 100]
                Weights -> [ 9,  1, 25,   2]
                Say carrybag can handle 15 Kgs... i.e. k = 15

Approach:
We will be picking item with best price/weight ratio...
                price/weight ratio: 10, 20, 2, 50
                            item  : 1   2   3  4
So our order of selecting the items will be --->  4->2->1->3 Until the carrybag can hold on!


Example-2:
We are given n activities with their start time Si and end time Ei for the activity i. Return the maximum activities that we can complete..
n = 5
Activity-A --->       S1 |--------------| E1
Activity-B --->               S2 |------------| E2
Activity-C --->                      S3 |--------------| E3
Activity-D --->                                     S4 |-------| E4
Activity-E --->                               S5 |----------------------------| E5

Sol.
Max activities we can do is 3      -->     A->C->D

Approach: Dont think about greedy. Forget greedy.
Our thinking should be to pick the best activity to start. And the best activity for us would be which completes the earliest (So that we can start the next activity immediately)

