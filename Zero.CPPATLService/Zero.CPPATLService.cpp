// Zero.CPPATLService.cpp: WinMain 的实现


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "ZeroCPPATLService_i.h"


using namespace ATL;

#include <stdio.h>

class CZeroCPPATLServiceModule : public ATL::CAtlServiceModuleT< CZeroCPPATLServiceModule, IDS_SERVICENAME >
{
public :
	DECLARE_LIBID(LIBID_ZeroCPPATLServiceLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ZEROCPPATLSERVICE, "{233f20e0-2f17-4b55-8e51-12e4f7c712f5}")
	HRESULT InitializeSecurity() throw()
	{
		// TODO : 调用 CoInitializeSecurity 并为服务提供适当的安全设置
		// 建议 - PKT 级别的身份验证、
		// RPC_C_IMP_LEVEL_IDENTIFY 的模拟级别
		//以及适当的非 NULL 安全描述符。

		return S_OK;
	}
};

CZeroCPPATLServiceModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

