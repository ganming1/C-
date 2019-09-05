#include <iostream>
// #include "13_person.h"       // 会出错    
// #include "13_person.cpp"        // 解决方式1：直接包含.cpp源文件
#include "13_person.hpp"
using namespace std;

/*	类模板分文件编写
 学习目标：
    - 掌握类模板成员函数分文件编写产生的问题以及解决方式
 问题：
    - 类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
 解决：
    - 解决方式1：直接包含.cpp源文件
    - 解决方式2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制
*/

void test01(){		// 测试模板函数1
    Person <string, int> p("Jerry", 18);
    p.showPerson();
}

int main(){		// 主函数
    test01();
    return 0;
}
