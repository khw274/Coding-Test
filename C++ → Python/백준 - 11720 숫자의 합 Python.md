## C++ 코드
```c++
#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string numbers;
    cin >> numbers;
    
    int sum = 0;
    
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i] - '0';
    }
    
    cout << sum;
}
```
## Python 코드
```python
def main():
    import sys
    
    input = sys.stdin.read  # 표준 입력으로부터 모든 데이터를 읽어오는 함수를 input 변수에 할당
    data = input().split()  # 공백을 기준으로 나누어 리스트에 저장(숫자의 개수와 숫자)
    
    n = int(data[0]);  # 입력된 숫자의 개수를 정수형으로 n에 저장
    
    numbers = data[1];  # 입력된 숫자를 문자열 형태로 numbers에 저장
    
    sum = 0;
    
    # numbers 문자열의 각 문자를 순회하며 숫자로 변환하고 sum에 더함
    for i in range(len(numbers)):
        sum += int(numbers[i])  # 정수형으로 변환
        
    print(sum)
    
if __name__ == "__main__":
    main()  # 메인 함수를 호출해 프로그램 실행
```
## 설명
### 입출력 속도 최적화:

- C++ 코드에서 ios::sync_with_stdio(0)와 cin.tie(0)는 C++에서 입출력 속도를 높이기 위해 사용된다.
- Python에서는 이런 최적화가 필요하지 않으므로 생략할 수 있다.

### 입력:

- C++ 코드에서는 cin을 사용해 입력을 받는다.
- Python에서는 input() 함수를 사용한다. 하지만 여기서는 sys.stdin.read를 사용하여 여러 줄 입력을 한 번에 읽고, 이를 split()을 사용해 공백을 기준으로 분리한다.
### 데이터 타입 변환:

- C++에서 cin으로 입력받은 값은 기본적으로 문자열이므로 int로 변환한다.
- Python에서도 입력받은 값은 기본적으로 문자열이므로 int로 변환한다.
### 문자열 처리:

- C++ 코드에서 numbers[i] - '0'는 문자를 숫자로 변환하는 방법이다.
- Python에서는 int(numbers[i])로 문자를 숫자로 변환한다.
### 반복문:

- C++ 코드에서 for 반복문을 사용하여 문자열의 각 문자를 순회한다.
- Python에서도 for 반복문을 사용하여 문자열의 각 문자를 순회한다.
### 출력:

- C++ 코드에서 cout을 사용하여 결과를 출력한다.
- Python에서는 print 함수를 사용하여 결과를 출력한다.
