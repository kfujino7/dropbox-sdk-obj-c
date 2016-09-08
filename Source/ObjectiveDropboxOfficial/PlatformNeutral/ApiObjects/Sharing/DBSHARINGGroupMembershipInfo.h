///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGMembershipInfo.h"
#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGAccessLevel;
@class DBSHARINGGroupInfo;
@class DBSHARINGMemberPermission;

#pragma mark - API Object

///
/// The `GroupMembershipInfo` struct.
///
/// The information about a group member of the shared content.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGGroupMembershipInfo : DBSHARINGMembershipInfo <DBSerializable>

#pragma mark - Instance fields

/// The information about the membership group.
@property(nonatomic, readonly) DBSHARINGGroupInfo * _Nonnull group;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accessType The access type for this member.
/// @param group The information about the membership group.
/// @param permissions The permissions that requesting user has on this member. The set of
/// permissions corresponds to the MemberActions in the request.
/// @param initials Suggested name initials for a member.
/// @param isInherited True if the member has access from a parent folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessType:(DBSHARINGAccessLevel * _Nonnull)accessType
                                     group:(DBSHARINGGroupInfo * _Nonnull)group
                               permissions:(NSArray<DBSHARINGMemberPermission *> * _Nullable)permissions
                                  initials:(NSString * _Nullable)initials
                               isInherited:(NSNumber * _Nullable)isInherited;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param accessType The access type for this member.
/// @param group The information about the membership group.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessType:(DBSHARINGAccessLevel * _Nonnull)accessType
                                     group:(DBSHARINGGroupInfo * _Nonnull)group;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupMembershipInfo` struct.
///
@interface DBSHARINGGroupMembershipInfoSerializer : NSObject

///
/// Serializes `DBSHARINGGroupMembershipInfo` instances.
///
/// @param instance An instance of the `DBSHARINGGroupMembershipInfo` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGGroupMembershipInfo` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGGroupMembershipInfo * _Nonnull)instance;

///
/// Deserializes `DBSHARINGGroupMembershipInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBSHARINGGroupMembershipInfo`
/// API object.
///
/// @return An instantiation of the `DBSHARINGGroupMembershipInfo` object.
///
+ (DBSHARINGGroupMembershipInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end