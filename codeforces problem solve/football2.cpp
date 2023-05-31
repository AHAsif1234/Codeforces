#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> goals;

    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;
        goals[team]++;
    }

    string winner;
    int maxGoals = 0;

    for (auto it : goals) {
        if (it.second > maxGoals) {
            maxGoals = it.second;
            winner = it.first;
        }
    }

    cout << winner << endl;

    return 0;
}

