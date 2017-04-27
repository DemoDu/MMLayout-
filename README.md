# MMLayout 
- 简单的Frame 设置封装 支持链接方式编程 

###实例 
```objc 
    1.初始化一个View 使用block 块设置frame
    UIView *newView = [UIView new];
    [self.view addSubview:newView];  
    [newView make_Layout:^(MMLayout *layout) {
    layout.width = 100;
    layout.height= 200;
    layout.left = 200;
    layout.top  = 10;
    }];
```
给View发送一个make_Layout block传入进去一个MMLayout 对象 设置相关值 
  
##链接方式编写 
```objc 

    UIView *newView = [UIView new];
    [self.view addSubview:newView];  
    newView.m_height(50).m_width(100).m_right(10).m_top(10);

```
##父类居中  
```objc

    设置父类居中前提是自己本身有宽度和高度
    UIView *newView = [UIView new]; 
    [self.view addSubview:newView]; 
    newView.m_height(50).m_width(100).m_center();   

```

##相同设置 
```objc

    UIView *redView = [UIView new];  
    [self.view addSubview:redView]; 

    UIView *redView1 = [UIView new];  
    [self.view addSubview:redView1];  

    UIView *redView2 = [UIView new];  
    [self.view addSubview:redView2]; 

    UIView *redView3 = [UIView new];  
    [self.view addSubview:redView3]; 

    redView.m_left(10).m_top(10).m_size(CGSize(50,50));  

    redView1.m_equalToTop(redView).m_equalToSize(redView).m_left(redView.mm_maxX + 10); 

    redView2.m_equalToTop(redView1).m_equalToSize(redView1).m_left(redView1.mm_maxX + 10); 

    redView3.m_equalToTop(redView2).m_equalToSize(redView2).m_left(redView2.mm_maxX + 10); 


```


以上就是简单的使用方式 链接方式 和block的方式 



