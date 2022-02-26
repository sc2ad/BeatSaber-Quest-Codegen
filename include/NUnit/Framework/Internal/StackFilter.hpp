// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: StackFilter
  class StackFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::StackFilter);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::StackFilter*, "NUnit.Framework.Internal", "StackFilter");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.StackFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class StackFilter : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Text.RegularExpressions.Regex assertOrAssumeRegex
    static ::System::Text::RegularExpressions::Regex* _get_assertOrAssumeRegex();
    // Set static field: static private readonly System.Text.RegularExpressions.Regex assertOrAssumeRegex
    static void _set_assertOrAssumeRegex(::System::Text::RegularExpressions::Regex* value);
    // static private System.Void .cctor()
    // Offset: 0x28B6800
    static void _cctor();
    // static public System.String Filter(System.String rawTrace)
    // Offset: 0x28B65E8
    static ::StringW Filter(::StringW rawTrace);
  }; // NUnit.Framework.Internal.StackFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::StackFilter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::StackFilter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::StackFilter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::StackFilter::Filter
// Il2CppName: Filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&NUnit::Framework::Internal::StackFilter::Filter)> {
  static const MethodInfo* get() {
    static auto* rawTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::StackFilter*), "Filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawTrace});
  }
};
