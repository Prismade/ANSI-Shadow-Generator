#pragma once

struct asg_options {
    bool center;
    size_t boundsw;
    size_t len;
    char *str;
};

struct asg_options parseopts(int argc, char *argv[]);

