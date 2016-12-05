//
//  UIView+MM.h
//  MMCocoa
//
/* 
 杜蒙 iOS开发 
 Demo du 
*/



#import <UIKit/UIKit.h>

@interface UIView (MM)
- (void)setX:(CGFloat)x; ///<< set frame.x
- (CGFloat)x;            ///<< get frame.x
- (void)setY:(CGFloat)y; ///<< set frame.y
- (CGFloat)y;            ///<< get frame.y
- (void)setW:(CGFloat)w; ///<< set frame.bounds.size.width
- (CGFloat)w;            ///<< get frame.bounds.size.width
- (void)setH:(CGFloat)h; ///<< set frame.bounds.size.height
- (CGFloat)h;            ///<< get frame.bounds.size.height
- (CGFloat)centerX;      ///<< get self.center.x
- (CGFloat)centerY;      ///<< get self.center.y
- (CGFloat)maxY;         ///<< get CGRectGetMaxY
- (CGFloat)minY;         ///<< get CGRectGetMinY
- (CGFloat)maxX;         ///<< get CGRectGetMaxX
- (CGFloat)minX;         ///<< get CGRectGetMinX
- (CGFloat)halfW;        ///<< get self.width / 2
- (CGFloat)halfH;        ///<< get self.height / 2
- (CGFloat)halfX;        ///<< get self.x / 2
- (CGFloat)halfY;        ///<< get self.y / 2
- (CGFloat)halfCenterX;  ///<< get self.centerX / 2
- (CGFloat)halfCenterY;  ///<< get self.centerY / 2
- (CGSize)mm_size;       ///<< get self.bounds.size


@end
@interface MMLayout : NSObject
/* 
  @LayoutView   传入进去seting View
*/
-(instancetype)initWithLayoutView:(UIView *)LayoutView;
@property (assign , nonatomic) CGFloat top;    ///<<  frame y
@property (assign , nonatomic) CGFloat bottom; ///<<  y = super.h - LayoutView.h - bottom
@property (assign , nonatomic) CGFloat left;   ///<<  frame x
@property (assign , nonatomic) CGFloat right;  ///<<  x = super.w - LayoutView.h - right
@property (assign , nonatomic) CGFloat width;  ///<<  frame w
@property (assign , nonatomic) CGFloat height; ///<<  frame height
@property (assign , nonatomic) CGSize  size;   ///<<  frame bounds size  width height
- (void)center; ///<<调用此方法前必须先设置自己的宽高   (默认是居中父控件)
@end
@interface UIView (Layout)

/*
 [self make_Layout:^(MMLayout *layout) {
 layout.width  = 100;
 layout.height = 200;
 layout.top = 10;
 layout.right = 10;
 
 }];
*/
- (void)make_Layout:(void(^)(MMLayout * layout))layout;
/*
   示例链接编程
 
   self.width(100).height(100).left(10).top(10)
 
*/
- (UIView *(^)(CGFloat top))top;
- (UIView *(^)(CGFloat bottom))bottom;
- (UIView *(^)(CGFloat left))left;
- (UIView *(^)(CGFloat right))right;
- (UIView *(^)(CGFloat width))width;
- (UIView *(^)(CGFloat height))height;
- (UIView *(^)(CGSize size))size;


@end




