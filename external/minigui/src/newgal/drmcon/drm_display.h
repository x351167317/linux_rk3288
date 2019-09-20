#ifndef __DRM_DISPLAY_H__
#define __DRM_DISPLAY_H__

#if ENABLE_RGA
#include <rga/RgaApi.h>
#else
struct bo {
    int fd;
    void *ptr;
    size_t size;
    size_t offset;
    size_t pitch;
    unsigned handle;
};
#endif
int drm_init(int num, int bpp);
int drm_deinit(void);
char * getdrmdispbuff(void);
int getdrmdispinfo(struct bo *bo, int *w, int *h);
struct bo *getdrmdisp(void);
void setdrmdisp(struct bo *bo);
int drm_setmode(int num, int bpp);
void getdrmdispbpp(int *bpp);
int getdrmdispfd(struct bo *bo);

#endif
