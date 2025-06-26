#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct data
{

    int start;
    int end;
    int position;
};

bool static comp(data val1, data val2)
{
    return val1.end < val2.end;
}
int meeting(vector<int> &start, vector<int> &end, int N)
{
    vector<data> arr(N);
    for (int i = 0; i < N; i++)
    {
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].position = i + 1;
    }
     sort(arr.begin(), arr.end(), comp);
;
    vector<int> answer = {arr[0].position};
    int count = 1;
    int freetime = arr[0].end;
    for (int i = 1; i < N; i++)
    {
        if(arr[i].start > freetime)
        {
            count++;
            freetime=arr[i].end;
            answer.push_back(arr[i].position);
        }
    }
    return count;
}

int main()
{
    vector<int> start = {0,3,1,5,5,8};
    vector<int> end = {5,4,2,9,7,9};
    int N = 6;
    int answer = meeting(start, end, N);
    cout << answer << endl;
}