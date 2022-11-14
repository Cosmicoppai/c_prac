//
// Created by KANAK on 2022/11/15.
//


# include "stdio.h"
# include "stdlib.h"



typedef struct returnMsg {
    int returnCode;
    char *returnMsg;
    void (*_print)(struct returnMsg *);
}returnMsg;


void _print(struct returnMsg *msg ) {
    if (msg->returnCode != 0)
        printf("%s; return code:%d", msg->returnMsg, msg->returnCode);
}

struct returnMsg ReturnMsg() {
    struct returnMsg msg;
    msg._print = &_print;
    msg.returnCode = 0;
    return msg;
}

int main(int argc, char **argv) {
    struct returnMsg msg = ReturnMsg();
    if (argc < 2) {
        msg.returnMsg = "Invalid no of arguments";
        msg.returnCode = -1;
        msg._print(&msg);
        return (-1);
    }
    int a = atoi(argv[1]);
    switch (a) {
        case 0:
            puts("lol");
            break;
        case 1:
            puts("hahahaha");
            break;
        case 2:
            puts("naaaaaa");
            break;
        default:
            puts("kanak");
    }
    msg._print(&msg);
    return (0);
}