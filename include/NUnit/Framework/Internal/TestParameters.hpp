// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestData
#include "NUnit/Framework/Interfaces/ITestData.hpp"
// Including type: NUnit.Framework.Interfaces.IApplyToTest
#include "NUnit/Framework/Interfaces/IApplyToTest.hpp"
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
  class TestParameters : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITestData, public NUnit::Framework::Interfaces::IApplyToTest*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE052E0
    // [DebuggerBrowsableAttribute] Offset: 0xE052E0
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    NUnit::Framework::Interfaces::RunState RunState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::RunState) == 0x4);
    // Padding between fields: RunState and: Arguments
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE0531C
    // [DebuggerBrowsableAttribute] Offset: 0xE0531C
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* Arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE05358
    // [CompilerGeneratedAttribute] Offset: 0xE05358
    // private System.String <TestName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* TestName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE05394
    // [DebuggerBrowsableAttribute] Offset: 0xE05394
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IPropertyBag*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE053D0
    // [CompilerGeneratedAttribute] Offset: 0xE053D0
    // private System.Object[] <OriginalArguments>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppObject*>* OriginalArguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: TestParameters
    TestParameters(NUnit::Framework::Interfaces::RunState RunState_ = {}, ::Array<::Il2CppObject*>* Arguments_ = {}, ::Il2CppString* TestName_ = {}, NUnit::Framework::Interfaces::IPropertyBag* Properties_ = {}, ::Array<::Il2CppObject*>* OriginalArguments_ = {}) noexcept : RunState{RunState_}, Arguments{Arguments_}, TestName{TestName_}, Properties{Properties_}, OriginalArguments{OriginalArguments_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestData
    operator NUnit::Framework::Interfaces::ITestData() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestData*>(this);
    }
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IApplyToTest
    operator NUnit::Framework::Interfaces::IApplyToTest() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IApplyToTest*>(this);
    }
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0x22AF38C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestParameters* New_ctor(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestParameters*, creationType>(args)));
    }
    // private System.Void InitializeAguments(System.Object[] args)
    // Offset: 0x22B2898
    void InitializeAguments(::Array<::Il2CppObject*>* args);
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x22B291C
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Void set_RunState(NUnit.Framework.Interfaces.RunState value)
    // Offset: 0x22B2924
    void set_RunState(NUnit::Framework::Interfaces::RunState value);
    // public System.Object[] get_Arguments()
    // Offset: 0x22B292C
    ::Array<::Il2CppObject*>* get_Arguments();
    // System.Void set_Arguments(System.Object[] value)
    // Offset: 0x22B2934
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // public System.String get_TestName()
    // Offset: 0x22B293C
    ::Il2CppString* get_TestName();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x22B2944
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // private System.Void set_Properties(NUnit.Framework.Interfaces.IPropertyBag value)
    // Offset: 0x22B294C
    void set_Properties(NUnit::Framework::Interfaces::IPropertyBag* value);
    // public System.Void ApplyToTest(NUnit.Framework.Internal.Test test)
    // Offset: 0x22B2954
    void ApplyToTest(NUnit::Framework::Internal::Test* test);
    // public System.Object[] get_OriginalArguments()
    // Offset: 0x22B2FF0
    ::Array<::Il2CppObject*>* get_OriginalArguments();
    // private System.Void set_OriginalArguments(System.Object[] value)
    // Offset: 0x22B2FF8
    void set_OriginalArguments(::Array<::Il2CppObject*>* value);
    // public System.Void .ctor()
    // Offset: 0x22AF318
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestParameters*, creationType>()));
    }
  }; // NUnit.Framework.Internal.TestParameters
  #pragma pack(pop)
  static check_size<sizeof(TestParameters), 48 + sizeof(::Array<::Il2CppObject*>*)> __NUnit_Framework_Internal_TestParametersSizeCheck;
  static_assert(sizeof(TestParameters) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestParameters*, "NUnit.Framework.Internal", "TestParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::InitializeAguments
// Il2CppName: InitializeAguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TestParameters::InitializeAguments)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "InitializeAguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (NUnit::Framework::Internal::TestParameters::*)()>(&NUnit::Framework::Internal::TestParameters::get_Arguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "get_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::set_Arguments
// Il2CppName: set_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TestParameters::set_Arguments)> {
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
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::ApplyToTest
// Il2CppName: ApplyToTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(NUnit::Framework::Internal::Test*)>(&NUnit::Framework::Internal::TestParameters::ApplyToTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "ApplyToTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::get_OriginalArguments
// Il2CppName: get_OriginalArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppObject*>* (NUnit::Framework::Internal::TestParameters::*)()>(&NUnit::Framework::Internal::TestParameters::get_OriginalArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "get_OriginalArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::set_OriginalArguments
// Il2CppName: set_OriginalArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::TestParameters::*)(::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TestParameters::set_OriginalArguments)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestParameters*), "set_OriginalArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
