#include<iostream>
#include<vector>
using namespace std;

// vector容器 预留空间
void test01()
{
    vector<int>v;

    // 利用reserve预留空间,只开辟一次空间
    v.reserve(100000);

    int num = 0;  //统计开辟的次数
    int * p = NULL;
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if (p != &v[0])  // 每次开辟内存时，首地址会发生变化
        {
            p = &v[0];
            num++;
        } 
    }
    cout << "num=" << num << endl;
}
int main()
{
    test01();
    return 0;
}