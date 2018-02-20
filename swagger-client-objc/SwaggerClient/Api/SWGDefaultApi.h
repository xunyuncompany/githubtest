#import <Foundation/Foundation.h>
#import "SWGLoginRequest.h"
#import "SWGServerResponse.h"
#import "SWGApi.h"

/**
* Swagger UI
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGDefaultApi: NSObject <SWGApi>

extern NSString* kSWGDefaultApiErrorDomain;
extern NSInteger kSWGDefaultApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// 
/// 用户登录
///
/// @param login 用户登录
/// 
///  code:200 message:"server response",
///  code:0 message:"操作成功"
///
/// @return SWGServerResponse*
-(NSURLSessionTask*) loginWithLogin: (SWGLoginRequest*) login
    completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;



@end
