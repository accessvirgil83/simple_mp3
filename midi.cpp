#include <stdio.h>
#include <Windows.h>
#include <math.h>
#include <winuser.h>
#include <mmsystem.h>
using namespace std;
#pragma comment(lib, "winmm.lib")
int main(int argc, char* argv[])
{
	int inResult;
	inResult = sndPlaySound(L"C:\\Windows\\Media\\Alarm01.wav", SND_SYNC);
	if (inResult == FALSE) 	printf("Error sound\n");
	else printf("God sound \n");
	return 0;
}