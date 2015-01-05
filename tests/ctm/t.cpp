// -*- C++ -*-
//===========================================================================
/* Time-stamp: <2015-01-05 21:53:11 by stone> */

/* @file t.cpp
 * $Id: t.cpp 2015-01-05 13:48:02 stone Exp $
 *
 * @author:Stone Jiang<jiangtao@tao-studio.net>
 */
//===========================================================================


#include "ace/Log_Msg.h"
#include "ace/OS_main.h"
#include "binary.h"
#include "ace/streams.h"
int ACE_TMAIN (int, ACE_TCHAR*[])
{
	ACE_DEBUG ((LM_DEBUG,
							ACE_TEXT ("(%P|%T) start here. \n")));
	unsigned long n = binary <101010>::value;

	cout << "n = " << n << '\n';
	return 0;
}


