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
# 필요한 모듈을 가져옵니다.
from sys import stdin, stdout

def main():
    # 표준 입력을 사용하여 입력 값을 읽어옵니다.
    input = stdin.read
    # 입력된 데이터를 줄 단위로 분리합니다.
    data = input().strip().split()
    
    # 수열의 크기 n을 정수로 변환합니다.
    n = int(data[0])
    
    # 스택을 초기화합니다.
    mystack = []
    # 수열을 저장할 리스트 a를 초기화합니다.
    a = [0] * n
    # 연산 결과를 저장할 리스트 resultv를 초기화합니다.
    resultv = []
    
    # 수열의 각 요소를 입력받아 리스트 a에 저장합니다.
    for i in range(1, n + 1):
        a[i - 1] = int(data[i])
    
    num = 1  # 비교할 자연수, 1부터 시작
    result = True  # 가능한지 여부를 나타내는 변수, 초기에는 True
    
    # 수열을 하나씩 처리합니다.
    for now in a:
        # 현재 수열 값이 비교할 자연수보다 크거나 같으면
        if now >= num:
            # 비교할 자연수를 현재 수열 값에 도달할 때까지 스택에 푸시합니다.
            while now >= num:
                mystack.append(num)
                num += 1
                resultv.append('+')
            
            # 스택에서 팝하여 수열과 비교합니다.
            mystack.pop()
            resultv.append('-')
        
        # 현재 수열 값이 비교할 자연수보다 작으면
        else:
            # 스택의 탑 값을 가져옵니다.
            n = mystack.pop()
            
            # 스택의 탑이 현재 수열 값보다 크다면
            if n > now:
                # 출력할 수 없는 경우입니다.
                stdout.write("NO\n")
                result = False
                break
            else:
                resultv.append('-')
    
    # 수열을 생성할 수 있다면, 연산 결과를 출력합니다.
    if result:
        for op in resultv:
            stdout.write(f"{op}\n")

# 프로그램의 엔트리 포인트
if __name__ == "__main__":
    main()
```



