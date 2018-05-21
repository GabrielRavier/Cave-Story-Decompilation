; ---------------------------------------------------------------------------

FILETIME	struc ;	(sizeof=0x8, mappedto_24) ; XREF: FF0057E7/r FF0057E8/r
dwLowDateTime	dd ?
dwHighDateTime	dd ?
FILETIME	ends

; ---------------------------------------------------------------------------

Config_Data_File struc ; (sizeof=0x94, align=0x4, mappedto_29) ; XREF: _WinMain@16/r
proof		db 32 dup(?)
font_name	db 64 dup(?)		; XREF:	WinMain(x,x,x,x):loc_412B3B/o
move_button_mode dd ?			; XREF:	WinMain(x,x,x,x):loc_4125A7/r
attack_button_mode dd ?			; XREF:	WinMain(x,x,x,x):loc_4124E8/r
ok_button_mode	dd ?			; XREF:	WinMain(x,x,x,x):loc_412532/r
display_mode	dd ?			; XREF:	WinMain(x,x,x,x)+341/r
					; WinMain(x,x,x,x):loc_4127B3/r	...
joystick_mode	dd ?			; XREF:	WinMain(x,x,x,x)+6EF/r
joystick_button	dd 8 dup(?)		; XREF:	WinMain(x,x,x,x)+218/r
Config_Data_File ends

; ---------------------------------------------------------------------------

SYSTEMTIME	struc ;	(sizeof=0x10, mappedto_23) ; XREF: FF0057E6/r
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

_SYSTEMTIME	struc ;	(sizeof=0x10, mappedto_22)
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

FILE		struc ;	(sizeof=0x20, mappedto_20) ; XREF: .rdata:_stream/r
					; FF003DA7/r ...
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

_STARTUPINFOA	struc ;	(sizeof=0x44, mappedto_13) ; XREF: FF003EC8/r
					; WinMainCRTStartup/r
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
dwFlags		dd ?			; XREF:	WinMainCRTStartup:loc_481E79/w
					; WinMainCRTStartup+167/r
wShowWindow	dw ?			; XREF:	WinMainCRTStartup+16D/r
cbReserved2	dw ?			; XREF:	__ioinit+63/r
lpReserved2	dd ?			; XREF:	__ioinit+6F/r ;	offset
hStdInput	dd ?			; offset
hStdOutput	dd ?			; offset
hStdError	dd ?			; offset
_STARTUPINFOA	ends

; ---------------------------------------------------------------------------

timecaps_tag	struc ;	(sizeof=0x8, mappedto_12) ; XREF: FF001510/r
wPeriodMin	dd ?			; XREF:	_InitMMTimer+25/r
					; _InitMMTimer+2A/r
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

WNDCLASSEXA	struc ;	(sizeof=0x30, mappedto_9) ; XREF: _WinMain@16/r
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

RECT		struc ;	(sizeof=0x10, align=0x4, copyof_8)
					; XREF:	Draw_Inventory_Window+B9/w
					; Draw_Inventory_Window+FD/w ...
left		dd ?			; XREF:	Draw_Inventory_Window+9/w
					; Draw_Inventory_Window+31/w ...
top		dd ?			; XREF:	Draw_Inventory_Window+13/w
					; Draw_Inventory_Window+3B/w ...
right		dd ?			; XREF:	Draw_Inventory_Window+1D/w
					; Draw_Inventory_Window+45/w ...
bottom		dd ?			; XREF:	Draw_Inventory_Window+27/w
					; Draw_Inventory_Window+4F/w ...
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

tagRECT		struc ;	(sizeof=0x10, mappedto_5)
left		dd ?			; XREF:	Draw_Window+7F/r
					; Draw_Window+8A/w ...
top		dd ?			; XREF:	Draw_Window+8F/r
					; Draw_Window+9B/w ...
right		dd ?			; XREF:	Draw_Window+AD/w
					; Draw_Sprite_No_Tranparency+1A/w ...
bottom		dd ?			; XREF:	Draw_Window+BE/w
					; Draw_Sprite_No_Tranparency+23/w ...
tagRECT		ends

; ---------------------------------------------------------------------------

CPPEH_RECORD	struc ;	(sizeof=0x18, align=0x4, copyof_4) ; XREF: fread/r
					; fwrite/r ...
old_esp		dd ?			; XREF:	WinMainCRTStartup+18/w
					; WinMainCRTStartup:loc_481ED6/r ...
exc_ptr		dd ?			; XREF:	WinMainCRTStartup:loc_481EC2/r
					; ___crtInitCritSecAndSpinCount:loc_487C44/r ; offset
registration	_EH3_EXCEPTION_REGISTRATION ? ;	XREF: _fclose+2D/w _fclose+3B/w	...
CPPEH_RECORD	ends

; ---------------------------------------------------------------------------

_msEH		struc ;	(sizeof=0xC, mappedto_3) ; XREF: .rdata:stru_48CA58/r
					; .rdata:stru_48CA88/r ...
_unk		dd ?			; XREF:	_output_l+5E/r ; base 16 signed
FilterProc	dd ?			; offset
ExitProc	dd ?			; offset
_msEH		ends

; ---------------------------------------------------------------------------

struct_0	struc ;	(sizeof=0x478, mappedto_2)
anonymous_0	db 1144	dup(?)		; string(C)
struct_0	ends

; ---------------------------------------------------------------------------

_EH3_EXCEPTION_REGISTRATION struc ; (sizeof=0x10, align=0x4, copyof_1)
					; XREF:	CPPEH_RECORD/r
Next		dd ?			; offset
ExceptionHandler dd ?			; offset
ScopeTable	dd ?			; offset
TryLevel	dd ?			; XREF:	_fclose+2D/w _fclose+3B/w ...
_EH3_EXCEPTION_REGISTRATION ends

; ---------------------------------------------------------------------------

_SCOPETABLE_ENTRY struc	; (sizeof=0xC, align=0x4, copyof_28)
					; XREF:	.rdata:stru_48CA68/r
					; .rdata:stru_48CA78/r ...
EnclosingLevel	dd ?
FilterFunc	dd ?			; offset
HandlerFunc	dd ?			; offset
_SCOPETABLE_ENTRY ends

; ---------------------------------------------------------------------------

IDirectDraw	struc ;	(sizeof=0x4, align=0x4,	mappedto_34)
lpVtbl		dd ?			; offset
IDirectDraw	ends

; ---------------------------------------------------------------------------

NPC_Info	struc ;	(sizeof=0x18, align=0x4, copyof_36)
bits		dw ?
life		dw ?
surf		db ?
hit_voice	db ?
destroy_voice	db ?
size		db ?
exp		dd ?
damage		dd ?
hit		Some_Rect_Thing	?
view		Some_Rect_Thing	?
NPC_Info	ends

; ---------------------------------------------------------------------------

Some_Rect_Thing	struc ;	(sizeof=0x4, copyof_35)	; XREF:	NPC_Info/r NPC_Info/r
front		db ?
top		db ?
back		db ?
bottom		db ?
Some_Rect_Thing	ends

; ---------------------------------------------------------------------------

Map_Data	struc ;	(sizeof=0x10C, align=0x4, copyof_37)
data		dd ?			; offset
Map_Layout_Buffer db 257 dup(?)
		db ? ; undefined
Width		dw ?
Length		dw ?
		db ? ; undefined
		db ? ; undefined
Map_Data	ends

; ---------------------------------------------------------------------------

NPC_vars	struc ;	(sizeof=0xAC, align=0x4, copyof_39)
Is_Alive	db ?
		db ? ; undefined
		db ? ; undefined
		db ? ; undefined
Collision_flags	dd ?
X_pos		dd ?
Y_pos		dd ?
X_vel		dd ?
Y_vel		dd ?
X_vel2		dd ?
Y_vel2		dd ?
Curly_Target_X	dd ?
Curly_Target_Y	dd ?
Entity_Type	dd ?
code_flag	dd ?
Entity_Eve_Num	dd ?
Entity_Spritesheet dd ?
Sound_Hit	dd ?
Sound_Death	dd ?
Life		dd ?
EXP_Amount	dd ?
Explosion_Size	dd ?
Direction	dd ?
Entity_Flags	dw ?
		db ? ; undefined
		db ? ; undefined
