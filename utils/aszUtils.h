//
//  aszUtils.h
//  DTPApp
//
//  Created by alex zaikman on 7/8/13.
//  Copyright (c) 2013 alex zaikman. All rights reserved.
//

#ifndef aszUtils_f3ghb45h64h4ertg54g54g45hb46h456ht4b4
#define aszUtils_f3ghb45h64h4ertg54g54g45hb46h456ht4b4

#import <Foundation/Foundation.h>

#define DELEMITER @";:;:;"

@interface aszUtils : NSObject



+(int)stringToInt:(NSString*)str;

+(NSString*)intToString:(int)i;

+(NSDictionary*)jsonToDictionarry:(NSString*)json;

+(NSArray*)jsonToArray:(NSString*)json;

+(NSString*)getDomain;

+(NSString*) decodeFromPercentEscapeString:(NSString *)string ;

+(NSURLRequest*)requestWithUrl:(NSString*)url usingMethod:(NSString*)method withUrlParams: (NSDictionary*)urlVars andBodyData:(NSString*)bodyData;

+(NSString*)paramsToString:(NSDictionary*)vars;


@end

#endif
