//
//  OCDebugger.h
//  OCDebugger
//
//  Created by 崔 明辉 on 15/6/8.
//  Copyright (c) 2015年 PonyCui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OCDLogCore.h"

#ifdef DEBUG
#define NSLog(args...) OCDLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);
#else
#define NSLog(...) {}
#endif

#define OCDValuePoint(ID, VALUE) [OCDebugger addPointWithIdentifier:ID pointValue:VALUE pointObject:nil];if([OCDebugger isPointValid:ID]) {return [OCDebugger pointValue:ID];}

#define OCDObjectPoint(ID, OBJECT) [OCDebugger addPointWithIdentifier:ID pointValue:0 pointObject:OBJECT];if([OCDebugger isPointValid:ID]) {return [OCDebugger pointObject:ID];}

@interface OCDebugger : NSObject

#pragma mark - Public

/**
 *  @brief go to web application request an appid with apptoken.
 **/
+ (void)setAppID:(NSString *)appID appToken:(NSString *)appToken;

/**
 *  @brief enable/disable OCDebugger
 **/
+ (void)setEnabled:(BOOL)enabled;

/**
 *  @brief bind an IP to Host, just like /etc/hosts
 **/
+ (void)setHost:(NSString *)theHost IPAddress:(NSString *)theIPAddress;

#pragma mark - Private

+ (void)addPointWithIdentifier:(NSString *)identifier pointValue:(NSInteger)pointValue pointObject:(id)pointObject;

+ (BOOL)isPointValid:(NSString *)identifier;

+ (BOOL)pointValue:(NSString *)identifier;

+ (id)pointObject:(NSString *)identifier;

@end
