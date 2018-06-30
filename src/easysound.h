/* EasySound.h        */
/*                    */
/* V2.00 1990-0-23    */
/*                    */
/* AMIGA C CLUB (ACC) */
/* Anders Bjerin      */
/* Tulevagen 22       */
/* 181 41  LIDINGO    */
/* SWEDEN             */

#include "includes.prl"
#include <intuition/intuition.h>
#include <graphics/gfxbase.h>
#include <hardware/dmabits.h>
#include <hardware/intbits.h>
#include <hardware/custom.h>
#include <graphics/gfxmacros.h>

#ifndef _WIN32
#ifndef SOUND_ROUTINES
#define SOUND_ROUTINES

/* Sound channels: */
#define LEFT0         0
#define RIGHT0        1
#define RIGHT1        2
#define LEFT1         3

#define NONSTOP       0
#define ONCE          1
#define MAXVOLUME    64
#define MINVOLUME     0
#define NORMALRATE    0

extern struct SoundInfo;

extern struct SoundInfo *PrepareSound(STRPTR file);
extern struct SoundInfo *PrepareSoundFromBuffer(char *buffer, int buffer_len, int replay_rate);
extern BOOL PlaySound(struct SoundInfo *info, UWORD volume, UBYTE channel, WORD delta_rate, UWORD repeat);
extern void StopSound(UBYTE channel);
extern void RemoveSound(struct SoundInfo *info);

#endif
#endif