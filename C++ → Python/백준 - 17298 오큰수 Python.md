## C++ 코드
```c++
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> a(n, 0);
    vector<int> result(n, 0);
    
    stack<int> mystack;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    mystack.push(0);  // 초기값
    
    for(int i = 1; i < n; i++){
        while(!mystack.empty() && a[i] > a[mystack.top()]){
            result[mystack.top()] = a[i];
            mystack.pop();
        }
        
        mystack.push(i);
    }
    
    while(!mystack.empty()){
        result[mystack.top()] = -1;
        mystack.pop();
    }
    
    for(int i = 0; i < n; i++){
        cout << result[i] << ' ';
    }
}
```
## PYTHON 코드
```python
def main():
    import sys
    input = sys.stdin.readline  # 빠른 입력을 위한 설정

    n = int(input())  # 수열의 크기 입력
    a = list(map(int, input().split()))  # 수열 입력
    
    result = [0] * n  # 결과를 저장할 리스트
    mystack = []  # 스택 생성

    mystack.append(0)  # 초기값으로 첫 번째 인덱스를 스택에 추가

    for i in range(1, n):
        # 스택이 비어 있지 않고 현재 수가 스택의 최상단 인덱스가 가리키는 수보다 크면
        while mystack and a[i] > a[mystack[-1]]:
            result[mystack.pop()] = a[i]  # 해당 인덱스의 오큰수를 현재 수로 설정

        mystack.append(i)  # 현재 인덱스를 스택에 추가

    # 스택에 남아있는 인덱스는 오큰수가 없으므로 -1로 설정
    while mystack:
        result[mystack.pop()] = -1

    # 결과 출력
    print(' '.join(map(str, result)))

if __name__ == "__main__":
    main()

```
