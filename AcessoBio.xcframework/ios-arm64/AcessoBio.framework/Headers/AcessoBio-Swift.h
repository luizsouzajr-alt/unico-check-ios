#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef ACESSOBIO_SWIFT_H
#define ACESSOBIO_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
#endif

#import <AcessoBio/AcessoBio.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AcessoBio",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class SensorValuesDTO;

SWIFT_CLASS("_TtC9AcessoBio30AccelerometerDeviceBehaviorDTO")
@interface AccelerometerDeviceBehaviorDTO : NSObject
- (nonnull instancetype)initWithX:(NSArray<SensorValuesDTO *> * _Nonnull)x y:(NSArray<SensorValuesDTO *> * _Nonnull)y z:(NSArray<SensorValuesDTO *> * _Nonnull)z OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSString;

SWIFT_PROTOCOL("_TtP9AcessoBio25AcessoBioConfigDataSource_")
@protocol AcessoBioConfigDataSource
- (NSString * _Nonnull)getBundleIdentifier SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getHostKey SWIFT_WARN_UNUSED_RESULT;
@optional
- (NSString * _Nonnull)getProjectNumber SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getProjectId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getMobileSdkAppId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getHostInfo SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio11AttemptsDTO")
@interface AttemptsDTO : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class FaceBehaviorsDTO;
@class DeviceBehaviorsDTO;

SWIFT_CLASS("_TtC9AcessoBio12BehaviorsDTO")
@interface BehaviorsDTO : NSObject
- (nonnull instancetype)initWithFace:(FaceBehaviorsDTO * _Nullable)face device:(DeviceBehaviorsDTO * _Nullable)device OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




@class NSNumber;
@class GeolocationDTO;

SWIFT_CLASS("_TtC9AcessoBio11CallbackDTO")
@interface CallbackDTO : NSObject
- (nonnull instancetype)initWithCallback:(NSString * _Nullable)callback attempts:(AttemptsDTO * _Nullable)attempts totalTime:(NSNumber * _Nullable)totalTime geolocation:(GeolocationDTO * _Nullable)geolocation deviceBehavior:(DeviceBehaviorsDTO * _Nullable)deviceBehavior OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP9AcessoBio21CaptureBehaviorWorker_")
@protocol CaptureBehaviorWorker
- (void)startCapture;
@end


SWIFT_CLASS("_TtC9AcessoBio13CaptureResult")
@interface CaptureResult : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified base64;
@property (nonatomic, copy) NSString * _Null_unspecified encrypted;
- (nonnull instancetype)initWithBase64:(NSString * _Null_unspecified)base64 encrypted:(NSString * _Null_unspecified)encrypted OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC9AcessoBio14ConnectionsDTO")
@interface ConnectionsDTO : NSObject
- (nonnull instancetype)initWithType:(NSString * _Nonnull)type rtt:(NSString * _Nonnull)rtt effectiveType:(NSString * _Nonnull)effectiveType downlink:(NSString * _Nonnull)downlink ipAddress:(NSString * _Nonnull)ipAddress ipPort:(NSString * _Nonnull)ipPort OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, CreateProviderError, open) {
  CreateProviderErrorUndefined = 0,
  CreateProviderErrorKmmError = 1,
};
static NSString * _Nonnull const CreateProviderErrorDomain = @"AcessoBio.CreateProviderError";


SWIFT_PROTOCOL("_TtP9AcessoBio21CreateProviderUseCase_")
@protocol CreateProviderUseCase
- (BOOL)execute SWIFT_WARN_UNUSED_RESULT;
@end

@class OpenCameraDTO;
@class SuccessCallbackDTO;
@class ErrorCallbackDTO;
@class LivenessDTO;
@class ProviderDTO;
@class UnicoSetupData;
@class ErrorBio;

