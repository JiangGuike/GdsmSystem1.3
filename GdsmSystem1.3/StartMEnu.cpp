#pragma once
#include"StartMENU.h"


int StartMENU::start()
{
	//initgraph(1024, 576);    // 创建绘图窗口，大小为 1280x720 像素
	//cleardevice();
	//setbkcolor(RGB(255, 255, 253));
	// 设置背景色为淡白色
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	LOGFONT format;
	gettextstyle(&format);						// 获取当前字体设置
	format.lfHeight = 30;						// 设置字体高度为30
	format.lfQuality = PROOF_QUALITY;			// 设置输出效果为最高质量  
	format.lfPitchAndFamily = FIXED_PITCH;
	_tcscpy_s(format.lfFaceName, _T(FONT2_EN));	// 设置字体为FONT2_EN
	settextstyle(&format);
	IMAGE BG;
	IMAGE TeacherBox;
	IMAGE StudentBox;
	IMAGE AdministratorBox;
	loadimage(&BG, _T(".\\IMAGES\\StartMenu.png"), 1024, 576);
	loadimage(&TeacherBox, _T(".\\IMAGES\\TeacherBox.png"), 301, 51);
	loadimage(&StudentBox, _T(".\\IMAGES\\StudentBox.png"), 301, 51);
	loadimage(&AdministratorBox, _T(".\\IMAGES\\AdministratorBox.png"), 301, 51);
	putimage(0, 0, &BG);
	//以上都是常规代码
	MENUchoose choose;
	int MENUchoice;
	MENUchoice = choose.StartMENU_MENUchoose();
	while (true)
	{
		switch (MENUchoice)
		{
		case 1:
			{
			putimage(361, 223, &TeacherBox);
			Sleep(50); // 延时0.05秒
			teacher_start();
			}
		case 2:
			{
			putimage(361, 301, &StudentBox);
			Sleep(50); // 延时0.05秒
			student_start();
			}
		case 3:
			{
			putimage(361, 378, &AdministratorBox);
			Sleep(50); // 延时0.05秒
			administrator_start();
			}	
		}
	}
	return 1;

 }

int StartMENU::teacher_start()
{
	cleardevice();
	IMAGE TeacherMENU;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	IMAGE CancelBox;
	loadimage(&CancelBox, _T(".\\IMAGES\\CancelBox.png"), 33, 16);
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 301, 51);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 301, 51);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 301, 51);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 301, 51);
	loadimage(&TeacherMENU, _T(".\\IMAGES\\Teacher_login.png"), 1024, 576);
	putimage(0, 0, &TeacherMENU);
	char UserName[50] = "\0";
	char PassWord[50] = "\0";
	Function input;
	MENUchoose choose;
	int MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
	while (true)
	{
		switch (MENUchoice_Login)
		{
		case 1:
			{
			putimage(361, 223, &UserNameBox);
			input.CR_InputBox(UserName, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 273, 658, 273);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
			}
		case 2:
			{
			putimage(361,301, &PassWordBox);
			input.CR_InputBox(PassWord, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 350, 658, 350);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
			}
		case 3:
			{
			//登录验证模块
			char text[] = "	测试登录按钮成功（3秒后关闭）";
			outtextxy(100, 100, text);
			Sleep(3000); // 延时3秒
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			}
		case 4:
			{
			putimage(495, 452, &CancelBox);
			Sleep(50); // 延时0.05秒
			start();
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
			}
		}
	}
}

int StartMENU::student_start()
{
	cleardevice();
	IMAGE StudentMENU;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	IMAGE CancelBox;
	loadimage(&CancelBox, _T(".\\IMAGES\\CancelBox.png"), 33, 16);
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 301, 51);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 301, 51);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 301, 51);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 301, 51);
	loadimage(&StudentMENU, _T(".\\IMAGES\\Student_login.png"), 1024, 576);
	putimage(0, 0, &StudentMENU);
	char UserName[50] = "\0";
	char PassWord[50] = "\0";
	Function input;
	MENUchoose choose;
	int MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
	while (true)
	{
		switch (MENUchoice_Login)
		{
		case 1:
		{
			putimage(361, 223, &UserNameBox);
			input.CR_InputBox(UserName, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 273, 658, 273);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		case 2:
		{
			putimage(361, 301, &PassWordBox);
			input.CR_InputBox(PassWord, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 350, 658, 350);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		case 3:
		{
			//登录验证模块
			char text[] = "	测试登录按钮成功（3秒后关闭）";
			outtextxy(100, 100, text);
			Sleep(3000); // 延时3秒
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
		}
		case 4:
		{
			putimage(495, 452, &CancelBox);
			Sleep(50); // 延时0.05秒
			start();
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		}
	}
}

int StartMENU::administrator_start()
{
	cleardevice();
	IMAGE AdministratorMENU;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	IMAGE CancelBox;
	loadimage(&CancelBox, _T(".\\IMAGES\\CancelBox.png"), 33, 16);
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 301, 51);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 301, 51);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 301, 51);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 301, 51);
	loadimage(&AdministratorMENU, _T(".\\IMAGES\\Administrator_login.png"), 1024, 576);
	putimage(0, 0, &AdministratorMENU);
	char UserName[50] = "\0";
	char PassWord[50] = "\0";
	Function input;
	MENUchoose choose;
	int MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
	while (true)
	{
		switch (MENUchoice_Login)
		{
		case 1:
		{
			putimage(361, 223, &UserNameBox);
			input.CR_InputBox(UserName, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 273, 658, 273);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		case 2:
		{
			putimage(361, 301, &PassWordBox);
			input.CR_InputBox(PassWord, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 350, 658, 350);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		case 3:
		{
			//登录验证模块
			char text[] = "	测试登录按钮成功（3秒后关闭）";
			outtextxy(100, 100, text);
			Sleep(3000); // 延时3秒
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
		}
		case 4:
		{
			putimage(495, 452, &CancelBox);
			Sleep(50); // 延时0.05秒
			start();
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		}
	}
}



