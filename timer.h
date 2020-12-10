//
//  timer.h
//  DBM
//
//  Created by Ben Stoneking on 12/9/20.
//  Copyright © 2020 Ben Stoneking. All rights reserved.
//

#ifndef timer_h
#define timer_h

#include <chrono>
#include <climits>

using namespace std::chrono;

class Timer {
private:
    high_resolution_clock timer;
    high_resolution_clock::time_point s;
    high_resolution_clock::time_point e;
    
    
public:
    void start() {
        s = timer.now();
    }
    void end() {
        e = timer.now();
    }
    duration<double> get_time() {
        return duration_cast<duration<double>>(e - s);
    }
    
};

#endif /* timer_h */
