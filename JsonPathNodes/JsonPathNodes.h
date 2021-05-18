//
//  JsonPathNodes.h
//  JsonPathNodes
//
//  Created by Pratik Kankriya on 16/05/21.
//

#import <Foundation/Foundation.h>


#import <JsonPathNodes/SMJConfiguration.h>
#import <JsonPathNodes/SMJEvaluationListener.h>
#import <JsonPathNodes/SMJOption.h>


NS_ASSUME_NONNULL_BEGIN

//! Project version number for JsonPathNodes.
FOUNDATION_EXPORT double JsonPathNodesVersionNumber;

//! Project version string for JsonPathNodes.
FOUNDATION_EXPORT const unsigned char JsonPathNodesVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JsonPathNodes/PublicHeader.h>


/*
** Types
*/
#pragma mark - Types

typedef _Nonnull id (^SMJJSONPathMapper)(id object, SMJConfiguration *configuration);



/*
** SMJJSONPath
*/
#pragma mark - SMJJSONPath

@interface JsonPathNodes : NSObject

// Instance.
- (nullable instancetype)initWithJSONPathString:(NSString *)jsonPathString error:(NSError **)error NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

// Apply path to JSON.
- (nullable id)resultForJSONData:(NSData *)data configuration:(nullable SMJConfiguration *)configuration error:(NSError **)error;
- (nullable id)resultForJSONFile:(NSURL *)url configuration:(nullable SMJConfiguration *)configuration error:(NSError **)error;
- (nullable id)resultForJSONObject:(id)jsonObject configuration:(nullable SMJConfiguration *)configuration error:(NSError **)error;

// Update JSON at path result. The json object need to use mutable containers.
- (nullable id)updateMutableJSONObject:(id)jsonObject setObject:(id)object configuration:(nullable SMJConfiguration *)configuration error:(NSError **)error;
- (nullable id)updateMutableJSONObject:(id)jsonObject mapObjects:(SMJJSONPathMapper)mapper configuration:(nullable SMJConfiguration *)configuration error:(NSError **)error;
- (nullable id)updateMutableJSONObject:(id)jsonObject deleteWithConfiguration:(nullable SMJConfiguration *)configuration error:(NSError **)error;
- (nullable id)updateMutableJSONObject:(id)jsonObject addObject:(id)object configuration:(nullable SMJConfiguration *)configuration error:(NSError **)error;
- (nullable id)updateMutableJSONObject:(id)jsonObject putObject:(id)object key:(NSString *)key configuration:(nullable SMJConfiguration *)configuration error:(NSError **)error;
- (nullable id)updateMutableJSONObject:(id)jsonObject renameKey:(NSString *)oldKey toKey:(NSString *)newKey configuration:(nullable SMJConfiguration *)configuration error:(NSError **)error;

@end


NS_ASSUME_NONNULL_END
