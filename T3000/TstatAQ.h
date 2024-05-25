#pragma once
#include "afxwin.h"

#include "CM5\CStatic\staticex.h"

// CTstatAQ ������ͼ

class CTstatAQ : public CFormView
{
	DECLARE_DYNCREATE(CTstatAQ)

protected:
	
	

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TSTAT_AQ };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

public:
    CTstatAQ();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
    virtual ~CTstatAQ();
    void Fresh();
    void UpdateUI();
    void EnableCus(bool flag);
    virtual void OnInitialUpdate();
    afx_msg LRESULT UpdateUI(WPARAM wParam, LPARAM lParam);
    afx_msg void OnEnKillfocusEditCo2OnTime();
    afx_msg void OnEnKillfocusEditCo2OffTime();
    afx_msg void OnEnKillfocusEditPmOnTime();
    afx_msg void OnEnKillfocusEditPmOffTime();
    afx_msg void OnBnClickedRadioDegC();
    afx_msg void OnBnClickedRadioDegF();
    afx_msg void OnCbnSelchangeComboAqiRegion();
    afx_msg void OnEnKillfocusEditLevel1();
    afx_msg void OnEnKillfocusEditLevel2();
    afx_msg void OnEnKillfocusEditLevel3();
    afx_msg void OnEnKillfocusEditLevel4();
    afx_msg void OnEnKillfocusEditLevel5();
    afx_msg void OnBnClickedButtonCusAqi();
    CStaticEx m_aqi_title;
    CStaticEx m_static_info;
};

const COLORREF AQI_Info_Status_Color[] =
{
    RGB(255,0,255),
    RGB(150,0,150),
    RGB(147,106,0),
    RGB(205,156,109),
    RGB(180,157,225),
    RGB(83,39,144)
};

const COLORREF AQI_Info_Status_Back_Color[] =
{
    RGB(255- 255,255- 0,255 - 255),
    RGB(255- 150,255- 0,255 - 150),
    RGB(255- 147,255- 106,255 - 0),
    RGB(255- 205,255- 156,255 - 109),
    RGB(255- 180,255- 157,255 - 225),
    RGB(255- 83 ,255- 39 ,255 - 144)
};


static DWORD WINAPI Update_TstatAQ_Thread(LPVOID lPvoid);

const int TSTAT_AQ_TEMP_UNIT = 104;   //�¶ȵ�λ   0 ���϶�     1���϶�
const int TSTAT_AQ_TEMPERATURE = 121;
const int TSTAT_AQ_HUM = 140;
const int TSTAT_AQ_CO2 = 139;
const int TSTAT_AQ_VOC = 998;

const int TSTAT_AQ_VOC_AIRLAB = 988;  //��Ʒ��62 ��Airlab �õ���988 

const int TSTAT_AQ_WEIGHT_1 = 760;
const int TSTAT_AQ_WEIGHT_2_5 = 761;
const int TSTAT_AQ_WEIGHT_4 = 762;
const int TSTAT_AQ_WEIGHT_10 = 763;
const int TSTAT_AQ_INDEX_1 = 764;
const int TSTAT_AQ_INDEX_2_5 = 765;
const int TSTAT_AQ_INDEX_4 = 766;
const int TSTAT_AQ_INDEX_10 = 767;
const int TSTAT_AQ_LIGHT = 628;
const int TSTAT_AQ_SOUND = 640;
const int TATAT_AQ_CO2_ON = 1009;
const int TATAT_AQ_CO2_OFF = 1010;
const int TATAT_AQ_PM_ON = 1011;
const int TATAT_AQ_PM_OFF = 1012;

const int TATAT_AQ_MODBUS_AQI = 1010;
const int TATAT_AQ_MODBUS_AQI_LEVEL = 1011;
const int TATAT_AQ_MODBUS_AQI_AREA = 1012;  // 0 for USA, 1 for China, and 2 for customer customization
const int TATAT_AQ_MODBUS_AQI_CUSTOMER_FIRST_LINE = 1013;
const int TATAT_AQ_MODBUS_AQI_CUSTOMER_SECOND_LINE = 1014;
const int TATAT_AQ_MODBUS_AQI_CUSTOMER_THIRD_LINE = 1015;
const int TATAT_AQ_MODBUS_AQI_CUSTOMER_FOURTH_LINE = 1016;
const int TATAT_AQ_MODBUS_AQI_CUSTOMER_FIFTH_LINE = 1017;




