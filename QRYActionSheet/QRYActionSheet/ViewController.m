//
//  ViewController.m
//  QRYActionSheet
//
//  Created by Facebook on 2018/3/6.
//  Copyright © 2018年 Facebook. All rights reserved.
//

#import "ViewController.h"
#import "QRYActionSheet.h"

@interface ViewController ()<QRYActionSheetDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];


}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    QRYActionSheet *actionSheet = [[QRYActionSheet alloc] initWithTitle:@"退出后不会删除任何历史数据，下次登录依然可以使用本账号。" delegate:self cancelButtonTitle:@"取消" destructiveButtonTitle:@"退出登录" otherButtonTitles:nil];
    [actionSheet show];
    
    
//    QRYActionSheet *actionSheet1 = [[QRYActionSheet alloc] initWithTitle:nil delegate:self cancelButtonTitle:@"取消" destructiveButtonTitle:nil otherButtonTitles:@"拍摄", @"从手机相册选择", nil];
//    [actionSheet1 show];
}

#pragma mark < .QRYActionSheetDelegate. >
- (void)actionSheet:(QRYActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex{
    
    
}


@end
