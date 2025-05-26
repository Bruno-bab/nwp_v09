#pragma once

/////////////////////////////////////////////////////////////////////////////
// PaintView view

class PaintView : public CView
{
protected:
	PaintView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(PaintView)

// Attributes
public:
	Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(PaintView)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~PaintView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(PaintView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnUpdate(CView* cv, LPARAM lp, CObject* co);
};
