// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: StackTraceFilter
  class StackTraceFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::Utils::StackTraceFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::Utils::StackTraceFilter*, "UnityEngine.TestTools.Utils", "StackTraceFilter");
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.StackTraceFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class StackTraceFilter : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Get static field: static private readonly System.String[] s_FilteredLogMessages
    static ::ArrayW<::StringW> _get_s_FilteredLogMessages();
    // Set static field: static private readonly System.String[] s_FilteredLogMessages
    static void _set_s_FilteredLogMessages(::ArrayW<::StringW> value);
    // Get static field: static private readonly System.String[] s_LastMessages
    static ::ArrayW<::StringW> _get_s_LastMessages();
    // Set static field: static private readonly System.String[] s_LastMessages
    static void _set_s_LastMessages(::ArrayW<::StringW> value);
    // static private System.Void .cctor()
    // Offset: 0x2B24C18
    static void _cctor();
    // static public System.String Filter(System.String inputStackTrace)
    // Offset: 0x2B23B98
    static ::StringW Filter(::StringW inputStackTrace);
  }; // UnityEngine.TestTools.Utils.StackTraceFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::StackTraceFilter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::Utils::StackTraceFilter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::StackTraceFilter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::StackTraceFilter::Filter
// Il2CppName: Filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::TestTools::Utils::StackTraceFilter::Filter)> {
  static const MethodInfo* get() {
    static auto* inputStackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::StackTraceFilter*), "Filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputStackTrace});
  }
};
