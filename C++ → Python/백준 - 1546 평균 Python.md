## C++ 코드
```cpp
코드 복사
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int score[n];
    
    double sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> score[i];
        sum += score[i];
    }
    
    sort(score, score + n);
    
    double max = score[n - 1];
    
    double result = sum / max / n * 100;
    
    cout << result << '\n';
}
```
##Python 코드
```python

def main():
    import sys
    input = sys.stdin.read
    
    data = input().split()
    n = int(data[0])
    
    scores = list(map(int, data[1:n+1]))
    
    sum_scores = sum(scores)
    
    scores.sort()
    
    max_score = scores[-1]
    
    result = sum_scores / max_score / n * 100
    
    print(result)

if __name__ == "__main__":
    main()
```
## 입출력 속도 최적화:

C++에서 ios::sync_with_stdio(0)와 cin.tie(0)를 사용하여 입출력 속도를 높이는 최적화는 Python에서는 필요 없다.
입력:

C++에서 cin을 사용하여 입력을 받는다.
Python에서는 sys.stdin.read를 사용하여 입력을 받는다. 이는 모든 입력을 한 번에 읽어와 input() 함수로 처리할 수 있도록 한다.
## 데이터 읽기 및 변환:

python
코드 복사
data = input().split()
n = int(data[0])
입력된 데이터를 공백으로 분리하여 리스트로 저장한다. 첫 번째 요소는 학생 수를 나타내는 정수 n이 된다.
점수 리스트 생성:

python
코드 복사
scores = list(map(int, data[1:n+1]))
두 번째 요소부터 n+1번째 요소까지 점수를 정수로 변환하여 리스트 scores에 저장한다.
## 합계 계산:

python
코드 복사
sum_scores = sum(scores)
scores 리스트의 합계를 계산하여 sum_scores에 저장한다.
## 점수 정렬:

python
코드 복사
scores.sort()
scores 리스트를 오름차순으로 정렬한다.
## 최대 점수 찾기:

python
코드 복사
max_score = scores[-1]
정렬된 scores 리스트의 마지막 요소를 최대 점수로 설정한다.
## 결과 계산:

python
코드 복사
result = sum_scores / max_score / n * 100
합계(sum_scores)를 최대 점수(max_score)로 나누고, 이를 학생 수(n)로 다시 나눈 다음 100을 곱하여 결과를 계산한다.
## 결과 출력:

python
코드 복사
print(result)
최종 결과를 출력한다.
## 메인 함수 호출:

python
코드 복사
if __name__ == "__main__":
    main()
이 코드는 현재 스크립트가 직접 실행될 때 main() 함수를 호출하여 프로그램을 실행하도록 한다. 다른 모듈에서 이 스크립트가 import될 때는 실행되지 않는다.
