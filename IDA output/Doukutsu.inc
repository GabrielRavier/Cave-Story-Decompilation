; ---------------------------------------------------------------------------

_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 struc ; (sizeof=0x4,	mappedto_21)
					; XREF:	_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2/r
wProcessorArchitecture dw ?
wReserved	dw ?
_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 ends

; ---------------------------------------------------------------------------

_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2	union ;	(sizeof=0x4)
					; XREF:	_SYSTEM_INFO/r
dwOemId		dd ?
anonymous_0	_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 ?
_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2	ends

; ---------------------------------------------------------------------------

_SYSTEM_INFO	struc ;	(sizeof=0x24)	; XREF:	FF004224/r
anonymous_0	_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2	?
dwPageSize	dd ?			; XREF:	__resetstkoflw+31/r
lpMinimumApplicationAddress dd ?	; offset
lpMaximumApplicationAddress dd ?	; offset
dwActiveProcessorMask dd ?
dwNumberOfProcessors dd	?
dwProcessorType	dd ?
dwAllocationGranularity	dd ?
wProcessorLevel	dw ?
wProcessorRevision dw ?
_SYSTEM_INFO	ends

; ---------------------------------------------------------------------------

FILE		struc ;	(sizeof=0x20, mappedto_20) ; XREF: FF003DA7/r FF003DC9/r
_ptr		dd ?			; XREF:	_sprintf+27/w _sprintf+3D/r ...	; offset
_cnt		dd ?			; XREF:	_sprintf+16/w _sprintf+38/w ...
_base		dd ?			; XREF:	_sprintf+24/w _sscanf+11/w ; offset
_flag		dd ?			; XREF:	_sprintf+1D/w _sscanf+A/w
_file		dd ?
_charbuf	dd ?
_bufsiz		dd ?
_tmpfname	dd ?			; offset
FILE		ends

; ---------------------------------------------------------------------------

_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E struc	; (sizeof=0x8, mappedto_19)
					; XREF:	LARGE_INTEGER/r	LARGE_INTEGER/r
LowPart		dd ?
HighPart	dd ?
_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ends

; ---------------------------------------------------------------------------

LARGE_INTEGER	union ;	(sizeof=0x8, mappedto_18) ; XREF: ___security_init_cookie+49/r
					; ___security_init_cookie+4C/r ...
anonymous_0	_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
u		_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
QuadPart	dq ?
LARGE_INTEGER	ends

; ---------------------------------------------------------------------------

_FILETIME	struc ;	(sizeof=0x8, mappedto_17) ; XREF: FF004091/r
dwLowDateTime	dd ?			; XREF:	___security_init_cookie+24/r
dwHighDateTime	dd ?			; XREF:	___security_init_cookie+21/r
_FILETIME	ends

; ---------------------------------------------------------------------------

_cpinfo		struc ;	(sizeof=0x14, mappedto_16) ; XREF: FF003F18/r FF003F21/r ...
MaxCharSize	dd ?			; XREF:	__setmbcp_lk+4D/r
					; ___convertcp+44/r ...
DefaultChar	db 2 dup(?)
LeadByte	db 12 dup(?)		; XREF:	_setSBUpLow+3E/r
					; _setSBUpLow+4D/o ...
_padding	db 2 dup(?)
_cpinfo		ends

; ---------------------------------------------------------------------------

_SECURITY_ATTRIBUTES struc ; (sizeof=0xC, mappedto_15) ; XREF: FF003EFB/r
nLength		dd ?			; XREF:	__tsopen_lk+F/w
lpSecurityDescriptor dd	?		; XREF:	__tsopen_lk+16/w ; offset
bInheritHandle	dd ?			; XREF:	__tsopen_lk+1B/w
					; __tsopen_lk:loc_4878BF/w
_SECURITY_ATTRIBUTES ends

; ---------------------------------------------------------------------------

_MEMORY_BASIC_INFORMATION struc	; (sizeof=0x1C,	mappedto_14) ; XREF: FF003EE6/r
					; FF004222/r
BaseAddress	dd ?			; XREF:	__resetstkoflw+8A/r ; offset
AllocationBase	dd ?			; XREF:	__ValidateEH3RN+D4/r
					; __resetstkoflw+24/r ;	offset
