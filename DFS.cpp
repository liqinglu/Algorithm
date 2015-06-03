#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<queue>

using namespace std;

//节点数
#define M 10

//图的矩阵表示
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
//访问标记,初始化为0,
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
