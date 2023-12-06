# Aquisk (AQ Project)

(c) Copyright 2023 Aquisk (AQ Project) Authors  
Use of this source code is governed by a Aquisk License that can be found in the LICENSE file.  

## Aquisk Debug Library

## External Interface
- AqDebug
    - AqDebugReport
        - parameter
            - AqDebugData Data
                - std::string Code
                - std::string Message
        - function
            - ErrorReport();
            - WarningReport();
            - InfoReport();

Example:  
```c++
AqDebug::AqDebugReport custom_name;
custom_name.Data.Code = "Debug Code";
custom_name.Data.Message = "Debug Message";
// Select one of the following calling interfaces according to the serious situation: 
    custom_name.ErrorReport(); // Report errors using this interface.
    custom_name.WarningReport(); // Report warnings using this interface.
    custom_name.InfoReport(); // Report information using this interface.
```

### Basic Statement and Definitions:
- aq_debug
    - aq_debug.h
    - aq_debug.cc

### Output function declaration and definition:
- aq_debug_output:
    - aq_debug_output.h
    - aq_debug_output.cc