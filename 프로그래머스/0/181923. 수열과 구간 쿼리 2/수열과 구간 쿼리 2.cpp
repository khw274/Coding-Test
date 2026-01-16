#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {

    vector<int> answers;
    for(vector<int> query : queries)
    {
        int s = query[0];
        int e = query[1];
        int k = query[2];

        int answer = -1;
        for(int i = s; i <= e; i++)
        {
            if(arr[i] > k) {
                if(answer == -1 || answer > arr[i]) answer = arr[i];
            }
        }
        answers.push_back(answer);
    }
    return answers;
}
