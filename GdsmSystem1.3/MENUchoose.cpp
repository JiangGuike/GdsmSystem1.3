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
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 225 && m.y < 273 && m.x>362 && m.x < 661)//��갴�������˺�����
				return 1;
			if (m.y > 301 && m.y < 350 && m.x>362 && m.x < 661)//��갴��������������
				return 2;
			if (m.y > 378 && m.y < 429 && m.x>362 && m.x < 661)//��갴�ڵ�¼����
				return 3;
			if (m.y > 452 && m.y < 468 && m.x>495 && m.x < 528)//��갴��ȡ������
				return 4;
		}
	}
}


