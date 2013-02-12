/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKLeaderboard, NSArray, NSDictionary, NSString;

@interface GKGetLeaderboardDataRequest : GKDataRequest {
    NSString *_categoryTitle;
    GKGame *_game;
    GKLeaderboard *_leaderboard;
    NSUInteger _maxRange;
    NSDictionary *_playerScore;
    NSString *_scoreType;
    NSArray *_scores;
}

@property(readonly) NSString *categoryTitle;
@property(retain) GKGame *game;
@property(retain) GKLeaderboard *leaderboard;
@property(readonly) NSDictionary *playerScore;
@property(readonly) NSString *scoreType;
@property(readonly) NSArray *scores;
@property(readonly) NSUInteger maxRange;

- (id)_playerScope:(NSInteger)arg1;
- (id)_timeScope:(NSInteger)arg1;
- (id)cacheKey;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (id)categoryTitle;
- (void)dealloc;
- (id)game;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (id)leaderboard;
- (NSUInteger)maxRange;
- (id)playerScore;
- (id)request;
- (id)scoreType;
- (id)scores;
- (void)setGame:(id)arg1;
- (void)setLeaderboard:(id)arg1;

@end