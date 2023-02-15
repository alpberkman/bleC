#ifndef _WATERMARK_H
#define _WATERMARK_H

#ifndef NULL
#define NULL	0
#endif

#ifndef _SIZE_T
#define _SIZE_T
typedef long unsigned int size_t;
#endif

void *kmalloc(size_t size);
void kfree(void *ptr);

void reserve_memory();
void remove_memory();


void *watermark_malloc(size_t size);

#endif
