#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l){
    vector<int> answer;
    for(auto str : intStrs){
        int val = stoi(str.substr(s, l));
        if(val > k){
            answer.push_back(val);
        }
    }
    return answer;
}