Rect		RECT ?
ani_wait	dd ?
Ani_Num		dd ?
count1		dd ?
count2		dd ?
Current_State	dd ?
Wait_Timer	dd ?
Hitbox		NPC_Collision_Flags ?
view		NPC_Collision_Flags ?
Is_Being_Hit	db ?
		db ? ; undefined
		db ? ; undefined
		db ? ; undefined
damage_view	dd ?
Damage		dd ?
Parent_NPC	dd ?			; offset
NPC_vars	ends

; ---------------------------------------------------------------------------

NPC_Collision_Flags struc ; (sizeof=0x10, align=0x4, copyof_38)	; XREF:	Player/r
					; Player/r ...
front		dd ?
top		dd ?			; XREF:	Entity_Collision_Solid+10/r
					; Entity_Collision_Solid+B1/r ...
back		dd ?			; XREF:	Entity_Collision_Solid+5A/r
					; Entity_Collision_Solid+79/r ...
bottom		dd ?			; XREF:	Entity_Collision_Solid+35/r
					; Entity_Collision_Solid+DB/r ...
NPC_Collision_Flags ends

; ---------------------------------------------------------------------------

Effect_vars	struc ;	(sizeof=0x44, align=0x4, mappedto_40)
Is_Used		dd ?
Effect_Num	dd ?
Direction	dd ?
X_Pos		dd ?
Y_Pos		dd ?
X_Vel		dd ?
Y_Vel		dd ?
act_no		dd ?
act_wait	dd ?
Ani_Num		dd ?
Ani_wait	dd ?
view_left	dd ?
view_top	dd ?
rect		RECT ?
Effect_vars	ends

; ---------------------------------------------------------------------------

Fade_vars	struc ;	(sizeof=0x268, align=0x4, mappedto_41)
mode		dd ?
bMask		dd ?
count		dd ?
ani_no		db 300 dup(?)
flag		db 300 dup(?)
Direction	db ?
		db ? ; undefined
		db ? ; undefined
		db ? ; undefined
Fade_vars	ends

; ---------------------------------------------------------------------------

_tiddata	struc ;	(sizeof=0x18, align=0x4, copyof_46)
gap0		db 20 dup(?)
_holdrand	dd ?
_tiddata	ends


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

; enum NPC_Enums, mappedto_64
Free		 = 0
In_Use		 = 80h

; ---------------------------------------------------------------------------

; enum Effects_Names, mappedto_88
Fountain_Disk	 = 1
Rising_Disc	 = 2
Star		 = 3
Fireball_Impact	 = 4
ZzZ		 = 5
Booster_Smoke	 = 6
Drowned_Quote	 = 7
Exclamation_Mark  = 8
Level_Up_Or_Down  = 9
Red_Damage_Rings  = 10
Big_Explosion	 = 11
Headbump_Sparks	 = 12
Unknown_Unused	 = 13
Small_Explosion_Disc  =	14
_Nothing	 = 15
Push_Jump_Key	 = 16

; ---------------------------------------------------------------------------

; enum NPC_Names, copyof_65
Nothing		 = 0
Weapon_Energy	 = 1
Enemy_Behemoth	 = 2
Deletes_Itself	 = 3
Smoke		 = 4
Enemy_Critter_Hopping_Green  = 5
Enemy_Beetle_Horiz_Green  = 6
Enemy_Basil	 = 7
Enemy_Beetle_Follow1  =	8
Balrog_Drop_In	 = 9
Boss_Balrog_Shooting  =	10
Projectile_Balrog_Energy_Bounce	 = 11
Balrog_Cutscene	 = 12
Forcefield	 = 13
Santas_Key	 = 14
Treasure_Chest_Closed  = 15

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

; enum Lib_Enums, mappedto_3
FLUSHALL	 = 1
__V6_HEAP	 = 3
inuse		 = 83h

; ---------------------------------------------------------------------------

; enum Directions, copyof_44
Left		 = 0
Up		 = 1
Right		 = 2
Down		 = 3

; ---------------------------------------------------------------------------

; enum MACRO_EPERM, copyof_50
EPERM		 = 1
ENOENT		 = 2
ESRCH		 = 3
EINTR		 = 4
EIO		 = 5
ENXIO		 = 6
E2BIG		 = 7
ENOEXEC		 = 8
EBADF		 = 9
ECHILD		 = 10
EAGAIN		 = 11
ENOMEM		 = 12
EACCES		 = 13
EFAULT		 = 14
EBUSY		 = 16
EEXIST		 = 17
EXDEV		 = 18
ENODEV		 = 19
ENOTDIR		 = 20
EISDIR		 = 21
EINVAL		 = 22
ENFILE		 = 23
EMFILE		 = 24
ENOTTY		 = 25
EFBIG		 = 27
ENOSPC		 = 28
ESPIPE		 = 29
EROFS		 = 30
EMLINK		 = 31
EPIPE		 = 32
EDOM		 = 33
ERANGE		 = 34
EDEADLK		 = 36
ENAMETOOLONG	 = 38
ENOLCK		 = 39
ENOSYS		 = 40
ENOTEMPTY	 = 41
EILSEQ		 = 42

; ---------------------------------------------------------------------------

; enum MACRO__IOB, copyof_48
_IOB_ENTRIES	 = 20
EOF		 = -1

; ---------------------------------------------------------------------------

; enum MACRO__IONBF, copyof_55,	bitfield
_IONBF		 = 4
_IOMYBUF	 = 8
_IOEOF		 = 10h
_IOERR		 = 20h
_IOSTRG		 = 40h
_IORW		 = 80h

; ---------------------------------------------------------------------------

; enum MACRO__SH, standard type
_SH_DENYRW	 = 10h
_SH_DENYWR	 = 20h
_SH_DENYRD	 = 30h

; ---------------------------------------------------------------------------

; enum MACRO_INT, copyof_52
INT_MAX		 = 2147483647
UINT_MAX	 = -1

; ---------------------------------------------------------------------------

; enum MACRO__HEAP, copyof_53
_HEAP_MAXREQ	 = 0FFFFFFE0h
_HEAPEMPTY	 = 0FFFFFFFFh

; ---------------------------------------------------------------------------

; enum MACRO_SEEK, copyof_56
SEEK_SET	 = 0
SEEK_CUR	 = 1
SEEK_END	 = 2
MMIO_DEFAULTBUFFER  = 8192

; ---------------------------------------------------------------------------

; enum MACRO__OUT, copyof_57
_OUT_TO_DEFAULT	 = 0
_OUT_TO_STDERR	 = 1
_OUT_TO_MSGBOX	 = 2
_REPORT_ERRMODE	 = 3

; ---------------------------------------------------------------------------

; enum MACRO_FALSE, copyof_58
FALSE		 = 0
TRUE		 = 1

; ---------------------------------------------------------------------------

; enum MACRO_INVALID, copyof_60, bitfield
INVALID_HANDLE_VALUE  =	-1

; ---------------------------------------------------------------------------

; enum MACRO__IOREAD, copyof_61, bitfield
_IOREAD		 = 1
_IOWRT		 = 2

; ---------------------------------------------------------------------------

; enum MACRO_CP_HWND, copyof_62
CP_HWND		 = 0
CP_OPEN		 = 1
CP_DIRECT	 = 2
CP_LEVEL	 = 3
VK_DBE_ALPHANUMERIC  = 240
VK_DBE_KATAKANA	 = 241
VK_DBE_HIRAGANA	 = 242
VK_DBE_SBCSCHAR	 = 243
VK_DBE_DBCSCHAR	 = 244
VK_DBE_ROMAN	 = 245
VK_DBE_NOROMAN	 = 246
VK_DBE_ENTERWORDREGISTERMODE  =	247
VK_DBE_ENTERIMECONFIGMODE  = 248
VK_DBE_FLUSHSTRING  = 249
VK_DBE_CODEINPUT  = 250
VK_DBE_NOCODEINPUT  = 251
VK_DBE_DETERMINESTRING	= 252
VK_DBE_ENTERDLGCONVERSIONMODE  = 253

; ---------------------------------------------------------------------------

