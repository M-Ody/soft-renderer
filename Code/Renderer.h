#ifndef RENDERER_H

struct OffscreenBuffer
{
	void* memory;
	int width;
	int height;
	int pitch;
};

void* Alloc(int size);
void Release(void* address);
void Print(char* buffer);
void UpdateAndRender(OffscreenBuffer* buffer);
void ProfileStart();
void ProfileEnd();
char* OpenFile(char* path);

#define RENDERER_H
#endif

