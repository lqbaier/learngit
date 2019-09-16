#include <iostream>
#include <fstream>
 
using namespace std;
char s[80];
 
int main()
{
    string a[100];              //采用 string 类型，存100行的文本，不要用数组 
    int i=0; 
    ifstream infile;
 
    infile.open("0.txt");
 
    while(!infile.eof())            // 若未到文件结束一直循环 
    {  
        getline(infile, a[i], '\n');//读取一行，以换行符结束，存入 a[] 中
        i++;                    //下一行
    }
    for(int ii=0;ii<i;ii++)        // 显示读取的txt内容 
    {  
        cout<< a[ii] << endl;       
    }
 infile.close();
}
