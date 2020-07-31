#include <iostream>
#include <stdio.h>
#include <string>
#include <regex>

#include <vector>
#include <array>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <tuple>

#include <algorithm>
#include <math.h>

#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {

    std::array<int, 10> arr = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    vector<int> v(arr.begin(), arr.end());


    for(auto n : arr) {
        cout << n << endl;
    }



    return 0;
}
