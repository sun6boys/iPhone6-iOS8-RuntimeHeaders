/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceFeature : CIFeature  {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } bounds;
    boolhasLeftEyePosition;
    struct CGPoint { 
        double x; 
        double y; 
    } leftEyePosition;
    boolhasRightEyePosition;
    struct CGPoint { 
        double x; 
        double y; 
    } rightEyePosition;
    boolhasMouthPosition;
    struct CGPoint { 
        double x; 
        double y; 
    } mouthPosition;
    boolhasTrackingID;
    int trackingID;
    boolhasTrackingFrameCount;
    int trackingFrameCount;
    boolhasFaceAngle;
    float faceAngle;
    boolhasSmile;
    boolleftEyeClosed;
    boolrightEyeClosed;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property bool hasLeftEyePosition;
@property struct CGPoint { double x1; double x2; } leftEyePosition;
@property bool hasRightEyePosition;
@property struct CGPoint { double x1; double x2; } rightEyePosition;
@property bool hasMouthPosition;
@property struct CGPoint { double x1; double x2; } mouthPosition;
@property bool hasTrackingID;
@property int trackingID;
@property bool hasTrackingFrameCount;
@property int trackingFrameCount;
@property bool hasFaceAngle;
@property float faceAngle;
@property bool hasSmile;
@property bool leftEyeClosed;
@property bool rightEyeClosed;

+ (id)faceFeaturesWithBoundsArray:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)faceFeatureWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (id).cxx_construct;
- (id)type;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)setRightEyeClosed:(bool)arg1;
- (bool)rightEyeClosed;
- (void)setLeftEyeClosed:(bool)arg1;
- (bool)leftEyeClosed;
- (void)setHasSmile:(bool)arg1;
- (bool)hasSmile;
- (void)setHasFaceAngle:(bool)arg1;
- (bool)hasFaceAngle;
- (void)setTrackingFrameCount:(int)arg1;
- (int)trackingFrameCount;
- (void)setHasTrackingFrameCount:(bool)arg1;
- (bool)hasTrackingFrameCount;
- (void)setTrackingID:(int)arg1;
- (int)trackingID;
- (void)setHasTrackingID:(bool)arg1;
- (bool)hasTrackingID;
- (void)setMouthPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHasMouthPosition:(bool)arg1;
- (void)setRightEyePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHasRightEyePosition:(bool)arg1;
- (void)setLeftEyePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHasLeftEyePosition:(bool)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 hasLeftEyePosition:(bool)arg2 leftEyePosition:(struct CGPoint { double x1; double x2; })arg3 hasRightEyePosition:(bool)arg4 rightEyePosition:(struct CGPoint { double x1; double x2; })arg5 hasMouthPosition:(bool)arg6 mouthPosition:(struct CGPoint { double x1; double x2; })arg7 hasFaceAngle:(bool)arg8 faceAngle:(float)arg9 hasTrackingID:(bool)arg10 trackingID:(int)arg11 hasTrackingFrameCount:(bool)arg12 trackingFrameCount:(int)arg13 hasSmile:(bool)arg14 leftEyeClosed:(bool)arg15 rightEyeClosed:(bool)arg16;
- (struct CGPoint { double x1; double x2; })mouthPosition;
- (bool)hasMouthPosition;
- (struct CGPoint { double x1; double x2; })rightEyePosition;
- (bool)hasRightEyePosition;
- (struct CGPoint { double x1; double x2; })leftEyePosition;
- (bool)hasLeftEyePosition;
- (float)faceAngle;
- (void)setFaceAngle:(float)arg1;

@end