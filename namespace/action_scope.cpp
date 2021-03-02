//关于命名空间内变量和函数及全局变量的使用和作用域:

#include <iostream>
using namespace std;
namespace A
{
    int a = 100;
    namespace B            //嵌套一个命名空间B
    {
        int a =20;
    }
}

int a = 200;//定义一个全局变量


int main(int argc, char *argv[])
{
    cout <<"A::a ="<< A::a << endl;
    cout <<"A::B::a ="<<A::B::a << endl;
    cout <<"a ="<<a << endl;
    cout <<"::a ="<<::a << endl;

    int a = 30;
    cout <<"a ="<<a << endl;
    cout <<"::a ="<<::a << endl;

    return 0;
}


/*
结果:
A::a =100  
A::B::a =20
a =200      //全局变量a
::a =200
a =30       //局部变量a
::a =200    
*/

/*
即：全局变量 a 表达为 ::a，用于当有同名的局部变量时来区别两者。
*/


/*
补充关于 using 的错误事例：
#include <iostream>
using namespace std;
namespace A
{
    int a = 100;
    int fun()
    {
        cout << "a = " << a << endl;
    }

    namespace B            //嵌套一个命名空间B
    {
        int a =20;
        int fun()
        {
             cout << "a = " << a << endl;
        }

    }
}


int main(int argc, char *argv[])
{
    cout << a << endl;
    fun();

    return 0;
}


这样会出错：会显示 a 变量和 fun 函数 “was not declared in this scope”，即找不到这个 a 和 fun 函数。
解决办法： 用 using 来告诉编译器用到的是哪个命名空间内的内容。在 main() 上面加 using namespace A; 
或者 using namespace A::B; 。这样就可以使用其中的 a 和 fun()。但是不能同时使用，因为这样也会导致编译出错，编译器器不知道要去使用哪个 a 和 fun()。


*/