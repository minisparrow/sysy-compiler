export LD_LIBRARY_PATH=/root/compiler/pku-compiler/koopa/crates/libkoopa/target/debug/:$LD_LIBRARY_PATH
./build/compiler -koopa hello.c -o hello.koopa
