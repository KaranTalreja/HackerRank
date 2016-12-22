#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, D;
    cin >> N >> D;
    std::vector<int> array(N);
    for(int i = 0; i<N; i++) {
        cin >> array[(N+i-D)%N];
    }
    for(int i = 0; i<N; i++) {
        cout << array[i];
        if (i != N-1) cout << " ";
    }
    return 0;
}
