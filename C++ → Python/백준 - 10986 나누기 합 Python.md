## C++ 
```C++ 코드
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<long> s(n, 0);
    vector<long> c(m, 0);
    
    long answer = 0;
    
    cin >> s[0];
    
    for(int i = 1; i < n; i++){
        int temp = 0;
        cin >> temp;
        s[i] = s[i - 1] + temp;
    }
    
    for(int i = 0; i < n; i++){
        int remainder = s[i] % m;
        
        if(remainder == 0){
            answer++;
        }
        
        c[remainder]++;
    }
    
    for(int i = 0; i < m; i++){
        if(c[i] > 1){  // 두 쌍일때
            answer += (c[i] * (c[i] -1) / 2);
        }
    }
    
    cout << answer << '\n';
}
```
## Python 코드
```python
def main():
    import sys
    input = sys.stdin.read  # 표준 입력의 전체 내용을 한 번에 읽어옴
    
    data = input().split()  # 전체 입력을 읽어 공백 기준으로 나눔
    n, m = int(data[0]), int(data[1])  # 첫 두 값을 읽어 n과 m 설정
    
    s = [0] * n
    c = [0] * m
    answer = 0
    
    # 누적 합 배열 계산
    s[0] = int(data[2])
    for i in range(1, n):
        temp = int(data[i + 2])
        s[i] = s[i - 1] + temp
    
    # 각 누적 합에 대해 나머지 계산 및 카운트
    for i in range(n):
        remainder = s[i] % m
        if remainder == 0:
            answer += 1
        c[remainder] += 1
    
    # 나머지가 같은 인덱스들 중 2개를 선택하는 경우의 수 계산
    for i in range(m):
        if c[i] > 1:
            answer += (c[i] * (c[i] - 1)) // 2
    
    print(answer)

if __name__ == "__main__":
    main()
```
## 코드 설명
## 입력 처리:

input = sys.stdin.read로 표준 입력의 전체 내용을 읽어옵니다.
data = input().split()를 사용하여 입력 문자열을 공백 기준으로 분리하여 리스트로 저장합니다.
## 데이터 변환:

첫 번째와 두 번째 값은 data[0]과 data[1]에서 추출하여 n과 m으로 변환합니다.
나머지 값들은 누적 합 계산과 나머지 계산에 사용됩니다.
## 누적 합 배열 생성:

s[0]을 초기화하고, 나머지 값을 사용하여 누적 합 배열 s를 계산합니다.
## 나머지 계산 및 카운트:

각 누적 합의 나머지를 계산하고, 나머지 배열 c를 업데이트합니다.
## 결과 계산:

나머지가 같은 인덱스들 중 2개를 선택하여 조합의 수를 계산합니다.
