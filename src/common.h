#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdint.h>
#include <stdarg.h>
#include <sys/types.h>

// Default byte quota size is 1 MB or 2^20 bytes. Might be redefined in ntapfuse.c
extern uint64_t DEFAULT_BYTE_QUOTA;

// Default file quota size is 100. Might be redefined in ntapfuse.c
extern uint64_t DEFAULT_FILE_QUOTA;

typedef struct Record
{
	uid_t    user_id;
	uint64_t byte_total;
	uint64_t byte_quota;
	uint64_t file_total;
	uint64_t file_quota;
	uint32_t block;
} Record;

/*
 * Gets fullpath of file from ntapfuse_ops.c
 */
void fpath(const char *path, char *buf);

/*
 * Prints formatted data to log file "log.txt"
 * const char *format: format string
 * ...: arguments to format string
 */
void log_data(const char *format, ...);

#endif /*_COMMON_H_*/
