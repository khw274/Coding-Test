#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for(int i; i < numLog.size(); i++){
        int n = numLog[i]-numLog[i-1];
        if (n == 1)
            answer += 'w';
        else if (n == -1)
            answer += 's';
        else if (n == 10)
            answer += 'd';
        else if (n == -10)
            answer += 'a';
        
        
   
    }
    
    
    return answer;
}