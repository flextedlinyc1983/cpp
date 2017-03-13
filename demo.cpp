#include <iostream>
// 引入標準程式庫中相關的字串程式
#include <string>
#include <cstdlib>   // system("pause")
// std 為標準程式庫的名稱空間

#include <cmath>
#include <vector>

using namespace std;

class CMammal       //父類別 CMammal 的宣告
{
  public:
     CMammal(int h=0, int w=0){
        height=h; 
        weight=w;
        cout<< "CMammal constructor!"<< endl;
    }
     ~CMammal(){cout<< "CMammal destructor!"<< endl;}
     int getHeight(){return height;}
     int getWeight(){return weight;}
     void setHeight(int h=0){height=h;}
     void setWeight(int w=0){weight=w;}
  private:
     int height, weight;
};

class CWhale: public CMammal    //子類別 CWhale 的宣告
{
  public:
    int whaleType;  //何種鯨魚
    CWhale(int d=0){ 
        whaleType = d;
        cout<< "CWhale constructor!"<< endl;
    }
    ~CWhale(){cout<< "CWhale destructor!"<< endl;}
    // int getWhaleType(int a, int b){ return whaleType; }
    int getWhaleType(int a, int b);
  private:
    // int whaleType;  //何種鯨魚
};

int CWhale::getWhaleType(int a, int b)
{
    return a + b + CWhale::whaleType;
}

void f(){  
    CWhale w; 
    cout<< "Inside function f()!"<< endl;
}

struct MyStruct
{
    int member_a;
};

int main(void)
{
    CWhale d(100);
    cout<< "The type of whale d is "<< d.getWhaleType(1,3)<< endl;


    MyStruct s;
    s.member_a = 1;
    cout<< "s.member_a "<< s.member_a << endl;
    
    // MyStruct * ps;
    // ps->member_a = 555;
    // cout<< "ps->member_a "<< ps->member_a << endl;

    f();

    CMammal a(20, 30);
    cout<< "Height and weight of mammal a are "<< a.getHeight() << endl;
    CMammal b(50, 30);
    cout<< "Height and weight of mammal b are "<< b.getHeight() << endl;

    CWhale c(15);
    c.setHeight(25);
    c.setWeight(35);
    // cout<< "The type of whale c is "<< c.getWhaleType()<< endl;
    cout<< "The height of whale c are "<< c.getHeight()<< endl;;

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