; enum MACRO__O_SHORT, copyof_63, bitfield
_O_RANDOM	 = 10h
_O_SEQUENTIAL	 = 20h
_O_SHORT_LIVED	 = 1000h

; ---------------------------------------------------------------------------

; enum MACRO_WM, copyof_89
WM_NULL		 = 0
WM_CREATE	 = 1
WM_DESTROY	 = 2
WM_MOVE		 = 3
WM_SIZEWAIT	 = 4
WM_SIZE		 = 5
WM_ACTIVATE	 = 6
WM_SETFOCUS	 = 7
WM_KILLFOCUS	 = 8
WM_SETVISIBLE	 = 9
WM_ENABLE	 = 0Ah
WM_SETREDRAW	 = 0Bh
WM_SETTEXT	 = 0Ch
WM_GETTEXT	 = 0Dh
WM_GETTEXTLENGTH  = 0Eh
WM_PAINT	 = 0Fh
WM_CLOSE	 = 10h
WM_QUERYENDSESSION  = 11h
WM_QUIT		 = 12h
WM_QUERYOPEN	 = 13h
WM_ERASEBKGND	 = 14h
WM_SYSCOLORCHANGE  = 15h
WM_ENDSESSION	 = 16h
WM_SYSTEMERROR	 = 17h
WM_SHOWWINDOW	 = 18h
WM_CTLCOLOR	 = 19h
WM_WININICHANGE	 = 1Ah
WM_SETTINGCHANGE  = 1Ah
WM_DEVMODECHANGE  = 1Bh
WM_ACTIVATEAPP	 = 1Ch
WM_FONTCHANGE	 = 1Dh
WM_TIMECHANGE	 = 1Eh
WM_CANCELMODE	 = 1Fh
WM_SETCURSOR	 = 20h
WM_MOUSEACTIVATE  = 21h
WM_CHILDACTIVATE  = 22h
WM_QUEUESYNC	 = 23h
WM_GETMINMAXINFO  = 24h
WM_LOGOFF	 = 25h
WM_PAINTICON	 = 26h
WM_ICONERASEBKGND  = 27h
WM_NEXTDLGCTL	 = 28h
WM_ALTTABACTIVE	 = 29h
WM_SPOOLERSTATUS  = 2Ah
WM_DRAWITEM	 = 2Bh
WM_MEASUREITEM	 = 2Ch
WM_DELETEITEM	 = 2Dh
WM_VKEYTOITEM	 = 2Eh
WM_CHARTOITEM	 = 2Fh
WM_SETFONT	 = 30h
WM_GETFONT	 = 31h
WM_SETHOTKEY	 = 32h
WM_GETHOTKEY	 = 33h
WM_FILESYSCHANGE  = 34h
WM_ISACTIVEICON	 = 35h
WM_QUERYPARKICON  = 36h
WM_QUERYDRAGICON  = 37h
WM_WINHELP	 = 38h
WM_COMPAREITEM	 = 39h
WM_FULLSCREEN	 = 3Ah
WM_CLIENTSHUTDOWN  = 3Bh
WM_DDEMLEVENT	 = 3Ch
WM_GETOBJECT	 = 3Dh
MM_CALCSCROLL	 = 3Fh
WM_TESTING	 = 40h
WM_COMPACTING	 = 41h
WM_OTHERWINDOWCREATED  = 42h
WM_OTHERWINDOWDESTROYED	 = 43h
WM_COMMNOTIFY	 = 44h
WM_MEDIASTATUSCHANGE  =	45h
WM_WINDOWPOSCHANGING  =	46h
WM_WINDOWPOSCHANGED  = 47h
WM_POWER	 = 48h
WM_COPYGLOBALDATA  = 49h
WM_COPYDATA	 = 4Ah
WM_CANCELJOURNAL  = 4Bh
WM_LOGONNOTIFY	 = 4Ch
WM_KEYF1	 = 4Dh
WM_NOTIFY	 = 4Eh
WM_ACCESS_WINDOW  = 4Fh
WM_INPUTLANGCHANGEREQUEST  = 50h
WM_INPUTLANGCHANGE  = 51h
WM_TCARD	 = 52h
WM_HELP		 = 53h
WM_USERCHANGED	 = 54h
WM_NOTIFYFORMAT	 = 55h
WM_QM_ACTIVATE	 = 60h
WM_HOOK_DO_CALLBACK  = 61h
WM_SYSCOPYDATA	 = 62h
WM_FINALDESTROY	 = 70h
WM_MEASUREITEM_CLIENTDATA  = 71h
WM_CONTEXTMENU	 = 7Bh
WM_STYLECHANGING  = 7Ch
WM_STYLECHANGED	 = 7Dh
WM_DISPLAYCHANGE  = 7Eh
WM_GETICON	 = 7Fh
WM_SETICON	 = 80h
WM_NCCREATE	 = 81h
WM_NCDESTROY	 = 82h
WM_NCCALCSIZE	 = 83h
WM_NCHITTEST	 = 84h
WM_NCPAINT	 = 85h
WM_NCACTIVATE	 = 86h
WM_GETDLGCODE	 = 87h
WM_SYNCPAINT	 = 88h
WM_SYNCTASK	 = 89h
WM_NCMOUSEMOVE	 = 0A0h
WM_NCLBUTTONDOWN  = 0A1h
WM_NCLBUTTONUP	 = 0A2h
WM_NCLBUTTONDBLCLK  = 0A3h
WM_NCRBUTTONDOWN  = 0A4h
WM_NCRBUTTONUP	 = 0A5h
WM_NCRBUTTONDBLCLK  = 0A6h
WM_NCMBUTTONDOWN  = 0A7h
WM_NCMBUTTONUP	 = 0A8h
WM_NCMBUTTONDBLCLK  = 0A9h
WM_NCXBUTTONDOWN  = 0ABh
WM_NCXBUTTONUP	 = 0ACh
WM_NCXBUTTONDBLCLK  = 0ADh
EM_GETSEL	 = 0B0h
EM_SETSEL	 = 0B1h
EM_GETRECT	 = 0B2h
EM_SETRECT	 = 0B3h
EM_SETRECTNP	 = 0B4h
EM_SCROLL	 = 0B5h
EM_LINESCROLL	 = 0B6h
EM_SCROLLCARET	 = 0B7h
EM_GETMODIFY	 = 0B8h
EM_SETMODIFY	 = 0B9h
EM_GETLINECOUNT	 = 0BAh
EM_LINEINDEX	 = 0BBh
EM_SETHANDLE	 = 0BCh
EM_GETHANDLE	 = 0BDh
EM_GETTHUMB	 = 0BEh
EM_LINELENGTH	 = 0C1h
EM_REPLACESEL	 = 0C2h
EM_SETFONT	 = 0C3h
EM_GETLINE	 = 0C4h
EM_LIMITTEXT	 = 0C5h
EM_CANUNDO	 = 0C6h
EM_UNDO		 = 0C7h
EM_FMTLINES	 = 0C8h
EM_LINEFROMCHAR	 = 0C9h
EM_SETWORDBREAK	 = 0CAh
EM_SETTABSTOPS	 = 0CBh
EM_SETPASSWORDCHAR  = 0CCh
EM_EMPTYUNDOBUFFER  = 0CDh
EM_GETFIRSTVISIBLELINE	= 0CEh
EM_SETREADONLY	 = 0CFh
EM_SETWORDBREAKPROC  = 0D0h
EM_GETWORDBREAKPROC  = 0D1h
EM_GETPASSWORDCHAR  = 0D2h
EM_SETMARGINS	 = 0D3h
EM_GETMARGINS	 = 0D4h
EM_POSFROMCHAR	 = 0D5h
EM_CHARFROMPOS	 = 0D6h
SBM_SETPOS	 = 0E0h
SBM_GETPOS	 = 0E1h
SBM_SETRANGE	 = 0E2h
SBM_GETRANGE	 = 0E3h
SBM_ENABLE_ARROWS  = 0E4h
SBM_SETRANGEREDRAW  = 0E6h
SBM_SETSCROLLINFO  = 0E9h
SBM_GETSCROLLINFO  = 0EAh
SBM_GETSCROLLBARINFO  =	0EBh
BM_GETCHECK	 = 0F0h
BM_SETCHECK	 = 0F1h
BM_GETSTATE	 = 0F2h
BM_SETSTATE	 = 0F3h
BM_SETSTYLE	 = 0F4h
BM_CLICK	 = 0F5h
BM_GETIMAGE	 = 0F6h
BM_SETIMAGE	 = 0F7h
BM_SETDONTCLICK	 = 0F8h
WM_INPUT	 = 0FFh
WM_KEYFIRST	 = 100h
WM_KEYDOWN	 = 100h
WM_KEYUP	 = 101h
WM_CHAR		 = 102h
WM_DEADCHAR	 = 103h
WM_SYSKEYDOWN	 = 104h
WM_SYSKEYUP	 = 105h
WM_SYSCHAR	 = 106h
WM_SYSDEADCHAR	 = 107h
WM_KEYLAST	 = 108h
WM_YOMICHAR	 = 108h
WM_UNICHAR	 = 109h
WM_CONVERTREQUEST  = 10Ah
WM_CONVERTRESULT  = 10Bh
WM_IM_INFO	 = 10Ch
WM_IME_STARTCOMPOSITION	 = 10Dh
WM_IME_ENDCOMPOSITION  = 10Eh
WM_IME_COMPOSITION  = 10Fh
WM_IME_KEYLAST	 = 10Fh
WM_INITDIALOG	 = 110h
WM_COMMAND	 = 111h
WM_SYSCOMMAND	 = 112h
WM_TIMER	 = 113h
WM_HSCROLL	 = 114h
WM_VSCROLL	 = 115h
WM_INITMENU	 = 116h
WM_INITMENUPOPUP  = 117h
WM_SYSTIMER	 = 118h
WM_MENUSELECT	 = 11Fh
WM_MENUCHAR	 = 120h
WM_ENTERIDLE	 = 121h
WM_MENURBUTTONUP  = 122h
WM_MENUDRAG	 = 123h
WM_MENUGETOBJECT  = 124h
WM_UNINITMENUPOPUP  = 125h
WM_MENUCOMMAND	 = 126h
WM_CHANGEUISTATE  = 127h
WM_UPDATEUISTATE  = 128h
WM_QUERYUISTATE	 = 129h
WM_LBTRACKPOINT	 = 131h
WM_CTLCOLORMSGBOX  = 132h
WM_CTLCOLOREDIT	 = 133h
WM_CTLCOLORLISTBOX  = 134h
WM_CTLCOLORBTN	 = 135h
WM_CTLCOLORDLG	 = 136h
WM_CTLCOLORSCROLLBAR  =	137h
WM_CTLCOLORSTATIC  = 138h
CB_GETEDITSEL	 = 140h
CB_LIMITTEXT	 = 141h
CB_SETEDITSEL	 = 142h
CB_ADDSTRING	 = 143h
CB_DELETESTRING	 = 144h
CB_DIR		 = 145h
CB_GETCOUNT	 = 146h
CB_GETCURSEL	 = 147h
CB_GETLBTEXT	 = 148h
CB_GETLBTEXTLEN	 = 149h
CB_INSERTSTRING	 = 14Ah
CB_RESETCONTENT	 = 14Bh
CB_FINDSTRING	 = 14Ch
CB_SELECTSTRING	 = 14Dh
CB_SETCURSEL	 = 14Eh
CB_SHOWDROPDOWN	 = 14Fh
CB_GETITEMDATA	 = 150h
CB_SETITEMDATA	 = 151h
CB_GETDROPPEDCONTROLRECT  = 152h
CB_SETITEMHEIGHT  = 153h
CB_GETITEMHEIGHT  = 154h
CB_SETEXTENDEDUI  = 155h
CB_GETEXTENDEDUI  = 156h
CB_GETDROPPEDSTATE  = 157h
CB_FINDSTRINGEXACT  = 158h
CB_SETLOCALE	 = 159h
CB_GETLOCALE	 = 15Ah
CB_GETTOPINDEX	 = 15Bh
CB_SETTOPINDEX	 = 15Ch
CB_GETHORIZONTALEXTENT	= 15Dh
CB_SETHORIZONTALEXTENT	= 15Eh
CB_GETDROPPEDWIDTH  = 15Fh
CB_SETDROPPEDWIDTH  = 160h
CB_INITSTORAGE	 = 161h
CB_GETCOMBOBOXINFO  = 164h
STM_SETICON	 = 170h
STM_GETICON	 = 171h
STM_SETIMAGE	 = 172h
STM_GETIMAGE	 = 173h
LB_ADDSTRING	 = 180h
LB_INSERTSTRING	 = 181h
LB_DELETESTRING	 = 182h
LB_SELITEMRANGEEX  = 183h
LB_RESETCONTENT	 = 184h
LB_SETSEL	 = 185h
LB_SETCURSEL	 = 186h
LB_GETSEL	 = 187h
LB_GETCURSEL	 = 188h
LB_GETTEXT	 = 189h
LB_GETTEXTLEN	 = 18Ah
LB_GETCOUNT	 = 18Bh
LB_SELECTSTRING	 = 18Ch
LB_DIR		 = 18Dh
LB_GETTOPINDEX	 = 18Eh
LB_FINDSTRING	 = 18Fh
LB_GETSELCOUNT	 = 190h
LB_GETSELITEMS	 = 191h
LB_SETTABSTOPS	 = 192h
LB_GETHORIZONTALEXTENT	= 193h
LB_SETHORIZONTALEXTENT	= 194h
LB_SETCOLUMNWIDTH  = 195h
LB_ADDFILE	 = 196h
LB_SETTOPINDEX	 = 197h
LB_GETITEMRECT	 = 198h
LB_GETITEMDATA	 = 199h
LB_SETITEMDATA	 = 19Ah
LB_SELITEMRANGE	 = 19Bh
LB_SETANCHORINDEX  = 19Ch
LB_GETANCHORINDEX  = 19Dh
LB_SETCARETINDEX  = 19Eh
LB_GETCARETINDEX  = 19Fh
LB_SETITEMHEIGHT  = 1A0h
LB_GETITEMHEIGHT  = 1A1h
LB_FINDSTRINGEXACT  = 1A2h
LBCB_CARETON	 = 1A3h
LBCB_CARETOFF	 = 1A4h
LB_SETLOCALE	 = 1A5h
LB_GETLOCALE	 = 1A6h
LB_SETCOUNT	 = 1A7h
LB_INITSTORAGE	 = 1A8h
LB_ITEMFROMPOINT  = 1A9h
LB_INSERTSTRINGUPPER  =	1AAh
LB_INSERTSTRINGLOWER  =	1ABh
LB_ADDSTRINGUPPER  = 1ACh
LB_ADDSTRINGLOWER  = 1ADh
LB_GETLISTBOXINFO  = 1B2h
MN_SETHMENU	 = 1E0h
MN_GETHMENU	 = 1E1h
MN_SIZEWINDOW	 = 1E2h
MN_OPENHIERARCHY  = 1E3h
MN_CLOSEHIERARCHY  = 1E4h
MN_SELECTITEM	 = 1E5h
MN_CANCELMENUS	 = 1E6h
MN_SELECTFIRSTVALIDITEM	 = 1E7h
MN_GETPPOPUPMENU  = 1EAh
MN_FINDMENUWINDOWFROMPOINT  = 1EBh
MN_SHOWPOPUPWINDOW  = 1ECh
MN_BUTTONDOWN	 = 1EDh
MN_MOUSEMOVE	 = 1EEh
MN_BUTTONUP	 = 1EFh
MN_SETTIMERTOOPENHIERARCHY  = 1F0h
MN_DBLCLK	 = 1F1h
WM_MOUSEFIRST	 = 200h
WM_MOUSEMOVE	 = 200h
WM_LBUTTONDOWN	 = 201h
WM_LBUTTONUP	 = 202h
WM_LBUTTONDBLCLK  = 203h
WM_RBUTTONDOWN	 = 204h
WM_RBUTTONUP	 = 205h
WM_RBUTTONDBLCLK  = 206h
WM_MBUTTONDOWN	 = 207h
WM_MBUTTONUP	 = 208h
WM_MBUTTONDBLCLK  = 209h
WM_MOUSEWHEEL	 = 20Ah
WM_XBUTTONDOWN	 = 20Bh
WM_XBUTTONUP	 = 20Ch
WM_XBUTTONDBLCLK  = 20Dh
WM_MOUSELAST	 = 20Dh
WM_PARENTNOTIFY	 = 210h
WM_ENTERMENULOOP  = 211h
WM_EXITMENULOOP	 = 212h
WM_NEXTMENU	 = 213h
WM_SIZING	 = 214h
WM_CAPTURECHANGED  = 215h
WM_MOVING	 = 216h
WM_POWERBROADCAST  = 218h
WM_DEVICECHANGE	 = 219h
WM_MDICREATE	 = 220h
WM_MDIDESTROY	 = 221h
WM_MDIACTIVATE	 = 222h
WM_MDIRESTORE	 = 223h
WM_MDINEXT	 = 224h
WM_MDIMAXIMIZE	 = 225h
WM_MDITILE	 = 226h
WM_MDICASCADE	 = 227h
WM_MDIICONARRANGE  = 228h
WM_MDIGETACTIVE	 = 229h
WM_DROPOBJECT	 = 22Ah
WM_QUERYDROPOBJECT  = 22Bh
WM_BEGINDRAG	 = 22Ch
WM_DRAGLOOP	 = 22Dh
WM_DRAGSELECT	 = 22Eh
WM_DRAGMOVE	 = 22Fh
WM_MDISETMENU	 = 230h
WM_ENTERSIZEMOVE  = 231h
WM_EXITSIZEMOVE	 = 232h
WM_DROPFILES	 = 233h
WM_MDIREFRESHMENU  = 234h
WM_HANGEULFIRST	 = 280h
WM_KANJIFIRST	 = 280h
WM_IME_SETCONTEXT  = 281h
WM_IME_NOTIFY	 = 282h
WM_IME_CONTROL	 = 283h
WM_IME_COMPOSITIONFULL	= 284h
WM_IME_SELECT	 = 285h
WM_IME_CHAR	 = 286h
WM_IME_SYSTEM	 = 287h
WM_IME_REQUEST	 = 288h
WM_IME_KEYDOWN	 = 290h
WM_IME_KEYUP	 = 291h
WM_HANGEULLAST	 = 29Fh
WM_KANJILAST	 = 29Fh
WM_NCMOUSEHOVER	 = 2A0h
WM_MOUSEHOVER	 = 2A1h
WM_NCMOUSELEAVE	 = 2A2h
WM_MOUSELEAVE	 = 2A3h
WM_TRACKMOUSEEVENT_LAST	 = 2AFh
WM_WTSSESSION_CHANGE  =	2B1h
WM_TABLET_FIRST	 = 2C0h
WM_TABLET_LAST	 = 2DFh
WM_CUT		 = 300h
WM_COPY		 = 301h
WM_PASTE	 = 302h
WM_CLEAR	 = 303h
WM_UNDO		 = 304h
WM_RENDERFORMAT	 = 305h
WM_RENDERALLFORMATS  = 306h
WM_DESTROYCLIPBOARD  = 307h
WM_DRAWCLIPBOARD  = 308h
WM_PAINTCLIPBOARD  = 309h
WM_VSCROLLCLIPBOARD  = 30Ah
WM_SIZECLIPBOARD  = 30Bh
WM_ASKCBFORMATNAME  = 30Ch
WM_CHANGECBCHAIN  = 30Dh
WM_HSCROLLCLIPBOARD  = 30Eh
WM_QUERYNEWPALETTE  = 30Fh
WM_PALETTEISCHANGING  =	310h
WM_PALETTECHANGED  = 311h
WM_HOTKEY	 = 312h
WM_SYSMENU	 = 313h
WM_HOOKMSG	 = 314h
WM_EXITPROCESS	 = 315h
WM_WAKETHREAD	 = 316h
WM_PRINT	 = 317h
WM_PRINTCLIENT	 = 318h
WM_APPCOMMAND	 = 319h
WM_THEMECHANGED	 = 31Ah
WM_HANDHELDFIRST  = 358h
WM_HANDHELDLAST	 = 35Fh
WM_AFXFIRST	 = 360h
WM_AFXLAST	 = 37Fh
WM_PENWINFIRST	 = 380h
WM_PENWINLAST	 = 38Fh
WM_INTERNAL_COALESCE_FIRST  = 390h
WM_COALESCE_FIRST  = 390h
WM_COALESCE_LAST  = 39Fh
WM_MM_RESERVED_FIRST  =	3A0h
WM_MM_RESERVED_LAST  = 3DFh
WM_DDE_INITIATE	 = 3E0h
WM_DDE_TERMINATE  = 3E1h
WM_DDE_ADVISE	 = 3E2h
WM_DDE_UNADVISE	 = 3E3h
WM_DDE_ACK	 = 3E4h
WM_DDE_DATA	 = 3E5h
WM_DDE_REQUEST	 = 3E6h
WM_DDE_POKE	 = 3E7h
WM_DDE_EXECUTE	 = 3E8h
WM_DBNOTIFICATION  = 3FDh
WM_NETCONNECT	 = 3FEh
WM_HIBERNATE	 = 3FFh
WM_USER		 = 400h
WM_APP		 = 8000h

