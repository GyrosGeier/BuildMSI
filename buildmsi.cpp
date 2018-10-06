#include <tchar.h>

#include <objbase.h>

#include <iostream>
#include <iomanip>

int _tmain(int, TCHAR **)
try
{
	HRESULT rc = ::CoInitializeEx(0, COINIT_APARTMENTTHREADED);

	if(FAILED(rc))
		throw rc;

	::CoUninitialize();

	return 0;
}
catch (HRESULT rc)
{
	std::cerr << "Unhandled error " << std::hex << std::setw(8) << std::setfill('0') << rc << std::endl;
	return 1;
}