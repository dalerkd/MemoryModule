//////debug.h
//#define _AFXDLL
//#include <afxtempl.h>  
#pragma once

#include <windows.h>
#ifndef _DEBUG_H
#define _DEBUG_H

//#include <Windows.h>

VOID OutputDebug(LPWSTR strFormat, ...);

VOID OutputDebug(LPSTR strFormat, ...);

VOID HexDump(WCHAR *desc, VOID *addr, UINT len);
VOID HexDumpPrintf(WCHAR *desc, VOID *addr, UINT len);

#endif // _DEBUG_H