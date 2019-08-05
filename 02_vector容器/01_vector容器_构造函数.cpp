#include<iostream>
#include<vector>
using namespace std;

//输出函数
void printVector(vector<int>&v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout <<endl;
}

// vector容器构造
void test01()
{
    //默认构造 无参函数
    vector<int>v1; 
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //通过区间方式进行构造
    vector<int>v2(v1.begin(), v1.end());
    printVector(v2);

    // n 个 elem 方式构造
    vector<int>v3(10, 100);
    printVector(v3);

    // 拷贝构造
    vector<int>v4(v3);
    printVector(v4);
    
    
}







int main(){
    test01();
    return 0;
}
