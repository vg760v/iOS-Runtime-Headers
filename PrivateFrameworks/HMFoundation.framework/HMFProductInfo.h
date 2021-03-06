/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFProductInfo : NSObject <NSSecureCoding> {
    struct { 
        int majorVersion; 
        int minorVersion; 
        int patchVersion; 
    }  _operatingSystemVersion;
    int  _productClass;
    int  _productPlatform;
}

@property (nonatomic, readonly) struct { int x1; int x2; int x3; } operatingSystemVersion;
@property (nonatomic, readonly) int productClass;
@property (nonatomic, readonly) int productPlatform;

+ (struct { int x1; int x2; int x3; })decodeOperatingSystemVersionWithCoder:(id)arg1;
+ (void)encodeOperatingSystemVersion:(struct { int x1; int x2; int x3; })arg1 withCoder:(id)arg2;
+ (id)productInfo;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlatform:(int)arg1 class:(int)arg2 operatingSystemVersion:(struct { int x1; int x2; int x3; })arg3;
- (BOOL)isEqual:(id)arg1;
- (struct { int x1; int x2; int x3; })operatingSystemVersion;
- (int)productClass;
- (int)productPlatform;
- (id)shortDescription;

@end
