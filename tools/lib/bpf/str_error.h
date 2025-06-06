/* SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause) */
#ifndef __LIBBPF_STR_ERROR_H
#define __LIBBPF_STR_ERROR_H

#define STRERR_BUFSIZE  128

char *libbpf_strerror_r(int err, char *dst, int len);

/**
 * @brief **libbpf_errstr()** returns string corresponding to numeric errno
 * @param err negative numeric errno
 * @return pointer to string representation of the errno, that is invalidated
 * upon the next call.
 */
const char *libbpf_errstr(int err);

#define errstr(err) libbpf_errstr(err)

#endif /* __LIBBPF_STR_ERROR_H */
