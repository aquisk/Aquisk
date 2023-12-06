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
            // Aquisk debug library parameter class.
            class AqDebugData{
                public:
                    std::string Code;
                    std::string Message;
            };
            // Parameters for the Aquisk debugging library interface.
            AqDebugData Data;
            // Aquisk debugging library call interface.
            void ErrorReport(){
                ErrorHandling(Data);
            }
            void WarningReport(){
                WarningHandling(Data);
            }
            void InfoReport(){
                InfoHandling(Data);
            }
        private:
            // Aquisk debug library data handling function.
            void ErrorHandling(AqDebugData ErrorReportData);
            void WarningHandling(AqDebugData WarningReportData);
            void InfoHandling(AqDebugData InfoReportData);
    };
}
#endif