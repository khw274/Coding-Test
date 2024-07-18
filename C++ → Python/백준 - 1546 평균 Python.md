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

