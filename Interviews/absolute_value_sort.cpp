#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    vector<int> v = { 2, -7, -2, -2, 0 };
    vector<int> output;
    unordered_map <int, vector<int>> map;
    set<int> st;

    // filling the map // O(n)
    for (int i = 0; i < v.size(); i++)
    {
        int key = abs(v[i]);
        map[key].push_back(v[i]);
        v[i] = abs(v[i]);
    }

    // sort and put into set // O(nlogn)
    sort(v.begin(), v.end());
    for (auto i : v)
        st.insert(i);

    // handle the arrays
    for (auto itr = st.begin(); itr != st.end(); itr++)
    {
        sort(map[*itr].begin(), map[*itr].end());
        for (int i = 0; i < map[*itr].size(); i++)
        {
            output.push_back(map[*itr][i]);
        }
    }

    for (auto i : output)
        cout << i << " ";

    return 0;
}

/*
    0 -> 0
    2 -> 2, -2, -2
    7 -> -7

*/