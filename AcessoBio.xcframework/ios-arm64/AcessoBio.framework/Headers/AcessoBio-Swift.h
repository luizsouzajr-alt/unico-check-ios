// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
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
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
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
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import FaceTecSDK;
@import Foundation;
@import ObjectiveC;
#endif

#import <AcessoBio/AcessoBio.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AcessoBio",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

SWIFT_PROTOCOL("_TtP9AcessoBio25AcessoBioConfigDataSource_")
@protocol AcessoBioConfigDataSource
- (NSString * _Nonnull)getProjectNumber SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getProjectId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getMobileSdkAppId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getBundleIdentifier SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getHostInfo SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getHostKey SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio12CameraResult")
@interface CameraResult : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified base64;
@property (nonatomic, copy) NSString * _Null_unspecified encrypted;
- (nonnull instancetype)initWithBase64:(NSString * _Nonnull)base64 sdkToken:(NSString * _Nonnull)sdkToken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithData:(NSDictionary<NSString *, id> * _Nonnull)data sdkToken:(NSString * _Nonnull)sdkToken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio10ClientInfo")
@interface ClientInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio14DocumentResult")
@interface DocumentResult : CameraResult
- (nonnull instancetype)initWithBase64:(NSString * _Nonnull)base64 sdkToken:(NSString * _Nonnull)sdkToken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithData:(NSDictionary<NSString *, id> * _Nonnull)data sdkToken:(NSString * _Nonnull)sdkToken OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;

SWIFT_CLASS("_TtC9AcessoBio12ErrorFacetec")
@interface ErrorFacetec : ErrorBio
- (nonnull instancetype)initCode:(NSInteger)code method:(NSString * _Nonnull)method desc:(NSString * _Nonnull)desc OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initCode:(NSInteger)code desc:(NSString * _Nonnull)desc info:(NSString * _Nonnull)info OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
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


SWIFT_CLASS("_TtC9AcessoBio17ErrorHttpResponse")
@interface ErrorHttpResponse : ErrorUnico
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCode:(NSInteger)code message:(NSString * _Nullable)message body:(NSDictionary<NSString *, NSString *> * _Nullable)body OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9AcessoBio15ErrorUnicoSetup")
@interface ErrorUnicoSetup : ErrorBio
- (nonnull instancetype)initCode:(NSInteger)code method:(NSString * _Nonnull)method desc:(NSString * _Nonnull)desc OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initCode:(NSInteger)code desc:(NSString * _Nonnull)desc info:(NSString * _Nonnull)info OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio8HostInfo")
@interface HostInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio3Jwt")
@interface Jwt : NSObject
- (NSString * _Nullable)encodeWithData:(NSDictionary<NSString *, id> * _Nonnull)data token:(NSString * _Null_unspecified)token SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio11ProjectInfo")
@interface ProjectInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class SdkPkDTO;

SWIFT_CLASS("_TtC9AcessoBio19SDKTokenResponseDTO")
@interface SDKTokenResponseDTO : NSObject
@property (nonatomic, copy) NSString * _Nonnull Dk;
@property (nonatomic, copy) NSString * _Nonnull Ec;
@property (nonatomic, strong) SdkPkDTO * _Nonnull SdkPk;
@property (nonatomic, copy) NSString * _Nonnull Token;
@property (nonatomic) BOOL EnableLogo;
- (SdkPkDTO * _Nullable)getSdkPk SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio8SdkPkDTO")
@interface SdkPkDTO : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (NSString * _Nullable)getAppId SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio12SelfieResult")
@interface SelfieResult : CameraResult
- (nonnull instancetype)initWithBase64:(NSString * _Nonnull)base64 sdkToken:(NSString * _Nonnull)sdkToken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithData:(NSDictionary<NSString *, id> * _Nonnull)data sdkToken:(NSString * _Nonnull)sdkToken OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC9AcessoBio16UnicoCheckThemes")
@interface UnicoCheckThemes : NSObject <AcessoBioThemeDelegate>
@property (nonatomic, strong) id <AcessoBioThemeDelegate> _Null_unspecified defaultTheme;
@property (nonatomic, strong) id <AcessoBioThemeDelegate> _Null_unspecified acessoBioThemeDelegate;
- (nonnull instancetype)initWithCurrentTheme:(id _Nonnull)currentTheme defaultTheme:(id <AcessoBioThemeDelegate> _Null_unspecified)defaultTheme completion:(void (^ _Nonnull)(id <AcessoBioThemeDelegate> _Nullable, NSString * _Nullable))completion OBJC_DESIGNATED_INITIALIZER;
- (id _Null_unspecified)getColorBackground SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBoxMessage SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextMessage SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundPopupError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextPopupError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundButtonPopupError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextButtonPopupError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundTakePictureButton SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorIconTakePictureButton SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundBottomDocument SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextBottomDocument SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteSuccess SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteNeutral SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIColor;

