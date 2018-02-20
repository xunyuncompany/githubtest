# SWGDefaultApi

All URIs are relative to *http://39.108.80.70/Api/SiSiTest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**login**](SWGDefaultApi.md#login) | **POST** /login | 


# **login**
```objc
-(NSURLSessionTask*) loginWithLogin: (SWGLoginRequest*) login
        completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;
```



用户登录

### Example 
```objc

SWGLoginRequest* login = [[SWGLoginRequest alloc] init]; // 用户登录

SWGDefaultApi*apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance loginWithLogin:login
          completionHandler: ^(SWGServerResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDefaultApi->login: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | [**SWGLoginRequest***](SWGLoginRequest.md)| 用户登录 | 

### Return type

[**SWGServerResponse***](SWGServerResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

