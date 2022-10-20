# Fibonacci Server

This is a simple playground project for a job interview coding challenge. I am not adding the actual coding challenge because it might have a negative effect. This project is gonna be private after interview.

# Running 

After cloning repository, pre-cook cmake build folder with following command cmake first build command is going to take lots of time because I wanted to not package dependencies and used cmake fetch for all dependencies.
```shell
  cmake -B cmake-build
  cmake --build cmake-build --target Fibonacci_Service -j 6
  cmake-build/Fibonacci_Service
```
Use this to start local grpc server at 12024.
```shell
  cmake -B cmake-build
  cmake --build cmake-build --target Fibonacci_GRPC_Client -j 6
  cmake-build/Fibonacci_GRPC_Client
```
Use this command to run the client.

## Considerations

- 3 Domains 
  - Service side: 
    - Start with grpc if time allows play with thrift or other web api server? 
  - Fibonacci side(Core or Business): This is the main focus.
    - Definitely multi-thread
    - Thinking about a master monitor to see which process is doing calculation what F<sub>n</sub> so that we don't do double calculations
    - Must have some synchronised cache to see what values were calculated before.
    - Get the cache system injected so that we can use different ones? Could it be seperated?
  - Monitoring performance
    - Should have performance metrics counted. I don't know a C++ library for that. Will start with simple stopwatch. Checkout libraries if time permits.
    - Logging visibility ? Logging library ??
  - Fantasies
    - Make it microservice!
    - 
## Stretch Goals
- Use as many of the libraries you can from the interview
  - [x] boost
  - [ ] Folley
  - [ ] Google Test framework
- Eye candies
  - [ ] Doxygen and UML
 
## Rationale for some library choices:

-  