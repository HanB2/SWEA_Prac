#include <iostream>

using namespace std;

int main(){
   for (int t_case = 0; t_case < 10; t_case++)
   {
       int N, sum =0;
       cin >> N;

       int arr[100][100];

      for (int i = 0; i < 100; i++)
      {
          for (int j = 0; j < 100; j++)
          {
              cin >> arr[i][j];
          }
      }
      //가로
       for (int i = 0; i < 100; i++)
       {
           int temp =0;
           for (int j = 0; j < 100; j++)
           {
               temp += arr[i][j];
           }

           sum = sum > temp ? sum:temp;
           
       }
       
       //세로
       
       for (int i = 0; i < 100; i++)
       {
           int temp =0;
           for (int j = 0; j < 100; j++)
           {
               temp += arr[j][i];
           }

           sum = sum > temp ? sum:temp;
           
       } 

       //대각선 왼위 -> 오아
       for (int i = 0; i < 100; i++)
       {
           int temp =0;
           temp += arr[i][i];
           sum = sum > temp ? sum: temp;
       }

       //대각선 오위 -> 왼아 arr[99-i][i] 아래 써놓은건 왼아 -> 오위.
       for (int i = 99; i >=0; i--)
       {
           int temp =0;
           temp += arr[i][99-i];
           sum = sum > temp ? sum : temp;

       }
       cout << "#" << t_case+1 << " " << sum << '\n';
   }
}