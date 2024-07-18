## C++ 코드
```cpp
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
## Python 코드
```python
def main():
    import sys;
    
    input = sys.stdin.read  # 해당 명령어를 통해 표준 입력을 한 번에 받아옴
    
    data = input().split()  # 공백을 기준으로 입력값 저장
    
    n = int(data[0])
    
    # map(함수, 반복 가능한 객체)
    # 선택한 객체들을 모두 int형으로 변환해 list로 변환해 저장
    scores = list(map(int, data[1 : n + 1]))  # 두 번째 요소부터 n개의 점수를 정수 리스트로 변환
    
    sum_scores = sum(scores)  # 총합 계산
    
    scores.sort()  # 점수 리스트를 오름차순으로 정렬
    
    max_score = scores[-1]  # -1이 가장 끝 값
    
    result = sum_scores / max_score / n * 100
    
    print(result)
    
if __name__ == "__main__":
    main()
```
## 설명
## 모듈 가져오기 및 입력 처리:

- import sys: Python의 표준 라이브러리인 sys 모듈을 가져온다. 이는 입력을 처리하는 데 사용된다.
- input = sys.stdin.read: sys.stdin.read를 input 함수에 할당하여 표준 입력을 한 번에 모두 읽어온다.
## 데이터 처리:

- data = input().split(): input() 함수로 읽어온 데이터를 공백을 기준으로 분리하여 리스트 data에 저장한다.
- n = int(data[0]): 첫 번째 요소는 학생 수를 나타내는 정수 n으로 변환한다.
- scores = list(map(int, data[1:n+1])): 두 번째 요소부터 n번째 요소까지를 정수로 변환하여 리스트 scores에 저장한다.
## 점수 계산 및 처리:

- sum_scores = sum(scores): scores 리스트의 모든 요소를 합하여 총점을 계산한다.
- scores.sort(): scores 리스트를 오름차순으로 정렬한다.
- max_score = scores[-1]: 정렬된 scores 리스트의 마지막 요소를 최대 점수 max_score로 설정한다.
## 결과 계산 및 출력:

- result = sum_scores / max_score / n * 100: 총점을 최대 점수와 학생 수로 나눈 후 100을 곱하여 평균 비율을 계산한다.
- print(result): 계산된 결과를 출력한다.
## 메인 함수 호출:

- if __name__ == "__main__": main(): 스크립트가 직접 실행될 때 main() 함수를 호출하여 프로그램을 실행한다. 이는 파이썬에서 일반적인 스크립트 실행 방식이다.
