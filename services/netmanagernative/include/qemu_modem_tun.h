/* Copyright (c) 2026. Licensed under the Apache License, Version 2.0. */
#ifndef OHOS_QEMU_MODEM_TUN_H
#define OHOS_QEMU_MODEM_TUN_H
namespace OHOS::NetsysNative {
// QEMU's developer virtual modem owns the received nonpersistent usb0 fd.
// Creation stays in netsysnative; no capability or TUN ioctl is given to sh.
bool StartQemuModemTun();
void StopQemuModemTun();
}
#endif
