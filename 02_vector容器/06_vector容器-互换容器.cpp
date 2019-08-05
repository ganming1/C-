#include<iostream>
#include<vector>
using namespace std;

// 容器输出函数
void printVector(vector<int>& v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
// vector容器互换
// 1.基本使用  容量大小都交换
void test01()
{
    vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    cout << "交换前：" << endl << "v1:";
    printVector(v1);
    cout << "v1不为空" << endl;
    cout << "v1的容量为：" << v1.capacity() << endl;
    cout << "v1的大小为：" << v1.size() << endl;

    vector<int>v2;
    for (size_t i = 100; i > 0; i--)
    {
        v2.push_back(i);
    }
    cout << "v2:";
    printVector(v2);
    cout << "v2不为空" << endl;
    cout << "v2的容量为：" << v2.capacity() << endl;
    cout << "v2的大小为：" << v2.size() << endl;

    cout << "交换后：" << endl;
    v1.swap(v2);
    cout << "v1:";
    printVector(v1);
    cout << "v1不为空" << endl;
    cout << "v1的容量为：" << v1.capacity() << endl;
    cout << "v1的大小为：" << v1.size() << endl;
    cout << "v2:";
    printVector(v2);
    cout << "v2不为空" << endl;
    cout << "v2的容量为：" << v2.capacity() << endl;
    cout << "v2的大小为：" << v2.size() << endl;  
}

// 2.实际用途：巧用swap可以收缩内存空间
void test02()
{
    vector<int>v;
    for (int i = 0; i < 10000; i++)
    {
        v.push_back(i);
    }
    cout << "v的容量为：" << v.capacity() << endl;      // v的容量为：16384
    cout << "v的大小为：" << v.size() << endl;          // v的大小为：10000
    v.resize(3);  // 重新制定大小
    cout << "v的容量为：" << v.capacity() << endl;      // v的容量为：16384
    cout << "v的大小为：" << v.size() << endl;          // v的大小为：3
    
    // 巧用swap收缩内存
    // 用v构造匿名对象，大小为v的大小，匿名对象会在执行完语句后被系统回收。
    vector<int>(v).swap(v);  
    cout << "v的容量为：" << v.capacity() << endl;      // v的容量为：3
    cout << "v的大小为：" << v.size() << endl;          // v的大小为：3
}


int main()
{
    test01();
    // test02();
    return 0;
}