#ifndef aq_debug
#define aq_debug
#include <iostream>
#include "aq_debug/aq_debug_output.h"
namespace AqDebug{
    struct AqDebugData{
        std::string Code;
        std::string Message;
    };
    extern void AqErrorHandling(AqDebug::AqDebugData ErrorReportContent);
    extern void AqWarningHandling(AqDebug::AqDebugData WarningReportContent);
    extern void AqInfoHandling(AqDebug::AqDebugData InfoReportContent);
    class AqDebugReport{
        public:
            void ErrorReport(AqDebug::AqDebugData ErrorReportContent){
                AqDebug::AqErrorHandling(ErrorReportContent);
            }
            void WarningReport(AqDebug::AqDebugData WarningReportContent){
                AqDebug::AqWarningHandling(WarningReportContent);
            }
            void InfoReport(AqDebug::AqDebugData InfoReportContent){
                AqDebug::AqInfoHandling(InfoReportContent);
            }
    };
    
}
#endif