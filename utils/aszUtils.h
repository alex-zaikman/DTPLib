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

//convert json string to dictionary
+(NSDictionary*)jsonToDictionarry:(NSString*)json;
//convert json string to array
+(NSArray*)jsonToArray:(NSString*)json;

+(NSString*) decodeFromPercentEscapeString:(NSString *)string ;

//create url request with params
+(NSURLRequest*)requestWithUrl:(NSString*)url usingMethod:(NSString*)method withUrlParams: (NSDictionary*)urlVars andBodyData:(NSString*)bodyData;

//create param string for GET request
+(NSString*)paramsToString:(NSDictionary*)vars;


@end

#endif
