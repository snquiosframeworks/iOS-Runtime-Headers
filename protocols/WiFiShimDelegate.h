/* Generated by RuntimeBrowser.
 */

@protocol WiFiShimDelegate <NSObject>

@optional

- (void)wifiShim_BSSIDChangedForInterface:(NSString *)arg1;
- (void)wifiShim_L2NewMetrics:(NSDictionary *)arg1 forInterface:(NSString *)arg2;
- (void)wifiShim_RSSIChangedTo:(int)arg1 forInterface:(NSString *)arg2;
- (void)wifiShim_WiFiManagerHasRestarted;

@end