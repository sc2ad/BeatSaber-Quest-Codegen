// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ResultsEnvironmentManager
#include "GlobalNamespace/ResultsEnvironmentManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0*, "", "ResultsEnvironmentManager/<>c__DisplayClass3_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ResultsEnvironmentManager/<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ResultsEnvironmentManager::$$c__DisplayClass3_0 : public ::Il2CppObject {
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
    // public System.String keyword
    // Size: 0x8
    // Offset: 0x10
    ::StringW keyword;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return keyword;
    }
    // Get instance field reference: public System.String keyword
    ::StringW& dyn_keyword();
    // System.Boolean <GetResultEnvironmentControllerForKeyword>b__0(ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword controllerWithKeyword)
    // Offset: 0x137E1D8
    bool $GetResultEnvironmentControllerForKeyword$b__0(::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword* controllerWithKeyword);
    // public System.Void .ctor()
    // Offset: 0x137E070
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsEnvironmentManager::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsEnvironmentManager::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // ResultsEnvironmentManager/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(ResultsEnvironmentManager::$$c__DisplayClass3_0), 16 + sizeof(::StringW)> __GlobalNamespace_ResultsEnvironmentManager_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(ResultsEnvironmentManager::$$c__DisplayClass3_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::$GetResultEnvironmentControllerForKeyword$b__0
// Il2CppName: <GetResultEnvironmentControllerForKeyword>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::*)(::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*)>(&GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::$GetResultEnvironmentControllerForKeyword$b__0)> {
  static const MethodInfo* get() {
    static auto* controllerWithKeyword = &::il2cpp_utils::GetClassFromName("", "ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0*), "<GetResultEnvironmentControllerForKeyword>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerWithKeyword});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
