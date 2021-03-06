///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILESRelocationBatchResult.h"
#import "DBFILESRelocationResult.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBFILESRelocationBatchResult

#pragma mark - Constructors

- (instancetype)initWithEntries:(NSArray<DBFILESRelocationResult *> *)entries {
  [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](entries);

  self = [super init];
  if (self) {
    _entries = entries;
  }
  return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBFILESRelocationBatchResultSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBFILESRelocationBatchResultSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBFILESRelocationBatchResultSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBFILESRelocationBatchResultSerializer

+ (NSDictionary *)serialize:(DBFILESRelocationBatchResult *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"entries"] = [DBArraySerializer serialize:valueObj.entries
                                            withBlock:^id(id elem) {
                                              return [DBFILESRelocationResultSerializer serialize:elem];
                                            }];

  return jsonDict;
}

+ (DBFILESRelocationBatchResult *)deserialize:(NSDictionary *)valueDict {
  NSArray<DBFILESRelocationResult *> *entries =
      [DBArraySerializer deserialize:valueDict[@"entries"]
                           withBlock:^id(id elem) {
                             return [DBFILESRelocationResultSerializer deserialize:elem];
                           }];

  return [[DBFILESRelocationBatchResult alloc] initWithEntries:entries];
}

@end
