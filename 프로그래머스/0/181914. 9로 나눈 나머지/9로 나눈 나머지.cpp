#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(char x : number)
        answer += (x - '0');
    
    answer %= 9;
    return answer;
}