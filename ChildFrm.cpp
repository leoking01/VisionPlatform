
// ChildFrm.cpp : CChildFrame ���ʵ��
//

#include "stdafx.h"
#include "VisionPlatform.h"

#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CMDIChildWndEx)

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWndEx)
END_MESSAGE_MAP()

// CChildFrame ����/����

CChildFrame::CChildFrame()
{
	// TODO: �ڴ���ӳ�Ա��ʼ������
}

CChildFrame::~CChildFrame()
{
}

//BOOL CChildFrame::OnCreateClient(LPCREATESTRUCT /*lpcs*/, CCreateContext* pContext)
//{
//	return m_wndSplitter.Create(this,
//		2, 2,			// TODO: ��������������
//		CSize(10, 10),	// TODO: ������С�����С
//		pContext);
//}

BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸� CREATESTRUCT cs ���޸Ĵ��������ʽ
	if( !CMDIChildWndEx::PreCreateWindow(cs) )
		return FALSE;

	return TRUE;
}

// CChildFrame ���

#ifdef _DEBUG
void CChildFrame::AssertValid() const
{
	CMDIChildWndEx::AssertValid();
}

void CChildFrame::Dump(CDumpContext& dc) const
{
	CMDIChildWndEx::Dump(dc);
}
#endif //_DEBUG

// CChildFrame ��Ϣ�������





BOOL CChildFrame::OnCreateClient(LPCREATESTRUCT /*lpcs*/,
	CCreateContext* pContext)
{
	BOOL ret=m_wndSplitter.CreateStatic(this,3,2);
	if(!ret)
	{
		TRACE("SplitCreate Failed...\n");
		return ret;
	}

	//���㴰�ڳߴ�
	CRect rt;
	GetClientRect(&rt);
	CSize czPane(rt.Width()/2, rt.Height()/3);


	//��������������ʾ����
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		0,0,
		RUNTIME_CLASS(C001View),
		czPane,
		pContext);
	if(!ret)
	{
		TRACE("SplitCreateView Failed(1)...\n");
		return ret;
	}

	//��������������ʾ����
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		0,1,
		RUNTIME_CLASS(C002View),
		czPane,
		pContext);
	if(!ret)
	{
		TRACE("Split CreateView Failed(2)...\n");
		return ret;
	}

	//��������������ʾ����
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		1,0,
		RUNTIME_CLASS(C003View),
		czPane,
		pContext);
	//
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		1,1,
		RUNTIME_CLASS(C004View),
		czPane,
		pContext);

	//
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		2,0,
		RUNTIME_CLASS(C005View),
		czPane,
		pContext);
	//
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		2,1,
		RUNTIME_CLASS(C006View),
		//RUNTIME_CLASS(C007View),
		czPane,
		pContext);
	if(!ret)
	{
		TRACE("Split CreateView Failed(3)...\n");
		return ret;
	}


	//��ʼ������
	m_wndSplitter.RecalcLayout();	
	m_wndSplitter.SetActivePane(1,0);
	return ret;
}



