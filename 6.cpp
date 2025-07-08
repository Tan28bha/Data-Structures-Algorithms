#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// OPTIMAL APPROACH -> first init with j=-1 so that all the elements will cover when iterating after that run a for loop to check the first 0 element in the array and take it as value for j. if not find return a. after that again run a for loop such that a[i]!= 0 then swap the value of i and j from it

vector<int> movezeroes(int n, vector<int> a)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        return a;
    }

    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main()
{
    vector<int> arr = {3, 4, 0, 1, 0, 2, 0, 3, 0, 2, 2, 2};
    int n = 12;
    vector<int> ans = movezeroes(n, arr);
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}