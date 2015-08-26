#pragma once

enum WindowState
{
	CheckFusion,
	FindFusion
};

// If it isn't static, it builds twice for some reason.
static WindowState windowState;

// The main window draw
void DrawWindow(HWND hWnd);

void DrawCheckFusion(HWND hWnd);
void DrawFindFusion(HWND hWnd);