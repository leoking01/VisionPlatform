// C004View.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "VisionPlatform.h"
#include "004View.h"


// C004View

IMPLEMENT_DYNCREATE(C004View, CFormView)

C004View::C004View()
	: CFormView(C004View::IDD)
{

}

C004View::~C004View()
{
}

void C004View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(C004View, CFormView)
END_MESSAGE_MAP()


// C004View ���

#ifdef _DEBUG
void C004View::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void C004View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// C004View ��Ϣ�������
