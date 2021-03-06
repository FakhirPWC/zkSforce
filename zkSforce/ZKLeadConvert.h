// Copyright (c) 2013 Simon Fell
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
// 
// Note: This file was generated by WSDL2ZKSforce. 
//		  see https://github.com/superfell/WSDL2ZKSforce
//       DO NOT HAND EDIT.
//

#import "ZKXMLSerializable.h"

/*
<complexType name="LeadConvert" xmlns="http://www.w3.org/2001/XMLSchema" xmlns:ens="urn:sobject.partner.soap.sforce.com" xmlns:tns="urn:partner.soap.sforce.com" xmlns:fns="urn:fault.partner.soap.sforce.com" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/wsdl/soap/" xmlns="http://schemas.xmlsoap.org/wsdl/">
  <sequence>
    <element nillable="true" type="tns:ID" name="accountId"/>
    <element nillable="true" type="tns:ID" name="contactId"/>
    <element type="xsd:string" name="convertedStatus"/>
    <element type="xsd:boolean" name="doNotCreateOpportunity"/>
    <element type="tns:ID" name="leadId"/>
    <element nillable="true" type="tns:ID" name="opportunityId"/>
    <element nillable="true" type="xsd:string" name="opportunityName"/>
    <element type="xsd:boolean" name="overwriteLeadSource"/>
    <element nillable="true" type="tns:ID" name="ownerId"/>
    <element type="xsd:boolean" name="sendNotificationEmail"/>
  </sequence>
</complexType>
*/
@interface ZKLeadConvert : NSObject<ZKXMLSerializable> {
	NSString  *accountId;
	NSString  *contactId;
	NSString  *convertedStatus;
	BOOL       doNotCreateOpportunity;
	NSString  *leadId;
	NSString  *opportunityId;
	NSString  *opportunityName;
	BOOL       overwriteLeadSource;
	NSString  *ownerId;
	BOOL       sendNotificationEmail;
}
@property (retain) NSString  *accountId; 
@property (retain) NSString  *contactId; 
@property (retain) NSString  *convertedStatus; 
@property (assign) BOOL       doNotCreateOpportunity; 
@property (retain) NSString  *leadId; 
@property (retain) NSString  *opportunityId; 
@property (retain) NSString  *opportunityName; 
@property (assign) BOOL       overwriteLeadSource; 
@property (retain) NSString  *ownerId; 
@property (assign) BOOL       sendNotificationEmail; 
@end