SWIFT_CLASS("_TtC9AcessoBio10DataLogger")
@interface DataLogger : NSObject
+ (DataLogger * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (void)commitBuild;
- (void)commitPrepareCamera;
- (void)commitOpenCamera:(OpenCameraDTO * _Nonnull)openCamera;
- (void)commitSuccessCallbackWithSuccessCallback:(SuccessCallbackDTO * _Nonnull)successCallback;
- (void)commitErrorCallbackWithErrorCallback:(ErrorCallbackDTO * _Nonnull)errorCallback;
- (void)commitCallback:(CallbackDTO * _Nonnull)callback;
- (void)commitSessionTransactionsIds:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)sessionTransactions;
- (void)commitLiveness:(LivenessDTO * _Nullable)liveness;
- (void)commitProvider:(ProviderDTO * _Nonnull)provider;
/// Send storage data signaling whether or not it is an <code>attempt</code>.
/// \param saveAttempt Indicates whether should or not store a capture attempt .
///
/// \param setupData Application initial setup
///
/// \param completion Block to listen for request result
///
- (void)send:(BOOL)saveAttempt setupData:(UnicoSetupData * _Nonnull)setupData success:(void (^ _Nullable)(NSString * _Nonnull, NSString * _Nullable))success failure:(void (^ _Nullable)(ErrorBio * _Nonnull))failure;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio29DefaultGetCameraResultUseCase")
@interface DefaultGetCameraResultUseCase : NSObject
- (nonnull instancetype)initWithKey:(NSString * _Nonnull)key keyBody:(NSString * _Nonnull)keyBody expires:(double)expires sessionToken:(NSString * _Nullable)sessionToken isIntegrationCaptureFlow:(BOOL)isIntegrationCaptureFlow OBJC_DESIGNATED_INITIALIZER;
- (CaptureResult * _Nonnull)execute:(NSDictionary<NSString *, id> * _Nonnull)dataToSend eventId:(NSString * _Nonnull)eventId sessionId:(NSString * _Nullable)sessionId utcTimeNow:(double)utcTimeNow uuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio22DefaultProviderFactory")
@interface DefaultProviderFactory : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Source, open) {
  SourceMemory = 0,
};


SWIFT_PROTOCOL("_TtP9AcessoBio15ProviderFactory_")
@protocol ProviderFactory
- (id <CreateProviderUseCase> _Nonnull)create SWIFT_WARN_UNUSED_RESULT;
@end


@interface DefaultProviderFactory (SWIFT_EXTENSION(AcessoBio)) <ProviderFactory>
- (id <CreateProviderUseCase> _Nonnull)create SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio18DeviceBehaviorsDTO")
@interface DeviceBehaviorsDTO : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio14DocumentResult")
@interface DocumentResult : CaptureResult
- (nonnull instancetype)initWithBase64:(NSString * _Null_unspecified)base64 encrypted:(NSString * _Null_unspecified)encrypted OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9AcessoBio16ErrorCallbackDTO")
@interface ErrorCallbackDTO : CallbackDTO
- (nonnull instancetype)initWithCode:(NSNumber * _Nullable)code title:(NSString * _Nullable)title message:(NSString * _Nullable)message OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCallback:(NSString * _Nullable)callback attempts:(AttemptsDTO * _Nullable)attempts totalTime:(NSNumber * _Nullable)totalTime geolocation:(GeolocationDTO * _Nullable)geolocation deviceBehavior:(DeviceBehaviorsDTO * _Nullable)deviceBehavior SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9AcessoBio10ErrorUnico")
@interface ErrorUnico : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCode:(NSInteger)code message:(NSString * _Nullable)message body:(NSDictionary<NSString *, NSString *> * _Nullable)body OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getMessage SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio9ErrorHttp")
@interface ErrorHttp : ErrorUnico
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCode:(NSInteger)code message:(NSString * _Nullable)message body:(NSDictionary<NSString *, NSString *> * _Nullable)body OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9AcessoBio16FaceBehaviorsDTO")
@interface FaceBehaviorsDTO : NSObject
- (nonnull instancetype)initWithBlinks:(NSNumber * _Nullable)blinks pitch:(NSArray<SensorValuesDTO *> * _Nullable)pitch roll:(NSArray<SensorValuesDTO *> * _Nullable)roll yaw:(NSArray<SensorValuesDTO *> * _Nullable)yaw OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol SensorsWorkerFactory;

