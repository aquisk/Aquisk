// (c) Copyright 2023 Aquisk (AQ Project) Authors
// Use of this source code is governed by a Aquisk License that can be found in the LICENSE file.
// This file defines the interface of the Aquisk Debug library.
#ifndef aq_debug
#define aq_debug
#include <iostream>
#include "aq_debug/aq_debug_output.h"
namespace AqDebug{
    // Interface to Aquisk debug library.
    class AqDebugReport{
        public:
            // Parameters for the Aquisk debugging library interface.
            std::string Code;
            std::string Message;
            // Aquisk debug library internal classes.
            class AqDebugData{
                public:
                    std::string Code;
                    std::string Message;
            };
            // Aquisk debug library call method.
            void AqErrorReport(){
                AqDebugData ErrorReportContent;
                ErrorReportContent.Code = Code;
                ErrorReportContent.Message = Message;
                AqErrorHandling(ErrorReportContent);
            }
            void AqWarningReport(){
                AqDebugData WarningReportContent;
                WarningReportContent.Code = Code;
                WarningReportContent.Message = Message;
                AqWarningHandling(WarningReportContent);
            }
            void AqInfoReport(){
                AqDebugData InfoReportContent;
                InfoReportContent.Code = Code;
                InfoReportContent.Message = Message;
                AqInfoHandling(InfoReportContent);
            }
        private:
            // Aquisk debug library content handling function.
            void AqErrorHandling(AqDebugData ErrorReportContent);
            void AqWarningHandling(AqDebugData WarningReportContent);
            void AqInfoHandling(AqDebugData InfoReportContent);
    };
}
#endif