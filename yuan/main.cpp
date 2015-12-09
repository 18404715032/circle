//
//  main.cpp
//  yuan
//
//  Created by 杨浩 on 15/12/9.
//  Copyright © 2015年 杨浩. All rights reserved.
//

#include <iostream>
using namespace std;
const float PI=3.1415926;
float fCir_S(float);

int main(int argc, const char * argv[])
{
    float r,s;
    std::cout<<"r=";
    std::cin>>r;
    s=fCir_S(r);
    std::cout<<"\ns="<<s;
}

float fCir_S(float x)
{
    float z=-1.0;
    if(x>=0.0)
        z=PI*x*x;
    return (z);
}

