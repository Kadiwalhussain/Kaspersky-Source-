/*------------------------------------------------------------*/
/* filename -       sdesktop.cpp                              */
/*                                                            */
/* Registeration object for the class TDeskTop                */
/*------------------------------------------------------------*/

/*------------------------------------------------------------*/
/*                                                            */
/*    Turbo Vision -  Version 1.0                             */
/*                                                            */
/*                                                            */
/*    Copyright (c) 1991 by Borland International             */
/*    All Rights Reserved.                                    */
/*                                                            */
/*------------------------------------------------------------*/

#ifndef NO_TV_STREAMS

#define Uses_TDeskTop
#define Uses_TStreamableClass
#include "include\tv.h"

TStreamableClass RDeskTop( TDeskTop::name,
                           TDeskTop::build,
                           __DELTA(TDeskTop)
                         );

#endif  // ifndef NO_TV_STREAMS
