#include <iostream>
// 引入標準程式庫中相關的字串程式
#include <string>
#include <cstdlib>   // system("pause")
// std 為標準程式庫的名稱空間

#include <cmath>
#include <vector>

using namespace std;
 
int main(void)
{
    // 此行程式碼建立名稱為 m ， string 型態的物件
    // 小括弧為 string 的建構子
    // 雙引號為字串字面常數
    string m("There is no spoon.");
     
    // cout 為用來輸出的物件
    // endl 為新行符號 \n
    cout << endl;
    cout << m << endl;    
    cout << endl << endl;
    system("pause");
    return 0;
}

void test(){
    std::vector<double> mins;
}
 
/* 《程式語言教學誌》的範例程式
    http://pydoing.blogspot.com/
    檔名：demo.cpp
    功能：示範 C++ 程式 
    作者：張凱慶
    時間：西元 2012 年 10 月 */