#include <iostream>
#include <algorithm>
#include <memory.h>

using namespace std;


int N,result;

int arr[100][100];

int main(){

    int T;
    int t=1;

    T=10;

    while (T--)
    {
        cin >> N;
        result =0;
       for (int i = 0; i < N; i++)for (int j = 0; j < N; j++) cin >> arr[i][j];

        for (int j = 0; j < N; j++)

		{

			for (int i = 0; i < N; i++)

			{

				if (arr[i][j] == 2) arr[i][j] = 0;

				else if (arr[i][j] == 1) break;

			}

			for (int i = N-1; i >=0; i--)

			{

				if (arr[i][j] == 1) arr[i][j] = 0;

				else if (arr[i][j] == 2) break;

			}

		}

        for (int j = 0; j < N; j++)
        {
           int flag = 0;
            for (int i = 0; i < N; i++)
            {
                if (arr[i][j] == 1)
                {
                    if (flag == 0)
                    {
                        flag = 1;
                    }
                    
                }
                else if (arr[i][j] == 2)
				{

					if (flag == 1)

					{

						flag = 0; 
                        result += 1;

					}

				}
                
                
            }
            
        }
        
        cout << "#" << t++ <<" " <<result << endl;
        

    }
}


