#pragma once

// TODO: Replace with custom define
#ifdef BUILD_FUSELCPPTEMPLATE___SHARED_LIB
#define MYLIB_API __declspec(dllexport)
#else
#define MYLIB_API __declspec(dllimport)
#endif

// TODO: Replace with own namespace
namespace MyLib
{
    // TODO: Replace with own functions
    void MYLIB_API LibFunction(void);
}
