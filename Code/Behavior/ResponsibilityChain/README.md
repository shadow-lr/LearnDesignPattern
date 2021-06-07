## 职责链模式
责任链模式主要用于处理请求,将处理请求的对象连成链,每个请求处理者都有着自己的处理权限.
意图：使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递该请求直到有一个对象处理它为止


举例：请假是我们日常生活中经常遇到的事，一般请假按请的时间长短需要跟不同级别的管理者请，就是请假这个请求根据时间长短可由不同的处理者处理，非常适合责任链模式。