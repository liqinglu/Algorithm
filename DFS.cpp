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
0, 0, 0, 1, 0, 0, 0, 1, 0, 0,
0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
0, 0, 0, 0, 0, 1, 0, 0, 1, 1,
0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
0, 0, 0, 0, 0, 0, 1, 1, 0, 0
};
//���ʱ��,��ʼ��Ϊ0,
int visited[M + 1];

//graph traverse
void GT_DFS(int root)
{
    visited[root-1] = 1;
    cout << root << " ";

    int j;
    for (j=1;j<M+1;j++){
        if( !visited[j-1]&&matrix[root-1][j-1] ){
            GT_DFS(j);
        }
    }

    cout << "\n";
}

int main()
{
    GT_DFS(1); //
    system("pause");
    return 0;
}
