/**
 * Copyright (c) 2017-2050
 * All rights reserved.
 *
 * @Author:MXWXZ
 * @Date:2017/12/17
 *
 * @Description:
 */
#include "stdafx.h"
#include "baseboardsn.h"

namespace CryptoLib {
STRX Info_BaseboardSN::GetSN() {
    STRX str = CmdPipe(_T("wmic baseboard get serialnumber"));
    str = str.Right((UINT)str.GetLength() - str.Find(L"\n") - 1);
    str.Replace(L"\r\n", L"");
    return str;
}
}    // namespace CryptoLib
