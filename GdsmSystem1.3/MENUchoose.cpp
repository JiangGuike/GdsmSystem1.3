#include"MENUchoose.h"

int MENUchoose::StartMENU_MENUchoose()
{
	return 0;
}

int MENUchoose::StartMENU_Login_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// 获取一条鼠标消息
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//如果左键被按下
		{
			if (m.y > 225 && m.y < 273 && m.x>362 && m.x < 661)//鼠标按在输入账号区域
				return 1;
			if (m.y > 301 && m.y < 350 && m.x>362 && m.x < 661)//鼠标按在输入密码区域
				return 2;
			if (m.y > 378 && m.y < 429 && m.x>362 && m.x < 661)//鼠标按在登录区域
				return 3;
			if (m.y > 452 && m.y < 468 && m.x>495 && m.x < 528)//鼠标按在取消区域
				return 4;
		}
	}
}


