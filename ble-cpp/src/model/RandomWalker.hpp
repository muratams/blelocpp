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

#ifndef RandomWalker_hpp
#define RandomWalker_hpp

#include <stdio.h>
#include <iostream>
#include <random>

#include "Location.hpp"
#include "RandomGenerator.hpp"
#include "SystemModel.hpp"

namespace loc{
    
    struct RandomWalkerProperty{
        double sigma = 1.0;
    };
    
    template<class Ts, class Tin> class RandomWalker : public SystemModel<Ts, Tin>{
    
    public:
        ~RandomWalker(){}
        
        RandomWalker<Ts, Tin>& setProperty(RandomWalkerProperty property);
        Ts predict(Ts state, Tin input) override;
        std::vector<Ts> predict(std::vector<Ts> states, Tin input) override;
        
    private:
        RandomWalkerProperty mRWProperty;
        RandomGenerator mRandGen;
    };
    
}
#endif /* RandomWalker_hpp */
