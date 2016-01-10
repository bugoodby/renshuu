#ifndef __MAIN_H__
#define __MAIN_H__

/*----------------------------------------*/
/* Module Name & Version                  */
/*----------------------------------------*/
#define MODULENAME_STRING	"rensyuu"
#define VERSION_STRING		"0.01"


/*----------------------------------------*/
/* OPTION Structure                       */
/*----------------------------------------*/

typedef struct _GLOBALPROP {
	int argc;					/* number of input files */
	char** argv;				/* pointer to a file name array */
} GLOBALPROP;


extern GLOBALPROP g_gprop;
inline GLOBALPROP* prop() { return &g_gprop; }


#endif /* __MAIN_H__ */