; ---------------------------------------------------------------------------

; enum MACRO_VK, copyof_90
VK_LBUTTON	 = 1
VK_RBUTTON	 = 2
VK_CANCEL	 = 3
VK_MBUTTON	 = 4
VK_BACK		 = 8
VK_TAB		 = 9
VK_CLEAR	 = 0Ch
VK_RETURN	 = 0Dh
VK_SHIFT	 = 10h
VK_CONTROL	 = 11h
VK_MENU		 = 12h
VK_PAUSE	 = 13h
VK_CAPITAL	 = 14h
VK_KANA		 = 15h
VK_HANGEUL	 = 15h
VK_HANGUL	 = 15h
VK_JUNJA	 = 17h
VK_FINAL	 = 18h
VK_HANJA	 = 19h
VK_KANJI	 = 19h
VK_ESCAPE	 = 1Bh
VK_CONVERT	 = 1Ch
VK_NONCONVERT	 = 1Dh
VK_ACCEPT	 = 1Eh
VK_MODECHANGE	 = 1Fh
VK_SPACE	 = 20h
VK_PRIOR	 = 21h
VK_NEXT		 = 22h
VK_END		 = 23h
VK_HOME		 = 24h
VK_LEFT		 = 25h
VK_UP		 = 26h
VK_RIGHT	 = 27h
VK_DOWN		 = 28h
VK_SELECT	 = 29h
VK_PRINT	 = 2Ah
VK_EXECUTE	 = 2Bh
VK_SNAPSHOT	 = 2Ch
VK_INSERT	 = 2Dh
VK_DELETE	 = 2Eh
VK_HELP		 = 2Fh
VK_LWIN		 = 5Bh
VK_RWIN		 = 5Ch
VK_APPS		 = 5Dh
VK_NUMPAD0	 = 60h
VK_NUMPAD1	 = 61h
VK_NUMPAD2	 = 62h
VK_NUMPAD3	 = 63h
VK_NUMPAD4	 = 64h
VK_NUMPAD5	 = 65h
VK_NUMPAD6	 = 66h
VK_NUMPAD7	 = 67h
VK_NUMPAD8	 = 68h
VK_NUMPAD9	 = 69h
VK_MULTIPLY	 = 6Ah
VK_ADD		 = 6Bh
VK_SEPARATOR	 = 6Ch
VK_SUBTRACT	 = 6Dh
VK_DECIMAL	 = 6Eh
VK_DIVIDE	 = 6Fh
VK_F1		 = 70h
VK_F2		 = 71h
VK_F3		 = 72h
VK_F4		 = 73h
VK_F5		 = 74h
VK_F6		 = 75h
VK_F7		 = 76h
VK_F8		 = 77h
VK_F9		 = 78h
VK_F10		 = 79h
VK_F11		 = 7Ah
VK_F12		 = 7Bh
VK_F13		 = 7Ch
VK_F14		 = 7Dh
VK_F15		 = 7Eh
VK_F16		 = 7Fh
VK_F17		 = 80h
VK_F18		 = 81h
VK_F19		 = 82h
VK_F20		 = 83h
VK_F21		 = 84h
VK_F22		 = 85h
VK_F23		 = 86h
VK_F24		 = 87h
VK_NUMLOCK	 = 90h
VK_SCROLL	 = 91h
VK_LSHIFT	 = 0A0h
VK_RSHIFT	 = 0A1h
VK_LCONTROL	 = 0A2h
VK_RCONTROL	 = 0A3h
VK_LMENU	 = 0A4h
VK_RMENU	 = 0A5h
VK_PROCESSKEY	 = 0E5h
VK_ATTN		 = 0F6h
VK_CRSEL	 = 0F7h
VK_EXSEL	 = 0F8h
VK_EREOF	 = 0F9h
VK_PLAY		 = 0FAh
VK_ZOOM		 = 0FBh
VK_NONAME	 = 0FCh
VK_PA1		 = 0FDh
VK_OEM_CLEAR	 = 0FEh
WH_MIN		 = 0FFFFFFFFh

