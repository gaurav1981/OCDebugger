//
//  PPMSyncSocketServiceManager.m
//  PonyMessenger
//
//  Created by 崔 明辉 on 15/4/1.
//  Copyright (c) 2015年 崔 明辉. All rights reserved.
//

#import "OCDSocketServiceManager.h"
#import "OCDConnService.h"
#import "OCDSubService.h"
#import "OCDPubService.h"
#import "OCDDeviceService.h"
#import "OCDPointService.h"

@implementation OCDSocketServiceManager

- (instancetype)init
{
    self = [super init];
    if (self) {
        _conn = [[OCDConnService alloc] init];
        _sub = [[OCDSubService alloc] init];
        _pub = [[OCDPubService alloc] init];
        _device = [[OCDDeviceService alloc] init];
        _point = [[OCDPointService alloc] init];
    }
    return self;
}

@end
