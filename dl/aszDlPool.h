//
//  aszDlPool.h
//  DTPApp
//
//  Created by alex zaikman on 8/5/13.
//  Copyright (c) 2013 alex zaikman. All rights reserved.
//

#ifndef aszDlPool_4353454325234gterververv345gfv345g535
#define aszDlPool_4353454325234gterververv345gfv345g535

#import <Foundation/Foundation.h>
#import "aszDlBridge.h"

@interface aszDlPool : NSObject

//the pool must be inited throught this function only
-(id)initUseInitData:(NSString*)data playWithPlayDataDictionarry:(NSDictionary*)pData dlCallbackDelegate:(id<aszDlCallbackDelegate>)dldelegate;

//if key is in the pool will keep its element as is, any keys not in the dictionarry will be descardded from the pool
-(void)playWithDataDictionary:(NSDictionary*)pData;

-(id)getDlForKey:(NSString*)key;

//num of elements in the pool
-(uint)getCurrentPoolSize;

//clears the pool and releasses cdv lock, must be called before discarding of the pool
-(void)clearPool;

-(NSArray*)allKeys;

-(NSArray*)allValues;


@end
#endif
