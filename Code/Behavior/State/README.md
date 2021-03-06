## 状态模式

用类表示状态，通过切换类改变对象状态

状态模式主要解决的是当控制一个对象状态转换的条件表达式过于复杂的情况。把状态的判断转移到表示不同状态的一系列类中，可以把复杂判断简化。

当一个状态的行为**取决于他的状态**，并且他必须在运行时刻根据状态改变他的行为时，可以考虑使用状态模式。比较：从上面这几点，我们可以看出策略模式和状态模式的应用场景有很大的不同：一个是封装一系列平行且复杂多变的实现方式，一个是实现把对象的内在状态的变化封装起来，用外部行为来表现出来。

### 状态模式和策略模式的区别
当我们对状态和策略建模的时候，思想的差异会导致不同的问题。例如，对状态进行建模时，状态迁移是一个核心内容；然而，在选择策略时，迁移与此毫无关系。另外，策略模式允许一个客户选择或提供一种策略，而这种思想在状态模式中完全没有

一个策略是一个计划或方案，通过执行这个计划或方案，我们可以在给定的输入条件下达到一个特定的目标。策略是一组方案，它们可以相互替换；选择一个策略，获得策略的输出。策略模式用于随不同外部环境采取不同行为的场合。

而状态模式不同，对一个状态特别重要的对象，通过状态机来建模一个对象的状态；状态模式处理的核心问题是状态的迁移，因为在对象存在很多状态情况下，对各个事务流，各个状态之间跳转和迁移过程都是极其复杂的。例如一个工作流，审批一个文件，存在新建、提交、已修改、HR部门审批中、老板审批中、HR审批失败、老板审批失败等状态，涉及多个角色交互，涉及很多事件，这种情况下用状态模式(状态机)来建模更加合适；把各个状态和相应的实现步骤封装成一组简单的继承自一个接口或抽象类的类，通过另外的一个Context来操作他们之间的自动状态变换，通过event来自动实现各个状态之间的跳转。在整个生命周期中存在一个状态的迁移曲线，这个迁移曲线对客户是透明的。

### 总结
在状态模式中，状态的变迁是由对象的**内部条件**决定，外界只需关心其接口，不必关心其状态对象的创建和转化；而策略模式里，采取何种策略由**外部条件**决定