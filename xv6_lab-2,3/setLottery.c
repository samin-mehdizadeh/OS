#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "x86.h"

int
main(int argc, char *argv[])
{
    int pid = atoi(argv[1]);
    int ticket = atoi(argv[2]);
    setLottery(pid,ticket);
    exit();

}