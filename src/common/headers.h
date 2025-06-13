//////////////////////////////////////////////////////
//
// Projet TFTPD32.  Feb 99  Ph.jounin
// File Headers.h :   Gestion du protocole
//
// released under artistic license (see license.txt)
//
//////////////////////////////////////////////////////

// #define TFTP_CLIENT_ONLY 1


#define WIN32_LEAN_AND_MEAN // this will assume smaller exe
#define _CRT_SECURE_NO_DEPRECATE

#pragma pack()

#include <windows.h>
#include <windowsx.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <IPHlpApi.h>
#include <commctrl.h>
#include <shellapi.h>

#include <assert.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <sys/stat.h>
#include <process.h>

#include "libs/GUI/cmsgbox.h"
#include "libs/GUI/centerchild.h"
#include "libs/GUI/listview.h"
#include "libs/GUI/window.h"
#include "libs/registry/registry.h"
#include "libs/linked_list/linked_list.h"
#include "libs/lasterr/lasterr.h"
#include "libs/md5/global.h"
#include "libs/md5/md5.h"
#include "libs/mini_tcp4u/tcp4u.h"
#include "libs/scandir/scandir.h"
#include "libs/log/logtomonitor.h"


#include "common\settings.h"
#include "common\bootpd_util.h"
#pragma pack(1)
#include "common\tftp.h"
#pragma pack()
#include "common\tftp_struct.h"



#include "common\custom.h"
#include "gui\tftpd32.h"
#include "gui\gui_struct.h"

#pragma pack(1)
#include "common\dialog_socket.h"
#pragma pack()
#include "common\dialog_common.h"

#include "gui\gui_functions.h"


typedef unsigned char  u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned long  u_int32_t;

#pragma pack(1)
#include "services\dhcp.h"
#pragma pack()
