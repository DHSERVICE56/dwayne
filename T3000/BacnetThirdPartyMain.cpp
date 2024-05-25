// BacnetThirdPartyMain.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "T3000.h"
#include "BacnetThirdPartyMain.h"
#include "global_function.h"
#include "global_variable_extern.h"

// CBacnetThirdPartyMain

IMPLEMENT_DYNCREATE(CBacnetThirdPartyMain, CFormView)

CBacnetThirdPartyMain::CBacnetThirdPartyMain()
	: CFormView(IDD_DIALOG_BACNET_THIRD_PARTY_MAIN)
{

}

CBacnetThirdPartyMain::~CBacnetThirdPartyMain()
{
}

void CBacnetThirdPartyMain::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CBacnetThirdPartyMain, CFormView)
END_MESSAGE_MAP()


// CBacnetThirdPartyMain ���

#ifdef _DEBUG
void CBacnetThirdPartyMain::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CBacnetThirdPartyMain::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CBacnetThirdPartyMain ��Ϣ�������

void CBacnetThirdPartyMain::Fresh()
{
    int nret = Bacnet_Read_Property_Multiple();
    if (nret == 0)
    {
        CFile file;

        file.Open(_T("C:\\log.txt"), CFile::modeRead, NULL);

        DWORD len = file.GetLength();

        char *Buf = new char[len + 1];

        Buf[len+1] = 0;  //0��ֹ�ַ��������������

        file.Read(Buf, len);   //Read( void* lpBuf, UINT nCount ) lpBuf�����ڽ��ն�ȡ�������ݵ�Bufָ��nCount�Ǵ��ļ���ȡ���ֽ���

        CString temp_cs;
        MultiByteToWideChar(CP_ACP, 0, (char *)Buf, (int)strlen((char *)Buf) + 1, temp_cs.GetBuffer(len), len);
        temp_cs.ReleaseBuffer();

        MessageBox(temp_cs);
    }
    //CStatic* pWnd = (CStatic*)GetDlgItem(IDC_STATIC_AQ_TEMPERATURE); // �õ� Picture Control ��� ;
    //CString icon_temperature;


    //CString ApplicationFolder;
    //GetModuleFileName(NULL, ApplicationFolder.GetBuffer(MAX_PATH), MAX_PATH);
    //PathRemoveFileSpec(ApplicationFolder.GetBuffer(MAX_PATH));
    //ApplicationFolder.ReleaseBuffer();
    //AQ_image_fordor = ApplicationFolder + _T("\\ResourceFile");
    //icon_temperature = AQ_image_fordor + _T("\\temperature.bmp");
    //HBITMAP bitmap;
    //bitmap = (HBITMAP)LoadImage(AfxGetInstanceHandle(), icon_temperature, IMAGE_BITMAP, 40, 120, LR_LOADFROMFILE);

    //CStatic *p = (CStatic *)GetDlgItem(IDC_STATIC_AQ_TEMPERATURE);
    ////���þ�̬�ؼ����ڷ��Ϊλͼ������ʾ  
    //p->ModifyStyle(0xf, SS_BITMAP | SS_CENTERIMAGE);
    ////��ͼƬ���õ�Picture�ؼ���  
    //p->SetBitmap(bitmap);





    //CMainFrame* pFrame = (CMainFrame*)(AfxGetApp()->m_pMainWnd);
    //pFrame->SetWindowTextW(_T("T3000 Building Automation System") + CurrentT3000Version);
    //if (h_tstat_aq_thread == NULL)
    //    h_tstat_aq_thread = CreateThread(NULL, NULL, Update_TstatAQ_Thread, this, NULL, NULL);
    //UpdateUI();


    //CString sound_full_path;
    //CStatic* pWnd_sound_pic = (CStatic*)GetDlgItem(IDC_STATIC_SOUND); // �õ� Picture Control ��� ;
    //if (product_register_value[TSTAT_AQ_SOUND] <= 10)
    //    sound_full_path = ApplicationFolder + _T("\\ResourceFile\\Icon\\sound_0.ico");
    //else if (product_register_value[TSTAT_AQ_SOUND] <= 30)
    //    sound_full_path = ApplicationFolder + _T("\\ResourceFile\\Icon\\sound_1.ico");
    //else if (product_register_value[TSTAT_AQ_SOUND] <= 50)
    //    sound_full_path = ApplicationFolder + _T("\\ResourceFile\\Icon\\sound_2.ico");
    //else
    //    sound_full_path = ApplicationFolder + _T("\\ResourceFile\\Icon\\sound_3.ico");
    //Bitmap icon_bitmap(sound_full_path);
    //HICON m_hIcon = ExtractIcon(AfxGetInstanceHandle(), sound_full_path, 0);
    //pWnd_sound_pic->ModifyStyle(0, SS_ICON | SS_CENTERIMAGE);
    //pWnd_sound_pic->SetIcon(m_hIcon);



}
