// coloropt.cpp
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.
//
// Purpose: implementation of the CColorOptDlg class
//
// Functions:
//      Most of this file was generated by AppWizard.  The functions
//      which contain code specific to this sample are:
//
//      CColorOptDlg::CColorOptDlg()         -- dialog constructor
//      CColorOptDlg::DoDataExchange()       -- connect data to controls
//      CColorOptDlg::OnInitDialog()         -- initialize dialog

#include "stdafx.h"
#include "dynamenu.h"
#include "coloropt.h"
#include "dmdoc.h"    // for CDynaMenuDoc class

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CColorOptDlg dialog


//***********************************************************************
// Function: CColorOptDlg::CColorOptDlg()
//
// Purpose:
//    This is the constructor for the color options dialog class.
//
// Parameters:
//    pDoc    -- pointer to the CDynaMenuDoc with the data we want to
//               update
//    pParent -- pointer to parent window for dialog
//
// Returns:
//    none
//
// Comments:
//    none
//
// History:
//
//   Date   Comment                                           Initials
// ======== ================================================= ========
// 03/24/94 Created                                             MIK
//
//***********************************************************************
CColorOptDlg::CColorOptDlg(CDynaMenuDoc* pDoc, CWnd* pParent /*=NULL*/)
	: CDialog(CColorOptDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CColorOptDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT

	m_pDoc = pDoc;
}

//***********************************************************************
// Function: CColorOptDlg::DoDataExchange()
//
// Purpose:
//    DoDataExchange is called by the framework to initialize the
//    dialog's control, or to retrieve data from the dialog.
//
//    Instead of using ClassWizard to generate the DDX calls, we
//    add our own, so that we can loop over an array.
//
// Parameters:
//    pDX -- pointer to a CDataExchange object
//
// Returns:
//    none
//
// Comments:
//    see CWnd::DoDataExchange documentation for further information.
//
// History:
//
//   Date   Comment                                           Initials
// ======== ================================================= ========
// 03/24/94 Created                                             MIK
//
//***********************************************************************
void CColorOptDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CColorOptDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP

	for (int i = 0; i < NUM_TEXTCOLOR; i++)
		DDX_Check(pDX, IDC_COLOR1 + i, m_pDoc->m_abAllowColor[i]);
}

BEGIN_MESSAGE_MAP(CColorOptDlg, CDialog)
	//{{AFX_MSG_MAP(CColorOptDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CColorOptDlg message handlers

//***********************************************************************
// Function: CColorOptDlg::OnInitDialog()
//
// Purpose:
//    OnInitDialog is called by the framework in response to a
//    WM_INITDIALOG message.  It allows us to initialize a dialog
//    before it is displayed.
//
//    We set the text of the dialog's checkbox controls using the
//    strings defined in the color definitions, CDynaMenuDoc::m_aColorDef.
//
// Parameters:
//    none
//
// Returns:
//    nonzero to have Windows set input focus, 0 if focus explicitly set
//
// Comments:
//    see CDialog::OnInitDialog documentation for further information.
//
//***********************************************************************
BOOL CColorOptDlg::OnInitDialog()
{
	// set the text of each color checkbox
	for (int i = 0; i < NUM_TEXTCOLOR; i++)
	{
		CWnd* pCtl = GetDlgItem(i + IDC_COLOR1);
		CString strColor;
		strColor.LoadString(CDynaMenuDoc::m_aColorDef[i].m_nString);
		pCtl->SetWindowText(strColor);
	}

	// center the dialog window
	CenterWindow();

	// do the default processing (including DDX)
	return CDialog::OnInitDialog();
}
