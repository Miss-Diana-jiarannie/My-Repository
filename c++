一.c++程序的基本框架
#include <iostream>  //#include预处理器编译指令——将头文件和源代码文件一起发给编译器，<头文件>          iostream——input and output stream
int main（viod）  /*函数头*/    //int表整数integer      main指主函数      （）代表主函数无需接收信息，执行函数即可  
{
   using namespace std；  //使用命名空间 std指标准stand
  
  statement；      //每个语句需分号结尾     
   return 0；     //返回语句，结束该函数（int为整数，所以return 0表示结束函数）

}                 /*函数体*/         
some conceptions：
1.字符串：""包括的内容
2.cout 输出对象
   cout << "l have a plan" << endl;  //一个输出流（打印内容的空格需在字符串中）
3.<<:插入运算符，表示信号流动的方向 
4.控制符endl：结束并重启一行
5.\n：c语言常用换行符
6.c++中，space约等enter约等制表符，三者可替换
7.标记：c++程序中如int，main等元素称为标记，不可被空白分割
8.空白，指空格或回车制表符产生的空白位置


二.c++语句
