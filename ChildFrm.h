
// ChildFrm.h : CChildFrame ��Ľӿ�
//

#pragma once

#include "001view.h"
#include "002view.h"
#include "003view.h"
#include "006view.h"
#include "005view.h"
#include "007view.h"
#include "004View.h"


//#include "VisionPlatform.h"



class CChildFrame : public CMDIChildWndEx
{
	DECLARE_DYNCREATE(CChildFrame)
public:
	CChildFrame();

// ����
protected:
	CSplitterWndEx m_wndSplitter;
public:

// ����
public:

// ��д
	public:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ʵ��
public:
	virtual ~CChildFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

//public:
//	CSplitterWnd    m_wndSplitter;
//

};