SWIFT_PROTOCOL("_TtP9AcessoBio9Factories_")
@protocol Factories
- (id <CreateProviderUseCase> _Nonnull)createProviderFactoryWithSource:(enum Source)source SWIFT_WARN_UNUSED_RESULT;
- (id <SensorsWorkerFactory> _Nonnull)makeSensorsWorkerFactory SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio18FactoriesContainer")
@interface FactoriesContainer : NSObject <Factories>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (FactoriesContainer * _Nonnull)sharedContainer SWIFT_WARN_UNUSED_RESULT;
- (id <CreateProviderUseCase> _Nonnull)createProviderFactoryWithSource:(enum Source)source SWIFT_WARN_UNUSED_RESULT;
- (id <SensorsWorkerFactory> _Nonnull)makeSensorsWorkerFactory SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio14GeolocationDTO")
@interface GeolocationDTO : NSObject
- (nonnull instancetype)initWithLat:(NSNumber * _Nullable)lat lng:(NSNumber * _Nullable)lng alt:(NSNumber * _Nullable)alt precision:(NSNumber * _Nullable)precision city:(NSString * _Nullable)city uf:(NSString * _Nullable)uf country:(NSString * _Nullable)country postalCode:(NSString * _Nullable)postalCode address:(NSString * _Nullable)address gpsFlag:(NSString * _Nullable)gpsFlag mode:(NSString * _Nullable)mode OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio11LivenessDTO")
@interface LivenessDTO : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio13OpenCameraDTO")
@interface OpenCameraDTO : NSObject
- (nonnull instancetype)initWithCaptureType:(NSString * _Nullable)captureType cameraType:(NSString * _Nullable)cameraType OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio11ProviderDTO")
@interface ProviderDTO : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC9AcessoBio26SDKTokenResponseDTOAdapter")
@interface SDKTokenResponseDTOAdapter : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable facetecSessionToken;
@property (nonatomic, readonly) BOOL geolocationEnabled;
@property (nonatomic, readonly, copy) NSString * _Nonnull key;
@property (nonatomic, readonly, copy) NSString * _Nonnull keyBody;
@property (nonatomic, readonly) BOOL enableLogo;
@property (nonatomic, readonly) double expires;
@property (nonatomic, readonly) BOOL isIntegrationCaptureFlow;
@property (nonatomic, readonly) NSInteger maxAttempts;
@property (nonatomic, readonly) BOOL isLiveness;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio12SelfieResult")
@interface SelfieResult : CaptureResult
- (nonnull instancetype)initWithBase64:(NSString * _Null_unspecified)base64 encrypted:(NSString * _Null_unspecified)encrypted OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio15SensorValuesDTO")
@interface SensorValuesDTO : NSObject
- (nonnull instancetype)initWithValue:(double)value OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP9AcessoBio13SensorsDevice_")
@protocol SensorsDevice
- (void)startUpdate;
- (void)stopUpdate;
@end


SWIFT_PROTOCOL("_TtP9AcessoBio13SensorsWorker_")
@protocol SensorsWorker
- (void)startMotion;
- (DeviceBehaviorsDTO * _Nonnull)stopMotion;
@end


SWIFT_PROTOCOL("_TtP9AcessoBio20SensorsWorkerFactory_")
@protocol SensorsWorkerFactory
- (id <SensorsWorker> _Nonnull)make SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio13SilhouetteDTO")
@interface SilhouetteDTO : NSObject
- (nonnull instancetype)initWithWidth:(NSNumber * _Nonnull)width height:(NSNumber * _Nonnull)height OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio18SuccessCallbackDTO")
@interface SuccessCallbackDTO : CallbackDTO
- (nonnull instancetype)initWithCallback:(NSString * _Nullable)callback attempts:(AttemptsDTO * _Nullable)attempts totalTime:(NSNumber * _Nullable)totalTime jwtWeight:(NSNumber * _Nullable)jwtWeight OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCallback:(NSString * _Nullable)callback attempts:(AttemptsDTO * _Nullable)attempts totalTime:(NSNumber * _Nullable)totalTime geolocation:(GeolocationDTO * _Nullable)geolocation deviceBehavior:(DeviceBehaviorsDTO * _Nullable)deviceBehavior SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9AcessoBio9TimersDTO")
@interface TimersDTO : NSObject
- (nonnull instancetype)initWithCaptureUserTime:(NSNumber * _Nonnull)captureUserTime inferenceTime:(NSNumber * _Nonnull)inferenceTime openCameraTime:(NSNumber * _Nonnull)openCameraTime OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







@class NSDate;

