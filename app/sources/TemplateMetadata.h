//
//  TemplateMetadata.h
//  HexFiend_2
//
//  Created by Kevin Wojniak on 6/14/23.
//  Copyright © 2023 ridiculous_fish. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TemplateMetadata : NSObject

+ (NSArray<NSString *> *)readSupportedTypesAtPath:(NSString *)path;

@end

NS_ASSUME_NONNULL_END