// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRResources
#include "GlobalNamespace/OVRResources.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRResources::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResources::$$c__DisplayClass2_0*, "", "OVRResources/<>c__DisplayClass2_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRResources/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRResources::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String path
    // Size: 0x8
    // Offset: 0x10
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return path;
    }
    // Get instance field reference: public System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // public System.Void .ctor()
    // Offset: 0x1B7A6F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRResources::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRResources::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRResources::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Boolean <Load>b__0(System.String s)
    // Offset: 0x1B7A7BC
    bool $Load$b__0(::StringW s);
  }; // OVRResources/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(OVRResources::$$c__DisplayClass2_0), 16 + sizeof(::StringW)> __GlobalNamespace_OVRResources_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(OVRResources::$$c__DisplayClass2_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRResources::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRResources::$$c__DisplayClass2_0::$Load$b__0
// Il2CppName: <Load>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRResources::$$c__DisplayClass2_0::*)(::StringW)>(&GlobalNamespace::OVRResources::$$c__DisplayClass2_0::$Load$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRResources::$$c__DisplayClass2_0*), "<Load>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
