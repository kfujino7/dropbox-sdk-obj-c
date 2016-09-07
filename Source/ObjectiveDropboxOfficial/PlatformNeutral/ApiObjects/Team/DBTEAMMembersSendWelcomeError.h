///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `MembersSendWelcomeError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMMembersSendWelcomeError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMMembersSendWelcomeErrorTag` enum type represents the possible tag states with which
/// the `DBTEAMMembersSendWelcomeError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMMembersSendWelcomeErrorTag) {
  /// No matching user found. The provided team_member_id, email, or external_id does not exist on
  /// this team.
  DBTEAMMembersSendWelcomeErrorUserNotFound,

  /// The user is not a member of the team.
  DBTEAMMembersSendWelcomeErrorUserNotInTeam,

  /// (no description).
  DBTEAMMembersSendWelcomeErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMMembersSendWelcomeErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_not_found".
///
/// Description of the "user_not_found" tag state: No matching user found. The provided
/// team_member_id, email, or external_id does not exist on this team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUserNotFound;

///
/// Initializes union class with tag state of "user_not_in_team".
///
/// Description of the "user_not_in_team" tag state: The user is not a member of the team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUserNotInTeam;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_not_found".
///
/// @return Whether the union's current tag state has value "user_not_found".
///
- (BOOL)isUserNotFound;

///
/// Retrieves whether the union's current tag state has value "user_not_in_team".
///
/// @return Whether the union's current tag state has value "user_not_in_team".
///
- (BOOL)isUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMMembersSendWelcomeError` union.
///
@interface DBTEAMMembersSendWelcomeErrorSerializer : NSObject

///
/// Serializes `DBTEAMMembersSendWelcomeError` instances.
///
/// @param instance An instance of the `DBTEAMMembersSendWelcomeError` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMMembersSendWelcomeError` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersSendWelcomeError * _Nonnull)instance;

///
/// Deserializes `DBTEAMMembersSendWelcomeError` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMMembersSendWelcomeError`
/// API object.
///
/// @return An instantiation of the `DBTEAMMembersSendWelcomeError` object.
///
+ (DBTEAMMembersSendWelcomeError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end