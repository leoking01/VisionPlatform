
// VisionPlatformView.cpp : CVisionPlatformView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "VisionPlatform.h"
#endif

#include "VisionPlatformDoc.h"
#include "VisionPlatformView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVisionPlatformView

IMPLEMENT_DYNCREATE(CVisionPlatformView, CFormView)

BEGIN_MESSAGE_MAP(CVisionPlatformView, CFormView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CVisionPlatformView ����/����

CVisionPlatformView::CVisionPlatformView()
	: CFormView(CVisionPlatformView::IDD)
{
	// TODO: �ڴ˴���ӹ������

}

CVisionPlatformView::~CVisionPlatformView()
{
}

void CVisionPlatformView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CVisionPlatformView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CFormView::PreCreateWindow(cs);
}

void CVisionPlatformView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();

}

void CVisionPlatformView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CVisionPlatformView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CVisionPlatformView ���

#ifdef _DEBUG
void CVisionPlatformView::AssertValid() const
{
	CFormView::AssertValid();
}

void CVisionPlatformView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CVisionPlatformDoc* CVisionPlatformView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVisionPlatformDoc)));
	return (CVisionPlatformDoc*)m_pDocument;
}
#endif //_DEBUG


// CVisionPlatformView ��Ϣ�������
