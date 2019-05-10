
// VisionPlatformView.h : CVisionPlatformView ��Ľӿ�
//

#pragma once

#include "resource.h"


class CVisionPlatformView : public CFormView
{
protected: // �������л�����
	CVisionPlatformView();
	DECLARE_DYNCREATE(CVisionPlatformView)

public:
	enum{ IDD = IDD_VISIONPLATFORM_FORM };

// ����
public:
	CVisionPlatformDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CVisionPlatformView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // VisionPlatformView.cpp �еĵ��԰汾
inline CVisionPlatformDoc* CVisionPlatformView::GetDocument() const
   { return reinterpret_cast<CVisionPlatformDoc*>(m_pDocument); }
#endif

