//
//  SKUserDefault+Properties.m
//  https://github.com/githubze/SKUserDefault
//
//  Created by 徐泽 on 2018/9/4.
//  Copyright © 2018年 徐泽. All rights reserved.
//

#import "SKUserDefault.h"

#define PPUserDefault [SKUserDefaults standardUserDefaults]

@interface SKUserDefault (Properties)

/**
 bool
 */
@property (nonatomic, assign) BOOL isNotFristUseApp;

/**
 string
 */
@property (nonatomic, strong) NSString * shareImageUrl;

/**
 int
 */
@property (nonatomic, assign) NSInteger buyNumer;

@end
