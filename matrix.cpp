#include <iostream>

using namespace std;

#define N 3

void multiply(int mat1[][N],int mat2[][N],int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] *  mat2[k][j];
        }
    }
}

int main()
{
    int i, j;
    int res[N][N];
    int mat1[N][N];
    int mat2[N][N];

    for(i = 0;i < N; i++)
        for(j = 0; j < N; j++)
            cin >> mat1[i][j];

    for(i = 0;i < N; i++)
        for(j = 0; j < N; j++)
            cin >> mat2[i][j];

    multiply(mat1, mat2, res);

    cout << "Result matrix is \n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        cout << res[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
