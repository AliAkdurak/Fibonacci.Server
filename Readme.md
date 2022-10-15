# Fibonacci Server

   This is a simple playground project for a job interview coding challenge. I am not adding the actual coding challenge because it might have a negative effect. This project is gonna be private after interview.
  
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
    - Logging visibility ? 
  - Fantasies
    - Make it microservice!
 
## Rationale for some library choices:

-  