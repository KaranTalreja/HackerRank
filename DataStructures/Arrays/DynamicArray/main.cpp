#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q;
    cin >> N >> Q;
    int queryID, x , y;
    int lastAns = 0;
    std::vector<std::vector<int> > seqList(N);
    for (int i=0; i < Q; i++) {
        cin >> queryID >> x >> y;
        int idx = (x ^ lastAns) % N;
        if (1 == queryID) {
            seqList[idx].push_back(y);
        }
        else if (2 == queryID) {
            lastAns = seqList[idx][y % seqList[idx].size()];
            cout << lastAns << endl;
        }
    }
    return 0;
}
