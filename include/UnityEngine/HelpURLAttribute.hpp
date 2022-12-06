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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HelpURLAttribute
  class HelpURLAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::HelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HelpURLAttribute*, "UnityEngine", "HelpURLAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HelpURLAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1084C04
  // [UsedByNativeCodeAttribute] Offset: 1084C04
  class HelpURLAttribute : public ::System::Attribute {
    public:
    public:
    // readonly System.String m_Url
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Url;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_Url;
    }
    // Get instance field reference: readonly System.String m_Url
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Url();
    // public System.Void .ctor(System.String url)
    // Offset: 0x20DD4C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelpURLAttribute* New_ctor(::StringW url) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::HelpURLAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelpURLAttribute*, creationType>(url)));
    }
  }; // UnityEngine.HelpURLAttribute
  #pragma pack(pop)
  static check_size<sizeof(HelpURLAttribute), 16 + sizeof(::StringW)> __UnityEngine_HelpURLAttributeSizeCheck;
  static_assert(sizeof(HelpURLAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::HelpURLAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
