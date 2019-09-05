#include <iostream>

using namespace std;

/*	函数模板语法
 函数模板作用：
    建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表。
 语法：
    template<typename T>    函数声明或定义
 解释：
    template  ---   声明创建模板
    typename  ---   表面其后面的符号是一种数据类型，可以用class代替
    T         ---   通用的数据类型，名称可以替换，通常为大写字母
*/

void swapInt(int& a, int& b){      // 交换整型函数
	int temp = a;
	a = b;
	b = temp;
}

void swapDouble(double& a, double& b){     // 交换浮点型函数
	double temp = a;
	a = b;
	b = temp;
}

// 函数模板，声明一个模板，告诉编译器后面代码中紧跟的 T 不要报错，T 是一个通用数据类型
template<typename T>        
void mySwap(T& a, T& b){        // 利用模板提供通用的交换函数
	T temp = a;
	a = b;
	b = temp;
}

void test01(){		// 测试模板函数1
    int a = 10;
	int b = 20;
	
	// swapInt(a, b);

	// 利用模板实现交换，有两种方式。
	// 1、自动类型推导
	mySwap(a, b);
	// 2、显示指定类型
	mySwap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main(){		// 主函数
    test01();
    return 0;
}
