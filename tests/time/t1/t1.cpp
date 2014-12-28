// -*- C++ -*-
//===========================================================================
/* Time-stamp: <2014-12-28 20:05:43 by jiangtao> */

/* @file t1.cpp
 * $Id: t1.cpp 2014-12-28 11:26:34 jiangtao Exp $
 *
 * @author:Stone Jiang<jiangtao@tao-studio.net>
 */
//===========================================================================


#include <iostream>
#include <chrono>
#include <ctime>
 
long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
 
int main()
{
	std::cout << "start here\n";
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();
	unsigned x = 40;
	std::cout << "f(" << x << ") = " << fibonacci(x) << '\n';
	end = std::chrono::system_clock::now();
	
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	
	std::cout << "finished computation at " << std::ctime(&end_time)
						<< "elapsed time: " << elapsed_seconds.count() << "s\n";
	
	return 0;
}


