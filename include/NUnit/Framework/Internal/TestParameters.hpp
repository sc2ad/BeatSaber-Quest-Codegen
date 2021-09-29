// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.IApplyToTest
#include "NUnit/Framework/Interfaces/IApplyToTest.hpp"
// Including type: NUnit.Framework.Interfaces.ITestData
#include "NUnit/Framework/Interfaces/ITestData.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class TestParameters : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::IApplyToTest, public NUnit::Framework::Interfaces::ITestData*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xEEEEA4
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    NUnit::Framework::Interfaces::RunState RunState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::RunState) == 0x4);
    // Padding between fields: RunState and: Arguments
    char __padding0[0x4] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xEEEEE0
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayWrapper<::Il2CppObject*> Arguments;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<::Il2CppObject*>) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xEEEF1C
    // private System.String <TestName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* TestName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xEEEF58
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IPropertyBag*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xEEEF94
    // private System.Object[] <OriginalArguments>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::ArrayWrapper<::Il2CppObject*> OriginalArguments;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<::Il2CppObject*>) == 0x8);
    // Creating value type constructor for type: TestParameters
    TestParameters(NUnit::Framework::Interfaces::RunState RunState_ = {}, ::ArrayWrapper<::Il2CppObject*> Arguments_ = {}, ::Il2CppString* TestName_ = {}, NUnit::Framework::Interfaces::IPropertyBag* Properties_ = {}, ::ArrayWrapper<::Il2CppObject*> OriginalArguments_ = {}) noexcept : RunState{RunState_}, Arguments{Arguments_}, TestName{TestName_}, Properties{Properties_}, OriginalArguments{OriginalArguments_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IApplyToTest
    operator NUnit::Framework::Interfaces::IApplyToTest() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IApplyToTest*>(this);
    }
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestData
    operator NUnit::Framework::Interfaces::ITestData() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestData*>(this);
    }
    // Get instance field reference: private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    NUnit::Framework::Interfaces::RunState& dyn_$RunState$k__BackingField();
    // Get instance field reference: private System.Object[] <Arguments>k__BackingField
    ::ArrayWrapper<::Il2CppObject*>& dyn_$Arguments$k__BackingField();
    // Get instance field reference: private System.String <TestName>k__BackingField
    ::Il2CppString*& dyn_$TestName$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    NUnit::Framework::Interfaces::IPropertyBag*& dyn_$Properties$k__BackingField();
    // Get instance field reference: private System.Object[] <OriginalArguments>k__BackingField
    ::ArrayWrapper<::Il2CppObject*>& dyn_$OriginalArguments$k__BackingField();
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x24A49F0
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Void set_RunState(NUnit.Framework.Interfaces.RunState value)
    // Offset: 0x24A49F8
    void set_RunState(NUnit::Framework::Interfaces::RunState value);
    // public System.Object[] get_Arguments()
    // Offset: 0x24A4A00
    ::ArrayWrapper<::Il2CppObject*> get_Arguments();
    // System.Void set_Arguments(System.Object[] value)
    // Offset: 0x24A4A08
    void set_Arguments(::ArrayWrapper<::Il2CppObject*> value);
    // public System.String get_TestName()
    // Offset: 0x24A4A10
    ::Il2CppString* get_TestName();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x24A4A18
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // private System.Void set_Properties(NUnit.Framework.Interfaces.IPropertyBag value)
    // Offset: 0x24A4A20
    void set_Properties(NUnit::Framework::Interfaces::IPropertyBag* value);
    // public System.Object[] get_OriginalArguments()
    // Offset: 0x24A50C4
    ::ArrayWrapper<::Il2CppObject*> get_OriginalArguments();
    // private System.Void set_OriginalArguments(System.Object[] value)
    // Offset: 0x24A50CC
    void set_OriginalArguments(::ArrayWrapper<::Il2CppObject*> value);
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0x24A1458
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestParameters* New_ctor(::ArrayWrapper<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestParameters*, creationType>(args)));
    }
    // private System.Void InitializeAguments(System.Object[] args)
    // Offset: 0x24A496C
    void InitializeAguments(::ArrayWrapper<::Il2CppObject*> args);
    // public System.Void ApplyToTest(NUnit.Framework.Internal.Test test)
    // Offset: 0x24A4A28
    void ApplyToTest(NUnit::Framework::Internal::Test* test);
    // public System.Void .ctor()
    // Offset: 0x24A13E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestParameters*, creationType>()));
    }
  }; // NUnit.Framework.Internal.TestParameters
  #pragma pack(pop)
  static check_size<sizeof(TestParameters), 48 + sizeof(::ArrayWrapper<::Il2CppObject*>)> __NUnit_Framework_Internal_TestParametersSizeCheck;
  static_assert(sizeof(TestParameters) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestParameters*, "NUnit.Framework.Internal", "TestParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::get_RunState
// Il2CppName: get_RunState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::RunState (NUnit::Framework::Internal::TestParameters::*)()>(&NUnit::Framework::Internal::TestParameters::get_RunState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "get_RunState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::set_RunState
// Il2CppName: set_RunState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(NUnit::Framework::Interfaces::RunState)>(&NUnit::Framework::Internal::TestParameters::set_RunState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "RunState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "set_RunState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::get_Arguments
// Il2CppName: get_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<::Il2CppObject*> (NUnit::Framework::Internal::TestParameters::*)()>(&NUnit::Framework::Internal::TestParameters::get_Arguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "get_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::set_Arguments
// Il2CppName: set_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(::ArrayWrapper<::Il2CppObject*>)>(&NUnit::Framework::Internal::TestParameters::set_Arguments)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "set_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::get_TestName
// Il2CppName: get_TestName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestParameters::*)()>(&NUnit::Framework::Internal::TestParameters::get_TestName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "get_TestName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::IPropertyBag* (NUnit::Framework::Internal::TestParameters::*)()>(&NUnit::Framework::Internal::TestParameters::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::set_Properties
// Il2CppName: set_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(NUnit::Framework::Interfaces::IPropertyBag*)>(&NUnit::Framework::Internal::TestParameters::set_Properties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IPropertyBag")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "set_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::get_OriginalArguments
// Il2CppName: get_OriginalArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<::Il2CppObject*> (NUnit::Framework::Internal::TestParameters::*)()>(&NUnit::Framework::Internal::TestParameters::get_OriginalArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "get_OriginalArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::set_OriginalArguments
// Il2CppName: set_OriginalArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(::ArrayWrapper<::Il2CppObject*>)>(&NUnit::Framework::Internal::TestParameters::set_OriginalArguments)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "set_OriginalArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::InitializeAguments
// Il2CppName: InitializeAguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(::ArrayWrapper<::Il2CppObject*>)>(&NUnit::Framework::Internal::TestParameters::InitializeAguments)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "InitializeAguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::ApplyToTest
// Il2CppName: ApplyToTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(NUnit::Framework::Internal::Test*)>(&NUnit::Framework::Internal::TestParameters::ApplyToTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "ApplyToTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
