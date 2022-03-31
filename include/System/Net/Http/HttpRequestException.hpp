// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Forward declaring type: HttpRequestException
  class HttpRequestException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::HttpRequestException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpRequestException*, "System.Net.Http", "HttpRequestException");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpRequestException
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpRequestException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x19671F0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::HttpRequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1966D04
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::HttpRequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x1966164
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestException* New_ctor(::StringW message, ::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::HttpRequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestException*, creationType>(message, inner)));
    }
  }; // System.Net.Http.HttpRequestException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpRequestException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpRequestException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpRequestException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
