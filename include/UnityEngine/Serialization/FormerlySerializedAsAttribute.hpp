// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Serialization
namespace UnityEngine::Serialization {
  // Forward declaring type: FormerlySerializedAsAttribute
  class FormerlySerializedAsAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Serialization::FormerlySerializedAsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Serialization::FormerlySerializedAsAttribute*, "UnityEngine.Serialization", "FormerlySerializedAsAttribute");
// Type namespace: UnityEngine.Serialization
namespace UnityEngine::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Serialization.FormerlySerializedAsAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11C14B4
  // [RequiredByNativeCodeAttribute] Offset: 11C14B4
  class FormerlySerializedAsAttribute : public ::System::Attribute {
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
    // private System.String m_oldName
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_oldName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_oldName;
    }
    // Get instance field reference: private System.String m_oldName
    ::StringW& dyn_m_oldName();
    // public System.Void .ctor(System.String oldName)
    // Offset: 0x20D1318
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormerlySerializedAsAttribute* New_ctor(::StringW oldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Serialization::FormerlySerializedAsAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormerlySerializedAsAttribute*, creationType>(oldName)));
    }
  }; // UnityEngine.Serialization.FormerlySerializedAsAttribute
  #pragma pack(pop)
  static check_size<sizeof(FormerlySerializedAsAttribute), 16 + sizeof(::StringW)> __UnityEngine_Serialization_FormerlySerializedAsAttributeSizeCheck;
  static_assert(sizeof(FormerlySerializedAsAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Serialization::FormerlySerializedAsAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
