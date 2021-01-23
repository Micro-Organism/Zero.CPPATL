// dllmain.h: 模块类的声明。

class CZeroCPPATLMainModule : public ATL::CAtlDllModuleT< CZeroCPPATLMainModule >
{
public :
	DECLARE_LIBID(LIBID_ZeroCPPATLMainLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ZEROCPPATLMAIN, "{492193be-5488-4196-b99c-eb618baba271}")
};

extern class CZeroCPPATLMainModule _AtlModule;
