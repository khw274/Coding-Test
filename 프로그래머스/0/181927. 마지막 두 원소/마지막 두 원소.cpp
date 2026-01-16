#include <vector>
#include <math.h>
using namespace std;

vector<int> solution(vector<int> num_list){

    int idx = num_list.size();
    int x1 = num_list[num_list.size()-1];
    int x2 = num_list[num_list.size()-2];
    
    num_list.push_back((x1 > x2) ? x1 - x2 : x1 * 2);
    
    return num_list;
}