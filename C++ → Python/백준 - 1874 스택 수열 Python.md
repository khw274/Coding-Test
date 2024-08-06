## C++ 코드
```c++
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    stack<int> mystack;
    vector<int> a(n, 0);
    vector<char> resultv;
    
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int num = 1;  // 비교할 자연수
    bool result = true;  // true로 초기화
    
    for(int i = 0; i < a.size(); i++){
        int now = a[i];
        
        if(now >= num){
            while(now >= num){
                mystack.push(num++);
                resultv.push_back('+');
                
            }
            
            mystack.pop();
            resultv.push_back('-');
        }
        
        else{  // 현쨰 수열값이 오름차순 자연수보다 작으면 pop
            int n = mystack.top();
            mystack.pop();
            
            if(n > now){  // 만약 스택의 top이 현재 수열보다 크다면 출력할 수 없음
                cout << "NO";
                result = false;
                break;
            }
            else{
                resultv.push_back('-');
            }
        }
    }
    
    if(result){
        for(int i = 0; i < resultv.size(); i++){
            cout << resultv[i] << '\n';
        }
    }
}
```
## Python 코드
```python
from sys import stdin, stdout

def main():
    
    input = stdin.read
    
    data = input().strip().split()  # 입력 데이터를 줄 단위로 분리
    
    n = int(data[0])
    
    mystack = []
    
    a = [0] * n
    
    resultv = []
    
    for i in range(1, n + 1):
        a[i - 1] = int(data[i])
        
    num = 1
    result = True
    
    for now in a:  # 수열을 하나씩 처리
        
        if now >= num:
            
            while now >= num:
                mystack.append(num)
                num += 1
                resultv.append('+')
                
            mystack.pop()
            resultv.append('-')
            
        else:
            
            n = mystack.top()
            mystack.pop()
            
            if n > now:
                stdout.write("NO\n")
                result = False
                break
            
            else:
                resultv.append('-')
                
    if result:
        for op in resultv:
            stdout.write(f"{op}\n")  # write: cout와 비슷한 기능
            # f"{...}"는 Python의 포매팅 문자열 기능, 문자열 내에서 변수를 직접 삽입
            
if __name__ == "__main__":
    main()
```



