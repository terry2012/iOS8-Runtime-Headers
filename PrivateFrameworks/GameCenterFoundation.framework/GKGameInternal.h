/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSDictionary, GKStoreItemInternal;

@interface GKGameInternal : GKGameDescriptor  {
    NSString *_name;
    NSDictionary *_icons;
    NSString *_defaultLeaderboardIdentifier;
    GKStoreItemInternal *_storeItem;
    union { 
        struct { 
            unsigned int _platform : 8; 
            unsigned int _prerendered : 1; 
            unsigned int _supportsLeaderboards : 1; 
            unsigned int _supportsLeaderboardSets : 1; 
            unsigned int _hasAggregateLeaderboard : 1; 
            unsigned int _supportsAchievements : 1; 
            unsigned int _supportsMultiplayer : 1; 
            unsigned int _valid : 1; 
            unsigned int _unused : 1; 
            unsigned int _supportsTurnBasedMultiplayer : 1; 
            unsigned int _reserved : 13; 
        } ; 
        unsigned int _value; 
    } _flags;
    unsigned short _numberOfLeaderboards;
    unsigned short _numberOfLeaderboardSets;
    unsigned short _numberOfAchievements;
    unsigned short _maxAchievementPoints;
}

@property(retain) NSString * name;
@property(retain) NSDictionary * icons;
@property unsigned char platform;
@property(getter=isPrerendered) bool prerendered;
@property bool supportsLeaderboards;
@property bool hasAggregateLeaderboard;
@property unsigned short numberOfLeaderboards;
@property(retain) NSString * defaultLeaderboardIdentifier;
@property bool supportsLeaderboardSets;
@property unsigned short numberOfLeaderboardSets;
@property bool supportsAchievements;
@property unsigned short numberOfAchievements;
@property unsigned short maxAchievementPoints;
@property bool supportsMultiplayer;
@property bool supportsTurnBasedMultiplayer;
@property(getter=isValid) bool valid;
@property(retain) GKStoreItemInternal * storeItem;
@property unsigned int flags;

+ (id)secureCodedPropertyKeys;

- (void)setStoreItem:(id)arg1;
- (void)setMaxAchievementPoints:(unsigned short)arg1;
- (void)setNumberOfAchievements:(unsigned short)arg1;
- (void)setNumberOfLeaderboardSets:(unsigned short)arg1;
- (void)setNumberOfLeaderboards:(unsigned short)arg1;
- (unsigned short)numberOfLeaderboards;
- (void)setDefaultLeaderboardIdentifier:(id)arg1;
- (id)defaultLeaderboardIdentifier;
- (void)setSupportsTurnBasedMultiplayer:(bool)arg1;
- (void)setSupportsMultiplayer:(bool)arg1;
- (void)setSupportsAchievements:(bool)arg1;
- (void)setHasAggregateLeaderboard:(bool)arg1;
- (void)setSupportsLeaderboardSets:(bool)arg1;
- (void)setSupportsLeaderboards:(bool)arg1;
- (void)setPrerendered:(bool)arg1;
- (id)defaultCategory;
- (unsigned char)platform;
- (id)storeItem;
- (bool)supportsTurnBasedMultiplayer;
- (unsigned short)maxAchievementPoints;
- (unsigned short)numberOfAchievements;
- (unsigned short)numberOfLeaderboardSets;
- (bool)hasAggregateLeaderboard;
- (bool)supportsMultiplayer;
- (bool)supportsAchievements;
- (bool)supportsLeaderboardSets;
- (bool)supportsLeaderboards;
- (id)serverRepresentation;
- (void)setPlatform:(unsigned char)arg1;
- (bool)isPrerendered;
- (void)setValid:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (bool)isValid;
- (void)dealloc;
- (id)description;
- (unsigned int)flags;
- (unsigned short)numberOfCategories;
- (void)setIcons:(id)arg1;
- (id)icons;

@end
