/*
嵌套的命名空间
命名空间可以嵌套，您可以在一个命名空间中定义另一个命名空间，如下所示：

命名空间可以嵌套，您可以在一个命名空间中定义另一个命名空间，如下所示：
namespace namespace_name1 
{
   // 代码声明
   namespace namespace_name2 
   {
      // 代码声明
   }
}

您可以通过使用 :: 运算符来访问嵌套的命名空间中的成员：
// 访问 namespace_name2 中的成员
using namespace namespace_name1::namespace_name2;
 
// 访问 namespace:name1 中的成员
using namespace namespace_name1;

*/


//在上面的语句中，如果使用的是 namespace_name1，那么在该范围内 namespace_name2 中的元素也是可用的，如下所示：

#include <iostream>
using namespace std;
 
// 第一个命名空间
namespace first_space
{
   void func()
   {
      cout << "Inside first_space" << endl;
   }
   // 第二个命名空间
   namespace second_space
   {
      void func()
      {
         cout << "Inside second_space" << endl;
      }
   }
}
using namespace first_space::second_space;
int main ()
{
 
   // 调用第二个命名空间中的函数
   func();
   
   return 0;
}

/*
当上面的代码被编译和执行时，它会产生下列结果：
Inside second_space
*/