AllocationProtect dd ?
RegionSize	dd ?			; XREF:	__resetstkoflw+7B/r
State		dd ?			; XREF:	__resetstkoflw+81/r
Protect		dd ?			; XREF:	__ValidateEH3RN+CE/r
					; __resetstkoflw+86/r
Type		dd ?			; XREF:	__ValidateEH3RN+C1/r
_MEMORY_BASIC_INFORMATION ends

; ---------------------------------------------------------------------------

_STARTUPINFOA	struc ;	(sizeof=0x44, mappedto_13) ; XREF: FF003EC8/r FF0040F2/r
cb		dd ?
lpReserved	dd ?			; offset
lpDesktop	dd ?			; offset
lpTitle		dd ?			; offset
dwX		dd ?
dwY		dd ?
dwXSize		dd ?
dwYSize		dd ?
dwXCountChars	dd ?
dwYCountChars	dd ?
dwFillAttribute	dd ?
dwFlags		dd ?			; XREF:	Startup:loc_481E79/w
					; Startup+167/r
wShowWindow	dw ?			; XREF:	Startup+16D/r
cbReserved2	dw ?			; XREF:	__ioinit+63/r
lpReserved2	dd ?			; XREF:	__ioinit+6F/r ;	offset
hStdInput	dd ?			; offset
hStdOutput	dd ?			; offset
hStdError	dd ?			; offset
_STARTUPINFOA	ends

; ---------------------------------------------------------------------------

timecaps_tag	struc ;	(sizeof=0x8, mappedto_12) ; XREF: FF001510/r
wPeriodMin	dd ?			; XREF:	sub_41C180+25/r	sub_41C180+2A/r
wPeriodMax	dd ?
timecaps_tag	ends

; ---------------------------------------------------------------------------

MSG		struc ;	(sizeof=0x1C, mappedto_11) ; XREF: FF0012D8/r
hwnd		dd ?			; offset
message		dd ?
wParam		dd ?
lParam		dd ?
time		dd ?
pt		POINT ?
MSG		ends

; ---------------------------------------------------------------------------

tagMSG		struc ;	(sizeof=0x1C, mappedto_10)
hwnd		dd ?			; offset
message		dd ?
wParam		dd ?
lParam		dd ?
time		dd ?
pt		POINT ?
tagMSG		ends

; ---------------------------------------------------------------------------

WNDCLASSEXA	struc ;	(sizeof=0x30, mappedto_9) ; XREF: FF0012A8/r
cbSize		dd ?			; XREF:	WinMain(x,x,x,x)+2E3/w
style		dd ?
lpfnWndProc	dd ?			; XREF:	WinMain(x,x,x,x)+2EA/w ; offset
cbClsExtra	dd ?
cbWndExtra	dd ?
hInstance	dd ?			; XREF:	WinMain(x,x,x,x)+2F4/w ; offset
hIcon		dd ?			; XREF:	WinMain(x,x,x,x)+32C/w ; offset
hCursor		dd ?			; XREF:	WinMain(x,x,x,x)+31A/w ; offset
hbrBackground	dd ?			; XREF:	WinMain(x,x,x,x)+2FF/w ; offset
lpszMenuName	dd ?			; XREF:	WinMain(x,x,x,x):Switch_412780_case_1_2/w ; offset
lpszClassName	dd ?			; XREF:	WinMain(x,x,x,x)+308/w ; offset
hIconSm		dd ?			; XREF:	WinMain(x,x,x,x)+33E/w ; offset
WNDCLASSEXA	ends

; ---------------------------------------------------------------------------

RECT		struc ;	(sizeof=0x10, mappedto_8) ; XREF: WINDOWPLACEMENT/r
left		dd ?			; XREF:	Save_Window_Rect_File+4C/w
top		dd ?			; XREF:	Save_Window_Rect_File+52/w
right		dd ?			; XREF:	Save_Window_Rect_File+58/w
bottom		dd ?			; XREF:	Save_Window_Rect_File+5E/w
RECT		ends

; ---------------------------------------------------------------------------

