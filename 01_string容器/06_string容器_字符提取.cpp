#include<iostream>
#include<string>
using namespace std;
// string字符存取
/*
- char& operator[](int n);          通过[]方式取字符
- char& at(int n);                  通过at方法获取字符 
 */
void test01()
{
    string str = "hello";
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";          // h e l l o
    }
    cout << endl;
    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << " ";       // h e l l o 
    }
    cout << endl;
    // 修改单个字符
    str[0] = 'x';
    cout << "str = " << str << endl;  // str = xello
    str.at(1) = 'x';
    cout << "str = " << str << endl;  // str = xxllo
    
    
}

int main()
{
    test01();
    return 0;
}