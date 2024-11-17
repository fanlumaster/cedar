# Cedar

## About

Try to understand cedar trie and implement a specified version of mine and use it for my current work.

## How to run and debug

Use CMake to compile,

```bash
./lcompile.sh
```

Or just use VSCode CMake plugins to build it if you want to use VSCode to debug it.

Then make some data,

```bash
cd ./build/bin/
./mkcedar words.txt trie.bin
```

Then, you could run it under `/build/bin` directory,

```bash
./cedar trie.bin
```

You could also debug it directly use VSCode if you build this project with VSCode CMake Plugins and VSCode C/C++ plugins.

## Reference

- <https://www.tkl.iis.u-tokyo.ac.jp/~ynaga/cedar/>
- N. Yoshinaga and M. Kitsuregawa. A Self-adaptive Classifier for Efficient Text-stream Processing. Proc. COLING 2014, pp. 1091--1102. 2014.