; ---------------------------------------------------------------------------

; enum MACRO_DSBPLAY, copyof_97, bitfield
DSBPLAY_LOOPING	 = 1

; ---------------------------------------------------------------------------

; enum MACRO_DSBCAPS, copyof_98, bitfield
DSBCAPS_PRIMARYBUFFER  = 1
DSBCAPS_STATIC	 = 2
DSBCAPS_LOCHARDWARE  = 4
DSBCAPS_LOCSOFTWARE  = 8
DSBCAPS_CTRL3D	 = 10h
DSBCAPS_CTRLFREQUENCY  = 20h
DSBCAPS_CTRLPAN	 = 40h
DSBCAPS_CTRLVOLUME  = 80h
DSBCAPS_CTRLPOSITIONNOTIFY  = 100h

; ---------------------------------------------------------------------------

; enum DefOrg, copyof_102
MODEPARADD	 = 0
SETWAIT		 = 1
MODEPARSUB	 = 1
SETGRID		 = 2
SETALLOC	 = 4
MAXMELODY	 = 8
MAXDRAM		 = 8
SETREPEAT	 = 8
MODEMULTIPLY	 = 0Ah
MAXTRACK	 = 10h
SETFREQ		 = 10h
SETWAVE		 = 20h
NUMDRAMITEM	 = 2Ah
SETPIPI		 = 40h
MODEDECAY	 = 40h
MAXNOTELENGTH	 = 0FFh
KEYDUMMY	 = 0FFh
PANDUMMY	 = 0FFh
VOLDUMMY	 = 0FFh
ALLOCNOTE	 = 1000h
SETALL		 = 0FFFFFFFFh

