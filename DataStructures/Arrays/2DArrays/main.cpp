#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int ops[][2] = {{-1,-1}, // a
                {-1, 0}, // b
                {-1, 1}, // c
                { 0, 0}, // d
                {1, -1}, // e
                {1, 0}, // f
                {1, 1}}; // g

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int curr_sum = 0, max = -100, max_x, max_y;
    for (int x = 1; x < 5; x++) {
        for (int y = 1; y < 5; y++) {
            curr_sum = 0;
            for (int o = 0; o < 7; o++) {
                curr_sum += arr[x + ops[o][0]][y + ops[o][1]]; 
            }
            if (curr_sum > max) {
                max = curr_sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}
