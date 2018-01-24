; ---------------------------------------------------------------------------

FILETIME	struc ;	(sizeof=0x8, mappedto_26) ; XREF: ...
dwLowDateTime	dd ?
dwHighDateTime	dd ?
FILETIME	ends

; ---------------------------------------------------------------------------

SYSTEMTIME	struc ;	(sizeof=0x10, mappedto_25) ; XREF: ...
wYear		dw ?
wMonth		dw ?
wDayOfWeek	dw ?
wDay		dw ?
wHour		dw ?
wMinute		dw ?
wSecond		dw ?
wMilliseconds	dw ?
SYSTEMTIME	ends

; ---------------------------------------------------------------------------

_SYSTEMTIME	struc ;	(sizeof=0x10, mappedto_24)
wYear		dw ?
wMonth		dw ?
wDayOfWeek	dw ?
wDay		dw ?
wHour		dw ?
wMinute		dw ?
wSecond		dw ?
wMilliseconds	dw ?
_SYSTEMTIME	ends

; ---------------------------------------------------------------------------

_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 struc ; (sizeof=0x4,	mappedto_23) ; XREF: ...
wProcessorArchitecture dw ?
wReserved	dw ?
_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 ends

; ---------------------------------------------------------------------------

_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2	union ;	(sizeof=0x4) ; XREF: ...
dwOemId		dd ?
anonymous_0	_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 ?
_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2	ends

; ---------------------------------------------------------------------------

_SYSTEM_INFO	struc ;	(sizeof=0x24)	; XREF:	...
anonymous_0	_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2	?
dwPageSize	dd ?			; XREF:	...
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

FILE		struc ;	(sizeof=0x20, mappedto_22) ; XREF: ...
_ptr		dd ?			; XREF:	... ; offset
_cnt		dd ?			; XREF:	...
_base		dd ?			; XREF:	... ; offset
_flag		dd ?			; XREF:	...
_file		dd ?
_charbuf	dd ?
_bufsiz		dd ?
_tmpfname	dd ?			; offset
FILE		ends

; ---------------------------------------------------------------------------

_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E struc	; (sizeof=0x8, mappedto_21) ; XREF: ...
LowPart		dd ?
HighPart	dd ?
_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ends

; ---------------------------------------------------------------------------

LARGE_INTEGER	union ;	(sizeof=0x8, mappedto_20) ; XREF: ...
anonymous_0	_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
u		_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
QuadPart	dq ?
LARGE_INTEGER	ends

; ---------------------------------------------------------------------------

_FILETIME	struc ;	(sizeof=0x8, mappedto_19) ; XREF: ...
dwLowDateTime	dd ?			; XREF:	...
dwHighDateTime	dd ?			; XREF:	...
_FILETIME	ends

; ---------------------------------------------------------------------------

_cpinfo		struc ;	(sizeof=0x14, mappedto_18) ; XREF: ...
MaxCharSize	dd ?			; XREF:	...
DefaultChar	db 2 dup(?)
LeadByte	db 12 dup(?)		; XREF:	...
_padding	db 2 dup(?)
_cpinfo		ends

; ---------------------------------------------------------------------------

_SECURITY_ATTRIBUTES struc ; (sizeof=0xC, mappedto_17) ; XREF: ...
nLength		dd ?			; XREF:	...
lpSecurityDescriptor dd	?		; XREF:	... ; offset
bInheritHandle	dd ?			; XREF:	...
_SECURITY_ATTRIBUTES ends

; ---------------------------------------------------------------------------

_MEMORY_BASIC_INFORMATION struc	; (sizeof=0x1C,	mappedto_16) ; XREF: ...
BaseAddress	dd ?			; XREF:	... ; offset
AllocationBase	dd ?			; XREF:	... ; offset
AllocationProtect dd ?
RegionSize	dd ?			; XREF:	...
State		dd ?			; XREF:	...
Protect		dd ?			; XREF:	...
Type		dd ?			; XREF:	...
_MEMORY_BASIC_INFORMATION ends

; ---------------------------------------------------------------------------

_STARTUPINFOA	struc ;	(sizeof=0x44, mappedto_15) ; XREF: ...
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
dwFlags		dd ?			; XREF:	...
wShowWindow	dw ?			; XREF:	...
cbReserved2	dw ?			; XREF:	...
lpReserved2	dd ?			; XREF:	... ; offset
hStdInput	dd ?			; offset
hStdOutput	dd ?			; offset
hStdError	dd ?			; offset
_STARTUPINFOA	ends

; ---------------------------------------------------------------------------

timecaps_tag	struc ;	(sizeof=0x8, mappedto_14) ; XREF: ...
wPeriodMin	dd ?			; XREF:	...
wPeriodMax	dd ?
timecaps_tag	ends

; ---------------------------------------------------------------------------

