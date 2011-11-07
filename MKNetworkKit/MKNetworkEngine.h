//
//  MKNetworkEngine.h
//  MKNetworkKit
//
//  Created by Mugunth Kumar on 7/11/11.
//  Copyright 2011 Steinlogic. All rights reserved.
//	File created using Singleton XCode Template by Mugunth Kumar (http://blog.mugunthkumar.com)
//  More information about this template on the post http://mk.sg/89
//  Permission granted to do anything, commercial/non-commercial with this file apart from removing the line/URL above

#import <Foundation/Foundation.h>

@class MKRequest;
@interface MKNetworkEngine : NSObject
+ (MKNetworkEngine*) sharedEngine;
-(void) setHostName:(NSString*) hostName customHeaderFields:(NSDictionary*) headers;

-(MKRequest*) requestWithPath:(NSString*) path
                         body:(NSMutableDictionary*) body
                   httpMethod:method;

-(MKRequest*) requestWithPath:(NSString*) path
                         body:(NSMutableDictionary*) body
                   httpMethod:method 
                          ssl:(BOOL) useSSL;

-(void) queueRequest:(MKRequest*) request;
@end