// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.InternalUtility
#include "UnityEngine/ProBuilder/InternalUtility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0*, "UnityEngine.ProBuilder", "InternalUtility/<>c__DisplayClass6_0");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.InternalUtility/UnityEngine.ProBuilder.<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InternalUtility::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String valid
    // Size: 0x8
    // Offset: 0x10
    ::StringW valid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return valid;
    }
    // Get instance field reference: public System.String valid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_valid();
    // public System.Void .ctor()
    // Offset: 0x2082C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalUtility::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalUtility::$$c__DisplayClass6_0*, creationType>()));
    }
    // System.Boolean <TryParseColor>b__0(System.Char c)
    // Offset: 0x2082F30
    bool $TryParseColor$b__0(::Il2CppChar c);
  }; // UnityEngine.ProBuilder.InternalUtility/UnityEngine.ProBuilder.<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(InternalUtility::$$c__DisplayClass6_0), 16 + sizeof(::StringW)> __UnityEngine_ProBuilder_InternalUtility_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(InternalUtility::$$c__DisplayClass6_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::$TryParseColor$b__0
// Il2CppName: <TryParseColor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::*)(::Il2CppChar)>(&UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0::$TryParseColor$b__0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0*), "<TryParseColor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
