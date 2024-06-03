## 문제 
A, B, C가 주어졌을 때, Ax+By=C를 만족하는 (x, y)중에서 다음을 만족하는 것을 아무거나 찾아보자.

- x, y는 정수
- -1,000,000,000 ≤ x, y ≤ 1,000,000,000
## 입력
첫째 줄에 정수 A, B, C가 주어진다.


## 출력
Ax+By=C를 만족하는 x, y를 공백으로 구분해 출력한다. 문제의 조건을 만족하는 (x, y)가 존재하지 않는 경우에는 -1을 출력한다.

## 제한
- -1,000,000 ≤ A, B, C ≤ 1,000,000
- A, B ≠ 0
## 예제 입력 
```
1 2 3
```

## 예제 출력  
```
3 0
```
## 코드 풀이
```
#include <iostream>
#include <vector>
using namespace std;

long gcd(long a, long b);  // 최대 공약수 gcd 함수
vector<long> execute(long a, long b);  // 확장 유클리드 호제법 함수

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long a, b, c;
    cin >> a >> b >> c;  // ax + by = c
    
    long tgcd = gcd(a, b);  // a와 b의 최대 공약수 저장
    
    if(c % tgcd != 0){  // 만약 c가 a, b의 최대 공약수의 배수 형태가 아니라면
        cout << -1 << '\n';  // -1을 출력한 후 종료
    }
    
    else{  // 배수 형태라면
        int mok = (int)c / tgcd;  // c를 최대 공약수로 나눈 값에
        vector<long> ret = execute(a, b);  // 유클리드 호제법 함수 호출(x, y 값 불러옴)
        cout << ret[0] * mok << ' ' << ret[1] * mok;  // 나온 x, y 값에 최대 공약수로 변경한 c값 곱해줌
    }
}

// 최대 공약수 gcd 함수
long gcd(long a, long b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}

// 확장 유클리드 호제법 함수
vector<long> execute(long a, long b){
    vector<long> ret(2);  // 크기 2로 초기화
    
    if(b == 0){  // b가 0이라면 나머지가 0이므로 유클리드 호제법 종료
        // x = 1, y = 0으로 설정 후 return
        ret[0] = 1;   
        ret[1] = 0;
        return ret;  // 메인으로 돌아가는 것이 아닌 벡터 v로 리턴됨(헷갈리는 포인트)
    }
    
    // 나머지가 아직 0이 아니라면
    long q = a / b;  // 몫
    vector<long> v = execute(b, a % b);  // 재귀 함수, 나머지가 0이 될 때까지 계산
    // 역으로 올라오면서 x, y 값을 계산하는 로직
    ret[0] = v[1];  // x = y'
    ret[1] = v[0] - v[1] * q;  // y = x' - y' * q
    return ret;
}
```
## 추가
