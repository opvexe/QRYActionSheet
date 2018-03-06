//
//  QRYActionSheet.h
//  QRYActionSheet
//
//  Created by Facebook on 2018/3/6.
//  Copyright © 2018年 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QRYActionSheet;
@protocol QRYActionSheetDelegate <NSObject>

@optional;
/*!
 * 点击选中

 @param actionSheet ActionSheet视图
 @param buttonIndex 选中的下标
 */
- (void)actionSheet:(QRYActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex;

/*!
 * 视图将要消失
 
 @param actionSheet ActionSheet视图
 @param buttonIndex 选中的下标
 */
- (void)actionSheet:(QRYActionSheet *)actionSheet willDismissWithButtonIndex:(NSInteger)buttonIndex;

/*!
 * 视图已经消失
 
 @param actionSheet ActionSheet视图
 @param buttonIndex 选中的下标
 */
- (void)actionSheet:(QRYActionSheet *)actionSheet didDismissWithButtonIndex:(NSInteger)buttonIndex;

@end

@interface QRYActionSheet : UIView

/*！
 * 按钮个数
 */
@property(nonatomic, assign, readonly) NSInteger numberOfButtons;
/*！
 * 取消按钮下标
 */
@property(nonatomic, assign, readonly) NSInteger cancelButtonIndex;

/*！
 * 确定按钮下标
 */
@property(nonatomic, assign, readonly) NSInteger destructiveButtonIndex;
/*！
 * 代理
 */
@property (nonatomic, assign) id<QRYActionSheetDelegate> delegate;

/*！
 * 初始化视图
 */
- (instancetype)initWithTitle:(NSString *)title
           delegate:(id<QRYActionSheetDelegate>)delegate
  cancelButtonTitle:(NSString *)cancelButtonTitle
destructiveButtonTitle:(NSString *)destructiveButtonTitle
  otherButtonTitles:(NSString *)otherButtonTitles, ...;

/*！
 * 弹出视图
 */
- (void)show;

/*！
 * 对应下标的文字描述
 */
- (NSString *)buttonTitleAtIndex:(NSInteger)buttonIndex;

@end
