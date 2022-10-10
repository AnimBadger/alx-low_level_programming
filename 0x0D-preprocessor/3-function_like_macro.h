#ifndef __ABS__
#define __ABS__

/**
 * File: 3-function_like_macro.h
 * Desc: Header file that defines a macro called ABS(x)
 *	to compute absolute number of x
 * @x: parameter passed
 */

#define ABS(x) ((x) < 0 ? -1 * (x) : (x))

#endif
