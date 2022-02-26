// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlatformAchievementsHandler
  class PlatformAchievementsHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlatformAchievementsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformAchievementsHandler*, "", "PlatformAchievementsHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlatformAchievementsHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformAchievementsHandler : public ::Il2CppObject {
    public:
    // public HMAsyncRequest UnlockAchievement(System.String achievementId, PlatformAchievementsModelSO/UnlockAchievementCompletionHandler completionHandler)
    // Offset: 0xFFFFFFFF
    ::GlobalNamespace::HMAsyncRequest* UnlockAchievement(::StringW achievementId, ::GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUnlockedAchievements(PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler)
    // Offset: 0xFFFFFFFF
    ::GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(::GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler);
    // protected System.Void .ctor()
    // Offset: 0x2ABE188
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAchievementsHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlatformAchievementsHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAchievementsHandler*, creationType>()));
    }
  }; // PlatformAchievementsHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsHandler::UnlockAchievement
// Il2CppName: UnlockAchievement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformAchievementsHandler::*)(::StringW, ::GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*)>(&GlobalNamespace::PlatformAchievementsHandler::UnlockAchievement)> {
  static const MethodInfo* get() {
    static auto* achievementId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/UnlockAchievementCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsHandler*), "UnlockAchievement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{achievementId, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsHandler::GetUnlockedAchievements
// Il2CppName: GetUnlockedAchievements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (GlobalNamespace::PlatformAchievementsHandler::*)(::GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*)>(&GlobalNamespace::PlatformAchievementsHandler::GetUnlockedAchievements)> {
  static const MethodInfo* get() {
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsHandler*), "GetUnlockedAchievements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
