//
//  XLNewData.h
//  XLMiaoBo
//
//  Created by XuLi on 16/8/31.
//  Copyright © 2016年 XuLi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XLNewData : NSObject

/** 返回多少条主播信息 */
@property (nonatomic, strong) NSNumber *totalPage;
/** 主播信息列表 */
@property (nonatomic, strong) NSArray *list;

@end
