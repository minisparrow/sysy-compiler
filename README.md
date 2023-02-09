# A SysY Compiler  

## 使用方法

首先 clone 本仓库:

```sh
git clone https://github.com/minisparrow/sysy-compiler.git
```

在 [compiler-dev](https://github.com/pku-minic/compiler-dev) 环境内, 进入仓库目录后执行 `make` 即可编译得到可执行文件 (默认位于 `build/compiler`):

```sh
cd sysy-compiler 
make
```

如在此基础上进行开发, 你需要重新初始化 Git 仓库:

```sh
rm -rf .git
git init
```

## Dependend docker env  
- [compiler-dev](https://github.com/pku-minic/compiler-dev) compiler`):

## Build

进入docker 环境
```sh
bash build.sh 
```

## Run 

进入docker 环境
```sh
bash run.sh 
```

## RoadMap

- [x] lexer 
- [x] parser 
- [x] genenrate ast 
- [ ] codegen to llvm ir 
- [ ] codegen to riscv asm 
- [ ] binray