SWIFT_PROTOCOL("_TtP9AcessoBio33UnicoCameraMetadataOutputDelegate_")
@protocol UnicoCameraMetadataOutputDelegate <AVCaptureMetadataOutputObjectsDelegate>
@property (nonatomic, readonly, copy) NSArray<SensorValuesDTO *> * _Nullable rolls;
@property (nonatomic, readonly, copy) NSArray<SensorValuesDTO *> * _Nullable yaws;
@property (nonatomic, readonly, copy) NSArray<SensorValuesDTO *> * _Nullable pitches;
@property (nonatomic, readonly, strong) NSNumber * _Nullable yaw;
@property (nonatomic, readonly, copy) NSDate * _Nullable endDate;
@end

@class AVCaptureMetadataOutput;
@class AVMetadataObject;
@class AVCaptureConnection;

SWIFT_CLASS("_TtC9AcessoBio25UnicoCameraMetadataOutput")
@interface UnicoCameraMetadataOutput : NSObject <UnicoCameraMetadataOutputDelegate>
@property (nonatomic, copy) NSArray<SensorValuesDTO *> * _Nullable rolls;
@property (nonatomic, copy) NSArray<SensorValuesDTO *> * _Nullable yaws;
@property (nonatomic, copy) NSArray<SensorValuesDTO *> * _Nullable pitches;
@property (nonatomic, strong) NSNumber * _Nullable yaw;
@property (nonatomic, copy) NSDate * _Nullable endDate;
- (void)captureOutput:(AVCaptureMetadataOutput * _Nonnull)output didOutputMetadataObjects:(NSArray<AVMetadataObject *> * _Nonnull)metadataObjects fromConnection:(AVCaptureConnection * _Nonnull)connection;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class UIViewController;
@protocol AcessoBioThemeDelegate;

SWIFT_CLASS("_TtC9AcessoBio25UnicoCheckLivenessAdapter")
@interface UnicoCheckLivenessAdapter : NSObject
- (nonnull instancetype)initWithViewController:(UIViewController * _Nonnull)viewController sdkToken:(SDKTokenResponseDTOAdapter * _Nonnull)sdkToken bioThemeDelegate:(id <AcessoBioThemeDelegate> _Nullable)bioThemeDelegate isHomolog:(BOOL)isHomolog hostKey:(NSString * _Nonnull)hostKey;
- (void)prepareCameraWithSuccess:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(ErrorBio * _Nonnull))failure;
- (void)openCameraWithUnicoSetup:(UnicoSetupData * _Nonnull)unicoSetup timeoutInterval:(double)timeoutInterval success:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))success failure:(void (^ _Nonnull)(ErrorBio * _Nonnull))failure;
- (NSString * _Nonnull)getLivenessKeybody SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC9AcessoBio16UnicoCheckThemes")
@interface UnicoCheckThemes : NSObject <AcessoBioThemeDelegate>
@property (nonatomic, strong) id <AcessoBioThemeDelegate> _Null_unspecified defaultTheme;
@property (nonatomic, strong) id <AcessoBioThemeDelegate> _Null_unspecified acessoBioThemeDelegate;
- (nonnull instancetype)initWithCurrentTheme:(id _Nonnull)currentTheme defaultTheme:(id <AcessoBioThemeDelegate> _Null_unspecified)defaultTheme completion:(void (^ _Nonnull)(id <AcessoBioThemeDelegate> _Nullable, NSString * _Nullable))completion OBJC_DESIGNATED_INITIALIZER;
- (id _Null_unspecified)getColorBackground SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBoxMessage SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextMessage SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundTakePictureButton SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorIconTakePictureButton SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundBottomDocument SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextBottomDocument SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteSuccess SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteNeutral SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getProgressBarColor SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getCancelButtonIconColor SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIColor;

