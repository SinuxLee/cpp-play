
### 生成项目工程
```shell
    xmake project -k vsxmake
```

### 序列化库
- boost的Serialization
- google的protobuf
- msgpack 比 protobuf 快
- 自定义buffer
- json
- xml

### 规范
- 业务宏定义、常量表达式、基本数据struct、接口interface放一起。方便其它业务对接口进行依赖，避免依赖类文件导致编译变慢
- 类的实现和.h分开，使用前置声明

```cpp
// 头文件 UserFwd.h

#include <memory>

class User;                  // ① 前置声明类
using UserPtr = std::shared_ptr<User>;  // ② 使用别名
```
