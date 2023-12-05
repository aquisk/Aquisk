// (c) Copyright 2023 Aquisk (AQ Project) Authors
// Use of this source code is governed by a Aquisk License that can be found in the LICENSE file.
// This file defines the Aquisk debug library information handling function.
#include "aq_debug/aq_debug.h"
// Process the debug content and output it through the interface.
void AqDebug::AqDebugReport::AqErrorHandling(AqDebug::AqDebugReport::AqDebugData ErrorReportContent){
    std::string OutputMessage = ErrorReportContent.Code + ": " + ErrorReportContent.Message;
    AqDebug::AqDebugOutput(OutputMessage);
}
void AqDebug::AqDebugReport::AqWarningHandling(AqDebug::AqDebugReport::AqDebugData WarningReportContent){
    std::string OutputMessage = WarningReportContent.Code + ": " + WarningReportContent.Message;
    AqDebug::AqDebugOutput(OutputMessage);
}
void AqDebug::AqDebugReport::AqInfoHandling(AqDebug::AqDebugReport::AqDebugData InfoReportContent){
    std::string OutputMessage = InfoReportContent.Code + ": " + InfoReportContent.Message;
    AqDebug::AqDebugOutput(OutputMessage);
}