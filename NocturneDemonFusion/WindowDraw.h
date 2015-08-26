#pragma once

enum WindowState
{
	CheckFusion,
	FindFusion
};

// The button used to run the algorythm to find/check a fusion
HWND button;

extern WindowState windowState;

// The main window draw
void DrawWindow(HWND hWnd, PAINTSTRUCT ps, HDC hdc);

void InitFusion(HWND hWnd);
void InitFind(HWND hWnd);

void DrawCheckFusion(HWND hWnd, PAINTSTRUCT ps, HDC hdc);
void DrawFindFusion(HWND hWnd, PAINTSTRUCT ps, HDC hdc);

void EndFusion(HWND hWnd);
void EndFind(HWND hWnd);