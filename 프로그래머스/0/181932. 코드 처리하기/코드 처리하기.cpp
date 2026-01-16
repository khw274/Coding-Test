#include <string>

using namespace std;

string solution(string code) {
    int mode = 0;
    string ret = "";
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '1')
            mode ^= 1; //XOR 비트
        else if (mode == (i & 1))
            ret += code[i];
    }
    return ret == "" ? "EMPTY" : ret;
}
        
