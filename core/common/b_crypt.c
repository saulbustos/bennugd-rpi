/*
 *  Copyright ? 2006-2013 SplinterGU (Fenix/Bennugd)
 *
 *  This file is part of Bennu - Game Development
 *
 *  This software is provided 'as-is', without any express or implied
 *  warranty. In no event will the authors be held liable for any damages
 *  arising from the use of this software.
 *
 *  Permission is granted to anyone to use this software for any purpose,
 *  including commercial applications, and to alter it and redistribute it
 *  freely, subject to the following restrictions:
 *
 *     1. The origin of this software must not be misrepresented; you must not
 *     claim that you wrote the original software. If you use this software
 *     in a product, an acknowledgment in the product documentation would be
 *     appreciated but is not required.
 *
 *     2. Altered source versions must be plainly marked as such, and must not be
 *     misrepresented as being the original software.
 *
 *     3. This notice may not be removed or altered from any source
 *     distribution.
 *
 */

/* ------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "b_crypt.h"

/* ------------------------------------------------------------------------- */

crypt_handle * crypt_create( int method, char * key )
{
    return NULL;
}

/* ------------------------------------------------------------------------- */

void crypt_destroy( crypt_handle * ch )
{
    if ( ch ) free( ch );
}

/* ------------------------------------------------------------------------- */

int crypt_data( crypt_handle * ch, char * in, char * out, int size, int enc )
{
    return 0;
}

/* ------------------------------------------------------------------------- */
