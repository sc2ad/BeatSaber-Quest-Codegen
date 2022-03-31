// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ResourceRequest
  class ResourceRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceRequest*, "UnityEngine", "ResourceRequest");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceRequest
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 11C0298
  class ResourceRequest : public ::UnityEngine::AsyncOperation {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.String m_Path
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_Path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Type m_Type
    // Size: 0x8
    // Offset: 0x28
    ::System::Type* m_Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: System.String m_Path
    ::StringW& dyn_m_Path();
    // Get instance field reference: System.Type m_Type
    ::System::Type*& dyn_m_Type();
    // public UnityEngine.Object get_asset()
    // Offset: 0x20CEE00
    ::UnityEngine::Object* get_asset();
    // public System.Void .ctor()
    // Offset: 0x20CEE9C
    // Implemented from: UnityEngine.AsyncOperation
    // Base method: System.Void AsyncOperation::.ctor()
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceRequest*, creationType>()));
    }
  }; // UnityEngine.ResourceRequest
  #pragma pack(pop)
  static check_size<sizeof(ResourceRequest), 40 + sizeof(::System::Type*)> __UnityEngine_ResourceRequestSizeCheck;
  static_assert(sizeof(ResourceRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceRequest::get_asset
// Il2CppName: get_asset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::ResourceRequest::*)()>(&UnityEngine::ResourceRequest::get_asset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceRequest*), "get_asset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
