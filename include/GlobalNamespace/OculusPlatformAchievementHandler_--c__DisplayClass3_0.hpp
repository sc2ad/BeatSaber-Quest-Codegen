// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformAchievementHandler
#include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementProgressList
  class AchievementProgressList;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0*, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformAchievementHandler/<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformAchievementHandler::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*) == 0x8);
    // public OculusPlatformAchievementHandler <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OculusPlatformAchievementHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OculusPlatformAchievementHandler*) == 0x8);
    public:
    // Get instance field reference: public PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler
    ::GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*& dyn_completionHandler();
    // Get instance field reference: public OculusPlatformAchievementHandler <>4__this
    ::GlobalNamespace::OculusPlatformAchievementHandler*& dyn_$$4__this();
    // System.Void <GetUnlockedAchievements>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementProgressList> message)
    // Offset: 0x15137F0
    void $GetUnlockedAchievements$b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>* message);
    // public System.Void .ctor()
    // Offset: 0x1513794
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAchievementHandler::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAchievementHandler::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // OculusPlatformAchievementHandler/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformAchievementHandler::$$c__DisplayClass3_0), 24 + sizeof(::GlobalNamespace::OculusPlatformAchievementHandler*)> __GlobalNamespace_OculusPlatformAchievementHandler_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(OculusPlatformAchievementHandler::$$c__DisplayClass3_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0::$GetUnlockedAchievements$b__0
// Il2CppName: <GetUnlockedAchievements>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*)>(&GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0::$GetUnlockedAchievements$b__0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "AchievementProgressList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0*), "<GetUnlockedAchievements>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAchievementHandler::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
