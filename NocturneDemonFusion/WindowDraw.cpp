#include "stdafx.h"
#include "WindowDraw.h"

void DrawWindow(HWND hWnd)
{
	switch (windowState)
	{
	case CheckFusion:
		DrawCheckFusion(hWnd);
		break;
	case FindFusion:
		DrawFindFusion(hWnd);
		break;
	}
}

void DrawCheckFusion(HWND hWnd)
{
	LPCWSTR message = L"Check Fusion";

	PAINTSTRUCT ps;

	RECT rect;
	GetClientRect(hWnd, &rect);
	BeginPaint(hWnd, &ps);
	//SelectObject(ps.hdc, GetStockObject(BLACK_BRUSH));
	//SetTextColor(ps.hdc, RGB(0, 0, 0, 255));
	//SetRect(&rect, 10, 10, 100, 100);
	//DrawText(ps.hdc, message, wcslen(message), &rect, DT_TOP | DT_LEFT);
	EndPaint(hWnd, &ps);
	ReleaseDC(hWnd, ps.hdc);
}

void DrawFindFusion(HWND hWnd)
{
	LPCWSTR message = L"Find Fusion";

	PAINTSTRUCT ps;

	RECT rect;
	GetClientRect(hWnd, &rect);
	BeginPaint(hWnd, &ps);
	SelectObject(ps.hdc, GetStockObject(BLACK_BRUSH));
	Rectangle(ps.hdc, rect.left, rect.top, rect.right, rect.bottom);
	//SetTextColor(ps.hdc, RGB(0, 0, 0, 255));
	//SetRect(&rect, 10, 10, 100, 100);
	//DrawText(ps.hdc, message, wcslen(message), &rect, DT_TOP | DT_LEFT);
	EndPaint(hWnd, &ps);
	ReleaseDC(hWnd, ps.hdc);
}