/**
 *
 * File Name: unix/uart.h
 * Title    : UNIX UART library
 * Project  : libUART
 * Author   : Copyright (C) 2018-2019 Johannes Krottmayer <krjdev@gmail.com>
 * Created  : 2019-11-20
 * Modified : 
 * Revised  : 
 * Version  : 0.1.0.0
 * License  : ISC (see file LICENSE.txt)
 *
 * NOTE: This code is currently below version 1.0, and therefore is considered
 * to be lacking in some functionality or documentation, or may not be fully
 * tested. Nonetheless, you can expect most functions to work.
 *
 */

#ifndef LIBUART_UNIX_UART_H
#define LIBUART_UNIX_UART_H

#define DEV_NAME_LEN        256

struct uart {
    int fd;
    char dev[DEV_NAME_LENGTH];
    int baud;
    int data_bits;
    int stop_bits;
    int parity;
    int flow_ctrl;
};

#endif
