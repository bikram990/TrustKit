//
//  TrustKitTestCertificates.h
//  TrustKit
//
//  Created by Eric on 30/03/15.
//  Copyright (c) 2015 Data Theorem. All rights reserved.
//

#ifndef TrustKit_TrustKitTestCertificates____FILEEXTENSION___
#define TrustKit_TrustKitTestCertificates____FILEEXTENSION___

unsigned char rsa_asn1_header[] = {
        0x30, 0x82, 0x02, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
        0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x02, 0x0f, 0x00
};

unsigned char ca_cert_der[] = {
        0x30, 0x82, 0x06, 0xfb, 0x30, 0x82, 0x04, 0xe3, 0xa0, 0x03, 0x02, 0x01,
        0x02, 0x02, 0x09, 0x00, 0xce, 0x62, 0x72, 0x89, 0x07, 0xce, 0x5e, 0xaf,
        0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01,
        0x0b, 0x05, 0x00, 0x30, 0x81, 0xaa, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03,
        0x55, 0x04, 0x06, 0x13, 0x02, 0x46, 0x52, 0x31, 0x0e, 0x30, 0x0c, 0x06,
        0x03, 0x55, 0x04, 0x08, 0x13, 0x05, 0x50, 0x61, 0x72, 0x69, 0x73, 0x31,
        0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x05, 0x50, 0x61,
        0x72, 0x69, 0x73, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04, 0x0a,
        0x13, 0x0c, 0x44, 0x61, 0x74, 0x61, 0x20, 0x54, 0x68, 0x65, 0x6f, 0x72,
        0x65, 0x6d, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13,
        0x15, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20, 0x47, 0x6f,
        0x6f, 0x64, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x31, 0x1e,
        0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x15, 0x54, 0x72, 0x75,
        0x73, 0x74, 0x4b, 0x69, 0x74, 0x20, 0x47, 0x6f, 0x6f, 0x64, 0x20, 0x52,
        0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x31, 0x24, 0x30, 0x22, 0x06, 0x09,
        0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x15, 0x64,
        0x61, 0x74, 0x61, 0x31, 0x40, 0x64, 0x61, 0x74, 0x61, 0x74, 0x68, 0x65,
        0x6f, 0x72, 0x65, 0x6d, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x1e, 0x17, 0x0d,
        0x31, 0x35, 0x30, 0x33, 0x33, 0x30, 0x31, 0x31, 0x35, 0x38, 0x35, 0x32,
        0x5a, 0x17, 0x0d, 0x32, 0x35, 0x30, 0x33, 0x32, 0x37, 0x31, 0x31, 0x35,
        0x38, 0x35, 0x32, 0x5a, 0x30, 0x81, 0xaa, 0x31, 0x0b, 0x30, 0x09, 0x06,
        0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x46, 0x52, 0x31, 0x0e, 0x30, 0x0c,
        0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x05, 0x50, 0x61, 0x72, 0x69, 0x73,
        0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x05, 0x50,
        0x61, 0x72, 0x69, 0x73, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04,
        0x0a, 0x13, 0x0c, 0x44, 0x61, 0x74, 0x61, 0x20, 0x54, 0x68, 0x65, 0x6f,
        0x72, 0x65, 0x6d, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0b,
        0x13, 0x15, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20, 0x47,
        0x6f, 0x6f, 0x64, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x31,
        0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x15, 0x54, 0x72,
        0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20, 0x47, 0x6f, 0x6f, 0x64, 0x20,
        0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x31, 0x24, 0x30, 0x22, 0x06,
        0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x15,
        0x64, 0x61, 0x74, 0x61, 0x31, 0x40, 0x64, 0x61, 0x74, 0x61, 0x74, 0x68,
        0x65, 0x6f, 0x72, 0x65, 0x6d, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x82, 0x02,
        0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01,
        0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x02, 0x0f, 0x00, 0x30, 0x82, 0x02,
        0x0a, 0x02, 0x82, 0x02, 0x01, 0x00, 0xb5, 0x09, 0x92, 0x61, 0x29, 0xef,
        0x5a, 0xce, 0x11, 0xdb, 0x46, 0xb9, 0xca, 0xc0, 0x07, 0x21, 0xf7, 0x62,
        0x26, 0x2a, 0x8a, 0xc4, 0x3f, 0x4c, 0x53, 0x91, 0x24, 0xff, 0x43, 0x71,
        0x2c, 0x3c, 0x69, 0x81, 0x6e, 0xed, 0x74, 0x7a, 0xce, 0xb8, 0xe2, 0xe3,
        0x15, 0xf4, 0x09, 0x28, 0x52, 0xe8, 0x9d, 0x5e, 0xae, 0x41, 0xed, 0x4e,
        0x63, 0x22, 0x2b, 0x48, 0x27, 0x52, 0x02, 0x6a, 0x65, 0xe9, 0xc5, 0xb4,
        0xb2, 0x1d, 0x93, 0x11, 0x8c, 0x1b, 0x9e, 0x32, 0x2a, 0x71, 0xf6, 0x26,
        0x6e, 0x9b, 0x2e, 0xcc, 0x3e, 0xb0, 0xe8, 0x7f, 0x21, 0x96, 0xe6, 0xb7,
        0x12, 0x4e, 0x00, 0x01, 0xec, 0xe4, 0xf7, 0xf9, 0x73, 0x0f, 0x18, 0xc3,
        0xf1, 0x4d, 0xf6, 0x7a, 0x05, 0xb9, 0x77, 0x42, 0x1e, 0xc1, 0x96, 0x42,
        0x07, 0xc3, 0xd2, 0x21, 0xe9, 0x5b, 0x19, 0x31, 0x42, 0x01, 0x96, 0x33,
        0x74, 0x28, 0x4b, 0xe3, 0xc4, 0x4a, 0x3e, 0xc0, 0x9c, 0x21, 0x0f, 0x57,
        0xc3, 0x3e, 0x91, 0x3b, 0xae, 0xfe, 0x7e, 0x8e, 0x15, 0x46, 0x08, 0xbd,
        0xba, 0x61, 0xec, 0x0e, 0x0c, 0x8c, 0xb0, 0xbc, 0x77, 0x3c, 0xbe, 0xb7,
        0x4f, 0xf6, 0x68, 0x1f, 0x50, 0xb8, 0x4c, 0x27, 0xc9, 0xde, 0xd8, 0xa8,
        0x9a, 0xd6, 0xab, 0x74, 0x4f, 0xdf, 0x9d, 0xc0, 0x85, 0xe5, 0x65, 0xbd,
        0xcf, 0xa6, 0x02, 0x39, 0xfd, 0x27, 0x01, 0x08, 0x3c, 0x4c, 0x78, 0xd1,
        0x16, 0xbf, 0x24, 0x88, 0xbe, 0x6f, 0x6c, 0x86, 0x1f, 0x9e, 0x6b, 0xe0,
        0xe9, 0x37, 0x64, 0x92, 0x6b, 0xec, 0x07, 0x9d, 0xa4, 0x4e, 0x9d, 0x42,
        0xc4, 0xda, 0x8b, 0x4d, 0x80, 0x79, 0xda, 0xa4, 0x05, 0x3c, 0x97, 0x10,
        0x09, 0xf4, 0x66, 0xf1, 0x77, 0xd2, 0xdb, 0x96, 0x68, 0xbf, 0xba, 0x3c,
        0xa6, 0x0f, 0xdb, 0x9b, 0x22, 0x93, 0x7a, 0x4f, 0x25, 0x29, 0xa9, 0xe8,
        0x5a, 0x8d, 0x59, 0xda, 0x34, 0x41, 0xd5, 0x31, 0x99, 0x15, 0x4f, 0xaf,
        0xc7, 0x7f, 0xa1, 0xd8, 0x1d, 0x95, 0xc9, 0xc4, 0x17, 0x36, 0xe6, 0x80,
        0xc8, 0x0a, 0x03, 0xda, 0x4e, 0x97, 0x68, 0x21, 0x06, 0xe1, 0xd5, 0xcc,
        0x06, 0xc9, 0xf5, 0x3b, 0x3e, 0x50, 0xb9, 0xde, 0xbd, 0x8d, 0x1c, 0xd7,
        0x5a, 0xb9, 0xa1, 0xb9, 0xf0, 0x50, 0x11, 0xe6, 0x19, 0x68, 0xb8, 0xde,
        0x3d, 0x11, 0x1b, 0xbb, 0xed, 0x0d, 0x8c, 0x5b, 0xe3, 0x4d, 0xcd, 0x86,
        0xaa, 0x51, 0xa8, 0x43, 0x55, 0xbe, 0x97, 0x2d, 0x69, 0xa2, 0xcf, 0x0e,
        0x8d, 0x6d, 0xe2, 0xbb, 0x0c, 0x9b, 0x2c, 0x06, 0xdd, 0x32, 0x25, 0x98,
        0xab, 0x15, 0x6c, 0x03, 0xe2, 0xe2, 0x10, 0x16, 0xa2, 0xf0, 0x3c, 0xa8,
        0xa7, 0x68, 0x2a, 0xd1, 0x59, 0x0a, 0x3f, 0x87, 0xf7, 0x7f, 0x77, 0x81,
        0xdf, 0x4b, 0xc0, 0x81, 0xd3, 0x4b, 0x7b, 0x74, 0x77, 0x8b, 0x8a, 0xa0,
        0xd5, 0x0f, 0x53, 0x92, 0x1d, 0x1e, 0xec, 0xac, 0x9b, 0xfc, 0x15, 0x67,
        0xdb, 0xd1, 0x59, 0xdb, 0xe5, 0x37, 0x93, 0x3a, 0x4b, 0x4c, 0x2f, 0x28,
        0x1e, 0x9b, 0xd9, 0xdb, 0x6f, 0xef, 0xc0, 0x4f, 0x7f, 0xbd, 0x2b, 0x98,
        0xe5, 0x63, 0x8b, 0xda, 0xea, 0xe1, 0xc7, 0xc2, 0xca, 0x10, 0x1b, 0x61,
        0x28, 0xec, 0xdb, 0x4b, 0x9b, 0xe5, 0x22, 0x51, 0x72, 0xf0, 0x47, 0x99,
        0x4b, 0x05, 0x3b, 0x95, 0xb2, 0x8e, 0x11, 0x9a, 0x47, 0x4e, 0x14, 0x52,
        0xdf, 0xe4, 0x1a, 0xc0, 0x6b, 0x8d, 0xe2, 0x2e, 0x00, 0x83, 0xb9, 0xb2,
        0x18, 0x74, 0xd0, 0x43, 0xb7, 0x9b, 0xc6, 0xa6, 0x9c, 0xc1, 0x11, 0x42,
        0x4c, 0x2e, 0xfb, 0xc6, 0xcd, 0x5b, 0xcb, 0x81, 0x62, 0x21, 0x18, 0xec,
        0xaf, 0x3e, 0x53, 0x2e, 0x50, 0xec, 0x70, 0xb5, 0x97, 0x4b, 0x69, 0xe0,
        0xa9, 0x4d, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x82, 0x01, 0x20, 0x30,
        0x82, 0x01, 0x1c, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16,
        0x04, 0x14, 0x28, 0x3b, 0xd4, 0xcf, 0x1e, 0x18, 0xd3, 0xd8, 0xdf, 0x99,
        0x2a, 0x78, 0x37, 0x4a, 0x20, 0x25, 0x62, 0x3a, 0x47, 0x2c, 0x30, 0x81,
        0xdf, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x81, 0xd7, 0x30, 0x81, 0xd4,
        0x80, 0x14, 0x28, 0x3b, 0xd4, 0xcf, 0x1e, 0x18, 0xd3, 0xd8, 0xdf, 0x99,
        0x2a, 0x78, 0x37, 0x4a, 0x20, 0x25, 0x62, 0x3a, 0x47, 0x2c, 0xa1, 0x81,
        0xb0, 0xa4, 0x81, 0xad, 0x30, 0x81, 0xaa, 0x31, 0x0b, 0x30, 0x09, 0x06,
        0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x46, 0x52, 0x31, 0x0e, 0x30, 0x0c,
        0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x05, 0x50, 0x61, 0x72, 0x69, 0x73,
        0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x05, 0x50,
        0x61, 0x72, 0x69, 0x73, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04,
        0x0a, 0x13, 0x0c, 0x44, 0x61, 0x74, 0x61, 0x20, 0x54, 0x68, 0x65, 0x6f,
        0x72, 0x65, 0x6d, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0b,
        0x13, 0x15, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20, 0x47,
        0x6f, 0x6f, 0x64, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x31,
        0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x15, 0x54, 0x72,
        0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20, 0x47, 0x6f, 0x6f, 0x64, 0x20,
        0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x31, 0x24, 0x30, 0x22, 0x06,
        0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x15,
        0x64, 0x61, 0x74, 0x61, 0x31, 0x40, 0x64, 0x61, 0x74, 0x61, 0x74, 0x68,
        0x65, 0x6f, 0x72, 0x65, 0x6d, 0x2e, 0x63, 0x6f, 0x6d, 0x82, 0x09, 0x00,
        0xce, 0x62, 0x72, 0x89, 0x07, 0xce, 0x5e, 0xaf, 0x30, 0x0c, 0x06, 0x03,
        0x55, 0x1d, 0x13, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x0b,
        0x06, 0x03, 0x55, 0x1d, 0x0f, 0x04, 0x04, 0x03, 0x02, 0x01, 0x06, 0x30,
        0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b,
        0x05, 0x00, 0x03, 0x82, 0x02, 0x01, 0x00, 0x90, 0x7c, 0xc9, 0x8c, 0x57,
        0xfa, 0xdb, 0xd9, 0x51, 0xae, 0xa4, 0x5e, 0x91, 0x08, 0xdd, 0x45, 0x0d,
        0x70, 0x1a, 0xc8, 0x03, 0x28, 0xb1, 0x1e, 0xc2, 0xb6, 0x88, 0xa3, 0x17,
        0x3b, 0x59, 0x11, 0xcb, 0x0c, 0xd7, 0x38, 0x24, 0xef, 0xdc, 0x42, 0x56,
        0x47, 0xc4, 0x3e, 0xbf, 0x1d, 0xd4, 0x59, 0x50, 0x49, 0xc7, 0x89, 0x50,
        0xa2, 0x79, 0xe5, 0x9f, 0xcd, 0xdd, 0x5e, 0x23, 0x99, 0x76, 0xde, 0x39,
        0xfe, 0x00, 0x31, 0x0c, 0x36, 0xa3, 0x02, 0x66, 0x36, 0x88, 0x7f, 0x25,
        0x51, 0xb8, 0x43, 0x08, 0x80, 0x5c, 0xe5, 0x96, 0x93, 0x5f, 0xf2, 0x6e,
        0x7a, 0x7a, 0xb6, 0x62, 0xee, 0x64, 0xa9, 0xb4, 0xc3, 0xd5, 0x08, 0x36,
        0x85, 0x72, 0x92, 0x1c, 0xbf, 0x0c, 0x5e, 0xab, 0xd2, 0x6e, 0x0d, 0xb8,
        0x03, 0x22, 0x1c, 0xeb, 0x30, 0x14, 0xe9, 0x4a, 0x0d, 0xc0, 0x8e, 0xea,
        0xed, 0xeb, 0xb7, 0xd1, 0x6e, 0x48, 0xf4, 0xbc, 0x03, 0xcf, 0x1d, 0x29,
        0x34, 0x89, 0xc0, 0xac, 0x77, 0xe9, 0x1a, 0x8d, 0x44, 0x44, 0x2e, 0x28,
        0x83, 0x86, 0x99, 0x8a, 0x3d, 0xba, 0xd6, 0x08, 0x9e, 0x20, 0xfb, 0x54,
        0xe4, 0xca, 0x90, 0x50, 0x62, 0x4d, 0xeb, 0x28, 0xa2, 0xf4, 0x55, 0x21,
        0x8f, 0xba, 0x55, 0x03, 0x53, 0x87, 0x3e, 0xfc, 0xe4, 0xed, 0xb5, 0x31,
        0xf8, 0x83, 0xa4, 0x22, 0x43, 0xdc, 0x1a, 0x68, 0x1f, 0xca, 0xee, 0x14,
        0x60, 0xab, 0x8a, 0xda, 0xad, 0x18, 0xa9, 0xcf, 0x4b, 0xea, 0xfc, 0xe8,
        0xb0, 0x43, 0x68, 0xd8, 0x67, 0xc2, 0xb3, 0x01, 0xbe, 0xd0, 0xef, 0x66,
        0x90, 0xdf, 0x31, 0xce, 0x32, 0x4f, 0x54, 0x67, 0xef, 0x50, 0x2c, 0x55,
        0xa0, 0x21, 0x1e, 0x60, 0x49, 0xf4, 0x1f, 0x42, 0x24, 0x56, 0x93, 0x1a,
        0x53, 0x10, 0x8d, 0xd3, 0x54, 0x83, 0x79, 0x90, 0x74, 0x9e, 0xc0, 0x9f,
        0x3f, 0x16, 0x67, 0x0a, 0x7c, 0x6c, 0x67, 0x6b, 0x64, 0x73, 0x48, 0x1f,
        0xbc, 0xd0, 0x8a, 0xe0, 0x2a, 0x21, 0xab, 0x11, 0x62, 0x91, 0x9a, 0x97,
        0xf9, 0x10, 0x08, 0x36, 0x48, 0x4e, 0xfc, 0x22, 0xde, 0x74, 0xe4, 0x16,
        0xcc, 0x96, 0x0a, 0xb8, 0x86, 0xf4, 0x47, 0x40, 0x1f, 0x46, 0x3d, 0x6d,
        0xd5, 0x87, 0xc0, 0x56, 0xfb, 0xd0, 0xee, 0x68, 0x34, 0x00, 0xa9, 0xd6,
        0xd0, 0x52, 0x2b, 0x62, 0x50, 0x5f, 0xe5, 0x4c, 0x83, 0xd7, 0xb1, 0x99,
        0x6a, 0x43, 0x7a, 0x4a, 0xc8, 0x32, 0x93, 0x4b, 0x63, 0x91, 0xe5, 0x37,
        0x53, 0x76, 0x9f, 0xd0, 0xb3, 0xd9, 0x50, 0x0d, 0x23, 0xe7, 0x2e, 0x75,
        0x97, 0xa0, 0x36, 0xcf, 0xe3, 0x6b, 0x3c, 0x2e, 0x3b, 0xa0, 0x50, 0x5a,
        0x62, 0x19, 0x49, 0xff, 0xd1, 0x91, 0xfb, 0x3c, 0x1c, 0xb2, 0x53, 0x6b,
        0xae, 0xcd, 0x30, 0xae, 0xea, 0x17, 0xbd, 0xe2, 0x3a, 0x0a, 0x0c, 0x23,
        0x8f, 0xdb, 0x2f, 0x47, 0xaa, 0x3b, 0xcd, 0x56, 0x83, 0x94, 0xea, 0xaf,
        0xa0, 0x0d, 0x6f, 0x15, 0xb5, 0x75, 0xc0, 0x0a, 0x9d, 0x84, 0xcf, 0x6f,
        0xd7, 0x08, 0xa9, 0x41, 0x6f, 0xe0, 0x95, 0x5b, 0x9e, 0x56, 0x8f, 0xeb,
        0x75, 0x89, 0x0a, 0x97, 0xf9, 0x44, 0xf8, 0x73, 0x1d, 0x2f, 0x09, 0x68,
        0xb1, 0x8c, 0x09, 0x73, 0x35, 0x11, 0x3f, 0xc2, 0x77, 0x3e, 0xb9, 0x1f,
        0x83, 0xed, 0xef, 0x06, 0x02, 0x6b, 0xcf, 0xc4, 0x00, 0x55, 0x20, 0xc2,
        0x2c, 0xea, 0x1d, 0x5f, 0xf4, 0x8f, 0x7a, 0x23, 0xcd, 0x99, 0x35, 0xbd,
        0x72, 0x0d, 0x15, 0xba, 0xbf, 0xe2, 0xe9, 0x14, 0xb5, 0xfb, 0x93, 0x6b,
        0x58, 0xd6, 0x42, 0x08, 0xae, 0xa5, 0x5e, 0x1e, 0xc6, 0xb2, 0xbc, 0x3e,
        0x51, 0xa2, 0xbd, 0xd1, 0xda, 0x30, 0x97, 0xc0, 0x0e, 0xa9, 0x1e, 0x70,
        0x5e, 0xc9, 0x3a
};
unsigned int ca_cert_der_len = 1791;

