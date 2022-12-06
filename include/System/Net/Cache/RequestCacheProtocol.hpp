// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Cache
namespace System::Net::Cache {
  // Forward declaring type: RequestCacheProtocol
  class RequestCacheProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Cache::RequestCacheProtocol);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheProtocol*, "System.Net.Cache", "RequestCacheProtocol");
// Type namespace: System.Net.Cache
namespace System::Net::Cache {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Cache.RequestCacheProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestCacheProtocol : public ::Il2CppObject {
    public:
    // public System.Void .ctor(System.Object arg1, System.Object arg2)
    // Offset: 0x1D9144C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestCacheProtocol* New_ctor(::Il2CppObject* arg1, ::Il2CppObject* arg2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Cache::RequestCacheProtocol::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestCacheProtocol*, creationType>(arg1, arg2)));
    }
  }; // System.Net.Cache.RequestCacheProtocol
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Cache::RequestCacheProtocol::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
