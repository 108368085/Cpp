/*
1. 第一個矩陣按列排序 (交換列)
2. 第二個矩陣按行排序 (交換第一行與最後一行)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    /* return a < b : 升冪排序 , return a > b : 降冪排序  */
bool cmp(vector<int> &v1, vector<int> &v2){
    return v1[0] > v2[0];  
}

int main(){
    // ios::sync_with_stdio(0), cin.tie(0);

        /* 交換列 (升冪排序) */
    vector<vector<int>> v{{5, 2, 0},
                          {7, 4, 0},
                          {4, 8, 7}};

    int m = v.size();    //rows
    int n = v[0].size(); //columns
    cout << "Before :\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }
    sort(v.begin(), v.end(), cmp);
    cout << "After :\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }
    cout << '\n';

        /* 交換矩陣的第一行與最後一行 */
    int matrix[3][3] = {{1, 2, 3},     // Given a matrix
                        {4, 5, 6},
                        {7, 8, 9}};

    // Before
    cout << "Before : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // 交换第一列和最后一列的元素
    for (int i = 0; i < 3; i++)
    {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][2];
        matrix[i][2] = temp; //
    }

    // After
    cout << "After : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}