// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: ICommandLineArgsProvider
#include "GlobalNamespace/ICommandLineArgsProvider.hpp"
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
  // Forward declaring type: EnvironmentCommandLineArgsProvider
  class EnvironmentCommandLineArgsProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomizableEnvironmentCommandLineArgsProviderSO
  class CustomizableEnvironmentCommandLineArgsProviderSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*, "", "CustomizableEnvironmentCommandLineArgsProviderSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CustomizableEnvironmentCommandLineArgsProviderSO
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomizableEnvironmentCommandLineArgsProviderSO : public ::GlobalNamespace::PersistentScriptableObject/*, public ::GlobalNamespace::ICommandLineArgsProvider*/ {
    public:
    public:
    // private System.Boolean _useCustomCommandLineArgs
    // Size: 0x1
    // Offset: 0x18
    bool useCustomCommandLineArgs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _useEnvironmentCommandLineArgs
    // Size: 0x1
    // Offset: 0x19
    bool useEnvironmentCommandLineArgs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useEnvironmentCommandLineArgs and: customCommandLineArgs
    char __padding1[0x6] = {};
    // private System.String _customCommandLineArgs
    // Size: 0x8
    // Offset: 0x20
    ::StringW customCommandLineArgs;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly EnvironmentCommandLineArgsProvider _environmentCommandLineArgsProvider
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::EnvironmentCommandLineArgsProvider* environmentCommandLineArgsProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentCommandLineArgsProvider*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ICommandLineArgsProvider
    operator ::GlobalNamespace::ICommandLineArgsProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ICommandLineArgsProvider*>(this);
    }
    // Creating interface conversion operator: i_ICommandLineArgsProvider
    inline ::GlobalNamespace::ICommandLineArgsProvider* i_ICommandLineArgsProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::ICommandLineArgsProvider*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _useCustomCommandLineArgs
    [[deprecated("Use field access instead!")]] bool& dyn__useCustomCommandLineArgs();
    // Get instance field reference: private System.Boolean _useEnvironmentCommandLineArgs
    [[deprecated("Use field access instead!")]] bool& dyn__useEnvironmentCommandLineArgs();
    // Get instance field reference: private System.String _customCommandLineArgs
    [[deprecated("Use field access instead!")]] ::StringW& dyn__customCommandLineArgs();
    // Get instance field reference: private readonly EnvironmentCommandLineArgsProvider _environmentCommandLineArgsProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentCommandLineArgsProvider*& dyn__environmentCommandLineArgsProvider();
    // public System.Void .ctor()
    // Offset: 0x1438688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomizableEnvironmentCommandLineArgsProviderSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomizableEnvironmentCommandLineArgsProviderSO*, creationType>()));
    }
    // public System.String[] GetCommandLineArgs()
    // Offset: 0x1438520
    ::ArrayW<::StringW> GetCommandLineArgs();
  }; // CustomizableEnvironmentCommandLineArgsProviderSO
  #pragma pack(pop)
  static check_size<sizeof(CustomizableEnvironmentCommandLineArgsProviderSO), 40 + sizeof(::GlobalNamespace::EnvironmentCommandLineArgsProvider*)> __GlobalNamespace_CustomizableEnvironmentCommandLineArgsProviderSOSizeCheck;
  static_assert(sizeof(CustomizableEnvironmentCommandLineArgsProviderSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::GetCommandLineArgs
// Il2CppName: GetCommandLineArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::*)()>(&GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::GetCommandLineArgs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*), "GetCommandLineArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};