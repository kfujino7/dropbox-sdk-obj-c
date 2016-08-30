///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBSerializableProtocol.h"

@class DBTEAMMembersListArg;

#pragma mark - API Object

/// 
/// The MembersListArg struct.
/// 
/// This class implements the DBSerializable protocol (serialize and deserialize
/// instance methods), which is required for all Obj-C SDK API route objects.
/// 
@interface DBTEAMMembersListArg : NSObject <DBSerializable> 

#pragma mark - Instance fields

/// Number of results to return per call.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull limit;

/// Whether to return removed members.
@property (nonatomic, readonly, copy) NSNumber * _Nonnull includeRemoved;

#pragma mark - Constructors

/// 
/// Full constructor for the DBTEAMMembersListArg struct (exposes all instance
/// variables).
/// 
/// @param limit Number of results to return per call.
/// @param includeRemoved Whether to return removed members.
/// 
/// @return An initialized DBTEAMMembersListArg instance.
/// 
- (nonnull instancetype)initWithLimit:(NSNumber * _Nullable)limit includeRemoved:(NSNumber * _Nullable)includeRemoved;

/// 
/// Convenience constructor for the DBTEAMMembersListArg struct (exposes only
/// non-nullable instance variables with no default value).
/// 
/// 
/// @return An initialized DBTEAMMembersListArg instance.
/// 
- (nonnull instancetype)init;

@end


#pragma mark - Serializer Object

/// 
/// The serialization class for the MembersListArg struct.
/// 
@interface DBTEAMMembersListArgSerializer : NSObject 

/// 
/// Serializes DBTEAMMembersListArg instances.
/// 
/// @param instance An instance of the DBTEAMMembersListArg API object.
/// 
/// @return A json-compatible dictionary representation of the
/// DBTEAMMembersListArg API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersListArg * _Nonnull)instance;

/// 
/// Deserializes DBTEAMMembersListArg instances.
/// 
/// @param dict A json-compatible dictionary representation of the
/// DBTEAMMembersListArg API object.
/// 
/// @return An instantiation of the DBTEAMMembersListArg object.
/// 
+ (DBTEAMMembersListArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end