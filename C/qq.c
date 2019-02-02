#include<stdio.h>
#include<windows.h>
#include <mmsystem.h>
#pragma comment(lib, "WINMM.LIB")
int main()
{
PlaySound(("‪F:\\程序\\C#\\伪造qq\\素材\\dididi.wav"),NULL,SND_FILENAME | SND_ASYNC); //1.wav是要播放的音乐文件
return 0;
}
