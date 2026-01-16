#include <vector>
#include <math.h>

using namespace std;

int solution(vector<int> num_list){
    int x = 1;
    int y = 0;
    int i = 0;
    for(int num : num_list){
        x *= num;
        y += num;
    }
    int z = pow(y, 2);
    if(x < z)
        return 1;
    else
        return 0;
}