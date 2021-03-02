/*
using 指令
您可以使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。这个指令会告诉编译器，后续的代码将使用指定的命名空间中的名称
*/

#include <iostream>
using namespace std;
 
// 第一个命名空间
namespace first_space
{
   void func()
   {
      cout << "Inside first_space" << endl;
   }
}
// 第二个命名空间
namespace second_space
{
   void func()
   {
      cout << "Inside second_space" << endl;
   }
}
using namespace first_space;
//using namespace second_space;
int main ()
{
 
   // 调用第一个命名空间中的函数
   func();

   //second_space::func();
   return 0;
}


/*
当上面的代码被编译和执行时，它会产生下列结果：
Inside first_space

using 指令也可以用来指定命名空间中的特定项目。例如，如果您只打算使用 std 命名空间中的 cout 部分，您可以使用如下的语句：
using std::cout;



随后的代码中，在使用 cout 时就可以不用加上命名空间名称作为前缀，但是 std 命名空间中的其他项目仍然需要加上命名空间名称作为前缀，如下所示：
#include <iostream>
using std::cout;
 
int main ()
{
 
   cout << "std::endl is used with std!" << std::endl;
   
   return 0;
}

当上面的代码被编译和执行时，它会产生下列结果：
std::endl is used with std!
using 指令引入的名称遵循正常的范围规则。名称从使用 using 指令开始是可见的，直到该范围结束。此时，在范围以外定义的同名实体是隐藏的。
*/