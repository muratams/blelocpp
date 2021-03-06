/*******************************************************************************
 * Copyright (c) 2014, 2015  IBM Corporation and others
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *******************************************************************************/

#ifndef Attitude_hpp
#define Attitude_hpp

#include <iostream>
#include <vector>

namespace loc{
    
    class Attitude{
        
    private:
        long timestamp_;
        double pitch_;
        double roll_;
        double yaw_;
        
    public:
        Attitude(long timestamp, double pitch, double roll, double yaw);
        ~Attitude();
        
        long timestamp() const;
        double pitch() const;
        double roll() const;
        double yaw() const;
        
        Attitude* timestamp(long timestamp);
        Attitude* pitch(double pitch);
        Attitude* roll(double roll);
        Attitude* yaw(double yaw);
        
        friend std::ostream& operator<<(std::ostream&os, const Attitude& att);
    };
    
    typedef std::vector<Attitude> Attitudes;
}

#endif /* Attitude_hpp */
