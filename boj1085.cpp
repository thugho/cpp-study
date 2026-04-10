#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int to_end(int x, int y, int w, int h);

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int mim=to_end(x, y, w, h);
	printf("%d", mim);

	return 0;
}

int to_end(int x, int y, int w, int h)
{
	int right_x, top_y;
	right_x = w - x;
	top_y = h - y;

	int mim_x, mim_y,mim=0;

	if (x <= right_x)
		mim_x = x;
	else
		mim_x = right_x;
	
	if (y <= top_y)
		mim_y = y;
	else
		mim_y = top_y;
	
	if (mim_x <= mim_y)
		mim = mim_x;
	else
		mim = mim_y;

	return mim;
	
}