@interface UnicoCheckThemes (SWIFT_EXTENSION(AcessoBio))
- (UIColor * _Nonnull)normalizeColorWithCurrentColor:(id _Null_unspecified)currentColor defaultColorTheme:(id _Null_unspecified)defaultColorTheme SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isValidHexStringColorWithCurrentColor:(NSString * _Nonnull)currentColor SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)convertHexSringToUIColorWithCurrentColor:(NSString * _Nonnull)currentColor SWIFT_WARN_UNUSED_RESULT;
@end

@class UnicoSetupData;

SWIFT_CLASS("_TtC9AcessoBio28UnicoConfigDataSourceManager")
@interface UnicoConfigDataSourceManager : NSObject
- (UnicoSetupData * _Nonnull)manageWithDataSource:(id <AcessoBioConfigDataSource> _Null_unspecified)dataSource SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio17UnicoDefaultTheme")
@interface UnicoDefaultTheme : NSObject <AcessoBioThemeDelegate>
- (id _Null_unspecified)getColorBackground SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBoxMessage SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextMessage SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundPopupError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextPopupError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundButtonPopupError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextButtonPopupError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundTakePictureButton SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorIconTakePictureButton SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorBackgroundBottomDocument SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorTextBottomDocument SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteSuccess SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteError SWIFT_WARN_UNUSED_RESULT;
- (id _Null_unspecified)getColorSilhouetteNeutral SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9AcessoBio13UnicoDefaults")
@interface UnicoDefaults : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double defaultFaceInferenceTimeout;)
+ (double)defaultFaceInferenceTimeout SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum UnicoEnumsIErrors : NSInteger;
@class UnicoEnumsInfo;

SWIFT_CLASS("_TtC9AcessoBio16UnicoEnumsErrors")
@interface UnicoEnumsErrors : NSObject
+ (UnicoEnumsInfo * _Nonnull)getInfoWithUnicoEnumError:(enum UnicoEnumsIErrors)unicoEnumError SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, UnicoEnumsIErrors, open) {
  UnicoEnumsIErrorsUNICO_UNKNOWN_INTERNAL_ERROR = 73000,
/// Build
  UnicoEnumsIErrorsERROR_MINIMUM_API = 73003,
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
  UnicoEnumsIErrorsFACETEC_NOT_FOUND = 73701,
  UnicoEnumsIErrorsFACETEC_PRODUCTION_MODE_NOT_WORKING = 73702,
  UnicoEnumsIErrorsFACETEC_GET_SESSION_FAILED = 73703,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_USER_CANCELLED = 73704,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_SESSION_UNSUCCESSFUL = 73705,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_CAMERA_PERMISSION_DENIED = 73706,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_CONTEXT_SWITCH = 73707,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_LANDSCAPE_MODE_NOT_ALLOWED = 73708,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_REVERSE_PORTRAIT_NOT_ALLOWED = 73709,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_TIMEOUT = 73710,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_LOW_MEMORY = 73711,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_NON_PRODUCTION_MODE_NETWORKING_REQUIRED = 73712,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_GRACE_PERIOD_EXCEDED = 73713,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_ENCRYPTION_KEY_INVALID = 73714,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_MISSING_GUIDANCE_IMAGES = 73715,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_CAMERA_INITIALIZATION_ISSUE = 73716,
  UnicoEnumsIErrorsFACETEC_SESSION_STATUS_LOCKED_OUT = 73717,
  UnicoEnumsIErrorsFACETEC_SESSION_UNKNOWN_INTERNAL_ERROR = 73718,
  UnicoEnumsIErrorsFACETEC_SESSION_USER_CANCELLED_VIA_CLICKABLE_READY_SCREEN_SUBTEXT = 73719,
};


