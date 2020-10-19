// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.HttpRequestHeaders
#include "System/Net/Http/Headers/HttpRequestHeaders.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: TransferCodingHeaderValue
  class TransferCodingHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.HttpRequestHeaders/<>c
  class HttpRequestHeaders::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.Http.Headers.HttpRequestHeaders/<>c <>9
    static System::Net::Http::Headers::HttpRequestHeaders::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Http.Headers.HttpRequestHeaders/<>c <>9
    static void _set_$$9(System::Net::Http::Headers::HttpRequestHeaders::$$c* value);
    // Get static field: static public System.Predicate`1<System.String> <>9__19_0
    static System::Predicate_1<::Il2CppString*>* _get_$$9__19_0();
    // Set static field: static public System.Predicate`1<System.String> <>9__19_0
    static void _set_$$9__19_0(System::Predicate_1<::Il2CppString*>* value);
    // Get static field: static public System.Predicate`1<System.String> <>9__22_0
    static System::Predicate_1<::Il2CppString*>* _get_$$9__22_0();
    // Set static field: static public System.Predicate`1<System.String> <>9__22_0
    static void _set_$$9__22_0(System::Predicate_1<::Il2CppString*>* value);
    // Get static field: static public System.Predicate`1<System.Net.Http.Headers.TransferCodingHeaderValue> <>9__29_0
    static System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue*>* _get_$$9__29_0();
    // Set static field: static public System.Predicate`1<System.Net.Http.Headers.TransferCodingHeaderValue> <>9__29_0
    static void _set_$$9__29_0(System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue*>* value);
    // Get static field: static public System.Predicate`1<System.Net.Http.Headers.TransferCodingHeaderValue> <>9__71_0
    static System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue*>* _get_$$9__71_0();
    // Set static field: static public System.Predicate`1<System.Net.Http.Headers.TransferCodingHeaderValue> <>9__71_0
    static void _set_$$9__71_0(System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue*>* value);
    // static private System.Void .cctor()
    // Offset: 0x117A070
    static void _cctor();
    // System.Boolean <get_ConnectionClose>b__19_0(System.String l)
    // Offset: 0x117A0E0
    bool $get_ConnectionClose$b__19_0(::Il2CppString* l);
    // System.Boolean <get_ConnectionKeepAlive>b__22_0(System.String l)
    // Offset: 0x117A138
    bool $get_ConnectionKeepAlive$b__22_0(::Il2CppString* l);
    // System.Boolean <get_ExpectContinue>b__29_0(System.Net.Http.Headers.TransferCodingHeaderValue l)
    // Offset: 0x117A190
    bool $get_ExpectContinue$b__29_0(System::Net::Http::Headers::TransferCodingHeaderValue* l);
    // System.Boolean <get_TransferEncodingChunked>b__71_0(System.Net.Http.Headers.TransferCodingHeaderValue l)
    // Offset: 0x117A1F0
    bool $get_TransferEncodingChunked$b__71_0(System::Net::Http::Headers::TransferCodingHeaderValue* l);
    // public System.Void .ctor()
    // Offset: 0x117A0D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HttpRequestHeaders::$$c* New_ctor();
  }; // System.Net.Http.Headers.HttpRequestHeaders/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpRequestHeaders::$$c*, "System.Net.Http.Headers", "HttpRequestHeaders/<>c");
#pragma pack(pop)