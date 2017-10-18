//
//  MineVipGraceTopNoticeView.h
//  TopLife
//
//  Created by HU on 2017/10/17.
//  Copyright © 2017年 happy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MineVipGraceTopNoticeView : UIScrollView
/**
 请使用这个方法初始化
 
 @param frame frame
 @param inteval 两个label之间的距离
 @param fontSize label的字体大小
 @return self
 */
- (instancetype)initWithFrame:(CGRect)frame inteval:(CGFloat)inteval  fontSize:(CGFloat)fontSize;

-(void)updateDataWithData:(id)data;
/* 关闭定时器 */
- (void)closeTimer;
@end
