; ---------------------------------------------------------------------------

FILETIME	struc ;	(sizeof=0x8, mappedto_24) ; XREF: FF0057E7/r FF0057E8/r
dwLowDateTime	dd ?
dwHighDateTime	dd ?
FILETIME	ends

; ---------------------------------------------------------------------------

Config_Data_File struc ; (sizeof=0x94, align=0x4, copyof_29) ; XREF: FF006B0D/r
proof		db 32 dup(?)
font_name	db 64 dup(?)		; XREF:	WinMain(x,x,x,x):loc_412B3B/o
move_button_mode dd ?			; XREF:	WinMain(x,x,x,x):Dont_Switch_WeaponKeys/r
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

_STARTUPINFOA	struc ;	(sizeof=0x44, mappedto_13) ; XREF: FF003EC8/r Startup/r
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

RECT		struc ;	(sizeof=0x10, mappedto_8) ; XREF: NPC1_Weapon_Energy+2FE/w
					; NPC2_Enemy_Behemoth+25/w ...
left		dd ?			; XREF:	Draw_Bitmap_With_Transparency+8/w
					; Draw_Bitmap_With_Transparency+71/r ...
top		dd ?			; XREF:	Draw_Bitmap_With_Transparency+11/w
					; Draw_Bitmap_With_Transparency+D3/r ...
right		dd ?			; XREF:	Draw_Bitmap_With_Transparency+1A/w
					; Draw_Bitmap_With_Transparency+53/r ...
bottom		dd ?			; XREF:	Draw_Bitmap_With_Transparency+23/w
					; Draw_Bitmap_With_Transparency+B1/r ...
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
					; XREF:	.data:Final_Screen_Dist_Rects/r
					; .data:Final_Dst_Rect_2/r ...
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

CPPEH_RECORD	struc ;	(sizeof=0x18, align=0x4, copyof_4) ; XREF: FF0069CF/r
					; FF0069D0/r ...
old_esp		dd ?			; XREF:	Startup+18/w
					; Startup:loc_481ED6/r ...
exc_ptr		dd ?			; XREF:	Startup:loc_481EC2/r
					; ___crtInitCritSecAndSpinCount:loc_487C44/r ; offset
registration	_EH3_EXCEPTION_REGISTRATION ? ;	XREF: _fclose+2D/w _fclose+3B/w	...
CPPEH_RECORD	ends

; ---------------------------------------------------------------------------

_msEH		struc ;	(sizeof=0xC, mappedto_3) ; XREF: .rdata:stru_48CA58/r
					; .rdata:stru_48CA68/r ...
_unk		dd ?			; XREF:	__output+5E/r ;	base 16	signed
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
					; XREF:	.rdata:stru_48CAE8/r
EnclosingLevel	dd ?
FilterFunc	dd ?			; offset
HandlerFunc	dd ?			; offset
_SCOPETABLE_ENTRY ends

; ---------------------------------------------------------------------------

IDirectDraw	struc ;	(sizeof=0x4, align=0x4,	copyof_34)
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
atrb		db 257 dup(?)
		db ? ; undefined
width		dw ?
length		dw ?
		db ? ; undefined
		db ? ; undefined
Map_Data	ends

; ---------------------------------------------------------------------------

NPC_vars	struc ;	(sizeof=0xAC, align=0x4, mappedto_39)
Is_alive	db ?
		db ? ; undefined
		db ? ; undefined
		db ? ; undefined
collision_flags	dd ?
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
Eniity_Spritesheet dd ?
Sound_Hit	dd ?
Sound_Death	dd ?
Life		dd ?
Exp_Amount	dd ?
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
act_wait	dd ?
Nitbox		NPC_Collision_Flags ?
view		NPC_Collision_Flags ?
Is_Being_Hit	db ?
		db ? ; undefined
		db ? ; undefined
		db ? ; undefined
damage_view	dd ?
damage		dd ?
Parent_NPC	dd ?			; offset
NPC_vars	ends

; ---------------------------------------------------------------------------

NPC_Collision_Flags struc ; (sizeof=0x10, align=0x4, copyof_38)	; XREF:	NPC_vars/r
					; NPC_vars/r
front		dd ?
top		dd ?
back		dd ?
bottom		dd ?
NPC_Collision_Flags ends

; ---------------------------------------------------------------------------

Effect_vars	struc ;	(sizeof=0x44, align=0x4, copyof_40)
cond		dd ?
code		dd ?
direct		dd ?
x		dd ?
y		dd ?
xm		dd ?
ym		dd ?
act_no		dd ?
act_wait	dd ?
ani_no		dd ?
ani_wait	dd ?
view_left	dd ?
view_top	dd ?
rect		RECT ?
Effect_vars	ends

; ---------------------------------------------------------------------------

Fade_vars	struc ;	(sizeof=0x268, align=0x4, copyof_41)
mode		dd ?
bMask		dd ?
count		dd ?
ani_no		db 300 dup(?)
flag		db 300 dup(?)
dir		db ?
		db ? ; undefined
		db ? ; undefined
		db ? ; undefined
Fade_vars	ends

; ---------------------------------------------------------------------------

Map_Headers	struc ;	(sizeof=0xC8, align=0x4, copyof_42)
parts		db 32 dup(?)		; Doesn't work, I'll have to correct that sometime
map		db 32 dup(?)
bkType		dd ?
back		db 32 dup(?)
npc		db 32 dup(?)
boss		db 32 dup(?)
boss_no		db ?
name		db 32 dup(?)
		db ? ; undefined
		db ? ; undefined
		db ? ; undefined
Map_Headers	ends

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

; ---------------------------------------------------------------------------

; enum Directions, mappedto_44
Left		 = 0
Up		 = 1
Right		 = 2
Down		 = 3

