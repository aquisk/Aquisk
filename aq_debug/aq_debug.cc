// (c) Copyright 2023 Aquisk (AQ Project) Authors
// Use of this source code is governed by a Aquisk License that can be found in the LICENSE file.

// This file defines the Aquisk debug library information handling function.
#include "aq_debug/aq_debug.h"
// Process the debug data and output it through the interface.
void AqDebug::AqDebugReport::ErrorHandling(AqDebug::AqDebugReport::AqDebugData ErrorReportData){
    std::string OutputMessage = ErrorReportData.Code + ": " + ErrorReportData.Message;
    AqDebug::AqDebugOutput(OutputMessage);
}
void AqDebug::AqDebugReport::WarningHandling(AqDebug::AqDebugReport::AqDebugData WarningReportData){
    std::string OutputMessage = WarningReportData.Code + ": " + WarningReportData.Message;
    AqDebug::AqDebugOutput(OutputMessage);
}
void AqDebug::AqDebugReport::InfoHandling(AqDebug::AqDebugReport::AqDebugData InfoReportData){
    std::string OutputMessage = InfoReportData.Code + ": " + InfoReportData.Message;
    AqDebug::AqDebugOutput(OutputMessage);
}
