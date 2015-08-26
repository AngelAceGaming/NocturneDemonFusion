#include "stdafx.h"
#include "WindowDraw.h"

WindowState windowState = CheckFusion;

void DrawWindow(HWND hWnd, PAINTSTRUCT ps, HDC hdc)
{
	switch (windowState)
	{
	case CheckFusion:
		DrawCheckFusion(hWnd, ps, hdc);
		break;
	case FindFusion:
		DrawFindFusion(hWnd, ps, hdc);
		break;
	}
}

void InitFusion(HWND hWnd)
{
}

void InitFind(HWND hWnd)
{

}

void DrawCheckFusion(HWND hWnd, PAINTSTRUCT ps, HDC hdc)
{
	RECT rec;

	int savedDC = SaveDC(hdc);
	SelectObject(hdc, GetStockObject(WHITE_BRUSH));
	GetWindowRect(hWnd, &rec);
	rec.top = 0;
	rec.left = 0;
	Rectangle(hdc, rec.left, rec.top, rec.right, rec.bottom);

	DeleteDC(hdc);
	EndPaint(hWnd, &ps);
	RestoreDC(hdc, savedDC);

	InvalidateRect(hWnd, &rec, false);
	UpdateWindow(hWnd);
}

void DrawFindFusion(HWND hWnd, PAINTSTRUCT ps, HDC hdc)
{
	RECT rec;

	int savedDC = SaveDC(hdc);

	SelectObject(hdc, GetStockObject(BLACK_BRUSH));
	GetWindowRect(hWnd, &rec);
	rec.top = 0;
	rec.left = 0;
	Rectangle(ps.hdc, rec.left, rec.top, rec.right, rec.bottom);

	DeleteDC(hdc);
	EndPaint(hWnd, &ps);
	RestoreDC(hdc, savedDC);

	InvalidateRect(hWnd, &rec, false);
	UpdateWindow(hWnd);
}

void EndFusion(HWND hWnd)
{

}

void EndFind(HWND hWnd)
{
}