unsigned char ca_chain_cert_der[] = {
        0x30, 0x82, 0x06, 0xf4, 0x30, 0x82, 0x04, 0xdc, 0xa0, 0x03, 0x02, 0x01,
        0x02, 0x02, 0x02, 0x10, 0x00, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,
        0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x30, 0x81, 0xaa, 0x31,
        0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x46, 0x52,
        0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x05, 0x50,
        0x61, 0x72, 0x69, 0x73, 0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04,
        0x07, 0x13, 0x05, 0x50, 0x61, 0x72, 0x69, 0x73, 0x31, 0x15, 0x30, 0x13,
        0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x0c, 0x44, 0x61, 0x74, 0x61, 0x20,
        0x54, 0x68, 0x65, 0x6f, 0x72, 0x65, 0x6d, 0x31, 0x1e, 0x30, 0x1c, 0x06,
        0x03, 0x55, 0x04, 0x0b, 0x13, 0x15, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b,
        0x69, 0x74, 0x20, 0x47, 0x6f, 0x6f, 0x64, 0x20, 0x52, 0x6f, 0x6f, 0x74,
        0x20, 0x43, 0x41, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x03,
        0x13, 0x15, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20, 0x47,
        0x6f, 0x6f, 0x64, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x31,
        0x24, 0x30, 0x22, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01,
        0x09, 0x01, 0x16, 0x15, 0x64, 0x61, 0x74, 0x61, 0x31, 0x40, 0x64, 0x61,
        0x74, 0x61, 0x74, 0x68, 0x65, 0x6f, 0x72, 0x65, 0x6d, 0x2e, 0x63, 0x6f,
        0x6d, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x35, 0x30, 0x33, 0x33, 0x30, 0x31,
        0x32, 0x30, 0x33, 0x35, 0x33, 0x5a, 0x17, 0x0d, 0x31, 0x36, 0x30, 0x33,
        0x32, 0x39, 0x31, 0x32, 0x30, 0x33, 0x35, 0x33, 0x5a, 0x30, 0x81, 0xaa,
        0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x46,
        0x52, 0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x05,
        0x50, 0x61, 0x72, 0x69, 0x73, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55,
        0x04, 0x0a, 0x13, 0x0c, 0x44, 0x61, 0x74, 0x61, 0x20, 0x54, 0x68, 0x65,
        0x6f, 0x72, 0x65, 0x6d, 0x31, 0x26, 0x30, 0x24, 0x06, 0x03, 0x55, 0x04,
        0x0b, 0x13, 0x1d, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20,
        0x47, 0x6f, 0x6f, 0x64, 0x20, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x6d, 0x65,
        0x64, 0x69, 0x61, 0x74, 0x65, 0x20, 0x43, 0x41, 0x31, 0x26, 0x30, 0x24,
        0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x1d, 0x54, 0x72, 0x75, 0x73, 0x74,
        0x4b, 0x69, 0x74, 0x20, 0x47, 0x6f, 0x6f, 0x64, 0x20, 0x49, 0x6e, 0x74,
        0x65, 0x72, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x74, 0x65, 0x20, 0x43, 0x41,
        0x31, 0x24, 0x30, 0x22, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d,
        0x01, 0x09, 0x01, 0x16, 0x15, 0x64, 0x61, 0x74, 0x61, 0x32, 0x40, 0x64,
        0x61, 0x74, 0x61, 0x74, 0x68, 0x65, 0x6f, 0x72, 0x65, 0x6d, 0x2e, 0x63,
        0x6f, 0x6d, 0x30, 0x82, 0x02, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86,
        0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x02,
        0x0f, 0x00, 0x30, 0x82, 0x02, 0x0a, 0x02, 0x82, 0x02, 0x01, 0x00, 0xaf,
        0xf8, 0xf0, 0x79, 0x3a, 0xa5, 0x27, 0x22, 0x9b, 0x2c, 0xc2, 0x88, 0x47,
        0x5e, 0x24, 0x72, 0x47, 0x69, 0xd8, 0xe7, 0xe0, 0x3b, 0xbc, 0xf8, 0x67,
        0x82, 0x16, 0x82, 0x57, 0xab, 0x39, 0x4a, 0x10, 0x34, 0x52, 0x19, 0xbd,
        0x3c, 0x87, 0xb2, 0xff, 0x0d, 0xcd, 0x70, 0x31, 0x85, 0xe9, 0x38, 0x27,
        0xf1, 0xf8, 0xff, 0x75, 0xaf, 0x83, 0x18, 0x7e, 0xb9, 0xc1, 0xf2, 0x2b,
        0xc0, 0x54, 0xc6, 0xb7, 0xef, 0x9d, 0x40, 0xc3, 0xd5, 0x47, 0x28, 0x12,
        0x4b, 0x27, 0xb0, 0xad, 0x73, 0x62, 0x07, 0x69, 0xef, 0x82, 0xcd, 0xc7,
        0x89, 0x81, 0x77, 0xd4, 0xd0, 0xbb, 0x76, 0x46, 0xea, 0x43, 0xaf, 0xa9,
        0xd8, 0x16, 0xeb, 0x8e, 0x61, 0xf2, 0x3e, 0x95, 0x22, 0x67, 0x13, 0x6e,
        0x74, 0x41, 0xa9, 0x24, 0x54, 0xdc, 0xa7, 0xf5, 0xba, 0x49, 0x07, 0x2d,
        0x92, 0xa4, 0x66, 0xff, 0x62, 0x65, 0x8d, 0x6a, 0x39, 0xd8, 0xe9, 0xec,
        0x59, 0x57, 0x53, 0x1f, 0xd9, 0x35, 0x7e, 0x3d, 0x54, 0x48, 0x8a, 0x30,
        0x77, 0xd5, 0x97, 0x2b, 0xc4, 0x8f, 0x3e, 0xbb, 0x83, 0x77, 0x0d, 0x81,
        0x71, 0x57, 0x3f, 0x61, 0x92, 0xc7, 0x31, 0xd4, 0x67, 0xc1, 0x76, 0xac,
        0x8b, 0x72, 0x55, 0x0b, 0xc5, 0x2c, 0x4b, 0x40, 0xa2, 0x7e, 0xf4, 0x43,
        0x88, 0xbc, 0xf7, 0xd8, 0x6e, 0x3f, 0x6a, 0xd4, 0xb2, 0xe5, 0xb1, 0x53,
        0x3a, 0x63, 0x89, 0xfe, 0xfe, 0xca, 0x1a, 0x30, 0xaf, 0x95, 0x1f, 0xe0,
        0x6b, 0xf9, 0x8f, 0xbb, 0xbf, 0x6d, 0x09, 0x12, 0xf2, 0x7d, 0x52, 0xce,
        0x44, 0xf4, 0x4b, 0xbb, 0x63, 0x86, 0x05, 0x64, 0xcd, 0x38, 0x6d, 0x6d,
        0xee, 0xa7, 0xf0, 0x6b, 0x7d, 0x15, 0xd9, 0x88, 0xc0, 0x4d, 0x55, 0x15,
        0xf4, 0x94, 0xe2, 0xcc, 0x71, 0xa0, 0xcf, 0x9a, 0x8b, 0x2e, 0x2c, 0x99,
        0x82, 0x1f, 0xf6, 0x9f, 0x1a, 0x61, 0x7e, 0x2d, 0x61, 0x0d, 0x90, 0x9b,
        0xfc, 0x7b, 0x7a, 0x58, 0x22, 0x77, 0xa7, 0xb8, 0x8d, 0xc8, 0x41, 0x32,
        0x3f, 0x97, 0x06, 0xc2, 0x81, 0x7b, 0x5c, 0x2a, 0xfa, 0x4c, 0x53, 0x33,
        0x8b, 0x66, 0x7c, 0xe5, 0xa6, 0xca, 0xe8, 0x82, 0x2b, 0x71, 0xc1, 0xc5,
        0x6f, 0x25, 0x33, 0xb9, 0x73, 0xd9, 0x13, 0xa3, 0xb8, 0xe0, 0xc8, 0xf2,
        0x06, 0xb6, 0x57, 0x9c, 0x81, 0xde, 0x99, 0x03, 0xde, 0x00, 0x66, 0x7f,
        0xd0, 0xa9, 0x3f, 0xd6, 0xc0, 0x1e, 0xfe, 0x29, 0x99, 0x7b, 0x8d, 0xeb,
        0xad, 0x46, 0xe7, 0x9e, 0xac, 0xf7, 0xc6, 0xf4, 0xbc, 0x33, 0x1b, 0x27,
        0x46, 0xad, 0xd4, 0x33, 0x58, 0x00, 0xcc, 0x2e, 0x5f, 0x83, 0xcd, 0x21,
        0xb7, 0xe3, 0x98, 0x54, 0x0a, 0x15, 0xb2, 0x95, 0x50, 0xff, 0xf6, 0xe3,
        0x60, 0x1c, 0xe8, 0x36, 0xc7, 0xbf, 0x01, 0x8b, 0x65, 0x1d, 0x87, 0xfd,
        0x79, 0xca, 0x81, 0xd1, 0xbb, 0x07, 0x16, 0x07, 0x96, 0x19, 0x25, 0x53,
        0xfb, 0xb9, 0xc3, 0xd7, 0x05, 0x90, 0x59, 0x24, 0x81, 0x8f, 0xdb, 0x6e,
        0xa5, 0x47, 0x08, 0x67, 0xf1, 0xdb, 0x24, 0xde, 0x0d, 0x2a, 0x51, 0x2c,
        0x10, 0xa8, 0x2d, 0x63, 0x26, 0x5f, 0x55, 0x92, 0xfa, 0xf3, 0x7c, 0x3e,
        0x83, 0xc3, 0x02, 0x1c, 0x0e, 0x96, 0xc7, 0xa5, 0xe2, 0x68, 0xeb, 0x91,
        0x4f, 0x3b, 0xe9, 0xb0, 0x41, 0x2e, 0xcc, 0x31, 0xeb, 0x20, 0x53, 0xb6,
        0x3d, 0xf0, 0x88, 0xe7, 0x65, 0x73, 0x7e, 0xab, 0xf7, 0xb6, 0xb9, 0x26,
        0x71, 0x6d, 0x4c, 0x99, 0x03, 0xae, 0x1e, 0xcf, 0xa4, 0xbd, 0xa8, 0x2f,
        0xe9, 0xbe, 0x29, 0x15, 0x6a, 0x67, 0xf7, 0xde, 0x4c, 0xa8, 0xed, 0x83,
        0xb5, 0x87, 0x12, 0x1b, 0xfc, 0x25, 0xe9, 0xa9, 0x23, 0xfd, 0x2d, 0x5a,
        0x82, 0x9f, 0x3a, 0x27, 0x0c, 0xfd, 0xa7, 0x02, 0x03, 0x01, 0x00, 0x01,
        0xa3, 0x82, 0x01, 0x20, 0x30, 0x82, 0x01, 0x1c, 0x30, 0x1d, 0x06, 0x03,
        0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x70, 0xb6, 0x64, 0x5d, 0xd3,
        0xfa, 0x87, 0xa3, 0xf3, 0xe0, 0x28, 0xdd, 0x67, 0x86, 0x1d, 0x0e, 0x68,
        0xc4, 0x21, 0x1b, 0x30, 0x81, 0xdf, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04,
        0x81, 0xd7, 0x30, 0x81, 0xd4, 0x80, 0x14, 0x28, 0x3b, 0xd4, 0xcf, 0x1e,
        0x18, 0xd3, 0xd8, 0xdf, 0x99, 0x2a, 0x78, 0x37, 0x4a, 0x20, 0x25, 0x62,
        0x3a, 0x47, 0x2c, 0xa1, 0x81, 0xb0, 0xa4, 0x81, 0xad, 0x30, 0x81, 0xaa,
        0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x46,
        0x52, 0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x05,
        0x50, 0x61, 0x72, 0x69, 0x73, 0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55,
        0x04, 0x07, 0x13, 0x05, 0x50, 0x61, 0x72, 0x69, 0x73, 0x31, 0x15, 0x30,
        0x13, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x0c, 0x44, 0x61, 0x74, 0x61,
        0x20, 0x54, 0x68, 0x65, 0x6f, 0x72, 0x65, 0x6d, 0x31, 0x1e, 0x30, 0x1c,
        0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x15, 0x54, 0x72, 0x75, 0x73, 0x74,
        0x4b, 0x69, 0x74, 0x20, 0x47, 0x6f, 0x6f, 0x64, 0x20, 0x52, 0x6f, 0x6f,
        0x74, 0x20, 0x43, 0x41, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04,
        0x03, 0x13, 0x15, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20,
        0x47, 0x6f, 0x6f, 0x64, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41,
        0x31, 0x24, 0x30, 0x22, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d,
        0x01, 0x09, 0x01, 0x16, 0x15, 0x64, 0x61, 0x74, 0x61, 0x31, 0x40, 0x64,
        0x61, 0x74, 0x61, 0x74, 0x68, 0x65, 0x6f, 0x72, 0x65, 0x6d, 0x2e, 0x63,
        0x6f, 0x6d, 0x82, 0x09, 0x00, 0xce, 0x62, 0x72, 0x89, 0x07, 0xce, 0x5e,
        0xaf, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x04, 0x05, 0x30, 0x03,
        0x01, 0x01, 0xff, 0x30, 0x0b, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x04, 0x04,
        0x03, 0x02, 0x01, 0x06, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
        0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x02, 0x01, 0x00,
        0x9f, 0xd4, 0x26, 0xf4, 0xc0, 0x97, 0xc2, 0x8b, 0x39, 0x65, 0x30, 0x5d,
        0xae, 0x39, 0x6f, 0x0b, 0x9f, 0xb7, 0x5e, 0x21, 0xab, 0xb6, 0xc8, 0x77,
        0xca, 0xef, 0xb9, 0xee, 0x83, 0xbd, 0x93, 0x6a, 0xe1, 0x2b, 0x45, 0xdd,
        0x32, 0x93, 0x56, 0x2b, 0xe7, 0x17, 0xcb, 0xa0, 0xd7, 0x28, 0x2d, 0x7d,
        0x12, 0x25, 0x32, 0xd9, 0xdb, 0x1d, 0x5f, 0xd2, 0xc4, 0x8e, 0x24, 0x1f,
        0x9e, 0xb4, 0xed, 0xc6, 0x63, 0x7b, 0x4e, 0x70, 0x4d, 0x68, 0xd0, 0xdc,
        0xda, 0x90, 0xba, 0xb8, 0x0d, 0x33, 0x56, 0x96, 0x6e, 0xf7, 0x99, 0xa4,
        0x0d, 0xac, 0x90, 0x94, 0x0b, 0x29, 0x43, 0x81, 0x0d, 0xf6, 0x9c, 0x0d,
        0xba, 0x39, 0xa6, 0xe4, 0x57, 0x01, 0xfb, 0x57, 0xdf, 0x86, 0x13, 0x1c,
        0xea, 0x1d, 0xb3, 0x4e, 0xa5, 0x9a, 0x0f, 0xbc, 0xa7, 0xc3, 0xd8, 0x74,
        0xc0, 0xdc, 0x98, 0x87, 0x12, 0xbd, 0x62, 0x58, 0xd5, 0x1e, 0x29, 0xde,
        0x1a, 0xfc, 0x8b, 0xad, 0x9d, 0xbe, 0x69, 0xd7, 0x0e, 0x3f, 0x1f, 0x4f,
        0x06, 0x8e, 0xc5, 0xe4, 0x37, 0x16, 0x8f, 0x78, 0x1d, 0x6b, 0xa6, 0xbe,
        0x82, 0xae, 0x89, 0x43, 0x89, 0x7f, 0xa9, 0x6c, 0x8e, 0x83, 0x97, 0xe9,
        0x9d, 0xe8, 0x35, 0x72, 0xff, 0xf1, 0xf2, 0x5d, 0x1a, 0xe4, 0xee, 0x73,
        0xbd, 0xe3, 0xd9, 0xb4, 0x60, 0x71, 0xf5, 0x43, 0x75, 0x62, 0x2c, 0xe2,
        0x83, 0xc9, 0x5c, 0x42, 0xb5, 0xfa, 0xd8, 0x5e, 0x61, 0xe1, 0x6d, 0xaf,
        0x91, 0xcf, 0x4e, 0x9d, 0xb8, 0xd9, 0x92, 0x59, 0x5a, 0x88, 0x78, 0x04,
        0xed, 0xf9, 0x2f, 0xf8, 0x65, 0x99, 0x91, 0x1c, 0x44, 0xc7, 0x9c, 0xb2,
        0x1f, 0xa2, 0xa1, 0xf3, 0x8d, 0x27, 0xb3, 0x77, 0x37, 0xac, 0x89, 0x1e,
        0xe7, 0xaa, 0x5b, 0xeb, 0xc7, 0xaf, 0xdd, 0x44, 0xe9, 0xe7, 0x81, 0x75,
        0x87, 0x6f, 0x53, 0x2d, 0x33, 0x96, 0x0c, 0xe7, 0x2f, 0x74, 0x76, 0xf7,
        0x04, 0x9b, 0xf9, 0x84, 0x4d, 0xcc, 0x75, 0xf2, 0x9a, 0x6c, 0xf8, 0x6f,
        0x28, 0x68, 0x1e, 0x56, 0xcb, 0x05, 0x1f, 0x71, 0x2c, 0xd1, 0x03, 0x38,
        0xcc, 0x37, 0x1d, 0x74, 0xdd, 0x06, 0xef, 0x0f, 0xd5, 0x3b, 0x64, 0xf5,
        0x96, 0x96, 0x14, 0xcb, 0x06, 0x82, 0x2e, 0xaf, 0x3c, 0xbb, 0x13, 0x39,
        0x4b, 0x4d, 0xba, 0xfa, 0x64, 0x7e, 0xc4, 0x62, 0xff, 0x41, 0x03, 0xf4,
        0xd1, 0x1b, 0x00, 0xc7, 0x76, 0x4b, 0xef, 0xc0, 0xd8, 0xa5, 0xa2, 0xf3,
        0x1a, 0x69, 0x7e, 0x19, 0x56, 0x03, 0xf6, 0xd5, 0x70, 0xe1, 0x35, 0xbe,
        0x85, 0x8b, 0xd8, 0xd0, 0x99, 0x4d, 0x97, 0x19, 0x7c, 0xf8, 0x2c, 0xa2,
        0xe9, 0xfe, 0x3c, 0x9b, 0x3e, 0x34, 0xb2, 0xc5, 0x5d, 0x7f, 0xcc, 0x1b,
        0xd8, 0xf2, 0xa8, 0x3f, 0x50, 0x01, 0xfb, 0x48, 0x8c, 0x50, 0x7e, 0x0f,
        0xde, 0xd5, 0x2f, 0x2a, 0xdf, 0xe5, 0x59, 0x15, 0x5d, 0x2a, 0x16, 0xbd,
        0xc7, 0xf4, 0x1a, 0x70, 0x96, 0x77, 0x7a, 0xe4, 0x7e, 0xe5, 0xd3, 0x10,
        0xdf, 0xcf, 0xc9, 0x6d, 0xb9, 0xe5, 0x79, 0xc9, 0xe0, 0x46, 0x80, 0xe4,
        0x4f, 0xa6, 0x52, 0xb9, 0x28, 0xc4, 0x09, 0xd9, 0x22, 0x0a, 0xdf, 0x6c,
        0xef, 0x8c, 0x47, 0x07, 0xbd, 0x24, 0xa6, 0x83, 0x34, 0x25, 0x74, 0xd4,
        0x25, 0xa3, 0x42, 0x64, 0x42, 0x58, 0x22, 0x53, 0xfb, 0xc9, 0x67, 0x81,
        0x69, 0xd6, 0x15, 0x87, 0xf2, 0x7a, 0x86, 0xc1, 0x84, 0x70, 0xec, 0xbc,
        0xc1, 0x89, 0xd0, 0x05, 0x64, 0x81, 0xf9, 0x44, 0x2e, 0x89, 0x28, 0xde,
        0x47, 0xd5, 0x92, 0x61, 0xe8, 0x4d, 0x90, 0x3d, 0xbc, 0x4e, 0x9c, 0x93,
        0x43, 0x77, 0x14, 0x1b, 0x10, 0x37, 0x8f, 0x5a, 0x9d, 0x1c, 0x4f, 0xe7,
        0xc5, 0x51, 0xa5, 0x2f, 0xbc, 0x99, 0xd2, 0x25
};
unsigned int ca_chain_cert_der_len = 1784;

