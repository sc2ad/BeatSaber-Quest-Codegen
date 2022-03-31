// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::ITestExecutionContext);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::ITestExecutionContext*, "NUnit.Framework.Internal", "ITestExecutionContext");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ITestExecutionContext
  // [TokenAttribute] Offset: FFFFFFFF
  class ITestExecutionContext {
    public:
    // public NUnit.Framework.Internal.TestResult get_CurrentResult()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::NUnit::Framework::Internal::TestResult* get_CurrentResult();
    // public System.Void set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_CurrentResult(::NUnit::Framework::Internal::TestResult* value);
    // public System.IO.TextWriter get_OutWriter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IO::TextWriter* get_OutWriter();
    // public System.Object get_TestObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_TestObject();
    // public System.Void set_TestObject(System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_TestObject(::Il2CppObject* value);
    // public System.Int32 get_TestCaseTimeout()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_TestCaseTimeout();
    // public NUnit.Framework.Constraints.ValueFormatter get_CurrentValueFormatter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::NUnit::Framework::Constraints::ValueFormatter* get_CurrentValueFormatter();
    // public System.Void IncrementAssertCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void IncrementAssertCount();
  }; // NUnit.Framework.Internal.ITestExecutionContext
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::ITestExecutionContext::get_CurrentResult
// Il2CppName: get_CurrentResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::ITestExecutionContext::*)()>(&NUnit::Framework::Internal::ITestExecutionContext::get_CurrentResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ITestExecutionContext*), "get_CurrentResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ITestExecutionContext::set_CurrentResult
// Il2CppName: set_CurrentResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::ITestExecutionContext::*)(::NUnit::Framework::Internal::TestResult*)>(&NUnit::Framework::Internal::ITestExecutionContext::set_CurrentResult)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ITestExecutionContext*), "set_CurrentResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ITestExecutionContext::get_OutWriter
// Il2CppName: get_OutWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextWriter* (NUnit::Framework::Internal::ITestExecutionContext::*)()>(&NUnit::Framework::Internal::ITestExecutionContext::get_OutWriter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ITestExecutionContext*), "get_OutWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ITestExecutionContext::get_TestObject
// Il2CppName: get_TestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::ITestExecutionContext::*)()>(&NUnit::Framework::Internal::ITestExecutionContext::get_TestObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ITestExecutionContext*), "get_TestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ITestExecutionContext::set_TestObject
// Il2CppName: set_TestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::ITestExecutionContext::*)(::Il2CppObject*)>(&NUnit::Framework::Internal::ITestExecutionContext::set_TestObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ITestExecutionContext*), "set_TestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ITestExecutionContext::get_TestCaseTimeout
// Il2CppName: get_TestCaseTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NUnit::Framework::Internal::ITestExecutionContext::*)()>(&NUnit::Framework::Internal::ITestExecutionContext::get_TestCaseTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ITestExecutionContext*), "get_TestCaseTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ITestExecutionContext::get_CurrentValueFormatter
// Il2CppName: get_CurrentValueFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::ValueFormatter* (NUnit::Framework::Internal::ITestExecutionContext::*)()>(&NUnit::Framework::Internal::ITestExecutionContext::get_CurrentValueFormatter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ITestExecutionContext*), "get_CurrentValueFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::ITestExecutionContext::IncrementAssertCount
// Il2CppName: IncrementAssertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::ITestExecutionContext::*)()>(&NUnit::Framework::Internal::ITestExecutionContext::IncrementAssertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::ITestExecutionContext*), "IncrementAssertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
