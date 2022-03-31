// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: PlayerConnectionMessageIds
  class PlayerConnectionMessageIds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds*, "UnityEngine.TestRunner.TestLaunchers", "PlayerConnectionMessageIds");
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.PlayerConnectionMessageIds
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerConnectionMessageIds : public ::Il2CppObject {
    public:
    // static public System.Guid get_runStartedMessageId()
    // Offset: 0x1945754
    static ::System::Guid get_runStartedMessageId();
    // static public System.Guid get_runFinishedMessageId()
    // Offset: 0x19457B8
    static ::System::Guid get_runFinishedMessageId();
    // static public System.Guid get_testStartedMessageId()
    // Offset: 0x194581C
    static ::System::Guid get_testStartedMessageId();
    // static public System.Guid get_testFinishedMessageId()
    // Offset: 0x1945880
    static ::System::Guid get_testFinishedMessageId();
    // static public System.Guid get_quitPlayerMessageId()
    // Offset: 0x19458E4
    static ::System::Guid get_quitPlayerMessageId();
    // static public System.Guid get_playerAliveHeartbeat()
    // Offset: 0x1945948
    static ::System::Guid get_playerAliveHeartbeat();
  }; // UnityEngine.TestRunner.TestLaunchers.PlayerConnectionMessageIds
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_runStartedMessageId
// Il2CppName: get_runStartedMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_runStartedMessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds*), "get_runStartedMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_runFinishedMessageId
// Il2CppName: get_runFinishedMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_runFinishedMessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds*), "get_runFinishedMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_testStartedMessageId
// Il2CppName: get_testStartedMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_testStartedMessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds*), "get_testStartedMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_testFinishedMessageId
// Il2CppName: get_testFinishedMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_testFinishedMessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds*), "get_testFinishedMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_quitPlayerMessageId
// Il2CppName: get_quitPlayerMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_quitPlayerMessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds*), "get_quitPlayerMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_playerAliveHeartbeat
// Il2CppName: get_playerAliveHeartbeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds::get_playerAliveHeartbeat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::PlayerConnectionMessageIds*), "get_playerAliveHeartbeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
