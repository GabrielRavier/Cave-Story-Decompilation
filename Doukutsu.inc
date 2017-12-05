; ---------------------------------------------------------------------------

_SYSTEM_INFO::$41710344DA04EC56A327D4EA11DEF6D2::$AA04DEB0C6383F89F13D312A174572A9 struc ; (sizeof=0x4,	mappedto_19) ; XREF: ...
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
dwPageSize	dd ?
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

FILE		struc ;	(sizeof=0x20, mappedto_18) ; XREF: ...
_ptr		dd ?			; offset
_cnt		dd ?
_base		dd ?			; offset
_flag		dd ?
_file		dd ?
_charbuf	dd ?
_bufsiz		dd ?
_tmpfname	dd ?			; offset
FILE		ends

; ---------------------------------------------------------------------------

_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E struc	; (sizeof=0x8, mappedto_17) ; XREF: ...
LowPart		dd ?
HighPart	dd ?
_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ends

; ---------------------------------------------------------------------------

LARGE_INTEGER	union ;	(sizeof=0x8, mappedto_16) ; XREF: ...
anonymous_0	_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
u		_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E ?
QuadPart	dq ?
LARGE_INTEGER	ends

; ---------------------------------------------------------------------------

_FILETIME	struc ;	(sizeof=0x8, mappedto_15) ; XREF: ...
dwLowDateTime	dd ?
dwHighDateTime	dd ?
_FILETIME	ends

; ---------------------------------------------------------------------------

_cpinfo		struc ;	(sizeof=0x14, mappedto_14) ; XREF: ...
MaxCharSize	dd ?
DefaultChar	db 2 dup(?)
LeadByte	db 12 dup(?)
_padding	db 2 dup(?)
_cpinfo		ends

; ---------------------------------------------------------------------------

_SECURITY_ATTRIBUTES struc ; (sizeof=0xC, mappedto_13) ; XREF: ...
nLength		dd ?
lpSecurityDescriptor dd	?		; offset
bInheritHandle	dd ?
_SECURITY_ATTRIBUTES ends

; ---------------------------------------------------------------------------

_MEMORY_BASIC_INFORMATION struc	; (sizeof=0x1C,	mappedto_12) ; XREF: ...
BaseAddress	dd ?			; offset
AllocationBase	dd ?			; offset
AllocationProtect dd ?
RegionSize	dd ?
State		dd ?
Protect		dd ?
Type		dd ?
_MEMORY_BASIC_INFORMATION ends

; ---------------------------------------------------------------------------

_STARTUPINFOA	struc ;	(sizeof=0x44, mappedto_11) ; XREF: ...
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
dwFlags		dd ?
wShowWindow	dw ?
cbReserved2	dw ?
lpReserved2	dd ?			; offset
hStdInput	dd ?			; offset
hStdOutput	dd ?			; offset
hStdError	dd ?			; offset
_STARTUPINFOA	ends

; ---------------------------------------------------------------------------

timecaps_tag	struc ;	(sizeof=0x8, mappedto_10) ; XREF: ...
wPeriodMin	dd ?
wPeriodMax	dd ?
timecaps_tag	ends

; ---------------------------------------------------------------------------

MSG		struc ;	(sizeof=0x1C, mappedto_9) ; XREF: ...
hwnd		dd ?			; offset
message		dd ?
wParam		dd ?
lParam		dd ?
time		dd ?
pt		POINT ?
MSG		ends

; ---------------------------------------------------------------------------

tagMSG		struc ;	(sizeof=0x1C, mappedto_8)
hwnd		dd ?			; offset
message		dd ?
wParam		dd ?
lParam		dd ?
time		dd ?
pt		POINT ?
tagMSG		ends

; ---------------------------------------------------------------------------

WNDCLASSEXA	struc ;	(sizeof=0x30, mappedto_7) ; XREF: ...
cbSize		dd ?
style		dd ?
lpfnWndProc	dd ?			; offset
cbClsExtra	dd ?
cbWndExtra	dd ?
hInstance	dd ?			; offset
hIcon		dd ?			; offset
hCursor		dd ?			; offset
hbrBackground	dd ?			; offset
lpszMenuName	dd ?			; offset
lpszClassName	dd ?			; offset
hIconSm		dd ?			; offset
WNDCLASSEXA	ends

; ---------------------------------------------------------------------------

RECT		struc ;	(sizeof=0x10, mappedto_6) ; XREF: ...
left		dd ?
top		dd ?
right		dd ?
bottom		dd ?
RECT		ends

; ---------------------------------------------------------------------------

POINT		struc ;	(sizeof=0x8, mappedto_5) ; XREF: ...
x		dd ?
y		dd ?
POINT		ends

; ---------------------------------------------------------------------------

WINDOWPLACEMENT	struc ;	(sizeof=0x2C, mappedto_4) ; XREF: ...
length		dd ?
flags		dd ?
showCmd		dd ?
ptMinPosition	POINT ?
ptMaxPosition	POINT ?
rcNormalPosition RECT ?
WINDOWPLACEMENT	ends

; ---------------------------------------------------------------------------

tagRECT		struc ;	(sizeof=0x10, mappedto_3) ; XREF: ...
left		dd ?
top		dd ?
right		dd ?
bottom		dd ?
tagRECT		ends

; ---------------------------------------------------------------------------

CPPEH_RECORD	struc ;	(sizeof=0x18, mappedto_2) ; XREF: ...
old_esp		dd ?
exc_ptr		dd ?			; offset
prev_er		dd ?			; offset
handler		dd ?			; offset
msEH_ptr	dd ?			; offset
disabled	dd ?
CPPEH_RECORD	ends

; ---------------------------------------------------------------------------

_msEH		struc ;	(sizeof=0xC, mappedto_1) ; XREF: ...
_unk		dd ?			; base 16
FilterProc	dd ?			; offset
ExitProc	dd ?			; offset
_msEH		ends


