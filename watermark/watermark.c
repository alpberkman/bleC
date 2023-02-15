#include "./watermark.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define N 1000

static char* mem_start = NULL;
static size_t mem_total = 0;
static size_t mem_current = 0;

void *kmalloc(size_t size) {
	return malloc(size);
}

void kfree(void *ptr) {
	free(ptr);
}

void reserve_memory() {
	mem_start = kmalloc(N);
	if(mem_start != NULL)
		mem_total = N;
}

void remove_memory() {
	kfree(mem_start);
	mem_start = NULL;
	mem_total = 0;
	mem_current = 0;
}
	

void *watermark_malloc(size_t size) {
	if(mem_start == NULL)
		reserve_memory();
	if(mem_start == NULL)
		return NULL;
	
	if(mem_total >= mem_current + size) {
		void *ptr = mem_start + mem_current;
		mem_current += size;
		return ptr;
	} else {
		return NULL;
	}
}

int main() {
	char *str1 = watermark_malloc(10);
	if(str1 != NULL)
	memcpy(str1, "123456789", 9);
	printf("%i, %s\n", str1, str1);
	
	char *str2 = watermark_malloc(10);
	if(str2 != NULL)
	memcpy(str2, "123456789", 9);
	printf("%i, %s\n", str2, str2);
	
	char *str3 = watermark_malloc(1000);
	if(str3 != NULL)
	memcpy(str3, "123456789", 9);
	printf("%i, %s\n", str3, str3);
	
	
	remove_memory();
	printf("%i, %s\n", str3, str3);
	printf("%i, %s\n", mem_start, mem_start);


}
