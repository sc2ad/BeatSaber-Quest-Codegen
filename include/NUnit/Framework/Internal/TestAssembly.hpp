// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestAssembly
  class TestAssembly;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::TestAssembly);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::TestAssembly*, "NUnit.Framework.Internal", "TestAssembly");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestAssembly
  // [TokenAttribute] Offset: FFFFFFFF
  class TestAssembly : public ::NUnit::Framework::Internal::TestSuite {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x90
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0x12368F4
    // private System.Reflection.Assembly <Assembly>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::System::Reflection::Assembly* Assembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::Assembly*
    constexpr operator ::System::Reflection::Assembly*() const noexcept {
      return Assembly;
    }
    // Get instance field reference: private System.Reflection.Assembly <Assembly>k__BackingField
    ::System::Reflection::Assembly*& dyn_$Assembly$k__BackingField();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0x28B7B50
    ::System::Reflection::Assembly* get_Assembly();
    // private System.Void set_Assembly(System.Reflection.Assembly value)
    // Offset: 0x28B7B58
    void set_Assembly(::System::Reflection::Assembly* value);
    // public System.Void .ctor(System.Reflection.Assembly assembly, System.String path)
    // Offset: 0x28B7980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestAssembly* New_ctor(::System::Reflection::Assembly* assembly, ::StringW path) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TestAssembly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestAssembly*, creationType>(assembly, path)));
    }
    // public override System.String get_TestType()
    // Offset: 0x28B7B60
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_TestType()
    ::StringW get_TestType();
    // public System.Void .ctor(System.String path)
    // Offset: 0x28B7AC8
    // Implemented from: NUnit.Framework.Internal.TestSuite
    // Base method: System.Void TestSuite::.ctor(System.String path)
    // Base method: System.Void Test::.ctor(System.String path)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestAssembly* New_ctor(::StringW path) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TestAssembly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestAssembly*, creationType>(path)));
    }
  }; // NUnit.Framework.Internal.TestAssembly
  #pragma pack(pop)
  static check_size<sizeof(TestAssembly), 144 + sizeof(::System::Reflection::Assembly*)> __NUnit_Framework_Internal_TestAssemblySizeCheck;
  static_assert(sizeof(TestAssembly) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestAssembly::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (NUnit::Framework::Internal::TestAssembly::*)()>(&NUnit::Framework::Internal::TestAssembly::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestAssembly*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestAssembly::set_Assembly
// Il2CppName: set_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestAssembly::*)(::System::Reflection::Assembly*)>(&NUnit::Framework::Internal::TestAssembly::set_Assembly)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestAssembly*), "set_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestAssembly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestAssembly::get_TestType
// Il2CppName: get_TestType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Internal::TestAssembly::*)()>(&NUnit::Framework::Internal::TestAssembly::get_TestType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestAssembly*), "get_TestType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestAssembly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
