@interface BluetoothDevice : NSObject
-(unsigned)listeningMode;
-(BOOL)setListeningMode:(unsigned)arg1 ;
@end
@interface BluetoothManager : NSObject
+(id)sharedInstance;
-(id)connectedDevices;
@end

@interface SBApplication: NSObject
@property (nonatomic, readonly) NSString *bundleIdentifier;
@end

@interface SBMediaController : NSObject
- (SBApplication *)nowPlayingApplication;
-(BOOL)isPlaying;
-(BOOL)pauseForEventSource:(long long)arg1 ;
-(BOOL)playForEventSource:(long long)arg1 ;
@end