unsigned char www_good_com_cert_der[] = {
        0x30, 0x82, 0x06, 0x3f, 0x30, 0x82, 0x04, 0x27, 0xa0, 0x03, 0x02, 0x01,
        0x02, 0x02, 0x02, 0x10, 0x01, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,
        0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x30, 0x81, 0xaa, 0x31,
        0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x46, 0x52,
        0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x05, 0x50,
        0x61, 0x72, 0x69, 0x73, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04,
        0x0a, 0x13, 0x0c, 0x44, 0x61, 0x74, 0x61, 0x20, 0x54, 0x68, 0x65, 0x6f,
        0x72, 0x65, 0x6d, 0x31, 0x26, 0x30, 0x24, 0x06, 0x03, 0x55, 0x04, 0x0b,
        0x13, 0x1d, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b, 0x69, 0x74, 0x20, 0x47,
        0x6f, 0x6f, 0x64, 0x20, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x6d, 0x65, 0x64,
        0x69, 0x61, 0x74, 0x65, 0x20, 0x43, 0x41, 0x31, 0x26, 0x30, 0x24, 0x06,
        0x03, 0x55, 0x04, 0x03, 0x13, 0x1d, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4b,
        0x69, 0x74, 0x20, 0x47, 0x6f, 0x6f, 0x64, 0x20, 0x49, 0x6e, 0x74, 0x65,
        0x72, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x74, 0x65, 0x20, 0x43, 0x41, 0x31,
        0x24, 0x30, 0x22, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01,
        0x09, 0x01, 0x16, 0x15, 0x64, 0x61, 0x74, 0x61, 0x32, 0x40, 0x64, 0x61,
        0x74, 0x61, 0x74, 0x68, 0x65, 0x6f, 0x72, 0x65, 0x6d, 0x2e, 0x63, 0x6f,
        0x6d, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x35, 0x30, 0x33, 0x33, 0x30, 0x31,
        0x34, 0x35, 0x35, 0x31, 0x38, 0x5a, 0x17, 0x0d, 0x31, 0x36, 0x30, 0x33,
        0x32, 0x39, 0x31, 0x34, 0x35, 0x35, 0x31, 0x38, 0x5a, 0x30, 0x81, 0x8d,
        0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x46,
        0x52, 0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x05,
        0x50, 0x61, 0x72, 0x69, 0x73, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55,
        0x04, 0x0a, 0x13, 0x0c, 0x44, 0x61, 0x74, 0x61, 0x20, 0x54, 0x68, 0x65,
        0x6f, 0x72, 0x65, 0x6d, 0x31, 0x1d, 0x30, 0x1b, 0x06, 0x03, 0x55, 0x04,
        0x0b, 0x13, 0x14, 0x47, 0x6f, 0x6f, 0x64, 0x2e, 0x63, 0x6f, 0x6d, 0x20,
        0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x31,
        0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x0c, 0x77, 0x77,
        0x77, 0x2e, 0x67, 0x6f, 0x6f, 0x64, 0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x21,
        0x30, 0x1f, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09,
        0x01, 0x16, 0x12, 0x77, 0x65, 0x62, 0x6d, 0x61, 0x73, 0x74, 0x65, 0x72,
        0x40, 0x67, 0x6f, 0x6f, 0x64, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x82, 0x02,
        0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01,
        0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x02, 0x0f, 0x00, 0x30, 0x82, 0x02,
        0x0a, 0x02, 0x82, 0x02, 0x01, 0x00, 0xb8, 0x94, 0xc8, 0x90, 0x9e, 0x6b,
        0xe2, 0xda, 0x12, 0xed, 0x74, 0xfe, 0x8f, 0x35, 0xf4, 0xeb, 0x07, 0xbd,
        0xa5, 0x25, 0xeb, 0xff, 0xa9, 0x1c, 0xcc, 0x56, 0xb0, 0xb9, 0x5e, 0xc5,
        0xc8, 0x7d, 0x10, 0x8b, 0x55, 0xea, 0x66, 0x67, 0x2b, 0x4f, 0x58, 0x50,
        0x80, 0xbc, 0xf5, 0xde, 0x0e, 0xad, 0xcf, 0x3c, 0x7b, 0xb0, 0xe0, 0xe8,
        0x89, 0xeb, 0x50, 0x22, 0x89, 0x50, 0xd0, 0xa7, 0xbe, 0x05, 0x1f, 0x49,
        0xee, 0xc0, 0x86, 0xdd, 0xb5, 0x16, 0x5f, 0xd8, 0xff, 0x68, 0xcd, 0xa1,
        0xa7, 0x1f, 0xa2, 0xb3, 0xbe, 0x79, 0xbf, 0xe3, 0x48, 0x9e, 0xef, 0xf8,
        0xa8, 0xde, 0x1c, 0x8b, 0x46, 0x44, 0x8f, 0x3a, 0x1e, 0x7d, 0x24, 0x7b,
        0x83, 0xd9, 0x3b, 0xd5, 0x01, 0xbc, 0xed, 0x3d, 0x25, 0x76, 0xbb, 0x23,
        0xdc, 0xac, 0x1f, 0x17, 0x42, 0xec, 0x39, 0x6f, 0x96, 0xb6, 0x9d, 0x9d,
        0xb3, 0xec, 0xf4, 0xd7, 0x5a, 0x84, 0x02, 0xc5, 0xc4, 0x00, 0x13, 0xb3,
        0xd1, 0x32, 0x3a, 0x0c, 0x89, 0x8f, 0xd8, 0x2e, 0x1e, 0xf9, 0x14, 0xd9,
        0x61, 0x89, 0xf8, 0x46, 0x03, 0xb6, 0xcc, 0x2b, 0xb2, 0x9b, 0x5f, 0x21,
        0x6a, 0x91, 0x24, 0x2a, 0xf3, 0x00, 0xf9, 0x91, 0x36, 0x93, 0xbd, 0x11,
        0x9f, 0x31, 0x67, 0xe2, 0x02, 0x35, 0x2c, 0xb3, 0xa2, 0x8a, 0x27, 0x2f,
        0xa9, 0x3e, 0x7c, 0xca, 0xb8, 0x53, 0xd8, 0xc3, 0x88, 0xdb, 0x8c, 0xd6,
        0x07, 0xb7, 0xee, 0x0e, 0x9b, 0xe9, 0x47, 0x77, 0x6b, 0x9d, 0xc2, 0x23,
        0x97, 0xef, 0xa2, 0xce, 0xf0, 0xd4, 0x69, 0xa5, 0xee, 0x16, 0x7c, 0x6b,
        0x45, 0x0f, 0xef, 0xa2, 0x85, 0x7e, 0xfe, 0xc1, 0x73, 0x1a, 0x9d, 0xca,
        0xfa, 0x7d, 0x4b, 0x05, 0x61, 0xc5, 0x24, 0x01, 0xe6, 0x72, 0x32, 0xa8,
        0xe4, 0xd0, 0x9f, 0x63, 0x8f, 0xb0, 0xdb, 0x64, 0x49, 0x30, 0x91, 0x86,
        0xe0, 0xda, 0x4e, 0x07, 0xad, 0xb9, 0x84, 0xb7, 0x6b, 0x50, 0x71, 0x0a,
        0x21, 0xd1, 0xb2, 0x36, 0xce, 0x58, 0x74, 0x17, 0x26, 0x94, 0x9e, 0x7f,
        0x1f, 0xfe, 0xae, 0x20, 0x47, 0x75, 0x05, 0x69, 0x2d, 0x98, 0x4b, 0x30,
        0x24, 0x75, 0xbe, 0x13, 0xe0, 0x0b, 0x3a, 0x56, 0x12, 0x55, 0x55, 0xc9,
        0x14, 0x0e, 0x31, 0x72, 0x97, 0x5f, 0x02, 0xa7, 0x28, 0xcd, 0xb8, 0xf2,
        0x89, 0x6c, 0xf7, 0xf6, 0x4a, 0x4d, 0xe6, 0x34, 0x87, 0x06, 0xbd, 0x4e,
        0x62, 0x90, 0x24, 0xbe, 0x13, 0x61, 0x3f, 0x4b, 0x22, 0x60, 0x52, 0x1d,
        0xd7, 0xe8, 0xb0, 0x04, 0x4c, 0xc5, 0xf2, 0xdb, 0x5c, 0x87, 0x3b, 0x7e,
        0xcf, 0x8a, 0x35, 0x39, 0xd4, 0x9d, 0xd5, 0xcd, 0xa6, 0x58, 0x11, 0x38,
        0xd7, 0x26, 0xe6, 0xb8, 0xeb, 0xa1, 0xd6, 0x15, 0x11, 0xd2, 0x2d, 0xaa,
        0xc9, 0x98, 0xd9, 0x1a, 0xb2, 0xf2, 0xb5, 0x41, 0x4d, 0x86, 0xbd, 0x1e,
        0xaa, 0xe6, 0x8f, 0x56, 0x29, 0x27, 0x99, 0xad, 0x25, 0xdf, 0x56, 0x35,
        0x44, 0x11, 0x70, 0x90, 0x05, 0x10, 0x40, 0x0e, 0xe1, 0x02, 0x0a, 0xdd,
        0x48, 0xcb, 0xb3, 0xcd, 0x56, 0xa6, 0xcd, 0xe5, 0xc1, 0x23, 0xd9, 0x77,
        0x89, 0xe5, 0x84, 0x76, 0xf5, 0x6a, 0x64, 0xa0, 0xd7, 0x7b, 0x78, 0xc5,
        0x61, 0x83, 0xe6, 0xb7, 0x6e, 0xbf, 0xe7, 0x93, 0xbc, 0x98, 0xac, 0xd6,
        0x45, 0x99, 0x56, 0xdd, 0x8d, 0x6d, 0xfa, 0x5f, 0x7c, 0x8b, 0x80, 0xcf,
        0xaf, 0x2a, 0x48, 0x06, 0x28, 0xfc, 0x2e, 0xff, 0xc3, 0x28, 0x6b, 0x51,
        0x35, 0x78, 0x8b, 0x52, 0xfb, 0x01, 0x3b, 0x99, 0xb9, 0xf9, 0x64, 0x22,
        0x16, 0x45, 0x20, 0x52, 0xf0, 0x93, 0x8c, 0x94, 0xa3, 0xee, 0xce, 0xae,
        0x97, 0xa7, 0x3f, 0x65, 0x4e, 0x37, 0xd5, 0xfb, 0xc2, 0xb2, 0x75, 0xc5,
        0xd6, 0x4b, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x81, 0x89, 0x30, 0x81,
        0x86, 0x30, 0x09, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x04, 0x02, 0x30, 0x00,
        0x30, 0x0b, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x04, 0x04, 0x03, 0x02, 0x05,
        0xe0, 0x30, 0x2c, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x86, 0xf8, 0x42,
        0x01, 0x0d, 0x04, 0x1f, 0x16, 0x1d, 0x4f, 0x70, 0x65, 0x6e, 0x53, 0x53,
        0x4c, 0x20, 0x47, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20,
        0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x30,
        0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x97, 0xde,
        0x0b, 0xe0, 0xdf, 0x31, 0x28, 0xe1, 0xe1, 0xb5, 0xc3, 0x29, 0x13, 0x6b,
        0xb8, 0x3a, 0x5c, 0x31, 0xa2, 0xd4, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d,
        0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x70, 0xb6, 0x64, 0x5d, 0xd3,
        0xfa, 0x87, 0xa3, 0xf3, 0xe0, 0x28, 0xdd, 0x67, 0x86, 0x1d, 0x0e, 0x68,
        0xc4, 0x21, 0x1b, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
        0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x02, 0x01, 0x00, 0x89,
        0xe3, 0xbc, 0x13, 0x5d, 0x83, 0xe2, 0x05, 0xd9, 0x99, 0xce, 0x92, 0x30,
        0x36, 0x4c, 0x72, 0x01, 0xc8, 0x2d, 0x0e, 0x03, 0xd8, 0x3d, 0x05, 0x0b,
        0x41, 0x5c, 0x76, 0xa2, 0xc8, 0x69, 0x52, 0xb4, 0x12, 0x2b, 0xb9, 0xa6,
        0xc1, 0x85, 0x6e, 0x98, 0x66, 0x07, 0x6d, 0x23, 0xe8, 0xf9, 0x97, 0xe6,
        0xe2, 0xe0, 0xc3, 0x51, 0x1c, 0xf4, 0x2f, 0x35, 0xfb, 0x8a, 0x46, 0x6e,
        0x74, 0xe5, 0x72, 0x2f, 0xde, 0xfe, 0xfd, 0xc7, 0x51, 0xc8, 0x18, 0xdd,
        0xc9, 0x87, 0xd5, 0x48, 0xfa, 0x45, 0xe9, 0xd5, 0x03, 0x96, 0xfd, 0x29,
        0x08, 0xc4, 0x4f, 0xdb, 0xa5, 0xd0, 0x97, 0x9f, 0x13, 0x30, 0xbc, 0x62,
        0x81, 0xc3, 0x62, 0x67, 0x08, 0xc7, 0x38, 0x7d, 0xaa, 0x11, 0x2a, 0xe3,
        0x5e, 0x84, 0x8a, 0xba, 0x02, 0x07, 0x29, 0xed, 0x59, 0x20, 0x62, 0xf6,
        0xec, 0x51, 0x23, 0x75, 0x83, 0x45, 0xc4, 0x44, 0xa0, 0x1b, 0x5d, 0x58,
        0x15, 0x3f, 0xcb, 0xd5, 0xb0, 0xc1, 0x86, 0xa1, 0xe5, 0xca, 0x67, 0xc5,
        0x01, 0xc3, 0x49, 0x19, 0xb5, 0xfe, 0xe6, 0x4b, 0x4f, 0xba, 0x2e, 0x14,
        0x4b, 0xa9, 0x2d, 0x08, 0x23, 0xd0, 0x87, 0x80, 0x2d, 0xeb, 0x7e, 0xca,
        0xaa, 0xc4, 0x4d, 0x3d, 0x52, 0xd6, 0xa2, 0xdb, 0x7c, 0x66, 0xd6, 0xc8,
        0xb4, 0xb3, 0x31, 0xbe, 0xf9, 0x3a, 0x37, 0x40, 0xc1, 0xad, 0xde, 0xfa,
        0xa5, 0x77, 0xc0, 0xa1, 0x4b, 0xe2, 0x82, 0x0e, 0xb4, 0xbf, 0xb8, 0xcf,
        0xdd, 0x27, 0xac, 0xb5, 0xeb, 0x7a, 0xb3, 0x47, 0x53, 0x39, 0x11, 0xcf,
        0x5f, 0xc2, 0x2e, 0x26, 0xac, 0x79, 0xbf, 0x92, 0x39, 0x0d, 0x1a, 0xfb,
        0x32, 0xde, 0xbd, 0xe5, 0x43, 0x6a, 0x31, 0xc9, 0xc6, 0x84, 0x70, 0x2c,
        0x54, 0x4b, 0x26, 0xef, 0x9c, 0xbe, 0xbb, 0x63, 0x87, 0x9b, 0x9b, 0x15,
        0x82, 0x0d, 0x1d, 0xa3, 0x66, 0x81, 0x39, 0xca, 0x61, 0x4d, 0x98, 0x6f,
        0xb8, 0x50, 0x3c, 0xcb, 0x25, 0x83, 0x87, 0x86, 0xe5, 0x24, 0xaf, 0x59,
        0xd7, 0xc3, 0xba, 0xab, 0x9a, 0xd5, 0x87, 0xec, 0xe9, 0xac, 0xd3, 0x32,
        0x2f, 0x57, 0xda, 0x28, 0x1f, 0x54, 0x74, 0x3b, 0x1a, 0x39, 0x4c, 0x15,
        0x1d, 0x1a, 0x31, 0xc5, 0xf5, 0xdd, 0xf4, 0x43, 0xfb, 0x59, 0x96, 0x1d,
        0x8c, 0x58, 0x97, 0x2a, 0x32, 0xe1, 0xc1, 0xe1, 0xe5, 0x87, 0x53, 0xb9,
        0x4b, 0x7d, 0xea, 0x2a, 0xd7, 0xd0, 0x60, 0x7e, 0x45, 0x58, 0xbc, 0x43,
        0xdb, 0x6f, 0xdb, 0x8b, 0x88, 0xbf, 0x8e, 0x31, 0x50, 0xb4, 0x3a, 0x90,
        0xb2, 0xf0, 0x2e, 0x7f, 0x36, 0xce, 0x33, 0x57, 0x8f, 0x4f, 0xa8, 0x1d,
        0x94, 0x41, 0x66, 0x36, 0x47, 0xfb, 0xb0, 0xfb, 0x96, 0x35, 0xf1, 0x79,
        0x6d, 0x18, 0x94, 0xf9, 0xa4, 0x3a, 0xa0, 0x32, 0xa3, 0xbe, 0x91, 0x36,
        0xf3, 0xc1, 0x32, 0xa2, 0xa6, 0x0b, 0xb7, 0x65, 0x3d, 0xfc, 0xae, 0x54,
        0x5e, 0xf2, 0x15, 0x4e, 0xc6, 0xf3, 0xb2, 0xf3, 0x4c, 0xbb, 0x83, 0x0d,
        0xbf, 0x87, 0xf8, 0xa1, 0x0f, 0xfb, 0x7e, 0x11, 0x29, 0x5f, 0x97, 0xf0,
        0x59, 0xf7, 0xb1, 0xe7, 0x13, 0xce, 0x1f, 0x33, 0x71, 0x57, 0xda, 0x63,
        0x80, 0xd4, 0x75, 0xf9, 0xd7, 0x0e, 0x51, 0xa9, 0xba, 0xe8, 0x5d, 0x4c,
        0x55, 0xcc, 0xa4, 0x31, 0x92, 0xd3, 0xef, 0xf8, 0xad, 0x4e, 0x98, 0x94,
        0xeb, 0xe7, 0x74, 0xb9, 0x2d, 0x84, 0x52, 0x19, 0x85, 0x8d, 0x37, 0x3b,
        0x13, 0xf7, 0x4a, 0x83, 0xa6, 0x84, 0x2a, 0xff, 0x58, 0x9f, 0xdf, 0x7b,
        0x5b, 0x6a, 0x7d, 0x48, 0xfd, 0x54, 0x69, 0xb3, 0x5a, 0x5d, 0xe0, 0x15,
        0x08, 0x1c, 0xa6, 0x2b, 0xb3, 0x3f, 0xd4, 0xb9, 0x5d, 0x3f, 0xf6, 0x8f,
        0xdb, 0xf8, 0x1c, 0xd8, 0x70, 0xca, 0x43
};
unsigned int www_good_com_cert_der_len = 1603;


#endif