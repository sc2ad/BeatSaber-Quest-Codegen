// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.Logging.LogScope
#include "UnityEngine/TestTools/Logging/LogScope.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::Logging::LogScope::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::Logging::LogScope::$$c*, "UnityEngine.TestTools.Logging", "LogScope/<>c");
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Logging.LogScope/UnityEngine.TestTools.Logging.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LogScope::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.Logging.LogScope/UnityEngine.TestTools.Logging.<>c <>9
    static ::UnityEngine::TestTools::Logging::LogScope::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.Logging.LogScope/UnityEngine.TestTools.Logging.<>c <>9
    static void _set_$$9(::UnityEngine::TestTools::Logging::LogScope::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static ::System::Func_2<::UnityEngine::TestTools::Logging::LogEvent*, bool>* _get_$$9__53_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static void _set_$$9__53_0(::System::Func_2<::UnityEngine::TestTools::Logging::LogEvent*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x195EB60
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x195EBC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogScope::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::Logging::LogScope::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogScope::$$c*, creationType>()));
    }
    // System.Boolean <NoUnexpectedReceived>b__53_0(UnityEngine.TestTools.Logging.LogEvent x)
    // Offset: 0x195EBCC
    bool $NoUnexpectedReceived$b__53_0(::UnityEngine::TestTools::Logging::LogEvent* x);
  }; // UnityEngine.TestTools.Logging.LogScope/UnityEngine.TestTools.Logging.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::Logging::LogScope::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Logging::LogScope::$$c::$NoUnexpectedReceived$b__53_0
// Il2CppName: <NoUnexpectedReceived>b__53_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Logging::LogScope::$$c::*)(::UnityEngine::TestTools::Logging::LogEvent*)>(&UnityEngine::TestTools::Logging::LogScope::$$c::$NoUnexpectedReceived$b__53_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Logging::LogScope::$$c*), "<NoUnexpectedReceived>b__53_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
