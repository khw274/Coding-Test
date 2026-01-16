#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int tmp;
    for(auto query:queries){
        tmp = arr[query[0]];
        arr[query[0]] = arr[query[1]];
        arr[query[1]] = tmp;
    }
    return arr;
}