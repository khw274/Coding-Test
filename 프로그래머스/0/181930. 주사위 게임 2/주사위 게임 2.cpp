#include <math.h>
#include <set>

using namespace std;

int solution(int a, int b, int c)
{
    set<int> s{a, b, c};
    if(s.size() == 3)
        return a + b + c;
    if(s.size() == 2)
        return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
    if(s.size() == 1)
        return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c,2)) * (pow(a, 3) + pow(b, 3) + pow(c, 3));

}
//     if(a != b && b != c && a != c){
//         answer += a + b + c;
//     }
//     else if(a == b && b != c){
//         answer += (a+b+c)*(pow(a, 2) + pow(b, 2) + pow(c, 2));
//     }
//     else if(b == c && a != b){
//         answer += (a+b+c)*(pow(a, 2) + pow(b, 2) + pow(c, 2));
//     }
//     else if(a == c && b != c){
//         answer += (a+b+c)*(pow(a, 2) + pow(b, 2) + pow(c, 2));
//     }
//     else if(a == b && b == c){
//         answer += (a+b+c)*(pow(a, 2) + pow(b, 2) + pow(c, 2))*(pow(a, 3) + pow(b, 3) + pow(c, 3));
//     }
//     return answer;
// }