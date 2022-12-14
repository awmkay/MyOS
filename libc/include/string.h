#ifndef _LIBC_INCLUDE_STRING_H
#define _LIBC_INCLUDE_STRING_H

#include <sys/cdefs.h>

#include <stddef.h>

#ifdef __cpluscplus
extern "C" {
#endif

int memcmp(const void*, const void*, size_t);
void *memcpy(void* __restrict, const void* __restrict, size_t);
void *memmove(void*, const void*, size_t);
void *memset(void*, int, size_t);
size_t strlen(const char*);

#ifdef __cplusplus
}
#endif

#endif
