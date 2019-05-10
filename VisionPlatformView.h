
// VisionPlatformView.h : CVisionPlatformView 类的接口
//

#pragma once

#include "resource.h"


class CVisionPlatformView : public CFormView
{
protected: // 仅从序列化创建
	CVisionPlatformView();
	DECLARE_DYNCREATE(CVisionPlatformView)

public:
	enum{ IDD = IDD_VISIONPLATFORM_FORM };

// 特性
public:
	CVisionPlatformDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CVisionPlatformView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // VisionPlatformView.cpp 中的调试版本
inline CVisionPlatformDoc* CVisionPlatformView::GetDocument() const
   { return reinterpret_cast<CVisionPlatformDoc*>(m_pDocument); }
#endif

