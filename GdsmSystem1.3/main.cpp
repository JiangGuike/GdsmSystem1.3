#pragma once
#include"StartMENU.h"


int main()
{
    initgraph(1024, 576);    // ������ͼ���ڣ���СΪ 1280x720 ����
    cleardevice();
    setbkcolor(RGB(255, 255, 253));
    // ���ñ���ɫΪ����ɫ
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
