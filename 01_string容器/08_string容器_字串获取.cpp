#include <iostream>

using namespace std;
// string 字串
/*
-string substr(int pos = 0, int n = npos) const;        返回由pos开始的n个字符组成的字符串
*/
void test01()
{
    string str = "abcdefg";
    string subStr = str.substr(1, 3);
    cout << "subStr = " << subStr << endl;
}
// 使用操作
void test02()
{
    string email = "lisi@sina.com";
    // 从邮件地址中获取用户名信息
    int pos = email.find("@");     // 8
    string usrName = email.substr(0, pos);
    cout << "usrName = " << usrName << endl;
}


int main()
{

    // test01();
    test02();
    return 0;
}
