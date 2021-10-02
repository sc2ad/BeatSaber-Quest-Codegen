// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SurrogateKey
  // [TokenAttribute] Offset: FFFFFFFF
  class SurrogateKey : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // System.Type m_type
    // Size: 0x8
    // Offset: 0x10
    System::Type* m_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Runtime.Serialization.StreamingContext m_context
    // Size: 0xC
    // Offset: 0x18
    System::Runtime::Serialization::StreamingContext m_context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    public:
    // Get instance field reference: System.Type m_type
    System::Type*& dyn_m_type();
    // Get instance field reference: System.Runtime.Serialization.StreamingContext m_context
    System::Runtime::Serialization::StreamingContext& dyn_m_context();
    // System.Void .ctor(System.Type type, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1918D70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SurrogateKey* New_ctor(System::Type* type, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SurrogateKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SurrogateKey*, creationType>(type, context)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x1918DB0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.Serialization.SurrogateKey
  #pragma pack(pop)
  static check_size<sizeof(SurrogateKey), 24 + sizeof(System::Runtime::Serialization::StreamingContext)> __System_Runtime_Serialization_SurrogateKeySizeCheck;
  static_assert(sizeof(SurrogateKey) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SurrogateKey*, "System.Runtime.Serialization", "SurrogateKey");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SurrogateKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SurrogateKey::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::SurrogateKey::*)()>(&System::Runtime::Serialization::SurrogateKey::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SurrogateKey*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
