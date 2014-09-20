/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {
    int _stage;
    double _radius;
    double _timestamp;
    long long _pathIndex;
    long long _forcedKeyCode;
    struct CGPoint { 
        double x; 
        double y; 
    } _location;
}

@property(readonly) int stage;
@property(readonly) struct CGPoint { double x1; double x2; } location;
@property(readonly) double radius;
@property(readonly) double timestamp;
@property(readonly) long long pathIndex;
@property(readonly) long long forcedKeyCode;

+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;
+ (bool)supportsSecureCoding;

- (long long)forcedKeyCode;
- (id)initWithStage:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;
- (long long)pathIndex;
- (int)stage;
- (struct CGPoint { double x1; double x2; })location;
- (double)timestamp;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)radius;

@end