; ---------------------------------------------------------------------------

; enum MACRO_TIMERR, copyof_136
TIMERR_NOERROR	 = 0
TIMERR_NOCANDO	 = 97
TIMERR_STRUCT	 = 129

; ---------------------------------------------------------------------------

; enum MACRO_NULL, copyof_137
NULL		 = 0

; ---------------------------------------------------------------------------

; enum MACRO_TIME_ONESHOT, copyof_138
TIME_ONESHOT	 = 0
TIME_PERIODIC	 = 1

; ---------------------------------------------------------------------------

; enum Bullet_enum, copyof_139
Snake_Lvl_1	 = 1
Snake_Lvl_2	 = 2
Snake_Lvl_3	 = 3
Polar_Star_Lvl_1  = 4
Polar_Star_Lvl_2  = 5
Polar_Star_Lvl_3  = 6
Fireball_Lvl_1	 = 7
Fireball_Lvl_2	 = 8
Fireball_Lvl_3	 = 9
Machine_Gun_Lvl_1  = 0Ah
Machine_Gun_Lvl_2  = 0Bh
Machine_Gun_Lvl_3  = 0Ch
Missile_Launcher_Lvl_1	= 0Dh
Missile_Launcher_Lvl_2	= 0Eh
Missile_Launcher_Lvl_3	= 0Fh
Missile_Explosion_Lvl_1	 = 10h
Missile_Explosion_Lvl_2	 = 11h
Missile_Explosion_Lvl_3	 = 12h
Bubbler_Lvl_2	 = 14h
Bubbler_Lvl_3	 = 15h
Bubble_Spurs	 = 16h
Blade_Slash	 = 17h
Unused_Bullet	 = 18h
Blade_Lvl_1	 = 19h
Blade_Lvl_2	 = 1Ah
Blade_Lvl_3	 = 1Bh
Super_Missile_Launcher_Lvl_1  =	1Ch
Super_Missile_Launcher_Lvl_2  =	1Dh
Super_Missile_Launcher_Lvl_3  =	1Eh
Nemesis_Lvl_1	 = 22h
Nemesis_Lvl_2	 = 23h
Nemesis_Lvl_3	 = 24h
Chargeless_Spur_Lvl_1  = 25h
Chargeless_Spur_Lvl_2  = 26h
Chargeless_Spur_Lvl_3  = 27h
Non_Moving_Spur_Lvl_1  = 28h
Non_Moving_Spur_Lvl_2  = 29h
Non_Moving_Spur_Lvl_3  = 2Ah
Nemesis_Unkn	 = 2Bh
Spur_Lvl_2	 = 2Ch
Spur_Lvl_3	 = 2Dh

; ---------------------------------------------------------------------------

; enum Music_enum, copyof_140
Mus_Silence	 = 0
Mus_Mischievous_Robot  = 1
Mus_Safety	 = 2
Mus_Game_Over	 = 3
Mus_Gravity	 = 4
Mus_On_To_Grasstown  = 5
Mus_Meltdown_2	 = 6
Mus_Eyes_Of_Flame  = 7
Mus_Gestation	 = 8
Mus_Mimiga_Town	 = 9
Mus_Get_Item	 = 0Ah
Mus_Balrogs_Theme  = 0Bh
Mus_Cemetary	 = 0Ch
Mus_Plant	 = 0Dh
Mus_Pulse	 = 0Eh
Mus_Victory	 = 0Fh
Mus_Get_Life_Capsule  =	10h
Mus_Tyrant	 = 11h
Mus_Run		 = 12h
Mus_Jenka_1	 = 13h
Mus_Labyrinth_Fight  = 14h
Mus_Access	 = 15h
Mus_Oppression	 = 16h
Mus_Geothermal	 = 17h
Mus_Cave_Story	 = 18h
Mus_Moonsong	 = 19h
Mus_Heros_end	 = 1Ah
Mus_Scorching_Back  = 1Bh
Mus_Quiet	 = 1Ch
Mus_Final_Cave	 = 1Dh
Mus_Balcony	 = 1Eh
Mus_Charge	 = 1Fh
Mus_Last_Battle	 = 20h
Mus_The_Way_Back_Home  = 21h
Mus_Zombie	 = 22h
Mus_Break_Down	 = 23h
Mus_Running_Hell  = 24h
Mus_Jenka_2	 = 25h
Mus_Living_Waterway  = 26h
Mus_Seal_Chamber  = 27h
Mus_Torokos_Theme  = 28h
Mus_White	 = 29h

; ---------------------------------------------------------------------------

