
// GreyDDOSDlg.h: 头文件
//

#pragma once
#include <afxsock.h>

// CGreyDDOSDlg 对话框
class CGreyDDOSDlg : public CDialogEx
{
// 构造
public:
	BOOL m_bAttacking;
	CGreyDDOSDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GREYDDOS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnHelpAbout();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedStop();
	CEdit m_ip;
//	CEdit m_port;
//	CEdit m_memory;
//	CEdit m_count;
	CString m_szIP;
	UINT m_nPort;
	int m_nMemory;
	void ShowError(CString szText);
//	CEdit m_deadThread;
//	CEdit m_aliveThread;
	CEdit m_deadThread;
	CEdit m_aliveThread;
	void FreshDeadThread();
	UINT m_nDeadThread;
	UINT m_nAliveThread;
	UINT m_nRunningThread;
	void FreshAliveThread();
	CStatusBar m_statusBar;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnHelpUpdateLog();
	afx_msg void OnDestroy();
};

static UINT ThreadFunc(void *param);
