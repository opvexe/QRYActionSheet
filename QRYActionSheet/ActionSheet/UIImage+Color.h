//
//  UIImage+Color.h
//  QRYActionSheet
//
//  Created by Facebook on 2018/3/6.
//  Copyright © 2018年 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Color)

/*！
 * 颜色转换图片

 @param color 颜色值
 @return 图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

@end
