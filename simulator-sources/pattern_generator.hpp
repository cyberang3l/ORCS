#include <vector>
#include <utility>
#include <algorithm>
#include <string.h>
#include <string>
#include "MersenneTwister.h"

typedef std::pair<int, int> pair_t; 
typedef std::vector<pair_t> ptrn_t;

void genptrn_rand(int comm_size, int level, ptrn_t *ptrn);
void genptrn_scatter(int comm_size, int level, ptrn_t *ptrn);
void genptrn_gather(int comm_size, int level, ptrn_t *ptrn);
void genptrn_tree(int comm_size, int level, ptrn_t *ptrn);
void genptrn_bruck(int comm_size, int level, ptrn_t *ptrn);
void genptrn_ring(int comm_size, int level, ptrn_t *ptrn);
void genptrn_neighbor2d(int comm_size, int level, ptrn_t *ptrn);
void genptrn_recdbl(int comm_size, int level, ptrn_t *ptrn);

void printptrn(ptrn_t *ptrn);

void genptrn_by_name(ptrn_t *ptrn, char *name, char *frsname, char *secname, int comm_size, int partcomm_size, int level);
