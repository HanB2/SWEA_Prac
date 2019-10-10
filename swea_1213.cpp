#include <iostream>
#include <string>

using namespace std;

string str_s;
string str_f;
int num;


void search(int pos){
    int index = str_f.find(str_s, pos);
    if (index != string::npos)
    {
        num++;
        search(index + str_s.size()); //한번 찾고 나서 어디서 부터 다시 찾을꺼냐?
    }
}



int main(){
    int t_case;
    for (int i = 0; i < 10; i++)
    {
        num =0;
        cin >> t_case >> str_s >> str_f;
        search(0);
        cout << "#" << t_case << " " << num << endl;
    }
}