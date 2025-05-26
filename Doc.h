#pragma once


class Doc : public CDocument
{
protected: // create from serialization only
	Doc();
	DECLARE_DYNCREATE(Doc)

// Attributes
public:
	CRect cr;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(Doc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
