
// Includes
#include "Select_File.h"

#if SYSC_use == 1

inline void SYSC_Initialization() {
#ifdef SYSC1
    setSYSC_Initialization();
#endif
}

void setSYSC_Initialization() {
    SYSC.Enable = true;
}

inline void SYSC_Main() {
#ifdef SYSC1
    setSYSC_Main();
#endif
}

void setSYSC_Main() {

    if (SYSC.Enable == true) {
        if (SYSC.ERROR == false) {

            SYSC.Timer++;
            if (SYSC.Timer >= 16)//*10ms
            {
                SYSC.Timer = 0;
                SYSC.ERROR = true;
                setLED(1, 0);
                setLED(2, 11);
                setLED(99, 11);
            }
        } else {
            SYSC.Timer++;
            if (SYSC.Timer == 16) {//*10ms
                SYSC.Timer = 0;
                SYSC.Counter = 0;
            } else {
                SYSC.Counter++;
                if (SYSC.Counter == 160) {
                    SYSC.Counter = 0;
                    SYSC.ERROR = false;
                    setLED(2, 10);
                    setLED(99, 10);
                }
            }
        }
    }
}

inline void DetectSYSC_Signal() {
    if (SYSC.Signal == false) {
        if (SYSC1 == true) {
            SYSC.Signal = true;
            SYSC.Timer = 0;
        }
    } else {
        if (SYSC1 == false) {
            SYSC.Signal = false;
        }
    }
}

#endif