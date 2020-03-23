#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key \"special-key\" to test the authorization filters
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol SWGOrder
@end

@interface SWGOrder : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSNumber* petId;

@property(nonatomic) NSNumber* quantity;

@property(nonatomic) NSDate* shipDate;
/* Order Status [optional]
 */
@property(nonatomic) NSString* status;

@property(nonatomic) NSNumber* complete;

@end
