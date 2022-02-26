// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BaseResultsEnvironmentController
  class BaseResultsEnvironmentController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ResultsEnvironmentManager
  class ResultsEnvironmentManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ResultsEnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsEnvironmentManager*, "", "ResultsEnvironmentManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ResultsEnvironmentManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ResultsEnvironmentManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword
    class ResultEnvironmentControllerWithKeyword;
    // Nested type: ::GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword[] _resultEnvironmentControllersWithKeyword
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*> resultEnvironmentControllersWithKeyword;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*>) == 0x8);
    // private System.String _currentShownKeyword
    // Size: 0x8
    // Offset: 0x20
    ::StringW currentShownKeyword;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword[] _resultEnvironmentControllersWithKeyword
    ::ArrayW<::GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*>& dyn__resultEnvironmentControllersWithKeyword();
    // Get instance field reference: private System.String _currentShownKeyword
    ::StringW& dyn__currentShownKeyword();
    // public BaseResultsEnvironmentController GetResultEnvironmentControllerForKeyword(System.String keyword)
    // Offset: 0x2B4D498
    ::GlobalNamespace::BaseResultsEnvironmentController* GetResultEnvironmentControllerForKeyword(::StringW keyword);
    // public System.Void ShowResultForKeyword(System.String keyword, System.Boolean immediately)
    // Offset: 0x2B4D56C
    void ShowResultForKeyword(::StringW keyword, bool immediately);
    // public System.Void HideResultForKeyword(System.String keyword, System.Boolean immediately)
    // Offset: 0x2B4D61C
    void HideResultForKeyword(::StringW keyword, bool immediately);
    // public System.Void .ctor()
    // Offset: 0x2B4D6C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsEnvironmentManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ResultsEnvironmentManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsEnvironmentManager*, creationType>()));
    }
  }; // ResultsEnvironmentManager
  #pragma pack(pop)
  static check_size<sizeof(ResultsEnvironmentManager), 32 + sizeof(::StringW)> __GlobalNamespace_ResultsEnvironmentManagerSizeCheck;
  static_assert(sizeof(ResultsEnvironmentManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::GetResultEnvironmentControllerForKeyword
// Il2CppName: GetResultEnvironmentControllerForKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BaseResultsEnvironmentController* (GlobalNamespace::ResultsEnvironmentManager::*)(::StringW)>(&GlobalNamespace::ResultsEnvironmentManager::GetResultEnvironmentControllerForKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsEnvironmentManager*), "GetResultEnvironmentControllerForKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::ShowResultForKeyword
// Il2CppName: ShowResultForKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsEnvironmentManager::*)(::StringW, bool)>(&GlobalNamespace::ResultsEnvironmentManager::ShowResultForKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsEnvironmentManager*), "ShowResultForKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword, immediately});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::HideResultForKeyword
// Il2CppName: HideResultForKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultsEnvironmentManager::*)(::StringW, bool)>(&GlobalNamespace::ResultsEnvironmentManager::HideResultForKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsEnvironmentManager*), "HideResultForKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword, immediately});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
