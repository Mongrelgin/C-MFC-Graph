#pragma once


// Диалоговое окно CSetDlg

class CSetDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSetDlg)

public:
	CSetDlg(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CSetDlg();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IIDD_CUSTOM_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	int m_RedRadio;
	afx_msg void OnClickedRedRadio();
};
