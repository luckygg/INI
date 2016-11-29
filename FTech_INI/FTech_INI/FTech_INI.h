
// FTech_INI.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CFTech_INIApp:
// See FTech_INI.cpp for the implementation of this class
//

class CFTech_INIApp : public CWinApp
{
public:
	CFTech_INIApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CFTech_INIApp theApp;