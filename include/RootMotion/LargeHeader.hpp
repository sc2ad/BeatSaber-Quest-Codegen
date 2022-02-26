// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: LargeHeader
  class LargeHeader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::LargeHeader);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::LargeHeader*, "RootMotion", "LargeHeader");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.LargeHeader
  // [TokenAttribute] Offset: FFFFFFFF
  class LargeHeader : public ::UnityEngine::PropertyAttribute {
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
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String color
    // Size: 0x8
    // Offset: 0x18
    ::StringW color;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String name
    ::StringW& dyn_name();
    // Get instance field reference: public System.String color
    ::StringW& dyn_color();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1F1C948
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LargeHeader* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::LargeHeader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LargeHeader*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.String color)
    // Offset: 0x1F1C9B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LargeHeader* New_ctor(::StringW name, ::StringW color) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::LargeHeader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LargeHeader*, creationType>(name, color)));
    }
  }; // RootMotion.LargeHeader
  #pragma pack(pop)
  static check_size<sizeof(LargeHeader), 24 + sizeof(::StringW)> __RootMotion_LargeHeaderSizeCheck;
  static_assert(sizeof(LargeHeader) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::LargeHeader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::LargeHeader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
