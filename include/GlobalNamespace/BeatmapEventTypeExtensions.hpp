// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventTypeExtensions
  class BeatmapEventTypeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapEventTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventTypeExtensions*, "", "BeatmapEventTypeExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventTypeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapEventTypeExtensions : public ::Il2CppObject {
    public:
    // static field const value: static public BasicBeatmapEventType kLights1
    static constexpr const int kLights1 = 0;
    // Get static field: static public BasicBeatmapEventType kLights1
    static ::GlobalNamespace::BasicBeatmapEventType _get_kLights1();
    // Set static field: static public BasicBeatmapEventType kLights1
    static void _set_kLights1(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kLights2
    static constexpr const int kLights2 = 1;
    // Get static field: static public BasicBeatmapEventType kLights2
    static ::GlobalNamespace::BasicBeatmapEventType _get_kLights2();
    // Set static field: static public BasicBeatmapEventType kLights2
    static void _set_kLights2(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kLights3
    static constexpr const int kLights3 = 2;
    // Get static field: static public BasicBeatmapEventType kLights3
    static ::GlobalNamespace::BasicBeatmapEventType _get_kLights3();
    // Set static field: static public BasicBeatmapEventType kLights3
    static void _set_kLights3(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kLights4
    static constexpr const int kLights4 = 3;
    // Get static field: static public BasicBeatmapEventType kLights4
    static ::GlobalNamespace::BasicBeatmapEventType _get_kLights4();
    // Set static field: static public BasicBeatmapEventType kLights4
    static void _set_kLights4(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kLights5
    static constexpr const int kLights5 = 4;
    // Get static field: static public BasicBeatmapEventType kLights5
    static ::GlobalNamespace::BasicBeatmapEventType _get_kLights5();
    // Set static field: static public BasicBeatmapEventType kLights5
    static void _set_kLights5(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kColorBoost
    static constexpr const int kColorBoost = 5;
    // Get static field: static public BasicBeatmapEventType kColorBoost
    static ::GlobalNamespace::BasicBeatmapEventType _get_kColorBoost();
    // Set static field: static public BasicBeatmapEventType kColorBoost
    static void _set_kColorBoost(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kRotateRings
    static constexpr const int kRotateRings = 8;
    // Get static field: static public BasicBeatmapEventType kRotateRings
    static ::GlobalNamespace::BasicBeatmapEventType _get_kRotateRings();
    // Set static field: static public BasicBeatmapEventType kRotateRings
    static void _set_kRotateRings(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kCompressExpand
    static constexpr const int kCompressExpand = 9;
    // Get static field: static public BasicBeatmapEventType kCompressExpand
    static ::GlobalNamespace::BasicBeatmapEventType _get_kCompressExpand();
    // Set static field: static public BasicBeatmapEventType kCompressExpand
    static void _set_kCompressExpand(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kLegacyEarlySpawnRotation
    static constexpr const int kLegacyEarlySpawnRotation = 14;
    // Get static field: static public BasicBeatmapEventType kLegacyEarlySpawnRotation
    static ::GlobalNamespace::BasicBeatmapEventType _get_kLegacyEarlySpawnRotation();
    // Set static field: static public BasicBeatmapEventType kLegacyEarlySpawnRotation
    static void _set_kLegacyEarlySpawnRotation(::GlobalNamespace::BasicBeatmapEventType value);
    // static field const value: static public BasicBeatmapEventType kLegacyLateSpawnRotation
    static constexpr const int kLegacyLateSpawnRotation = 15;
    // Get static field: static public BasicBeatmapEventType kLegacyLateSpawnRotation
    static ::GlobalNamespace::BasicBeatmapEventType _get_kLegacyLateSpawnRotation();
    // Set static field: static public BasicBeatmapEventType kLegacyLateSpawnRotation
    static void _set_kLegacyLateSpawnRotation(::GlobalNamespace::BasicBeatmapEventType value);
    // static public System.Boolean IsCoreLightIntensityChangeEvent(BasicBeatmapEventType basicBeatmapEventType)
    // Offset: 0x2750C18
    static bool IsCoreLightIntensityChangeEvent(::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType);
  }; // BeatmapEventTypeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventTypeExtensions::IsCoreLightIntensityChangeEvent
// Il2CppName: IsCoreLightIntensityChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BasicBeatmapEventType)>(&GlobalNamespace::BeatmapEventTypeExtensions::IsCoreLightIntensityChangeEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventType = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventTypeExtensions*), "IsCoreLightIntensityChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventType});
  }
};
