/*******************************************************************************
 * Copyright (c) 2014, 2016  IBM Corporation and others
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

#ifndef Heading_hpp
#define Heading_hpp

#include <stdio.h>

namespace loc {
    class Heading{
    private:
        long timestamp_;
        double magneticHeading_;
        double trueHeading_;
        double headingAccuracy_;
        
        double x_;
        double y_;
        double z_;
    
    public:
        Heading(long timestamp, double magneticHeading, double trueHeading, double headingAccuracy, double x, double y, double z);
        ~Heading() = default;
        
        void timestamp(long);
        long timestamp() const;
        void magneticHeading(double);
        double magneticHeading() const;
        void trueHeading(double);
        double trueHeading() const;
        void headingAccuracy(double);
        double headingAccuracy() const;
        
        void x(double);
        double x() const;
        void y(double);
        double y() const;
        void z(double);
        double z() const;
    };
}



#endif /* Heading_hpp */
