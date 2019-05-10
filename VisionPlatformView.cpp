
// VisionPlatformView.cpp : CVisionPlatformView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CVisionPlatformView 构造/析构

CVisionPlatformView::CVisionPlatformView()
	: CFormView(CVisionPlatformView::IDD)
{
	// TODO: 在此处添加构造代码

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
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

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


// CVisionPlatformView 诊断

#ifdef _DEBUG
void CVisionPlatformView::AssertValid() const
{
	CFormView::AssertValid();
}

void CVisionPlatformView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CVisionPlatformDoc* CVisionPlatformView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVisionPlatformDoc)));
	return (CVisionPlatformDoc*)m_pDocument;
}
#endif //_DEBUG


// CVisionPlatformView 消息处理程序
