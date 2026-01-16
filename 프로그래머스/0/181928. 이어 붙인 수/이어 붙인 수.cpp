#include <vector>
#include <string>

using namespace std;

int solution(vector<int> num_list){
    string even, odd = "";
    int answer = 0;
    
    for(int num : num_list){
    
        if (num % 2 == 0)
            odd += to_string(num);
        else
            even += to_string(num);
    }
    
    return stoi(odd)+stoi(even);
}