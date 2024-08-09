## C++ 코드
```C++
#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    queue<int> myqueue;
    
    for(int i = 1; i <= n; i++){
        myqueue.push(i);
    }
    
    while(myqueue.size() > 1){
        myqueue.pop();
        myqueue.push(myqueue.front());
        myqueue.pop();
    }
    
    cout << myqueue.front();
}
```
## PYTHON 코드
```PYTHON
from collections import deque
import sys
input = sys.stdin.read

def main():
    # 입력 읽기
    n = int(input().strip())
    
    # 큐 초기화
    myqueue = deque(range(1, n + 1))
    
    # 큐에서 한 개의 원소만 남을 때까지 반복
    while len(myqueue) > 1:
        myqueue.popleft()  # 큐의 첫 번째 원소 제거
        myqueue.append(myqueue.popleft())  # 다음 원소를 큐의 마지막에 추가
    
    # 마지막 남은 원소 출력
    print(myqueue[0])

if __name__ == "__main__":
    main()
```
