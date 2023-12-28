// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__FEF9B514_2968_4469_BED4_175909CE1329__INCLUDED_)
#define AFX_STDAFX_H__FEF9B514_2968_4469_BED4_175909CE1329__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


// Insert your headers here

#include <vdw.h>

#include <stdio.h>
#include <stdarg.h>

#ifndef NT_DRIVER
#define NT_DRIVER
#endif

#include <Stuff/_carray.h>
#include <ScanAPI/BaseAPI.h>
#include <ScanAPI/RetFlags.h>
#include <ScanAPI/avp_msg.h>
#include <ScanAPI/AVPioctl.h>

#include "KLE_SYSDev.h"
#include "KLE_SYS.h"

#include <ntdddisk.h>
#include "sysio.h"

#include <Sign/sign.h>
#include <serialize/kldtser.h>
#include <AvpVndID.h>
#include <Version/ver_avp.h>

#include "../KLE/KLEAPI.h"
#include "../KLE/KLE_IPL.h"


// TODO: reference additional headers your program requires here

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__FEF9B514_2968_4469_BED4_175909CE1329__INCLUDED_)
