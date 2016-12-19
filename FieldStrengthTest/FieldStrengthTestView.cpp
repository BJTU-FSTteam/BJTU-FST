
// FieldStrengthTestView.cpp : CFieldStrengthTestView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "FieldStrengthTest.h"
#endif

#include "FieldStrengthTestDoc.h"
#include "FieldStrengthTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFieldStrengthTestView

IMPLEMENT_DYNCREATE(CFieldStrengthTestView, CView)

BEGIN_MESSAGE_MAP(CFieldStrengthTestView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFieldStrengthTestView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CFieldStrengthTestView ����/����

CFieldStrengthTestView::CFieldStrengthTestView()
{
	// TODO: �ڴ˴���ӹ������

}

CFieldStrengthTestView::~CFieldStrengthTestView()
{
}

BOOL CFieldStrengthTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CFieldStrengthTestView ����

void CFieldStrengthTestView::OnDraw(CDC* /*pDC*/)
{
	CFieldStrengthTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CFieldStrengthTestView ��ӡ


void CFieldStrengthTestView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CFieldStrengthTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CFieldStrengthTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CFieldStrengthTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CFieldStrengthTestView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CFieldStrengthTestView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CFieldStrengthTestView ���

#ifdef _DEBUG
void CFieldStrengthTestView::AssertValid() const
{
	CView::AssertValid();
}

void CFieldStrengthTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFieldStrengthTestDoc* CFieldStrengthTestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFieldStrengthTestDoc)));
	return (CFieldStrengthTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CFieldStrengthTestView ��Ϣ�������
