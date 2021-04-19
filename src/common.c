#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

#include "common.h"
#include "ntapfuse_ops.h"

#define PATH_MAX        4096

uint64_t DEFAULT_BYTE_QUOTA = 1<<20;
uint64_t DEFAULT_FILE_QUOTA = 100;

void fpath(const char *path, char *buf)
{
	fullpath(path, buf);
}

void log_data(const char *format, ...)
{
	char file_path[PATH_MAX];
	
	fpath("/../log.txt", file_path);
	FILE * fp = fopen(file_path, "a");    
	if (fp == NULL)
		return;
	
	va_list args;
	va_start(args, format);
	vfprintf(fp, format, args);
	va_end(args);

	fclose(fp);
}
