///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGTeamMemberInfo.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBUSERSTeam.h"

#pragma mark - API Object

@implementation DBSHARINGTeamMemberInfo

#pragma mark - Constructors

- (instancetype)initWithTeamInfo:(DBUSERSTeam *)teamInfo
                     displayName:(NSString *)displayName
                        memberId:(NSString *)memberId {

  self = [super init];
  if (self) {
    _teamInfo = teamInfo;
    _displayName = displayName;
    _memberId = memberId;
  }
  return self;
}

- (instancetype)initWithTeamInfo:(DBUSERSTeam *)teamInfo displayName:(NSString *)displayName {
  return [self initWithTeamInfo:teamInfo displayName:displayName memberId:nil];
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGTeamMemberInfoSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGTeamMemberInfoSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGTeamMemberInfoSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGTeamMemberInfoSerializer

+ (NSDictionary *)serialize:(DBSHARINGTeamMemberInfo *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"team_info"] = [DBUSERSTeamSerializer serialize:valueObj.teamInfo];
  jsonDict[@"display_name"] = valueObj.displayName;
  if (valueObj.memberId) {
    jsonDict[@"member_id"] = valueObj.memberId;
  }

  return jsonDict;
}

+ (DBSHARINGTeamMemberInfo *)deserialize:(NSDictionary *)valueDict {
  DBUSERSTeam *teamInfo = [DBUSERSTeamSerializer deserialize:valueDict[@"team_info"]];
  NSString *displayName = valueDict[@"display_name"];
  NSString *memberId = valueDict[@"member_id"] ?: nil;

  return [[DBSHARINGTeamMemberInfo alloc] initWithTeamInfo:teamInfo displayName:displayName memberId:memberId];
}

@end
