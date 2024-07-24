## C++ 코드
```C++
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int start_idx = 1;
    int end_idx = 1;
    
    int count = 1;
    int sum = 1;
    
    while(end_idx != n){
        if(sum == n){
            count++;
            end_idx++;
            sum += end_idx;
        }
        
        else if(sum > n){
            sum -= start_idx;
            start_idx++;
        }
        
        else{
            end_idx++;
            sum += end_idx;
        }
    }
    
    cout << count << '\n';
}
```

Python 코드
```python
def main():
    n = int(input())  # 사용자로부터 n 입력 받기
    
    start_idx = 1
    end_idx = 1
    
    count = 1  # 초기 경우의 수는 1
    sum_ = 1   # 초기 합은 1로 시작
    
    while end_idx != n:
        if sum_ == n:
            count += 1
            end_idx += 1
            sum_ += end_idx
        
        elif sum_ > n:
            sum_ -= start_idx
            start_idx += 1
        
        else:
            end_idx += 1
            sum_ += end_idx
    
    print(count)

if __name__ == "__main__":
    main()
```

## 설명

### 입력 받기:

n = int(input()): 사용자로부터 정수를 입력받습니다.
### 변수 초기화:

start_idx, end_idx: 시작 및 끝 인덱스를 각각 1로 초기화합니다.
count: 경우의 수를 세기 위한 변수로, 초기에 1로 설정합니다.
sum_: start_idx와 end_idx 사이의 합을 저장하는 변수로, 초기 값은 1입니다. (sum은 파이썬의 내장 함수이기 때문에 sum_으로 사용합니다.)
### 메인 루프:

while end_idx != n: end_idx가 n이 되기 전까지 반복합니다.
if sum_ == n: sum_이 n과 같으면 경우의 수를 증가시키고, end_idx를 증가시킨 후, 새로운 end_idx를 sum_에 더합니다.
elif sum_ > n: sum_이 n보다 크면 start_idx를 증가시키고, 그 값을 sum_에서 뺍니다.
else: sum_이 n보다 작으면 end_idx를 증가시키고 그 값을 sum_에 더합니다.
### 결과 출력:

print(count): count 값을 출력합니다.
