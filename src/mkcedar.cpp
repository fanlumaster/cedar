/**
 * e.g. ./mkcedar words.txt trie.bin
 */
#include <cstdio>
#include <cstdlib>
// #include "cedar.h"
#include "cedarpp.h"

int main(int argc, char **argv) {
  if (argc < 3) {
    std::fprintf(stderr, "Usage: %s keys trie\n", argv[0]);
    std::exit(1);
  }
  //
  cedar::da<int> trie;
  int n = 0;
  FILE *fp = argv[1][0] == '-' ? stdin : std::fopen(argv[1], "r");
  char line[8192];
  while (std::fgets(line, 8192, fp))
    trie.update(line, std::strlen(line) - 1, n++);
  std::fclose(fp);
  //
  if (trie.save(argv[2]) != 0) {
    std::fprintf(stderr, "cannot save trie: %s\n", argv[2]);
    std::exit(1);
  }
  //
  std::fprintf(stderr, "keys: %ld\n", trie.num_keys());
  std::fprintf(stderr, "size: %ld\n", trie.size());
  std::fprintf(stderr, "nonzero_size: %ld\n", trie.nonzero_size());
  return 0;
}
