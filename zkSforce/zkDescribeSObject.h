// Copyright (c) 2006 Simon Fell
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE.
//

#import "ZKDescribeGlobalSObject.h"

/*
<complexType name="DescribeSObjectResult" xmlns="http://www.w3.org/2001/XMLSchema" xmlns:ens="urn:sobject.partner.soap.sforce.com" xmlns:tns="urn:partner.soap.sforce.com" xmlns:fns="urn:fault.partner.soap.sforce.com" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/wsdl/soap/" xmlns="http://schemas.xmlsoap.org/wsdl/">
  <sequence>
    <element type="xsd:boolean" name="activateable"/>
    <element maxOccurs="unbounded" minOccurs="0" type="tns:ChildRelationship" name="childRelationships"/>
    <element type="xsd:boolean" name="compactLayoutable"/>
    <element type="xsd:boolean" name="createable"/>
    <element type="xsd:boolean" name="custom"/>
    <element type="xsd:boolean" name="customSetting"/>
    <element type="xsd:boolean" name="deletable"/>
    <element type="xsd:boolean" name="deprecatedAndHidden"/>
    <element type="xsd:boolean" name="feedEnabled"/>
    <element maxOccurs="unbounded" minOccurs="0" nillable="true" type="tns:Field" name="fields"/>
    <element nillable="true" type="xsd:string" name="keyPrefix"/>
    <element type="xsd:string" name="label"/>
    <element type="xsd:string" name="labelPlural"/>
    <element type="xsd:boolean" name="layoutable"/>
    <element type="xsd:boolean" name="mergeable"/>
    <element type="xsd:string" name="name"/>
    <element type="xsd:boolean" name="queryable"/>
    <element maxOccurs="unbounded" minOccurs="0" type="tns:RecordTypeInfo" name="recordTypeInfos"/>
    <element type="xsd:boolean" name="replicateable"/>
    <element type="xsd:boolean" name="retrieveable"/>
    <element minOccurs="0" type="xsd:boolean" name="searchLayoutable"/>
    <element type="xsd:boolean" name="searchable"/>
    <element minOccurs="0" type="xsd:boolean" name="triggerable"/>
    <element type="xsd:boolean" name="undeletable"/>
    <element type="xsd:boolean" name="updateable"/>
    <element nillable="true" type="xsd:string" name="urlDetail"/>
    <element nillable="true" type="xsd:string" name="urlEdit"/>
    <element nillable="true" type="xsd:string" name="urlNew"/>
  </sequence>
</complexType>
*/
@interface ZKDescribeSObject : ZKDescribeGlobalSObject {
	NSDictionary *fieldsByName;
}
@property (readonly) NSArray   *childRelationships;  // of ZKChildRelationship
@property (readonly) BOOL       compactLayoutable; 
@property (readonly) NSArray   *fields;  // of ZKDescribeField
@property (readonly) NSArray   *recordTypeInfos;  // of ZKRecordTypeInfo
@property (readonly) BOOL       searchLayoutable; 
@property (readonly) NSString  *urlDetail; 
@property (readonly) NSString  *urlEdit; 
@property (readonly) NSString  *urlNew; 
@end
