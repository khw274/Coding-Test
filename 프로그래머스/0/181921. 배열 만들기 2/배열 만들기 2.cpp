#include <vector>
#include <string>
using namespace std;

vector<int> solution(int l, int r){
    vector<int> answer;
    
    for(l; l <= r; l++){
        string numstr = to_string(l);
        bool zerofive = true;
        for(char c : numstr){
            if(c != '0' && c != '5'){
                zerofive = false;
                break;
            }
        }  
        if(zerofive){
            answer.push_back(l);   
        }   
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}