// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder
#include "UnityEngine/TestTools/NUnitExtensions/UnityTestAssemblyBuilder.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
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
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3*, "UnityEngine.TestTools.NUnitExtensions", "UnityTestAssemblyBuilder/<BuildAsync>d__3");
// Type namespace: UnityEngine.TestTools.NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder/UnityEngine.TestTools.NUnitExtensions.<BuildAsync>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnityTestAssemblyBuilder::$BuildAsync$d__3 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::NUnit::Framework::Interfaces::ITest*>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private NUnit.Framework.Interfaces.ITest <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::NUnit::Framework::Interfaces::ITest* $$2__current;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Interfaces::ITest*) == 0x8);
    // public UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*) == 0x8);
    // public System.Reflection.Assembly[] assemblies
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Reflection::Assembly*> assemblies;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Reflection::Assembly*>) == 0x8);
    // public UnityEngine.TestTools.TestPlatform[] testPlatforms
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::TestTools::TestPlatform> testPlatforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::TestTools::TestPlatform>) == 0x8);
    // public System.Collections.Generic.IDictionary`2<System.String,System.Object> options
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>* options;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*) == 0x8);
    // private NUnit.Framework.Internal.TestSuite <suite>5__2
    // Size: 0x8
    // Offset: 0x40
    ::NUnit::Framework::Internal::TestSuite* $suite$5__2;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::TestSuite*) == 0x8);
    // private System.Int32 <index>5__3
    // Size: 0x4
    // Offset: 0x48
    int $index$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::NUnit::Framework::Interfaces::ITest*>
    operator ::System::Collections::Generic::IEnumerator_1<::NUnit::Framework::Interfaces::ITest*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::NUnit::Framework::Interfaces::ITest*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private NUnit.Framework.Interfaces.ITest <>2__current
    ::NUnit::Framework::Interfaces::ITest*& dyn_$$2__current();
    // Get instance field reference: public UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder <>4__this
    ::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*& dyn_$$4__this();
    // Get instance field reference: public System.Reflection.Assembly[] assemblies
    ::ArrayW<::System::Reflection::Assembly*>& dyn_assemblies();
    // Get instance field reference: public UnityEngine.TestTools.TestPlatform[] testPlatforms
    ::ArrayW<::UnityEngine::TestTools::TestPlatform>& dyn_testPlatforms();
    // Get instance field reference: public System.Collections.Generic.IDictionary`2<System.String,System.Object> options
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*& dyn_options();
    // Get instance field reference: private NUnit.Framework.Internal.TestSuite <suite>5__2
    ::NUnit::Framework::Internal::TestSuite*& dyn_$suite$5__2();
    // Get instance field reference: private System.Int32 <index>5__3
    int& dyn_$index$5__3();
    // private NUnit.Framework.Interfaces.ITest System.Collections.Generic.IEnumerator<NUnit.Framework.Interfaces.ITest>.get_Current()
    // Offset: 0x18DA204
    ::NUnit::Framework::Interfaces::ITest* System_Collections_Generic_IEnumerator$NUnit_Framework_Interfaces_ITest$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x18DA26C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x18D9E48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestAssemblyBuilder::$BuildAsync$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestAssemblyBuilder::$BuildAsync$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x18D9F44
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x18D9F48
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x18DA20C
    void System_Collections_IEnumerator_Reset();
  }; // UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder/UnityEngine.TestTools.NUnitExtensions.<BuildAsync>d__3
  #pragma pack(pop)
  static check_size<sizeof(UnityTestAssemblyBuilder::$BuildAsync$d__3), 72 + sizeof(int)> __UnityEngine_TestTools_NUnitExtensions_UnityTestAssemblyBuilder_$BuildAsync$d__3SizeCheck;
  static_assert(sizeof(UnityTestAssemblyBuilder::$BuildAsync$d__3) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::System_Collections_Generic_IEnumerator$NUnit_Framework_Interfaces_ITest$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<NUnit.Framework.Interfaces.ITest>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Interfaces::ITest* (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::*)()>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::System_Collections_Generic_IEnumerator$NUnit_Framework_Interfaces_ITest$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3*), "System.Collections.Generic.IEnumerator<NUnit.Framework.Interfaces.ITest>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::*)()>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::*)()>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::*)()>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::*)()>(&UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder::$BuildAsync$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
