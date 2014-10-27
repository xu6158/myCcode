
#ifndef _RF_Control_H_
#define _RF_Control_H_
/**
 * RF control header
 */

#if CC2500_use == 1
//Global extern variable declaration

struct RF {

    union {

        struct {
            unsigned Enable : 1;
            unsigned ReceiveGO : 1;
            unsigned TransceiveGO : 1;
            unsigned RxStatus : 1;
            unsigned TxStatus : 1;
            unsigned Debounce : 1;
            unsigned Learn : 1;
            unsigned Key : 1;
        };
    };

    union {

        struct {
            unsigned Sleep : 1;
            unsigned Run : 1;
            unsigned Bus : 1;
            unsigned Checked : 1;
            unsigned RxChecked : 1;
            unsigned Correction : 1;
            unsigned empty : 2;
        };
    };
    unsigned int Count;
    unsigned char CheckCount;
    unsigned int CheckedCounter;
    unsigned int RunTime;
    unsigned char DebounceTime;
    unsigned int CorrectionCounter;

};

#ifdef RadioFrequency1
struct RF RF1;
#endif

inline void RF_Initialization();
inline void RF_Main();
void setRF_Initialization();
void setRF_Main();
void setTxData();
void getRxData();
void setRF_Enable(char command);
void setLog_Code();
void setControl_Lights_Table();
void RF_RxDisable();
void setRF_Learn(char command);
void setRF_ReceiveGO(char command);
void setRF_RxStatus(char command);

#define setRF_Data(location,value) RF_Data[location]=value

struct RFSW {

    struct {
        unsigned Status : 1;
        unsigned empty : 7;
    };
};
struct RFSW *RFSW;

#ifdef use_1KEY
struct RFSW RFSW1;
#endif

#ifdef use_2KEY
struct RFSW RFSW2;
#endif

#ifdef use_3KEY
struct RFSW RFSW3;
#endif

void RfSWPointSelect(char sw);
void setRFSW_Control(char sw);
void setRFSW_AdjControl(char sw);
void setRFSW_Status(char sw, char command);

#if Dimmer_use == 1
void setRF_DimmerValue(char lights);
void setRF_DimmerLights(char lights, char on);
#else
#define setRF_DimmerValue(char) ;
#define setRF_DimmerLights(char,char) ;
#endif

#else 

#define RF_Initialization() ;
#define RF_Main() ;
#define setRF_Initialization() ;
#define setRF_Main() ;
#define setTxData() ;
#define getRxData() ;
#define setRF_Enable(char) ;
#define setLog_Code() ;
#define setControl_Lights_Table() ;
#define RF_RxDisable() ;
#define setRF_Learn(char) ;
#define setRF_ReceiveGO(char) ;
#define setRF_RxStatus(char) ;

#define setRF_Data(location,value) ;

#define setRF_DimmerValue(char) ;
#define setRF_DimmerLights(char,char) ;

#define RfSWPointSelect(char) ;
#define setRFSW_Control(char) ;
#define setRFSW_AdjControl(char) ;
#define setRFSW_Status(char,char) ;
#endif

#endif