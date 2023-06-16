## 关于本项目

这是一个演示项目，用来测试 native library 的开发和使用。

总体上，我们希望将 TDS/LeanCloud 的 REST API 使用 c++ 实现，并且通过跨平台编译，使之可以运行在 Android、iOS、PC 等不同平台，以及适配 Unity、Unreal 等游戏引擎。当前演示的 native lib 在子模块 restlib 之中，并且也只实现了一个最简单的 http request——获取服务端系统时间，如果验证这种方式可行，我们可以

http client 上本项目并没有直接调用 libcurl 的接口，方便起见直接从源码上拷贝了[cpp-httplib](https://github.com/yhirose/cpp-httplib)，在此向原作者表示感谢。

## 如何本地执行
直接在 Android Studio 中打开项目文件，然后选择 app 编译运行即可。

项目默认使用的 gradle 版本是 8.0.2，Android 部分用 Kotlin 开发，JNI 部分是 Java 代码，Native 部分遵循 c++11 标准。

