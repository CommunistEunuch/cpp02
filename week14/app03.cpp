#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 벡터의 벡터(2차원 벡터) 생성
    int rows = 10;
    int cols = 10;

    cin >> rows;
    cin >> cols;
    
    //벡터<벡터> table
    vector<vector<int>> table(rows, vector <int>(cols));
    // 2차원 벡터의 값 설정
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            table[i][j] = (i + 1) * (j + 1);
        }
    }
    // 값 추출하기 출력
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            //[][]은 이미 연산자 오버로딩이 되어있어 바로 불러올 수 있다.
            cout << setw(4) << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}