SWIFT_CLASS("_TtC9AcessoBio14UnicoEnumsInfo")
@interface UnicoEnumsInfo : NSObject
- (nonnull instancetype)initWithTag:(NSString * _Nonnull)tag desc:(NSString * _Nonnull)desc OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSException;

SWIFT_CLASS("_TtC9AcessoBio11UnicoErrors")
@interface UnicoErrors : NSObject
+ (ErrorBio * _Nonnull)getUnicoErrorWithEnumerated:(enum UnicoEnumsIErrors)enumerated info:(NSString * _Nullable)info SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getCompleteExceptionWithException:(NSException * _Nonnull)exception SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP9AcessoBio29UnicoFacetecProcessorDelegate_")
@protocol UnicoFacetecProcessorDelegate
- (void)isSuccessWithResult:(NSDictionary<NSString *, id> * _Nonnull)result;
- (void)isUnsuccessfulWithStatus:(FaceTecSessionStatus)status;
@end

@class UIViewController;

SWIFT_CLASS("_TtC9AcessoBio12UnicoFacetec")
@interface UnicoFacetec : NSObject <UnicoFacetecProcessorDelegate>
- (nonnull instancetype)initWithUnicoSetup:(UnicoSetupData * _Nonnull)unicoSetup sdkToken:(SDKTokenResponseDTO * _Nonnull)sdkToken theme:(id <AcessoBioThemeDelegate> _Null_unspecified)theme OBJC_DESIGNATED_INITIALIZER;
- (void)initializeFaceTecSDKWithCompletion:(void (^ _Nonnull)(ErrorFacetec * _Nullable))completion;
- (void)openCameraFaceTecWithViewController:(UIViewController * _Nonnull)viewController completion:(void (^ _Nonnull)(SelfieResult * _Nullable, ErrorBio * _Nullable))completion;
- (void)isSuccessWithResult:(NSDictionary<NSString *, id> * _Nonnull)result;
- (void)isUnsuccessfulWithStatus:(FaceTecSessionStatus)status;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol FaceTecSessionResult;
@protocol FaceTecFaceScanResultCallback;
@class NSURLSession;
@class NSURLSessionTask;

SWIFT_CLASS("_TtC9AcessoBio21UnicoFacetecProcessor")
@interface UnicoFacetecProcessor : NSObject <UnicoFacetecProcessorDelegate, FaceTecFaceScanProcessorDelegate, NSURLSessionTaskDelegate>
- (nonnull instancetype)initWithSdkToken:(SDKTokenResponseDTO * _Nonnull)sdkToken OBJC_DESIGNATED_INITIALIZER;
- (UIViewController * _Null_unspecified)getFacetecViewControllerWithSessionToken:(NSString * _Nonnull)sessionToken delegate:(id <UnicoFacetecProcessorDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT;
- (void)processSessionWhileFaceTecSDKWaits:(id <FaceTecSessionResult> _Nonnull)sessionResult faceScanResultCallback:(id <FaceTecFaceScanResultCallback> _Nonnull)faceScanResultCallback;
- (void)onFaceTecSDKCompletelyDone;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
- (void)isSuccessWithResult:(NSDictionary<NSString *, id> * _Nonnull)result;
- (void)isUnsuccessfulWithStatus:(FaceTecSessionStatus)status;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_PROTOCOL("_TtP9AcessoBio20UnicoFacetecProtocol_")
@protocol UnicoFacetecProtocol
- (id <UnicoFacetecProtocol> _Nonnull)initFacetec SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AcessoBio16UnicoHttpHeaders")
@interface UnicoHttpHeaders : NSObject
- (nonnull instancetype)initWithHeaders:(NSDictionary * _Nonnull)headers OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum HttpMethodType : NSInteger;

SWIFT_CLASS("_TtC9AcessoBio16UnicoHttpMethods")
@interface UnicoHttpMethods : NSObject
- (nonnull instancetype)initWithHttpMethod:(enum HttpMethodType)httpMethod params:(id _Nonnull)params OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, HttpMethodType, open) {
  HttpMethodTypeGET = 0,
  HttpMethodTypePOST = 1,
  HttpMethodTypePUT = 2,
  HttpMethodTypePATCH = 3,
  HttpMethodTypeDELETE = 4,
};

