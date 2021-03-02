/*
C++ 命名空间
假设这样一种情况，当一个班上有两个名叫 Zara 的学生时，为了明确区分它们，我们在使用名字之外，不得不使用一些额外的信息，比如他们的家庭住址，或者他们父母的名字等等。

同样的情况也出现在 C++ 应用程序中。例如，您可能会写一个名为 xyz() 的函数，在另一个可用的库中也存在一个相同的函数 xyz()。这样，编译器就无法判断您所使用的是哪一个 xyz() 函数。

因此，引入了命名空间这个概念，专门用于解决上面的问题，它可作为附加信息来区分不同库中相同名称的函数、类、变量等。使用了命名空间即定义了上下文。本质上，命名空间就是定义了一个范围。

我们举一个计算机系统中的例子，一个文件夹(目录)中可以包含多个文件夹，每个文件夹中不能有相同的文件名，但不同文件夹中的文件可以重名。
*/

/*
定义命名空间
命名空间的定义使用关键字 namespace，后跟命名空间的名称，如下所示：
namespace namespace_name {
   // 代码声明
}

为了调用带有命名空间的函数或变量，需要在前面加上命名空间的名称，如下所示：
name::code;  // code 可以是变量或函数
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


int main ()
{
   // 调用第一个命名空间中的函数
   first_space::func();

   // 调用第二个命名空间中的函数
   second_space::func(); 

   return 0;
}

/*
当上面的代码被编译和执行时，它会产生下列结果：
Inside first_space
Inside second_space
*/