@interface UnicoCheckThemes (SWIFT_EXTENSION(AcessoBio))
- (UIColor * _Nonnull)normalizeColorWithCurrentColor:(id _Null_unspecified)currentColor defaultColorTheme:(id _Null_unspecified)defaultColorTheme SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isValidHexStringColorWithCurrentColor:(NSString * _Nonnull)currentColor SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)convertHexSringToUIColorWithCurrentColor:(NSString * _Nonnull)currentColor SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio28UnicoConfigDataSourceManager")
@interface UnicoConfigDataSourceManager : NSObject
- (UnicoSetupData * _Nonnull)manageWithDataSource:(id <AcessoBioConfigDataSource> _Nonnull)dataSource SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio17UnicoDefaultTheme")
@interface UnicoDefaultTheme : NSObject <AcessoBioThemeDelegate>
- (id _Null_unspecified)getColorBackground SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBoxMessage SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextMessage SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundTakePictureButton SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorIconTakePictureButton SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundBottomDocument SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextBottomDocument SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteSuccess SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteNeutral SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getProgressBarColor SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getCancelButtonIconColor SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio13UnicoDefaults")
@interface UnicoDefaults : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double defaultFaceInferenceTimeout;)
+ (double)defaultFaceInferenceTimeout SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio16UnicoEnumsErrors")
@interface UnicoEnumsErrors : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, UnicoEnumsIErrors, open) {
  UnicoEnumsIErrorsUNKNOWN_INTERNAL_ERROR = 73000,
  UnicoEnumsIErrorsTAKE_PICTURE_ERROR = 73001,
/// Build
  UnicoEnumsIErrorsERROR_MINIMUM_API = 73003,
/// Simulator
  UnicoEnumsIErrorsERROR_SIMULATOR = 73006,
/// Network
  UnicoEnumsIErrorsNETWORK_ERROR = 73100,
/// JSON
  UnicoEnumsIErrorsJSON_NOT_FOUND = 73200,
  UnicoEnumsIErrorsJSON_INVALID = 73202,
  UnicoEnumsIErrorsCONFIG_DATASOURCE_INVALID = 73203,
/// Authentication
  UnicoEnumsIErrorsAUTHENTICATION_REQUEST_ERROR = 73300,
  UnicoEnumsIErrorsAUTHENTICATION_PARSE_ERROR = 73301,
  UnicoEnumsIErrorsAUTHENTICATION_TOKEN_NOT_FOUND = 73302,
/// Camera Response
  UnicoEnumsIErrorsFACETEC_GET_SESSION_FAILED = 73703,
  UnicoEnumsIErrorsSESSION_STATUS_USER_CANCELLED = 73704,
  UnicoEnumsIErrorsSESSION_STATUS_TIMEOUT = 73710,
/// Encryption
  UnicoEnumsIErrorsENCRYPTION_ERROR = 73800,
};

@class NSException;

SWIFT_CLASS("_TtC9AcessoBio11UnicoErrors")
@interface UnicoErrors : NSObject
+ (ErrorBio * _Nonnull)getUnicoErrorWithEnumerated:(enum UnicoEnumsIErrors)enumerated info:(NSString * _Nullable)info SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getCompleteExceptionWithException:(NSException * _Nonnull)exception SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UnicoFaceCameraPresenterInput;

SWIFT_CLASS("_TtC9AcessoBio25UnicoFaceCameraInteractor")
@interface UnicoFaceCameraInteractor : NSObject
- (nonnull instancetype)initWithPresenter:(id <UnicoFaceCameraPresenterInput> _Nonnull)presenter OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class VideoDTO;

SWIFT_PROTOCOL("_TtP9AcessoBio30UnicoFaceCameraInteractorInput_")
@protocol UnicoFaceCameraInteractorInput
- (void)startCapture;
- (void)stopCaptureAndSendDataWithScreenBrightness:(CGFloat)screenBrightness isCameraTypeChanged:(NSNumber * _Nonnull)isCameraTypeChanged imageResolution:(NSString * _Nonnull)imageResolution faceBehavior:(FaceBehaviorsDTO * _Nonnull)faceBehavior video:(VideoDTO * _Nonnull)video timers:(TimersDTO * _Nonnull)timers;
@end


@interface UnicoFaceCameraInteractor (SWIFT_EXTENSION(AcessoBio)) <UnicoFaceCameraInteractorInput>
- (void)startCapture;
- (void)stopCaptureAndSendDataWithScreenBrightness:(CGFloat)screenBrightness isCameraTypeChanged:(NSNumber * _Nonnull)isCameraTypeChanged imageResolution:(NSString * _Nonnull)imageResolution faceBehavior:(FaceBehaviorsDTO * _Nonnull)faceBehavior video:(VideoDTO * _Nonnull)video timers:(TimersDTO * _Nonnull)timers;
@end



