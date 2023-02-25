#pragma once
#include"StartMENU.h"


int StartMENU::start()
{
	initgraph(1024, 576);    // 创建绘图窗口，大小为 1280x720 像素
	cleardevice();
	setbkcolor(RGB(255, 255, 253));
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
	loadimage(&BG, _T(".\\IMAGES\\StartMenu.png"), 1024, 576);
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
			teacher_start();
			}
		case 2:
			{
			student_start();
			}
		case 3:
			{
			administrator_start();
			}	
		}
	}
	return 1;

 }

int StartMENU::teacher_start()
{
	IMAGE TeacherMENU;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 374, 61);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 374, 61);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 374, 61);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 374, 61);
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
			putimage(362, 225, &UserNameBox);
			input.CR_InputBox(UserName, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 273, 658, 273);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
			}
		case 2:
			{
			putimage(350, 301, &PassWordBox);
			input.CR_InputBox(PassWord, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 350, 658, 350);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
			}
		case 3:
			{
			//登录验证模块
			char text[] = "欢迎来到毕业答辩成绩管理系统";
			outtextxy(100, 100, text);
			}
		case 4:
			{
			return -1;
			}
		}
	}
}

int StartMENU::student_start()
{
	IMAGE StudentMENU;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 374, 61);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 374, 61);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 374, 61);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 374, 61);
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
			putimage(362, 225, &UserNameBox);
			input.CR_InputBox(UserName, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 273, 658, 273);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		case 2:
		{
			putimage(350, 301, &PassWordBox);
			input.CR_InputBox(PassWord, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 350, 658, 350);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		case 3:
		{
			//登录验证模块
			char text[] = "欢迎来到毕业答辩成绩管理系统";
			outtextxy(100, 100, text);
		}
		case 4:
		{
			return -1;
		}
		}
	}
}

int StartMENU::administrator_start()
{
	IMAGE AdministratorMENU;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 374, 61);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 374, 61);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 374, 61);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 374, 61);
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
			putimage(362, 225, &UserNameBox);
			input.CR_InputBox(UserName, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 273, 658, 273);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		case 2:
		{
			putimage(350, 301, &PassWordBox);
			input.CR_InputBox(PassWord, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(410, 350, 658, 350);
			MENUchoice_Login = choose.StartMENU_Login_MENUChoose();
			break;
		}
		case 3:
		{
			//登录验证模块
			char text[] = "欢迎来到毕业答辩成绩管理系统";
			outtextxy(100, 100, text);
		}
		case 4:
		{
			return -1;
		}
		}
	}
}



