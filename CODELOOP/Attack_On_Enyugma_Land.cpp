#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> requiredGems(n);
    vector<long long> availableGems(n);

    for (int i = 0; i < n; i++) {
        cin >> requiredGems[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> availableGems[i];
    }

    long long maxStonesRemoved = k;

    for (int i = 0; i < n; i++) {
        long long stonesRemoved = k / requiredGems[i];
        stonesRemoved = min(stonesRemoved, availableGems[i]);
        maxStonesRemoved = max(maxStonesRemoved, stonesRemoved);
    }

    cout << maxStonesRemoved << endl;

    return 0;
}
