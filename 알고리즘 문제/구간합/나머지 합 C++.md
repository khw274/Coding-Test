## 문제 
수 N개 A1, A2, ..., AN이 주어진다. 이때, 연속된 부분 구간의 합이 M으로 나누어 떨어지는 구간의 개수를 구하는 프로그램을 작성하시오.

즉, Ai + ... + Aj (i ≤ j) 의 합이 M으로 나누어 떨어지는 (i, j) 쌍의 개수를 구해야 한다.
## 입력
첫째 줄에 N과 M이 주어진다. (1 ≤ N ≤ 10^6, 2 ≤ M ≤ 10^3)

둘째 줄에 N개의 수 A1, A2, ..., AN이 주어진다. (0 ≤ Ai ≤ 10^9)
## 출력
첫째 줄에 연속된 부분 구간의 합이 M으로 나누어 떨어지는 구간의 개수를 출력한다.




## 예제 입력 
```
5 3
1 2 3 1 2
```

## 예제 출력  
```
7
```
## 코드 풀이
```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    
    int n, m;
    cin >> n >> m;
    vector<long> s(n, 0);
    vector<long> c(m, 0);
    long answer = 0;  
    cin >> s[0];  
    
    for(int i = 1; i < n; i++){
        int temp = 0;
        cin >> temp;
        s[i] = s[i-1] + temp;
    }
    
    for(int i = 0; i < n; i++){
        int reminder = s[i] % m;
        
        if(reminder == 0){
            answer++;
        }
        
        c[reminder]++;
    }
    
    for(int i = 0; i < m; i++){
        if(c[i] > 1){
            answer += (c[i] * (c[i] - 1) / 2);
        }
    }
    cout << answer << '\n';
}

```
## 추가



