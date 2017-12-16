
_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 struc ; (sizeof=0x4,	mappedto_20)
			; XREF:	_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2/r
wProcessorArchitecture dw ?
wReserved dw ?
_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 ends


_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2	union ;	(sizeof=0x4)
			; XREF:	_SYSTEM_INFO/r
dwOemId	dd ?
anonymous_0 _SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 ?
_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2	ends


_SYSTEM_INFO struc ; (sizeof=0x24) ; XREF: FF004224/r
anonymous_0 _SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2 ?
dwPageSize dd ?
lpMinimumApplicationAddress dd ? ; offset
lpMaximumApplicationAddress dd ? ; offset
dwActiveProcessorMask dd ?
dwNumberOfProcessors dd	?
dwProcessorType	dd ?
dwAllocationGranularity	dd ?
wProcessorLevel	dw ?
wProcessorRevision dw ?
_SYSTEM_INFO ends


FILE struc ; (sizeof=0x20, mappedto_19)	; XREF:	FF003DA7/r FF003DC9/r
_ptr dd	?		; offset
_cnt dd	?
_base dd ?		; offset
_flag dd ?
_file dd ?
_charbuf dd ?
_bufsiz	dd ?
_tmpfname dd ?		; offset
FILE ends


_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E struc	; (sizeof=0x8, mappedto_18)
			; XREF:	LARGE_INTEGER/r	LARGE_INTEGER/r
LowPart	dd ?
HighPart dd ?
_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ends


LARGE_INTEGER union ; (sizeof=0x8, mappedto_17)	; XREF:	FF004093/r
anonymous_0 _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
u _LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
QuadPart dq ?
LARGE_INTEGER ends


_FILETIME struc	; (sizeof=0x8, mappedto_16) ; XREF: FF004091/r
dwLowDateTime dd ?
dwHighDateTime dd ?
_FILETIME ends


_cpinfo	struc ;	(sizeof=0x14, mappedto_15) ; XREF: FF003F18/r FF003F21/r ...
MaxCharSize dd ?
DefaultChar db 2 dup(?)
LeadByte db 12 dup(?)
_padding db 2 dup(?)
_cpinfo	ends


_SECURITY_ATTRIBUTES struc ; (sizeof=0xC, mappedto_14) ; XREF: FF003EFB/r
nLength	dd ?
lpSecurityDescriptor dd	? ; offset
bInheritHandle dd ?
_SECURITY_ATTRIBUTES ends


_MEMORY_BASIC_INFORMATION struc	; (sizeof=0x1C,	mappedto_13) ; XREF: FF003EE6/r
			; FF004222/r
BaseAddress dd ?	; offset
AllocationBase dd ?	; offset
AllocationProtect dd ?
RegionSize dd ?
State dd ?
Protect	dd ?
Type dd	?
_MEMORY_BASIC_INFORMATION ends


_STARTUPINFOA struc ; (sizeof=0x44, mappedto_12) ; XREF: FF003EC8/r Startup/r
cb dd ?
lpReserved dd ?		; offset
lpDesktop dd ?		; offset
lpTitle	dd ?		; offset
dwX dd ?
dwY dd ?
dwXSize	dd ?
dwYSize	dd ?
dwXCountChars dd ?
dwYCountChars dd ?
dwFillAttribute	dd ?
dwFlags	dd ?
wShowWindow dw ?
cbReserved2 dw ?
lpReserved2 dd ?	; offset
hStdInput dd ?		; offset
hStdOutput dd ?		; offset
hStdError dd ?		; offset
_STARTUPINFOA ends


timecaps_tag struc ; (sizeof=0x8, mappedto_11) ; XREF: FF001510/r
wPeriodMin dd ?
wPeriodMax dd ?
timecaps_tag ends


MSG struc ; (sizeof=0x1C, mappedto_10) ; XREF: FF0012D8/r
hwnd dd	?		; offset
message	dd ?
wParam dd ?
lParam dd ?
time dd	?
pt POINT ?
MSG ends


tagMSG struc ; (sizeof=0x1C, mappedto_9)
hwnd dd	?		; offset
message	dd ?
wParam dd ?
lParam dd ?
time dd	?
pt POINT ?
tagMSG ends


WNDCLASSEXA struc ; (sizeof=0x30, mappedto_8)
cbSize dd ?
style dd ?
lpfnWndProc dd ?	; offset
cbClsExtra dd ?
cbWndExtra dd ?
hInstance dd ?		; offset
hIcon dd ?		; offset
hCursor	dd ?		; offset
hbrBackground dd ?	; offset
lpszMenuName dd	?	; offset
lpszClassName dd ?	; offset
hIconSm	dd ?		; offset
WNDCLASSEXA ends


RECT struc ; (sizeof=0x10, mappedto_7) ; XREF: WINDOWPLACEMENT/r
left dd	?
top dd ?
right dd ?
bottom dd ?
RECT ends


POINT struc ; (sizeof=0x8, mappedto_6) ; XREF: WINDOWPLACEMENT/r
			; WINDOWPLACEMENT/r ...
x dd ?
y dd ?
POINT ends


WINDOWPLACEMENT	struc ;	(sizeof=0x2C, mappedto_5) ; XREF: FF001267/r
length dd ?
flags dd ?
showCmd	dd ?
ptMinPosition POINT ?
ptMaxPosition POINT ?
rcNormalPosition RECT ?
WINDOWPLACEMENT	ends


tagRECT	struc ;	(sizeof=0x10, mappedto_4) ; XREF: .data:WeaponObj_Rects/r
			; .data:EffectObj_Rect/r ...
left dd	?
top dd ?
right dd ?
bottom dd ?
tagRECT	ends


CPPEH_RECORD struc ; (sizeof=0x18, align=0x4, copyof_3)	; XREF:	FF0040AB/r
			; FF0040AF/r ...
old_esp	dd ?		; XREF:	Startup+18/w Startup:loc_481ED6/r
exc_ptr	dd ?		; XREF:	Startup:loc_481EC2/r ; offset
registration _EH3_EXCEPTION_REGISTRATION ? ; XREF: Startup+F1/w
			; Startup:loc_481EED/w
CPPEH_RECORD ends


_msEH struc ; (sizeof=0xC, mappedto_2) ; XREF: .rdata:stru_48CA58/r
			; .rdata:stru_48CA68/r ...
_unk dd	?		; base 16
FilterProc dd ?		; offset
ExitProc dd ?		; offset
_msEH ends


struct_0 struc ; (sizeof=0x478,	mappedto_1)
anonymous_0 db 1144 dup(?) ; string(C)
struct_0 ends


_SCOPETABLE_ENTRY struc	; (sizeof=0xC, align=0x4, copyof_21)
			; XREF:	.rdata:stru_48CAE8/r
EnclosingLevel dd ?
FilterFunc dd ?		; offset
HandlerFunc dd ?	; offset
_SCOPETABLE_ENTRY ends


_EH3_EXCEPTION_REGISTRATION struc ; (sizeof=0x10, align=0x4, copyof_23)
			; XREF:	CPPEH_RECORD/r
Next dd	?		; offset
ExceptionHandler dd ?	; offset
ScopeTable dd ?		; offset
TryLevel dd ?		; XREF:	Startup+F1/w Startup:loc_481EED/w
_EH3_EXCEPTION_REGISTRATION ends