; enum Sound_Effects_enum, copyof_141
Sfx_Silence_68	 = 0
Sfx_Y_N_Change_Choice  = 1
Sfx_Message_Typing  = 2
Sfx_Quote_Bump_Head  = 3
Sfx_Switch_Weapon  = 4
Sfx_Y_N_Prompt	 = 5
Sfx_High_Pitch_Critter_Hop  = 6
Sfx_Silence_73	 = 7
Sfx_Silence_74	 = 8
Sfx_Silence_75	 = 9
Sfx_Silence_69	 = 0Ah
Sfx_Door_Open	 = 0Bh
Sfx_Destroy_Breakable_Block  = 0Ch
Sfx_Silence_70	 = 0Dh
Sfx_Get_EXP	 = 0Eh
Sfx_Quote_Jump	 = 0Fh
Sfx_Quote_Hurt	 = 10h
Sfx_Quote_Die	 = 11h
Sfx_Y_N_Confirm	 = 12h
Sfx_Silence_71	 = 13h
Sfx_Quote_Heal	 = 14h
Sfx_Bubble	 = 15h
Sfx_Chest_Open	 = 16h
Sfx_Quote_Hit_Ground  =	17h
Sfx_Quote_Walk	 = 18h
Sfx_Silly_Explosion  = 19h
Sfx_Large_Object_Hit_Ground  = 1Ah
Sfx_Level_Up	 = 1Bh
Sfx_Shot_Hit_Wall  = 1Ch
Sfx_Teleport	 = 1Dh
Sfx_Critter_Hop	 = 1Eh
Sfx_Shot_Hit_Invulnerable_Entity  = 1Fh
Sfx_Polar_Star_Shoot_Level_1_2	= 20h
Sfx_Fireball_Shoot  = 21h
Sfx_Fireball_Bounce  = 22h
Sfx_large_Explosion  = 23h
Sfx_Silence_72	 = 24h
Sfx_No_Ammo	 = 25h
Sfx_Item_Get	 = 26h
Sfx_Enemy_Shoot_Projectile  = 27h
Sfx_Stream_Noise_SSS_2	= 28h
Sfx_Stream_Noise_SSS_1	= 29h
Sfx_Quote_Missile_Get  = 2Ah
Sfx_Computer_Screen_On	= 2Bh
Sfx_Missile_Impact  = 2Ch
Sfx_EXP_Bounce	 = 2Dh
Sfx_Iron_Head_Shot  = 2Eh
Sfx_Strange_Click  = 2Fh
Sfx_Bubbler_Shoot  = 30h
Sfx_Polar_Star_Shoot_Level_3  =	31h
Sfx_Toroko_Enemy_Squeal	 = 32h
Sfx_Critter_Small_Hurt	= 33h
Sfx_Behemoth_Large_Hurt	 = 34h
Sfx_Gaudi_Die	 = 35h
Sfx_Heavy_Press_Large_Object_Hurt  = 36h
Sfx_High_Pitched_Gaudi_Die  = 37h
Sfx_Water_Splash  = 38h
Sfx_Curly_Object_Hurt  = 39h
Sfx_Helicopter_Blades_SPS  = 3Ah
Sfx_Spur_Charge_Level_1	 = 3Bh
Sfx_Spur_Charge_Level_2	 = 3Ch
Sfx_Spur_Charge_Level_3	 = 3Dh
Sfx_Spur_Shoot_Level_1	= 3Eh
Sfx_Spur_Shoot_Level_2	= 3Fh
Sfx_Spur_Shoot_Level_3	= 40h
Sfx_Spur_Charge_MAX  = 41h
Sfx_Silence_37	 = 42h
Sfx_Silence_38	 = 43h
Sfx_Silence_39	 = 44h
Sfx_Silence_40	 = 45h
Sfx_Enemy_Smoke_Poof  =	46h
Sfx_Quote_Smash_Into_Ground  = 47h
Sfx_Explosion	 = 48h
Sfx_Silence_41	 = 49h
Sfx_Silence_42	 = 4Ah
Sfx_Silence_43	 = 4Bh
Sfx_Silence_44	 = 4Ch
Sfx_Silence_45	 = 4Dh
Sfx_Silence_46	 = 4Eh
Sfx_Silence_47	 = 4Fh
Sfx_Silence_48	 = 50h
Sfx_Silence_49	 = 51h
Sfx_Silence_50	 = 52h
Sfx_Silence_51	 = 53h
Sfx_Silence_52	 = 54h
Sfx_Silence_53	 = 55h
Sfx_Silence_54	 = 56h
Sfx_Silence_55	 = 57h
Sfx_Silence_56	 = 58h
Sfx_Silence_57	 = 59h
Sfx_Silence_58	 = 5Ah
Sfx_Silence_59	 = 5Bh
Sfx_Silence_60	 = 5Ch
Sfx_Silence_61	 = 5Dh
Sfx_Silence_62	 = 5Eh
Sfx_Silence_63	 = 5Fh
Sfx_Silence_64	 = 60h
Sfx_Silence_65	 = 61h
Sfx_Silence_66	 = 62h
Sfx_Silence_67	 = 63h
Sfx_Bubbler_Shoot_Level_3  = 64h
Sfx_Lightning	 = 65h
Sfx_Sand_Croc	 = 66h
Sfx_Ballos_Ball_etc_Charge_Curly_charging_her_gun  = 67h
Sfx_Secret_Item_Hurt  =	68h
Sfx_Puppy_Bark	 = 69h
Sfx_Spinning_Projectile	 = 6Ah
Sfx_Block_Move	 = 6Bh
Sfx_Power_Critter_Large_Enemy_Jump  = 6Ch
Sfx_Critter_Fly	 = 6Dh
Sfx_Power_Critter_Flys	= 6Eh
Sfx_Thud	 = 6Fh
Sfx_Large_Thud	 = 70h
Sfx_Booster	 = 71h
Sfx_Core_Hurt	 = 72h
Sfx_Core_Thrust	 = 73h
Sfx_Core_Charge	 = 74h
Sfx_Nemesis_Shot  = 75h
Sfx_Silence_1	 = 76h
Sfx_Silence_2	 = 77h
Sfx_Silence_3	 = 78h
Sfx_Silence_4	 = 79h
Sfx_Silence_5	 = 7Ah
Sfx_Silence_6	 = 7Bh
Sfx_Silence_7	 = 7Ch
Sfx_Silence_8	 = 7Dh
Sfx_Silence_9	 = 7Eh
Sfx_Silence_10	 = 7Fh
Sfx_Silence_11	 = 80h
Sfx_Silence_12	 = 81h
Sfx_Silence_13	 = 82h
Sfx_Silence_14	 = 83h
Sfx_Silence_15	 = 84h
Sfx_Silence_16	 = 85h
Sfx_Silence_17	 = 86h
Sfx_Silence_18	 = 87h
Sfx_Silence_19	 = 88h
Sfx_Silence_20	 = 89h
Sfx_Silence_21	 = 8Ah
Sfx_Silence_22	 = 8Bh
Sfx_Silence_23	 = 8Ch
Sfx_Silence_24	 = 8Dh
Sfx_Silence_25	 = 8Eh
Sfx_Silence_26	 = 8Fh
Sfx_Silence_27	 = 90h
Sfx_Silence_28	 = 91h
Sfx_Silence_29	 = 92h
Sfx_Silence_30	 = 93h
Sfx_Silence_31	 = 94h
Sfx_Silence_32	 = 95h
Sfx_Bass_Bass01_  = 96h
Sfx_Snare_Snare01_  = 97h
Sfx_HiClose_HiClose_  =	98h
Sfx_HiOpen_HiOpen_  = 99h
Sfx_Tom_Tom01_	 = 9Ah
Sfx_Per_Per01_	 = 9Bh
Sfx_Silence_33	 = 9Ch
Sfx_Silence_34	 = 9Dh
Sfx_Silence_35	 = 9Eh
Sfx_Silence_36	 = 9Fh
Sfx_Crashes_The_Game  =	0A0h

; ---------------------------------------------------------------------------

; enum MACRO_IDM_COPY, copyof_142
IDM_COPY	 = 15
IDM_CUT		 = 16
IDM_PASTE	 = 26
CMD_ZOOM_PAGEWIDTH  = -1

; ---------------------------------------------------------------------------

; enum Menu_Buttons_Fields, copyof_175
Button_OK	 = 1
Button_Yes	 = 1
Button_Cancel	 = 2
Button_No	 = 2
Field_Save_File	 = 3F0h
Field_Quit_Message  = 3F1h
Button_Mute_0	 = 3F2h
Field_About_Message  = 3F3h
Button_Mute_1	 = 3FAh
Button_Mute_2	 = 3FBh
Button_Mute_3	 = 3FCh
Button_Mute_4	 = 3FDh
Button_Mute_5	 = 3FEh
Button_Mute_6	 = 3FFh
Button_Mute_7	 = 400h
Button_Quit	 = 9C41h
Button_Version	 = 9C42h
Button_Volume	 = 9C44h
Button_Debug_Save  = 9C45h
Button_Mute	 = 9C47h

; ---------------------------------------------------------------------------

