// ConsoleAppP30.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

const float PI = 3.1416;


void showArea(double area) {
    cout << "面积是 " << area;
}

struct MyTimeStruct
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
    
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

};

int main()
{
    std::cout << "Hello World!\n";

    MyTimeStruct myTimeSturct = {2020,2,21,15,12,49};

    cout << myTimeSturct.year << myTimeSturct.month << myTimeSturct.day<<endl;

    //int i = 1, sum = 0;

    //do {
    //    sum += 1;
    //    i++;
    //} while (i <= 10);

    //int sum = 0;

    //for (int i = 0; i <= 10; i++) {
    //    sum += 1;
    //
    //}

    //cout << "sum value : " << sum;

    int iType = 1;
    cout << "图形类型？ 圆形：1 方形：2 长方形：3" << endl;
    cin >> iType;

    double area, radius, width, height;

    switch (iType)
    {
    case 1:
        cout << "请输入半径" << endl;
        cin >> radius;
        area = PI * radius * radius;
        showArea(area);
        break;
    case 2:
        cout << "请输入边长" << endl;
        cin >> width;
        area = width * width;
        showArea(area);
        break;
    case 3:
        cout << "请输入宽度" << endl;
        cin >> width;
        cout << "请输入高度" << endl;
        cin >> height;
        showArea(width* height);
        break;
    default:
        break;
    }



}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
