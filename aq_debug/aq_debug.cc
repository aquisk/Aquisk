#include "aq_debug/aq_debug.h"
#include "aq_debug/aq_debug_output.h"
void AqDebug::AqDebugReport::AqErrorHandling(AqDebug::AqDebugData ErrorReportContent){
std::string OutputMessage = ErrorReportContent.Code + ": " + ErrorReportContent.Message;
AqDebug::AqDebugOutput(OutputMessage);
}
void AqDebug::AqDebugReport::AqWarningHandling(AqDebug::AqDebugData WarningReportContent){
std::string OutputMessage = WarningReportContent.Code + ": " + WarningReportContent.Message;
AqDebug::AqDebugOutput(OutputMessage);
}
void AqDebug::AqDebugReport::AqInfoHandling(AqDebug::AqDebugData InfoReportContent){
std::string OutputMessage = InfoReportContent.Code + ": " + InfoReportContent.Message;
AqDebug::AqDebugOutput(OutputMessage);
}