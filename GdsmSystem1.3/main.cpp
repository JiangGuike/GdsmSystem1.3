#pragma once
#include"StartMENU.h"


int main()
{
    initgraph(1024, 576);    // 创建绘图窗口，大小为 1280x720 像素
    cleardevice();
    setbkcolor(RGB(255, 255, 253));
    // 设置背景色为淡白色
    StartMENU menu;

    menu.start();
    /*
    int Choice = menu.start();
    switch (Choice)
    {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    }
    */
    return 0;

}
