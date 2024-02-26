#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> allSubsetOfArray(vector<int> &v, int i)
{
    if (i >= v.size())
    {
        return {{}};
    }
    vector<vector<int>> tempAns = allSubsetOfArray(v, i + 1);
    vector<vector<int>> finalAns;
    for (vector<int> x : tempAns)
    {
        finalAns.push_back(x);
    }
    for (vector<int> x : tempAns)
    {
        x.push_back(v[i]);
        finalAns.push_back(x);
    }
    return finalAns;
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements you want to enter: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cout << "Enter element " << i + 1 << ": ";
        cin >> temp;
        v.push_back(temp);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    vector<vector<int>> sol = allSubsetOfArray(v, 0);
    for (vector<int> x : sol)
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x.at(i) << " ";
        }
        cout << endl;
    }

    return 0;
}