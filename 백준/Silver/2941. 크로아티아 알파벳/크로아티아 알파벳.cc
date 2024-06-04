#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
    int idx;
    string str;
    cin >> str;

    for (int i = 0; i < croatian.size(); i++)
    {
        while (1) {
            idx = str.find(croatian[i]);
            if (idx == string::npos)
                break;
            str.replace(idx, croatian[i].length(), "#");
        }
    }
    cout << str.length();
}
/*
    * string::npos?
    size_type으로 정의된 특수값이다. 
   if (idx == string::npos) // -1 일경우 true 아닐 경우 false; 즉, -1 값을 가진 상수 

    * str.replace(시작인덱스, 문자개수, 변경할 string)


*/