#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_AR33-易] 轉置矩陣  
    int N, M;  
    while(cin >> N >> M)  
    {  
        if(N == 0 || M == 0)  
        {  
            break;  
        }  
        else  
        {  
            int m[N][M];  
            int r[M][N]; 
            /*
            00 01 02  
			 1  2  3
            10 11 12    
			 4  5  6

			00 01
			 1	4
			10 11
			 2  5
			20 21
			 3  6
            */ 
            for(int i = 0;i < N;i++)  
            {  
                for(int j = 0;j < M;j++)  
                {  
                    cin >> m[i][j];  
                    r[j][i] = m[i][j];  
                }  
            }  
            for(int i = 0;i < M;i++)  
            {  
                for(int j = 0;j < N;j++)  
                {  
                    if(j != 0)  
                    {  
                        cout << " " << r[i][j];  
                    }  
                    else  
                    {  
                        cout << r[i][j];  
                    }  
                }  
                cout << endl;  
            }  
        }  
    }  
    return 0;  
}  
