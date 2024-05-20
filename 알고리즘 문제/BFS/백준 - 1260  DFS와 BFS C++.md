## 문제 
그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오. 단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고, 더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.


## 입력
첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.


## 출력
첫째 줄에 DFS를 수행한 결과를, 그 다음 줄에는 BFS를 수행한 결과를 출력한다. V부터 방문된 점을 순서대로 출력하면 된다.


## 예제 입력 
```
4 5 1
1 2
1 3
1 4
2 4
3 4
```

## 예제 출력  
```
1 2 4 3
1 2 3 4
```
## 코드 풀이
```
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

static vector<vector<int>> a;  // 인접 리스트 배열
static vector<bool> visited;  // 방문 배열
static bool arrive;  

void dfs(int node);
void bfs(int node);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m, start;
    cin >> n >> m >> start;
    
    arrive = false;
    a.resize(n+1);
    visited = vector<bool>(n+1, false);
    
    for(int i = 0; i < m; i++){
        int s, e;
        cin >> s >> e;
        
        a[s].push_back(e);  // 양방향으로 넣어줌
        a[e].push_back(s);
    }
    
    for(int i = 1; i < n+1; i++){  // 작은 번호의 노드를 먼저 방문해야 해서 오름차순 정렬
        sort(a[i].begin(), a[i].end());
    }
    
    dfs(start);
    cout << "\n";  // 다음 출력을 위해 개행
    
    fill(visited.begin(), visited.end(), false);  // dfs를 끝내고 bfs를 위해 방문 배열 초기화
    
    bfs(start);
    cout << '\n';
}

void dfs(int node){
    cout << node << " ";  // 현재 노드 출력
    visited[node] = true;  // 방문 체크
    
    for(int i : a[node]){
        if(!visited[i]){
            dfs(i);
        }
    }
}

void bfs(int node){
    queue<int> myqueue;  // bfs는 재귀함수가 아닌 큐를 사용
    myqueue.push(node);  
    visited[node] = true;
    
    while(!myqueue.empty()){  // 큐가 빌 때까지
        int now_node = myqueue.front();  // 가장 앞 노드
        myqueue.pop();  // 가장 앞 노드 pop 하고 출력
        cout << now_node << " ";
        
        for(int i : a[now_node]){
            if(!visited[i]){
                visited[i] = true;
                myqueue.push(i);
            }
        }
    }
}

```
## 추가
