// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestResult
#include "NUnit/Framework/Internal/TestResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestResult because it is already included!
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestCaseResult
  class TestCaseResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::TestCaseResult);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::TestCaseResult*, "NUnit.Framework.Internal", "TestCaseResult");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestCaseResult
  // [TokenAttribute] Offset: FFFFFFFF
  class TestCaseResult : public ::NUnit::Framework::Internal::TestResult {
    public:
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod test)
    // Offset: 0x29B0F60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestCaseResult* New_ctor(::NUnit::Framework::Internal::TestMethod* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::TestCaseResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestCaseResult*, creationType>(test)));
    }
    // public override System.Int32 get_FailCount()
    // Offset: 0x29B10D4
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_FailCount()
    int get_FailCount();
    // public override System.Int32 get_PassCount()
    // Offset: 0x29B1100
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_PassCount()
    int get_PassCount();
    // public override System.Int32 get_SkipCount()
    // Offset: 0x29B1124
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_SkipCount()
    int get_SkipCount();
    // public override System.Int32 get_InconclusiveCount()
    // Offset: 0x29B1148
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Int32 TestResult::get_InconclusiveCount()
    int get_InconclusiveCount();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x29B116C
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Boolean TestResult::get_HasChildren()
    bool get_HasChildren();
    // public override System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> get_Children()
    // Offset: 0x29B1174
    // Implemented from: NUnit.Framework.Internal.TestResult
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestResult> TestResult::get_Children()
    ::System::Collections::Generic::IEnumerable_1<::NUnit::Framework::Interfaces::ITestResult*>* get_Children();
  }; // NUnit.Framework.Internal.TestCaseResult
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseResult::get_FailCount
// Il2CppName: get_FailCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestCaseResult::*)()>(&NUnit::Framework::Internal::TestCaseResult::get_FailCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestCaseResult*), "get_FailCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseResult::get_PassCount
// Il2CppName: get_PassCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestCaseResult::*)()>(&NUnit::Framework::Internal::TestCaseResult::get_PassCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestCaseResult*), "get_PassCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseResult::get_SkipCount
// Il2CppName: get_SkipCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestCaseResult::*)()>(&NUnit::Framework::Internal::TestCaseResult::get_SkipCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestCaseResult*), "get_SkipCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseResult::get_InconclusiveCount
// Il2CppName: get_InconclusiveCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::TestCaseResult::*)()>(&NUnit::Framework::Internal::TestCaseResult::get_InconclusiveCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestCaseResult*), "get_InconclusiveCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseResult::get_HasChildren
// Il2CppName: get_HasChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Internal::TestCaseResult::*)()>(&NUnit::Framework::Internal::TestCaseResult::get_HasChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestCaseResult*), "get_HasChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestCaseResult::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::NUnit::Framework::Interfaces::ITestResult*>* (NUnit::Framework::Internal::TestCaseResult::*)()>(&NUnit::Framework::Internal::TestCaseResult::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestCaseResult*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
