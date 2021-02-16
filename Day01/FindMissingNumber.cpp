

#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int> arr) {
    int missing = 0;
    for (int i = 0; i < arr.size(); i++) {
        missing = missing ^ (i + 1) ^ arr[i]; 
    }

    missing = missing ^ (arr.size() + 1);
    return missing;
}

int main(){
   vector<int> arr ={1,2,3,4,5,6,8};
   cout<<findMissing(arr);
   return 0;
     
}
