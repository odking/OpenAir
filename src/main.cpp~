#include "log/logger.h"
#include "common/get-opt.h"

void my_test()
{
    logger("my_test");
}

int main(int argc, char ** argv)
{
    logger("start test\n");
    my_test();

    Option::GetInstance()->GetOption(argc, argv);
    return 0;
}
