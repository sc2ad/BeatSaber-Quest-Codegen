// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Api.DefaultTestAssemblyBuilder
#include "NUnit/Framework/Api/DefaultTestAssemblyBuilder.hpp"
// Including type: UnityEngine.TestTools.TestPlatform
#include "UnityEngine/TestTools/TestPlatform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Forward declaring type: UnityTestAssemblyBuilder
  class UnityTestAssemblyBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*, "UnityEngine.TestTools.NUnitExtensions", "UnityTestAssemblyBuilder");
// Type namespace: UnityEngine.TestTools.NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityTestAssemblyBuilder : public ::NUnit::Framework::Api::DefaultTestAssemblyBuilder {
    public:
    // Nested type: ::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3
    class $BuildAsync$d__3;
    public:
    // private readonly System.String m_ProductName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_ProductName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::NUnit::Framework::Interfaces::ISuiteBuilder*
    constexpr operator ::NUnit::Framework::Interfaces::ISuiteBuilder*() const noexcept = delete;
    // Get instance field reference: private readonly System.String m_ProductName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_ProductName();
    // public System.Void .ctor()
    // Offset: 0x195EBEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestAssemblyBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestAssemblyBuilder*, creationType>()));
    }
    // public NUnit.Framework.Interfaces.ITest Build(System.Reflection.Assembly[] assemblies, UnityEngine.TestTools.TestPlatform[] testPlatforms, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0x1955108
    ::NUnit::Framework::Interfaces::ITest* Build(::ArrayW<::System::Reflection::Assembly*> assemblies, ::ArrayW<::UnityEngine::TestTools::TestPlatform> testPlatforms, ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>* options);
    // public System.Collections.Generic.IEnumerator`1<NUnit.Framework.Interfaces.ITest> BuildAsync(System.Reflection.Assembly[] assemblies, UnityEngine.TestTools.TestPlatform[] testPlatforms, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0x195EC64
    ::System::Collections::Generic::IEnumerator_1<::NUnit::Framework::Interfaces::ITest*>* BuildAsync(::ArrayW<::System::Reflection::Assembly*> assemblies, ::ArrayW<::UnityEngine::TestTools::TestPlatform> testPlatforms, ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>* options);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.Object> GetNUnitTestBuilderSettings(UnityEngine.TestTools.TestPlatform testPlatform)
    // Offset: 0x195ED20
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* GetNUnitTestBuilderSettings(::UnityEngine::TestTools::TestPlatform testPlatform);
  }; // UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
  #pragma pack(pop)
  static check_size<sizeof(UnityTestAssemblyBuilder), 24 + sizeof(::StringW)> __UnityEngine_TestTools_NUnitExtensions_UnityTestAssemblyBuilderSizeCheck;
  static_assert(sizeof(UnityTestAssemblyBuilder) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ITest* (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::*)(::ArrayW<::System::Reflection::Assembly*>, ::ArrayW<::UnityEngine::TestTools::TestPlatform>, ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*)>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::Build)> {
  static const MethodInfo* get() {
    static auto* assemblies = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), 1)->byval_arg;
    static auto* testPlatforms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.TestTools", "TestPlatform"), 1)->byval_arg;
    static auto* options = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblies, testPlatforms, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::BuildAsync
// Il2CppName: BuildAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::NUnit::Framework::Interfaces::ITest*>* (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::*)(::ArrayW<::System::Reflection::Assembly*>, ::ArrayW<::UnityEngine::TestTools::TestPlatform>, ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*)>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::BuildAsync)> {
  static const MethodInfo* get() {
    static auto* assemblies = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), 1)->byval_arg;
    static auto* testPlatforms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.TestTools", "TestPlatform"), 1)->byval_arg;
    static auto* options = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*), "BuildAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblies, testPlatforms, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::GetNUnitTestBuilderSettings
// Il2CppName: GetNUnitTestBuilderSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* (*)(::UnityEngine::TestTools::TestPlatform)>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::GetNUnitTestBuilderSettings)> {
  static const MethodInfo* get() {
    static auto* testPlatform = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools", "TestPlatform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*), "GetNUnitTestBuilderSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testPlatform});
  }
};
