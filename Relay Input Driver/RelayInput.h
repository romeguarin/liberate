
#define GETRELAYINPUTHANDLE CreateFile(L"INP0:", GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL)
#define GETINPUT(x, y, z) DeviceIoControl(x, NULL, NULL, NULL, (LPVOID)y, sizeof(ZDKINPUT_STATE), z, NULL);