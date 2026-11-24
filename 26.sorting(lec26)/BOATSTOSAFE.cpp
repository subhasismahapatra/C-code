#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Boats(vector<int>& people, int limit) {
    sort(people.begin(), people.end());

    int i = 0;
    int j = people.size() - 1;
    int boats = 0;

    while (i <= j) {
        if (people[i] + people[j] <= limit) {
            i++;
        }

        j--;
        boats++;
    }

    return boats;
}

int main() {
    vector<int> people = {80,57,74,48,63,95,120};
    int limit = 135;

    cout << Boats(people, limit);

    return 0;
}