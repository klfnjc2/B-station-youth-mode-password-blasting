#include<stdio.h>
#include<windows.h>
int main()
{
	while(1)
	{
		if(GetAsyncKeyState(VK_SPACE))break;//空格建开始
	}
	int a, b, c, d, e,hc=0,kg=0;
	printf("5 "),Sleep(1000);
	printf("4 "),Sleep(1000);
	printf("3 "),Sleep(1000);
	printf("2 "),Sleep(1000);
	printf("1\n"),Sleep(1000);
	for (e = 1; e<10000; e++)
	{
		d = e;
		a = d / 1000;
		b = (d -= a * 1000) / 100;
		c = (d -= b * 100) / 10;
		d -= c * 10;
		if(a+b+c+d!=0) 
		printf("%d%d%d%d ", a, b, c, d);
		Sleep(60);
		if (a == 0)//1位 
		{
			keybd_event(48, 0, 0, 0); keybd_event(48, 0, KEYEVENTF_KEYUP, 0);//0
		}
		else if (a == 1)			{
			keybd_event(49, 0, 0, 0); keybd_event(49, 0, KEYEVENTF_KEYUP, 0);//1
		}
		else if (a == 2)
		{
			keybd_event(50, 0, 0, 0); keybd_event(50, 0, KEYEVENTF_KEYUP, 0);//2
		}
		else if (a == 3)
		{
			keybd_event(51, 0, 0, 0); keybd_event(51, 0, KEYEVENTF_KEYUP, 0);//3
		}
		else if (a == 4)
		{
			keybd_event(52, 0, 0, 0); keybd_event(52, 0, KEYEVENTF_KEYUP, 0);//4
		}
		else if (a == 5)
		{
			keybd_event(53, 0, 0, 0); keybd_event(53, 0, KEYEVENTF_KEYUP, 0);//5
		}
		else if (a == 6)
		{
			keybd_event(54, 0, 0, 0); keybd_event(54, 0, KEYEVENTF_KEYUP, 0);//6
		}
		else if (a == 7)
		{
			keybd_event(55, 0, 0, 0); keybd_event(55, 0, KEYEVENTF_KEYUP, 0);//7
		}
		else if (a == 8)
		{
			keybd_event(56, 0, 0, 0); keybd_event(56, 0, KEYEVENTF_KEYUP, 0);//8
		}
		else if (a == 9)
		{
			keybd_event(57, 0, 0, 0); keybd_event(57, 0, KEYEVENTF_KEYUP, 0);//9
		}
		Sleep(60);
		if (b == 0)//1位 
		{
			keybd_event(48, 0, 0, 0); keybd_event(48, 0, KEYEVENTF_KEYUP, 0);//0
		}
		else if (b == 1)
		{
			keybd_event(49, 0, 0, 0); keybd_event(49, 0, KEYEVENTF_KEYUP, 0);//1
		}
		else if (b == 2)
		{
			keybd_event(50, 0, 0, 0); keybd_event(50, 0, KEYEVENTF_KEYUP, 0);//2
		}
		else if (b == 3)
		{
			keybd_event(51, 0, 0, 0); keybd_event(51, 0, KEYEVENTF_KEYUP, 0);//3
		}
		else if (b == 4)
		{
			keybd_event(52, 0, 0, 0); keybd_event(52, 0, KEYEVENTF_KEYUP, 0);//4
		}
		else if (b == 5)
		{
			keybd_event(53, 0, 0, 0); keybd_event(53, 0, KEYEVENTF_KEYUP, 0);//5
		}
		else if (b == 6)
		{
			keybd_event(54, 0, 0, 0); keybd_event(54, 0, KEYEVENTF_KEYUP, 0);//6
		}
		else if (b == 7)
		{
			keybd_event(55, 0, 0, 0); keybd_event(55, 0, KEYEVENTF_KEYUP, 0);//7
		}
		else if (b == 8)
		{
			keybd_event(56, 0, 0, 0); keybd_event(56, 0, KEYEVENTF_KEYUP, 0);//8
		}
		else if (b == 9)
		{
			keybd_event(57, 0, 0, 0); keybd_event(57, 0, KEYEVENTF_KEYUP, 0);//9
		}
		Sleep(60);
		if (c == 0)//1位 
		{
			keybd_event(48, 0, 0, 0); keybd_event(48, 0, KEYEVENTF_KEYUP, 0);//0
		}
		else if (c == 1)
		{
			keybd_event(49, 0, 0, 0); keybd_event(49, 0, KEYEVENTF_KEYUP, 0);//1
		}
		else if (c == 2)
		{
			keybd_event(50, 0, 0, 0); keybd_event(50, 0, KEYEVENTF_KEYUP, 0);//2
		}
		else if (c == 3)
		{
			keybd_event(51, 0, 0, 0); keybd_event(51, 0, KEYEVENTF_KEYUP, 0);//3
		}
		else if (c == 4)
		{
			keybd_event(52, 0, 0, 0); keybd_event(52, 0, KEYEVENTF_KEYUP, 0);//4
		}
		else if (c == 5)
		{
			keybd_event(53, 0, 0, 0); keybd_event(53, 0, KEYEVENTF_KEYUP, 0);//5
		}
		else if (c == 6)
		{
			keybd_event(54, 0, 0, 0); keybd_event(54, 0, KEYEVENTF_KEYUP, 0);//6
		}
		else if (c == 7)
		{
			keybd_event(55, 0, 0, 0); keybd_event(55, 0, KEYEVENTF_KEYUP, 0);//7
		}
		else if (c == 8)
		{
			keybd_event(56, 0, 0, 0); keybd_event(56, 0, KEYEVENTF_KEYUP, 0);//8
		}
		else if (c == 9)
		{
			keybd_event(57, 0, 0, 0); keybd_event(57, 0, KEYEVENTF_KEYUP, 0);//9
		}
		Sleep(60);
		if (d == 0)//1位 
		{
			keybd_event(48, 0, 0, 0); keybd_event(48, 0, KEYEVENTF_KEYUP, 0);//0
		}
		else if (d == 1)
		{
			keybd_event(49, 0, 0, 0); keybd_event(49, 0, KEYEVENTF_KEYUP, 0);//1
		}
		else if (d == 2)
		{
			keybd_event(50, 0, 0, 0); keybd_event(50, 0, KEYEVENTF_KEYUP, 0);//2
		}
		else if (d == 3)
		{
			keybd_event(51, 0, 0, 0); keybd_event(51, 0, KEYEVENTF_KEYUP, 0);//3
		}
		else if (d == 4)
		{
			keybd_event(52, 0, 0, 0); keybd_event(52, 0, KEYEVENTF_KEYUP, 0);//4
		}
		else if (d == 5)
		{
			keybd_event(53, 0, 0, 0); keybd_event(53, 0, KEYEVENTF_KEYUP, 0);//5
		}
		else if (d == 6)
		{
			keybd_event(54, 0, 0, 0); keybd_event(54, 0, KEYEVENTF_KEYUP, 0);//6
		}
		else if (d == 7)
		{
			keybd_event(55, 0, 0, 0); keybd_event(55, 0, KEYEVENTF_KEYUP, 0);//7
		}
		else if (d == 8)
		{
			keybd_event(56, 0, 0, 0); keybd_event(56, 0, KEYEVENTF_KEYUP, 0);//8
		}
		else if (d == 9)
		{
			keybd_event(57, 0, 0, 0); keybd_event(57, 0, KEYEVENTF_KEYUP, 0);//9
		}
		if(e==9999)
		{
			e=0;
		}
		kg++,hc++;
		if(hc==10){printf("    ");kg=0;}
		if(hc==20){printf("\n");hc=0;}
		if (GetAsyncKeyState(VK_SPACE))return 0;//空格建结束 
	}
}

