#include "SDL_config.h"

#ifndef _SDL_miaoaudio_h
#define _SDL_miaoaudio_h

#include "../SDL_sysaudio.h"
#include <mi_sys.h>
#include <mi_ao.h>

/* Hidden "this" pointer for the video functions */
#define _THIS SDL_AudioDevice *this

struct SDL_PrivateAudioData {
	MI_AUDIO_Frame_t* frame;

	/* The parent process id, to detect when application quits */
	pid_t parent;
	
	/* Raw mixing buffer */
	Uint8 *mixbuf;
	int    mixlen;
};
#define FUDGE_TICKS	10	/* The scheduler overhead ticks per frame */

/* Old variable names */
#define frame			(this->hidden->frame)
#define parent			(this->hidden->parent)
#define mixbuf			(this->hidden->mixbuf)
#define mixlen			(this->hidden->mixlen)

#endif /* _SDL_miaoaudio_h */
