// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HeaderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E7211C
  class HeaderAttribute : public UnityEngine::PropertyAttribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly System.String header
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* header;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return header;
    }
    // Get instance field reference: public readonly System.String header
    ::Il2CppString*& dyn_header();
    // public System.Void .ctor(System.String header)
    // Offset: 0x1D9DBB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderAttribute* New_ctor(::Il2CppString* header) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::HeaderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderAttribute*, creationType>(header)));
    }
  }; // UnityEngine.HeaderAttribute
  #pragma pack(pop)
  static check_size<sizeof(HeaderAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_HeaderAttributeSizeCheck;
  static_assert(sizeof(HeaderAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HeaderAttribute*, "UnityEngine", "HeaderAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::HeaderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
