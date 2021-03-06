/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBPowerDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) bool disableIdleSleep;
@property (nonatomic) bool hideACPower;
@property (nonatomic, readonly) bool hideLowPowerAlerts;
@property (nonatomic, readonly) long long lowBatteryLevel;
@property (nonatomic, readonly) bool trackPowerEvents;

- (void)_bindAndRegisterDefaults;

@end