; enum MACRO_DDBLT, copyof_201,	bitfield
DDBLT_ALPHADEST	 = 1
DDBLT_ALPHADESTCONSTOVERRIDE  =	2
DDBLT_ALPHADESTNEG  = 4
DDBLT_ALPHADESTSURFACEOVERRIDE	= 8
DDBLT_ALPHAEDGEBLEND  =	10h
DDBLT_ALPHASRC	 = 20h
DDBLT_ALPHASRCCONSTOVERRIDE  = 40h
DDBLT_ALPHASRCNEG  = 80h
DDBLT_ALPHASRCSURFACEOVERRIDE  = 100h
DDBLT_ASYNC	 = 200h
DDBLT_COLORFILL	 = 400h
DDBLT_DDFX	 = 800h
DDBLT_DDROPS	 = 1000h
DDBLT_KEYDEST	 = 2000h
DDBLT_KEYDESTOVERRIDE  = 4000h
DDBLT_KEYSRC	 = 8000h
DDBLT_KEYSRCOVERRIDE  =	10000h
DDBLT_ROP	 = 20000h
DDBLT_ROTATIONANGLE  = 40000h
DDBLT_ZBUFFER	 = 80000h
DDBLT_ZBUFFERDESTCONSTOVERRIDE	= 100000h
DDBLT_ZBUFFERDESTOVERRIDE  = 200000h
DDBLT_ZBUFFERSRCCONSTOVERRIDE  = 400000h
DDBLT_ZBUFFERSRCOVERRIDE  = 800000h
DDBLT_WAIT	 = 1000000h
DDBLT_DEPTHFILL	 = 2000000h

; ---------------------------------------------------------------------------

; enum MACRO_DDERR_OUTOFMEMORY,	copyof_203
DDERR_OUTOFMEMORY  = -2147024882
DDERR_OUTOFVIDEOMEMORY	= -2005532292
DDERR_OVERLAYCANTCLIP  = -2005532290
DDERR_OVERLAYCOLORKEYONLYONEACTIVE  = -2005532288
DDERR_PALETTEBUSY  = -2005532285
DDERR_COLORKEYNOTSET  =	-2005532272
DDERR_SURFACEALREADYATTACHED  =	-2005532262
DDERR_SURFACEALREADYDEPENDENT  = -2005532252
DDERR_SURFACEBUSY  = -2005532242
DDERR_CANTLOCKSURFACE  = -2005532237
DDERR_SURFACEISOBSCURED	 = -2005532232
DDERR_SURFACELOST  = -2005532222
DDERR_SURFACENOTATTACHED  = -2005532212
DDERR_TOOBIGHEIGHT  = -2005532202
DDERR_TOOBIGSIZE  = -2005532192
DDERR_TOOBIGWIDTH  = -2005532182

; ---------------------------------------------------------------------------

; enum MACRO_DDSCL, copyof_214,	bitfield
DDSCL_FULLSCREEN  = 1
DDSCL_ALLOWREBOOT  = 2
DDSCL_NOWINDOWCHANGES  = 4
DDSCL_NORMAL	 = 8
DDSCL_EXCLUSIVE	 = 10h
DDSCL_ALLOWMODEX  = 40h
DDSCL_SETFOCUSWINDOW  =	80h
DDSCL_SETDEVICEWINDOW  = 100h
DDSCL_CREATEDEVICEWINDOW  = 200h

; ---------------------------------------------------------------------------

; enum InitDirectDraw_Modes, copyof_215
Mode_320_240_Windowed  = 0
Mode_640_480_Windowed  = 1
Mode_Fullscreen	 = 2

; ---------------------------------------------------------------------------

; enum Display_Modes, copyof_216
Display_FullScreen  = 0
Display_320_240_Windowed  = 1
Display_640_480_Windowed  = 2
Display_Full_24_Bit  = 3
Display_Full_32_Bit  = 4

; ---------------------------------------------------------------------------

; enum MACRO_DDSD, copyof_222
DDSD_CAPS	 = 1
DDSD_HEIGHT	 = 2
DDSD_WIDTH	 = 4
DDSD_PITCH	 = 8
DDSD_BACKBUFFERCOUNT  =	20h
DDSD_ZBUFFERBITDEPTH  =	40h
DDSD_ALPHABITDEPTH  = 80h
DDSD_LPSURFACE	 = 800h
DDSD_PIXELFORMAT  = 1000h
DDSD_CKDESTOVERLAY  = 2000h
DDSD_CKDESTBLT	 = 4000h
DDSD_CKSRCOVERLAY  = 8000h
DDSD_CKSRCBLT	 = 10000h
DDSD_MIPMAPCOUNT  = 20000h
DDSD_REFRESHRATE  = 40000h
DDSD_LINEARSIZE	 = 80000h
DDSD_ALL	 = 0FF9EEh

; ---------------------------------------------------------------------------

; enum MACRO_WSA_WAIT, copyof_223
WSA_WAIT_EVENT_0  = 0
WSA_WAIT_TIMEOUT  = 258
WSA_INFINITE	 = -1

; ---------------------------------------------------------------------------

; enum MACRO_WS, copyof_224
WS_OVERLAPPED	 = 0
WS_TILED	 = 0
WS_TABSTOP	 = 10000h
WS_MAXIMIZEBOX	 = 10000h
WS_GROUP	 = 20000h
WS_MINIMIZEBOX	 = 20000h
WS_THICKFRAME	 = 40000h
WS_SIZEBOX	 = 40000h
WS_SYSMENU	 = 80000h
WS_HSCROLL	 = 100000h
WS_VSCROLL	 = 200000h
WS_DLGFRAME	 = 400000h
WS_BORDER	 = 800000h
WS_CAPTION	 = 0C00000h
WS_OVERLAPPEDWINDOW  = 0CF0000h
WS_MAXIMIZE	 = 1000000h
WS_CLIPCHILDREN	 = 2000000h
WS_CLIPSIBLINGS	 = 4000000h
WS_DISABLED	 = 8000000h
WS_VISIBLE	 = 10000000h
WS_MINIMIZE	 = 20000000h
WS_ICONIC	 = 20000000h
WS_CHILD	 = 40000000h
WS_CHILDWINDOW	 = 40000000h
WS_POPUP	 = 80000000h
WS_POPUPWINDOW	 = 80880000h

; ---------------------------------------------------------------------------

; enum MACRO_DDSCAPS, copyof_225, bitfield
DDSCAPS_RESERVED1  = 1
DDSCAPS_ALPHA	 = 2
DDSCAPS_BACKBUFFER  = 4
DDSCAPS_COMPLEX	 = 8
DDSCAPS_FLIP	 = 10h
DDSCAPS_FRONTBUFFER  = 20h
DDSCAPS_OFFSCREENPLAIN	= 40h
DDSCAPS_OVERLAY	 = 80h
DDSCAPS_PALETTE	 = 100h
DDSCAPS_PRIMARYSURFACE	= 200h
DDSCAPS_PRIMARYSURFACELEFT  = 400h
DDSCAPS_SYSTEMMEMORY  =	800h
DDSCAPS_TEXTURE	 = 1000h
DDSCAPS_3DDEVICE  = 2000h
DDSCAPS_VIDEOMEMORY  = 4000h
DDSCAPS_VISIBLE	 = 8000h
DDSCAPS_WRITEONLY  = 10000h
DDSCAPS_ZBUFFER	 = 20000h
DDSCAPS_OWNDC	 = 40000h
DDSCAPS_LIVEVIDEO  = 80000h
DDSCAPS_HWCODEC	 = 100000h
DDSCAPS_MODEX	 = 200000h
DDSCAPS_MIPMAP	 = 400000h
DDSCAPS_RESERVED2  = 800000h
DDSCAPS_ALLOCONLOAD  = 4000000h
DDSCAPS_VIDEOPORT  = 8000000h
DDSCAPS_LOCALVIDMEM  = 10000000h
DDSCAPS_NONLOCALVIDMEM	= 20000000h
DDSCAPS_STANDARDVGAMODE	 = 40000000h
DDSCAPS_OPTIMIZED  = 80000000h

; ---------------------------------------------------------------------------

; enum MACRO_R2_LAST, copyof_226
R2_LAST		 = 16
SRCCOPY		 = 13369376
SRCPAINT	 = 15597702

