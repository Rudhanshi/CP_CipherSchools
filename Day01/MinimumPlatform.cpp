

#include <bits/stdc++.h>
using namespace std;

int minumumPlatform(const vector<int>& arr,const vector<int>& dept) {
    sort(arr.begin(), arr.end());
    sort(dept.begin(), dept.end());
    int i = 1, j = 0;
    int currPlatform = 1, minPlatorm = 1;
    while (i < arr.size() && j < dept.size()) {
        if (arr[i] >= dept[j]) {
            // train 11:00 | dept 10:50
            currPlatform -= 1;
            j++;
        } else {
            // train 11:00 | dept 11:30
            currPlatform += 1;
            i++;
        }

        minPlatorm = max(minPlatorm, currPlatform);
    }

    return minPlatorm;
}
int main() {

    return 0;
}


