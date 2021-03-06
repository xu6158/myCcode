/**
 * lights delay off header file
 */
#ifndef	_DelayOff_H_
#define _DelayOff_H_

#if DelayOff_use == 1

#define DelayOff_Debug  0
#if	Switch_Class == 1
#define DelayOffset 10000
#endif
#if	Switch_Class == 2
#define DelayOffset 10000
#endif
#if	Switch_Class == 3
#define DelayOffset 10000
#endif
#define SecondTimeValue (60000-DelayOffset)/Main_Time

//#if	Switch_Class == 1
//#define SecondTimeValue 5600	//*10ms
//#endif
//
//#if	Switch_Class == 2
//#define SecondTimeValue 5650	//*10ms
//#endif
//
//#if	Switch_Class == 3
//#define SecondTimeValue 5650	//*10ms
//#endif

struct DelayOff {

    struct {
        unsigned Enable : 1;
        unsigned GO : 1;
        unsigned empty : 6;
    };

    unsigned char Value;
    unsigned int SecondTime;
    unsigned char MinuteTime;
};
struct DelayOff *DelayOff;

#ifdef use_1KEY
struct DelayOff DlySw1;
#endif

#ifdef use_2KEY
struct DelayOff DlySw2;
#endif

#ifdef use_3KEY
struct DelayOff DlySw3;
#endif

inline void DelayOff_Initialization();
inline void DelayOff_Main();
char DelayTimejudge(char value);
void DlyOff_Initialization(char sw);
void DlyOff_Main(char sw);
void setDelayOff_GO(char sw, char command, char value);
char getDelayOff_GO(char sw);
void DelayOffPointSelect(char sw);
#else
//NOP
#define DelayOff_Initialization() ;
#define DelayOff_Main() ;
#define DelayTimejudge(char) ;
#define DlyOff_Initialization(char) ;
#define DlyOff_Main(char) ;
#define setDelayOff_GO(char,char,char) ;
#define DelayOffPointSelect(char) ;
#endif

#endif
