#pragma once

struct asg_options {
    bool center;
    size_t boundsw;
    size_t len;
    size_t decorstrlen;
    char * str;
    char * decorstr;
};

struct asg_options parseopts(int argc, char * argv[]);
