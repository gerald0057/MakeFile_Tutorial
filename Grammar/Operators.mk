# Makefile brief: 操作符 =  ?=  +=  := 的含义及使用示例

test1:
	@echo vre is $(VRE)

test2:
	@echo    $(x)
	@echo =  $(y)
	@echo ?= $(y)
	@echo := $(z)

# `=` : 在右值在遍历整个Makefile，完全展开后再赋值给左边的变量
ifdef DEFINE_VRE
    VRE = “Hello World!”
else
endif

# `?=` : 如果左值未被赋值过，则将右值赋值给它
ifeq ($(OPT),define)
    VRE ?= “Hello World! First!”
endif

# `+=` : 将右值增加到左边的变量基础上，此处自动添加空格
ifeq ($(OPT),add)
    VRE += “Kelly!”
endif

# `:=` : 将右值当前的值赋值给左值，不遍历整个Makefile获取最终值
ifeq ($(OPT),recover)
    VRE := “Hello World! Again!”
endif

x = foo
y = $(x)bar
z := $(x)bar
x = xyz
y ?= $(z)bar
x += ijk