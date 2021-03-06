/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDClockDevice : ASDObject {
    BOOL  _canChangeDeviceName;
    unsigned int  _clockAlgorithm;
    unsigned int  _clockDomain;
    BOOL  _clockIsStable;
    NSObject<OS_dispatch_queue> * _controlQueue;
    NSMutableArray * _controls;
    NSString * _deviceName;
    NSString * _deviceUID;
    BOOL  _hidden;
    unsigned int  _inputLatency;
    long long  _ioReferenceCount;
    NSObject<OS_dispatch_queue> * _ioReferenceQueue;
    BOOL  _isAlive;
    BOOL  _isRunning;
    NSString * _manufacturerName;
    NSString * _modelName;
    unsigned int  _outputLatency;
    NSObject<OS_dispatch_queue> * _sampleRateQueue;
    double  _samplingRate;
    NSArray * _samplingRates;
    unsigned int  _timestampPeriod;
    unsigned int  _transportType;
}

@property (nonatomic) BOOL canChangeDeviceName;
@property (nonatomic) unsigned int clockAlgorithm;
@property (nonatomic) unsigned int clockDomain;
@property (nonatomic) BOOL clockIsStable;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSString *deviceUID;
@property (getter=isHidden, nonatomic) BOOL hidden;
@property (nonatomic) unsigned int inputLatency;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *ioReferenceQueue;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic) unsigned int outputLatency;
@property (getter=isRunning, nonatomic, readonly) BOOL running;
@property (nonatomic) double samplingRate;
@property (nonatomic, copy) NSArray *samplingRates;
@property (nonatomic) unsigned int timestampPeriod;
@property (nonatomic) unsigned int transportType;

- (void).cxx_destruct;
- (void)_updateSafetyOffsets:(double)arg1;
- (void)_updateTimestampPeriod:(double)arg1;
- (long)addClient:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg1;
- (void)addControl:(id)arg1;
- (BOOL)canChangeDeviceName;
- (BOOL)changeDeviceName:(id)arg1;
- (BOOL)changeSamplingRate:(double)arg1;
- (unsigned int)clockAlgorithm;
- (unsigned int)clockDomain;
- (BOOL)clockIsStable;
- (id)controls;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (id)deviceName;
- (id)deviceUID;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithDeviceUID:(id)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;
- (unsigned int)inputLatency;
- (id)ioReferenceQueue;
- (BOOL)isHidden;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (BOOL)isRunning;
- (id)manufacturerName;
- (id)modelName;
- (unsigned long)objectClass;
- (unsigned int)outputLatency;
- (void)performConfigurationChange:(void*)arg1;
- (long)performStartIO;
- (long)performStopIO;
- (long)removeClient:(const struct AudioServerPlugInClientInfo { unsigned int x1; int x2; unsigned char x3; struct __CFString {} *x4; }*)arg1;
- (void)removeControl:(id)arg1;
- (void)requestConfigurationChange:(id /* block */)arg1;
- (double)samplingRate;
- (id)samplingRates;
- (void)setCanChangeDeviceName:(BOOL)arg1;
- (void)setClockAlgorithm:(unsigned int)arg1;
- (void)setClockDomain:(unsigned int)arg1;
- (void)setClockIsStable:(BOOL)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setInputLatency:(unsigned int)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setOutputLatency:(unsigned int)arg1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setSamplingRate:(double)arg1;
- (void)setSamplingRates:(id)arg1;
- (void)setTimestampPeriod:(unsigned int)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (long)startIOForClient:(unsigned int)arg1;
- (long)stopIOForClient:(unsigned int)arg1;
- (unsigned int)timestampPeriod;
- (unsigned int)transportType;
- (void)updateTimestampPeriod;

@end
