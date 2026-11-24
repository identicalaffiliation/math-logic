#include <bdd.h>
#include <iostream>

int main() {
    bdd_init(1000, 100);
    bdd_setvarnum(2);

    std::cout << bdd_satcount(bdd_ithvar(0) | bdd_ithvar(1)) << std::endl;
    bdd_done();

    return 0;
}