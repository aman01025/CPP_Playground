#include <iostream>
#include <vector>

#define LOG(x) "std::cout << " x
#define END "<< std<<endl;"

class Heap
{
    int heapArr[1000] = {0};
    int heapSize = 0;

public:
    void deleteTop();
    void insertElement(int);
    int Top();
    void printHeap();
};

void Heap::deleteTop()
{
    if (!heapArr)
    {
        LOG("Empty Heap");
        return;
    }
    heapArr[1] = heapArr[heapSize];
    int i = 1;
    while (i < heapSize)
    {
        if ((2 * i + 1) <= heapSize)
        {
            if (heapArr[2*i] > heapArr[2*i + 1] && heapArr[2*i] > heapArr[i])
            {
                int temp = heapArr[2 * i];
                heapArr[2 * i] = heapArr[i];
                heapArr[i] = temp;
                i = 2 * i;
            }
            else if(heapArr[2*i] < heapArr[2*i + 1] && heapArr[2*i + 1] > heapArr[i])
            {
                int temp = heapArr[2 * i + 1];
                heapArr[2 * i + 1] = heapArr[i];
                heapArr[i] = temp;
                i = 2 * i + 1;
            }
        }
        else if(2*i <= heapSize)
        {
            if (heapArr[2 * i] > heapArr[i])
            {
                int temp = heapArr[2 * i];
                heapArr[2 * i] = heapArr[i];
                heapArr[i] = temp;
                i = 2 * i;
            }
        }
        else
        {
            break;
        }
    }
    heapSize--;
}

void Heap::insertElement(int val)
{
    // std::cout << "Val: " << val << std::endl;
    int i = heapSize + 1;
    heapArr[i] = val;
    while (i / 2 > 0 && heapArr[i / 2] < heapArr[i])
    {
        int temp = heapArr[i / 2];
        heapArr[i / 2] = heapArr[i];
        heapArr[i] = temp;
        i = i / 2;
    }
    heapSize++;
}

int Heap::Top()
{
    if (heapSize)
    {
        return heapArr[1];
    }
    return 0;
}

void Heap::printHeap()
{
    std::cout << "Heap: ";
    for (int i = 1; i <= heapSize; i++)
    {
        std::cout << heapArr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v = {8, 9, 7, 6, 2, 10, 5};
    Heap heap;
    for (int x : v)
    {
        heap.insertElement(x);
        std::cout << "Top: " << heap.Top() << std::endl;
        heap.printHeap();
        std::cout << std::endl;
    }
    heap.deleteTop();
    heap.printHeap();
}