MSG		struc ;	(sizeof=0x1C, mappedto_13) ; XREF: ...
hwnd		dd ?			; offset
message		dd ?
wParam		dd ?
lParam		dd ?
time		dd ?
pt		POINT ?
MSG		ends

; ---------------------------------------------------------------------------

tagMSG		struc ;	(sizeof=0x1C, mappedto_12)
hwnd		dd ?			; offset
message		dd ?
wParam		dd ?
lParam		dd ?
time		dd ?
pt		POINT ?
tagMSG		ends

; ---------------------------------------------------------------------------

WNDCLASSEXA	struc ;	(sizeof=0x30, mappedto_11) ; XREF: ...
cbSize		dd ?			; XREF:	...
style		dd ?
lpfnWndProc	dd ?			; XREF:	... ; offset
cbClsExtra	dd ?
cbWndExtra	dd ?
hInstance	dd ?			; XREF:	... ; offset
hIcon		dd ?			; XREF:	... ; offset
hCursor		dd ?			; XREF:	... ; offset
hbrBackground	dd ?			; XREF:	... ; offset
lpszMenuName	dd ?			; XREF:	... ; offset
lpszClassName	dd ?			; XREF:	... ; offset
hIconSm		dd ?			; XREF:	... ; offset
WNDCLASSEXA	ends

; ---------------------------------------------------------------------------

RECT		struc ;	(sizeof=0x10, mappedto_10) ; XREF: ...
left		dd ?			; XREF:	...
top		dd ?			; XREF:	...
right		dd ?			; XREF:	...
bottom		dd ?			; XREF:	...
RECT		ends

; ---------------------------------------------------------------------------

POINT		struc ;	(sizeof=0x8, mappedto_9) ; XREF: ...
x		dd ?
y		dd ?
POINT		ends

; ---------------------------------------------------------------------------

WINDOWPLACEMENT	struc ;	(sizeof=0x2C, mappedto_8) ; XREF: ...
length		dd ?
flags		dd ?
showCmd		dd ?			; XREF:	...
ptMinPosition	POINT ?
ptMaxPosition	POINT ?
rcNormalPosition RECT ?			; XREF:	...
WINDOWPLACEMENT	ends

; ---------------------------------------------------------------------------

tagRECT		struc ;	(sizeof=0x10, mappedto_7) ; XREF: ...
left		dd ?			; XREF:	...
top		dd ?			; XREF:	...
right		dd ?			; XREF:	...
bottom		dd ?			; XREF:	...
tagRECT		ends

; ---------------------------------------------------------------------------

CPPEH_RECORD	struc ;	(sizeof=0x18, align=0x4, copyof_6) ; XREF: ...
old_esp		dd ?			; XREF:	...
exc_ptr		dd ?			; XREF:	... ; offset
registration	_EH3_EXCEPTION_REGISTRATION ? ;	XREF: ...
CPPEH_RECORD	ends

; ---------------------------------------------------------------------------

_msEH		struc ;	(sizeof=0xC, mappedto_5) ; XREF: ...
_unk		dd ?			; base 16 signed
FilterProc	dd ?			; offset
ExitProc	dd ?			; offset
_msEH		ends

; ---------------------------------------------------------------------------

struct_0	struc ;	(sizeof=0x478, mappedto_4)
anonymous_0	db 1144	dup(?)		; string(C)
struct_0	ends

; ---------------------------------------------------------------------------

_EH3_EXCEPTION_REGISTRATION struc ; (sizeof=0x10, align=0x4, copyof_28)	; XREF:	...
Next		dd ?			; offset
ExceptionHandler dd ?			; offset
ScopeTable	dd ?			; offset
TryLevel	dd ?			; XREF:	...
_EH3_EXCEPTION_REGISTRATION ends

; ---------------------------------------------------------------------------

_SCOPETABLE_ENTRY struc	; (sizeof=0xC, align=0x4, copyof_31) ; XREF: ...
EnclosingLevel	dd ?			; XREF:	...
FilterFunc	dd ?			; offset
HandlerFunc	dd ?			; offset
_SCOPETABLE_ENTRY ends

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

; ---------------------------------------------------------------------------

; enum MACRO_TVGN, mappedto_2
TVGN_ROOT	 = 0
TVGN_NEXT	 = 1
TVGN_PREVIOUS	 = 2
TVGN_PARENT	 = 3
TVGN_CHILD	 = 4
TVGN_FIRSTVISIBLE  = 5
TVGN_NEXTVISIBLE  = 6
TVGN_PREVIOUSVISIBLE  =	7
TVGN_DROPHILITE	 = 8
TVGN_CARET	 = 9
TVGN_LASTVISIBLE  = 0Ah

; ---------------------------------------------------------------------------

; enum NPC_Vars, mappedto_3
Is_Alive	 = 0
Collision_Flag	 = 4
X_Position	 = 8
Y_Position	 = 0Ch
X_Velocity	 = 10h
Y_Velocity	 = 14h

