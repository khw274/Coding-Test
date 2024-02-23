## 문제 
BOJ 알고리즘 캠프에는 총 N명이 참가하고 있다. 사람들은 0번부터 N-1번으로 번호가 매겨져 있고, 일부 사람들은 친구이다.

오늘은 다음과 같은 친구 관계를 가진 사람 A, B, C, D, E가 존재하는지 구해보려고 한다.

A는 B와 친구다.
B는 C와 친구다.
C는 D와 친구다.
D는 E와 친구다.
위와 같은 친구 관계가 존재하는지 안하는지 구하는 프로그램을 작성하시오.
## 입력
첫째 줄에 사람의 수 N (5 ≤ N ≤ 2000)과 친구 관계의 수 M (1 ≤ M ≤ 2000)이 주어진다.

둘째 줄부터 M개의 줄에는 정수 a와 b가 주어지며, a와 b가 친구라는 뜻이다. (0 ≤ a, b ≤ N-1, a ≠ b) 같은 친구 관계가 두 번 이상 주어지는 경우는 없다.
## 출력
문제의 조건에 맞는 A, B, C, D, E가 존재하면 1을 없으면 0을 출력한다.


## 예제 입력 
```
5 4
0 1
1 2
2 3
3 4
```

## 예제 출력  
```
1
```
## 코드 풀이
```
#include <iostream>
#include <vector>
using namespace std;

static vector<vector <int> > a;  // static 멤버 변수로 그래프 데이터 저장 인접 리스트를 넣을 이중 vector문 선언
static vector<bool> visited;  // 방문 기록 저장 배열
static bool arrive;  // 도착 확인 변수
void DFS(int now, int depth);  // DFS 함수 선언

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    // 초기화
    arrive = false;
    a.resize(n);  
    visited = vector<bool>(n, false);
        
    for(int i = 0; i < m; i++){
        int s, e;
        cin >> s >> e;
        
        // 양방향 저장
        a[s].push_back(e);  // 2차원 배열을 생각하면서 넣어줌
        a[e].push_back(s);
    }
    
    for(int i = 0; i < n; i++){
        DFS(i, 1);
        if(arrive) break;
    }
    
    if(arrive){
        cout << 1 << '\n';
    }
    else{
        cout << 0 << '\n';
    }
}    

void DFS(int now, int depth){
    if(depth == 5 || arrive){
        arrive = true;
        return;
    }
    visited[now] = true;
    
    for(int i : a[now]){  
        if(!visited[i]){  // 방문하지 않았다면, visited = false
            DFS(i, depth + 1);
        }
    }
    visited[now] = false;   
}
```
## 추가
