#pragma once

class DlgView : public CFormView
{
protected: // create from serialization only
	DlgView();
	DECLARE_DYNCREATE(DlgView)

public:
	//{{AFX_DATA(DlgView)
	enum { IDD = IDD_V9_FORM };
	//}}AFX_DATA

// Attributes
public:
	Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DlgView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~DlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(DlgView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnKillfocusEdit();
	virtual void OnUpdate(CView* cv, LPARAM lp, CObject* co);
};

#ifndef _DEBUG  // debug version in DlgView.cpp
inline Doc* DlgView::GetDocument()
   { return (Doc*)m_pDocument; }
#endif
