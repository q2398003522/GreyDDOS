// UpdateLogDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "GreyDDOS.h"
#include "UpdateLogDlg.h"
#include "afxdialogex.h"


// CUpdateLogDlg 对话框

IMPLEMENT_DYNAMIC(CUpdateLogDlg, CDialogEx)

CUpdateLogDlg::CUpdateLogDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_UPDATE_LOG_DIALOG, pParent)
{

}

CUpdateLogDlg::~CUpdateLogDlg()
{
}

void CUpdateLogDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_UPDATE_LOG, m_updateLog);
}


BEGIN_MESSAGE_MAP(CUpdateLogDlg, CDialogEx)
	ON_EN_SETFOCUS(IDC_UPDATE_LOG, &CUpdateLogDlg::OnSetfocusUpdateLog)
END_MESSAGE_MAP()


// CUpdateLogDlg 消息处理程序


BOOL CUpdateLogDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	m_updateLog.SetWindowText(L"GreyDDOS v1.2 更新日志\r\n\r\n======================\r\n\r\n1、去掉文本Alt索引\r\n\r\n2、新增 数据缓存(/kb)、线程数量 建议\r\n\r\n3、新增数据保存功能\r\n");

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CUpdateLogDlg::OnSetfocusUpdateLog()
{
	m_updateLog.SetSel(-1, 0);
}
