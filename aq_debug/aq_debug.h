#ifndef aq_debug
#define aq_debug
#include <iostream>
#include "aq_debug/aq_debug_output.h"
namespace AqDebug{
    class AqDebugData{
        public:
            std::string Code;
            std::string Message;
    };
    class AqDebugReport{
        public:
            std::string Code;
            std::string Message;
            void ErrorReport(){
                AqDebug::AqDebugData ErrorReportContent;
                ErrorReportContent.Code = Code;
                ErrorReportContent.Message = Message;
                AqErrorHandling(ErrorReportContent);
            }
            void WarningReport(){
                AqDebug::AqDebugData WarningReportContent;
                WarningReportContent.Code = Code;
                WarningReportContent.Message = Message;
                AqWarningHandling(WarningReportContent);
            }
            void InfoReport(){
                AqDebug::AqDebugData InfoReportContent;
                InfoReportContent.Code = Code;
                InfoReportContent.Message = Message;
                AqInfoHandling(InfoReportContent);
            }
        private:
            void AqErrorHandling(AqDebug::AqDebugData ErrorReportContent);
            void AqWarningHandling(AqDebug::AqDebugData WarningReportContent);
            void AqInfoHandling(AqDebug::AqDebugData InfoReportContent);
    };
}
#endif