#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<queue>

using namespace std;

//�ڵ���
#define M 10

//ͼ�ľ����ʾ
int matrix[M][M] =
{
0, 1, 0, 0, 1, 0, 0, 0, 0, 0,
1, 0, 1, 1, 0, 0, 0, 0, 0, 0,
0, 1, 0, 0, 0, 0, 1, 0, 0, 0,
0, 1, 0, 0, 1, 1, 0, 0, 0, 0,
1, 0, 0, 1, 0, 0, 0, 0, 1, 0,
0, 0, 0, 1, 0, 0, 1, 1, 0, 0,
0, 0, 1, 0, 0, 1, 0, 0, 0, 1,
0, 0, 0, 0, 0, 1, 0, 0, 1, 1,
0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
0, 0, 0, 0, 0, 0, 1, 1, 0, 0
};
//���ʱ��,��ʼ��Ϊ0,
int visited[M + 1];

//graph traverse
void GT_BFS(int begin)
{
    visited[begin] = 1;
    queue<int> q;
    q.push(begin);
    /*q.push(3);
    q.push(4);
    int o = q.front();
    int p = q.back();
    cout << o << " " << p << "\n";
    q.pop();
    o = q.front();
    p = q.back();
    cout << o << " " << p << "\n";
    exit(1);*/

    while(!q.empty())
    {
        int top = q.front();
        cout << top <<" "; //���
        q.pop();
        int i ;
        for(i = 1; i <= M; ++i)
        {
            if(visited[i] == 0 && matrix[top - 1][i - 1 ] == 1)
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    cout << "\n";
}

int main()
{
    GT_BFS(10); //���first pointΪ1����������Ϊ1 2 5 3 4 9 7 6 8 10
    system("pause");
    return 0;
}