SWIFT_CLASS("_TtC9AcessoBio24UnicoFaceCameraPresenter")
@interface UnicoFaceCameraPresenter : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP9AcessoBio29UnicoFaceCameraPresenterInput_")
@protocol UnicoFaceCameraPresenterInput
@property (nonatomic, readonly, strong) ProviderDTO * _Nonnull provider;
@end


@interface UnicoFaceCameraPresenter (SWIFT_EXTENSION(AcessoBio)) <UnicoFaceCameraPresenterInput>
@property (nonatomic, readonly, strong) ProviderDTO * _Nonnull provider;
@end



SWIFT_PROTOCOL("_TtP9AcessoBio35UnicoFaceCameraViewControllerOutput_")
@protocol UnicoFaceCameraViewControllerOutput
- (void)startCapture;
- (void)stopCapture;
@end


SWIFT_CLASS("_TtC9AcessoBio16UnicoHttpHeaders")
@interface UnicoHttpHeaders : NSObject
- (nonnull instancetype)initWithHeaders:(NSDictionary * _Nonnull)headers OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSBundle;

SWIFT_CLASS("_TtC9AcessoBio13UnicoJsonLoad")
@interface UnicoJsonLoad : NSObject
- (nonnull instancetype)initWithBundle:(NSBundle * _Nullable)bundle OBJC_DESIGNATED_INITIALIZER;
- (void)loadJsonWithJsonName:(NSString * _Nonnull)jsonName completion:(void (^ _Nonnull)(UnicoSetupData * _Nullable, ErrorBio * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum LogoType : NSInteger;
@class UIImageView;

SWIFT_CLASS("_TtC9AcessoBio18UnicoLogoImageView")
@interface UnicoLogoImageView : NSObject
- (nonnull instancetype)initWithEnableLogo:(BOOL)enableLogo OBJC_DESIGNATED_INITIALIZER;
- (UIImageView * _Null_unspecified)addLogoWithLocation:(CGPoint)location type:(enum LogoType)type SWIFT_WARN_UNUSED_RESULT;
- (void)removeLogo;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, LogoType, open) {
  LogoTypeFooter = 0,
  LogoTypeSilhouette = 1,
};


SWIFT_CLASS("_TtC9AcessoBio21UnicoNetworkingModule")
@interface UnicoNetworkingModule : NSObject
- (BOOL)isConnectedToNetwork SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP9AcessoBio18UnicoSetupProtocol_")
@protocol UnicoSetupProtocol
- (void)setupSDKWithUnicoSetupData:(UnicoSetupData * _Nonnull)unicoSetupData localeTypes:(LocaleTypes)localeTypes completion:(void (^ _Nonnull)(ErrorBio * _Nullable))completion;
- (SDKTokenResponseDTOAdapter * _Nullable)getSdkTokenObject SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) BOOL isHomolog;
@end


SWIFT_CLASS("_TtC9AcessoBio10UnicoSetup")
@interface UnicoSetup : NSObject <UnicoSetupProtocol>
@property (nonatomic) BOOL isHomolog;
- (void)setupSDKWithUnicoSetupData:(UnicoSetupData * _Nonnull)unicoSetupData localeTypes:(LocaleTypes)localeTypes completion:(void (^ _Nonnull)(ErrorBio * _Nullable))completion;
- (SDKTokenResponseDTOAdapter * _Nullable)getSdkTokenObject SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9AcessoBio14UnicoSetupData")
@interface UnicoSetupData : NSObject
- (NSString * _Nullable)getHostKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





SWIFT_CLASS("_TtC9AcessoBio18UnicoSetupServices")
@interface UnicoSetupServices : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio14UnicoTelemetry")
@interface UnicoTelemetry : NSObject
+ (NSDictionary * _Null_unspecified)getInfo SWIFT_WARN_UNUSED_RESULT;
+ (void)setNewInfoWithKey:(NSString * _Null_unspecified)key value:(id _Nonnull)value;
+ (void)clear;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio18UserInteractionDTO")
@interface UserInteractionDTO : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio8VideoDTO")
@interface VideoDTO : NSObject
- (nonnull instancetype)initWithWidth:(NSNumber * _Nullable)width height:(NSNumber * _Nullable)height aspectRatio:(NSNumber * _Nullable)aspectRatio OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
