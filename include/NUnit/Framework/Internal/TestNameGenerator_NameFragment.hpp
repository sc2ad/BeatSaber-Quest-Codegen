// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
  // [TokenAttribute] Offset: FFFFFFFF
  class TestNameGenerator::NameFragment : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NameFragment
    NameFragment() noexcept {}
    // public System.String GetText(NUnit.Framework.Internal.TestMethod testMethod, System.Object[] args)
    // Offset: 0x24A45D4
    ::Il2CppString* GetText(NUnit::Framework::Internal::TestMethod* testMethod, ::ArrayWrapper<::Il2CppObject*> args);
    // public System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::ArrayWrapper<::Il2CppObject*> args);
    // static protected System.Void AppendGenericTypeNames(System.Text.StringBuilder sb, System.Reflection.MethodInfo method)
    // Offset: 0x24A43F8
    static void AppendGenericTypeNames(System::Text::StringBuilder* sb, System::Reflection::MethodInfo* method);
    // static protected System.String GetDisplayString(System.Object arg, System.Int32 stringMax)
    // Offset: 0x24A3830
    static ::Il2CppString* GetDisplayString(::Il2CppObject* arg, int stringMax);
    // static private System.String EscapeSingleChar(System.Char c)
    // Offset: 0x24A471C
    static ::Il2CppString* EscapeSingleChar(::Il2CppChar c);
    // static private System.String EscapeCharInString(System.Char c)
    // Offset: 0x24A46B4
    static ::Il2CppString* EscapeCharInString(::Il2CppChar c);
    // static private System.String EscapeControlChar(System.Char c)
    // Offset: 0x24A4784
    static ::Il2CppString* EscapeControlChar(::Il2CppChar c);
    // protected System.Void .ctor()
    // Offset: 0x24A3704
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator::NameFragment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestNameGenerator::NameFragment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator::NameFragment*, creationType>()));
    }
  }; // NUnit.Framework.Internal.TestNameGenerator/NUnit.Framework.Internal.NameFragment
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::NameFragment*, "NUnit.Framework.Internal", "TestNameGenerator/NameFragment");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestNameGenerator::NameFragment::*)(NUnit::Framework::Internal::TestMethod*, ::ArrayWrapper<::Il2CppObject*>)>(&NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetText)> {
  static const MethodInfo* get() {
    static auto* testMethod = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestMethod")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::NameFragment*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testMethod, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Internal::TestNameGenerator::NameFragment::*)(System::Reflection::MethodInfo*, ::ArrayWrapper<::Il2CppObject*>)>(&NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetText)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::NameFragment*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, args});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::NameFragment::AppendGenericTypeNames
// Il2CppName: AppendGenericTypeNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, System::Reflection::MethodInfo*)>(&NUnit::Framework::Internal::TestNameGenerator::NameFragment::AppendGenericTypeNames)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::NameFragment*), "AppendGenericTypeNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, method});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetDisplayString
// Il2CppName: GetDisplayString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*, int)>(&NUnit::Framework::Internal::TestNameGenerator::NameFragment::GetDisplayString)> {
  static const MethodInfo* get() {
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* stringMax = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::NameFragment*), "GetDisplayString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg, stringMax});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeSingleChar
// Il2CppName: EscapeSingleChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppChar)>(&NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeSingleChar)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::NameFragment*), "EscapeSingleChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeCharInString
// Il2CppName: EscapeCharInString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppChar)>(&NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeCharInString)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::NameFragment*), "EscapeCharInString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeControlChar
// Il2CppName: EscapeControlChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppChar)>(&NUnit::Framework::Internal::TestNameGenerator::NameFragment::EscapeControlChar)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TestNameGenerator::NameFragment*), "EscapeControlChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TestNameGenerator::NameFragment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
