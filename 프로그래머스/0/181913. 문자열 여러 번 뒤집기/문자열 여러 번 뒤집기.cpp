#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for(auto query : queries){
        reverse(my_string.begin() + query[0], my_string.begin() + query[1] + 1);
    }
    return my_string;
}