POINT		struc ;	(sizeof=0x8, mappedto_7) ; XREF: WINDOWPLACEMENT/r
					; WINDOWPLACEMENT/r ...
x		dd ?
y		dd ?
POINT		ends

; ---------------------------------------------------------------------------

WINDOWPLACEMENT	struc ;	(sizeof=0x2C, mappedto_6) ; XREF: FF001267/r
length		dd ?
flags		dd ?
showCmd		dd ?			; XREF:	Save_Window_Rect_File:loc_41121A/r
					; Save_Window_Rect_File+BB/o
ptMinPosition	POINT ?
ptMaxPosition	POINT ?
rcNormalPosition RECT ?			; XREF:	Save_Window_Rect_File+4C/w
					; Save_Window_Rect_File+52/w ...
WINDOWPLACEMENT	ends

; ---------------------------------------------------------------------------

tagRECT		struc ;	(sizeof=0x10, mappedto_5) ; XREF: .data:WeaponObj_Rects/r
					; .data:EffectObj_Rect/r ...
left		dd ?			; XREF:	Draw_Window+7F/r
					; Draw_Window+8A/w ...
top		dd ?			; XREF:	Draw_Window+8F/r
					; Draw_Window+9B/w ...
right		dd ?			; XREF:	Draw_Window+AD/w
					; Init_Direct_Draw+127/w ...
bottom		dd ?			; XREF:	Draw_Window+BE/w
					; Init_Direct_Draw+139/w ...
tagRECT		ends

; ---------------------------------------------------------------------------

CPPEH_RECORD	struc ;	(sizeof=0x18, align=0x4, copyof_4) ; XREF: FF005A28/r
					; FF005A29/r ...
old_esp		dd ?			; XREF:	Startup+18/w
					; Startup:loc_481ED6/r ...
exc_ptr		dd ?			; XREF:	Startup:loc_481EC2/r
					; ___crtInitCritSecAndSpinCount:loc_487C44/r ; offset
registration	_EH3_EXCEPTION_REGISTRATION ? ;	XREF: _report_failure-25/w
					; _report_failure:Int3/w ...
CPPEH_RECORD	ends

; ---------------------------------------------------------------------------

_msEH		struc ;	(sizeof=0xC, mappedto_3) ; XREF: .rdata:stru_48CA58/r
					; .rdata:stru_48CA68/r ...
_unk		dd ?			; XREF:	__output+5E/r ;	base 16
FilterProc	dd ?			; offset
ExitProc	dd ?			; offset
_msEH		ends

; ---------------------------------------------------------------------------

struct_0	struc ;	(sizeof=0x478, mappedto_2)
anonymous_0	db 1144	dup(?)		; string(C)
struct_0	ends

; ---------------------------------------------------------------------------

_EH3_EXCEPTION_REGISTRATION struc ; (sizeof=0x10, align=0x4, copyof_27)
					; XREF:	CPPEH_RECORD/r
Next		dd ?			; offset
ExceptionHandler dd ?			; offset
ScopeTable	dd ?			; offset
TryLevel	dd ?			; XREF:	_report_failure-25/w
					; _report_failure:Int3/w ...
_EH3_EXCEPTION_REGISTRATION ends

; ---------------------------------------------------------------------------

; enum _MEDIA_TYPE, mappedto_1
F5_1Pt2_512	 = 1
F3_1Pt44_512	 = 2
F3_2Pt88_512	 = 3
F3_20Pt8_512	 = 4
F3_720_512	 = 5
F5_360_512	 = 6
F5_320_512	 = 7
F5_320_1024	 = 8
F5_180_512	 = 9
F5_160_512	 = 0Ah
RemovableMedia	 = 0Bh
FixedMedia	 = 0Ch
F3_120M_512	 = 0Dh
F3_640_512	 = 0Eh
F5_640_512	 = 0Fh
F5_720_512	 = 10h
F3_1Pt2_512	 = 11h
F3_1Pt23_1024	 = 12h
F5_1Pt23_1024	 = 13h
F3_128Mb_512	 = 14h
F3_230Mb_512	 = 15h
F8_256_128	 = 16h

