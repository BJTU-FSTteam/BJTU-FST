
// FieldStrengthTest.h : FieldStrengthTest Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CFieldStrengthTestApp:
// �йش����ʵ�֣������ FieldStrengthTest.cpp
//

class CFieldStrengthTestApp : public CWinAppEx
{
public:
	CFieldStrengthTestApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFieldStrengthTestApp theApp;
