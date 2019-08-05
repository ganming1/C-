#include <iostream>
using namespace std;
// string容器 字符串的拼接
/*
- 1.string& operator+=(const char* str);               //重载+=操作符
- 2.string& operator+=(const char C);                  //重载+=操作符
- 3.string& operator+=(const string& str);             //重载+=操作符
- 4.string& append(const char *s);                     //把字符串s连接到当前字符串结尾
- 5.string& append(const char *s, int n);              //把字符串s的前n个字符连接到当前字符串结尾
- 6.string& append(const string &s);                   //同operator+=(const string& str)
- 7.string& append(const string &s, int pos, int n);   //字符串S中从pos开始的n个字符连接到字符串结尾
*/
void test01()
{
    // 1.string& operator+=(const char* str);
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << "str1 = " << str1 << endl;                      // str1 = 我爱玩游戏
    // 2.string& operator+=(const char C);
    str1 += ':';
    cout << "str1 = " << str1 << endl;                      // str1 = 我爱玩游戏:
    // 3.string& operator+=(const string& str);
    string str2 = " LOL DNF";
    str1 += str2;
    cout << "str1 = " << str1 << endl;                      // str1 = 我爱玩游戏: LOL DNF
    // 4.string& append(const char *s);
    string str3 = "I";
    str3.append(" LOVE ");
    cout << "str3 = " << str3 << endl;                      // str3 = I LOVE 
    // 5.string& append(const char *s, int n);
    str3.append("game abcde", 4);
    cout << "str3 = " << str3 << endl;                      // str3 = I LOVE game
    // 6.string& append(const string &s);
    str3.append(str2);
    cout << "str3 = " << str3 << endl;                      // str3 = I LOVE game LOL DNF
    // 7.string& append(const string &s, int pos, int n);
    str3.append(str2, 0, 4);
    cout << "str3 = " << str3 << endl;                      // str3 = I LOVE game LOL DNF LOL
}


int main()
{
    test01();
    return 0;
}
