// Zero.CPPATLAPP.cpp: WinMain 的实现


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "ZeroCPPATLAPP_i.h"
#include "xdlldata.h"


using namespace ATL;


class CZeroCPPATLAPPModule : public ATL::CAtlExeModuleT< CZeroCPPATLAPPModule >
{
public :
	DECLARE_LIBID(LIBID_ZeroCPPATLAPPLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ZEROCPPATLAPP, "{336df9e4-6958-414f-afe1-9f9cb3b81f33}")
};

CZeroCPPATLAPPModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