enum Routers : NSInteger;

SWIFT_PROTOCOL("_TtP9AcessoBio24UnicoHttpRequestProtocol_")
@protocol UnicoHttpRequestProtocol
- (void)getWithRouter:(enum Routers)router completion:(void (^ _Nonnull)(id _Nonnull, ErrorHttp * _Nullable))completion;
- (void)getWithRouter:(enum Routers)router headers:(UnicoHttpHeaders * _Nullable)headers completion:(void (^ _Nonnull)(id _Nonnull, ErrorHttp * _Nullable))completion;
- (void)postWithRouter:(enum Routers)router headers:(UnicoHttpHeaders * _Nullable)headers jsonBody:(NSDictionary<NSString *, id> * _Nonnull)jsonBody completion:(void (^ _Nonnull)(id _Nonnull, ErrorHttp * _Nullable))completion;
@end


SWIFT_CLASS("_TtC9AcessoBio16UnicoHttpRequest")
@interface UnicoHttpRequest : NSObject <UnicoHttpRequestProtocol>
- (nonnull instancetype)initWithUnicoSetup:(UnicoSetupData * _Nonnull)unicoSetup OBJC_DESIGNATED_INITIALIZER;
- (void)getWithRouter:(enum Routers)router completion:(void (^ _Nonnull)(id _Nonnull, ErrorHttp * _Nullable))completion;
- (void)getWithRouter:(enum Routers)router headers:(UnicoHttpHeaders * _Nullable)headers completion:(void (^ _Nonnull)(id _Nonnull, ErrorHttp * _Nullable))completion;
- (void)postWithRouter:(enum Routers)router headers:(UnicoHttpHeaders * _Nullable)headers jsonBody:(NSDictionary<NSString *, id> * _Nonnull)jsonBody completion:(void (^ _Nonnull)(id _Nonnull, ErrorHttp * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC9AcessoBio16UnicoHttpSession")
@interface UnicoHttpSession : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio18UnicoHttpURLRouter")
@interface UnicoHttpURLRouter : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Routers, open) {
  RoutersToken = 0,
  RoutersSession = 1,
};

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

@protocol UnicoSetupServicesProtocol;

SWIFT_CLASS("_TtC9AcessoBio10UnicoSetup")
@interface UnicoSetup : NSObject
- (nonnull instancetype)initWithUnicoSetupData:(UnicoSetupData * _Nonnull)unicoSetupData unicoSetupServices:(id <UnicoSetupServicesProtocol> _Nonnull)unicoSetupServices OBJC_DESIGNATED_INITIALIZER;
- (void)setupSDKWithCompletion:(void (^ _Nonnull)(ErrorBio * _Nullable))completion;
- (SDKTokenResponseDTO * _Nullable)getSdkTokenObject SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AcessoBio14UnicoSetupData")
@interface UnicoSetupData : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP9AcessoBio26UnicoSetupServicesProtocol_")
@protocol UnicoSetupServicesProtocol
- (void)getTokenUnicoWithCompletion:(void (^ _Nonnull)(SDKTokenResponseDTO * _Nullable, ErrorBio * _Nullable))completion;
@end


SWIFT_CLASS("_TtC9AcessoBio18UnicoSetupServices")
@interface UnicoSetupServices : NSObject <UnicoSetupServicesProtocol>
- (nonnull instancetype)initWithUnicoSetup:(UnicoSetupData * _Nonnull)unicoSetup request:(id <UnicoHttpRequestProtocol> _Nonnull)request OBJC_DESIGNATED_INITIALIZER;
- (void)getTokenUnicoWithCompletion:(void (^ _Nonnull)(SDKTokenResponseDTO * _Nullable, ErrorBio * _Nullable))completion;
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


SWIFT_CLASS("_TtC9AcessoBio13iOSClientInfo")
@interface iOSClientInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
