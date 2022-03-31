// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
  // Forward declaring type: ColorBoostBeatmapEventData
  class ColorBoostBeatmapEventData;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: SongTimeTweeningManager
  class SongTimeTweeningManager;
  // Forward declaring type: ColorTween
  class ColorTween;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightSwitchEventEffect
  class LightSwitchEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightSwitchEventEffect*, "", "LightSwitchEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: LightSwitchEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class LightSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
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
    // private ColorSO _lightColor0
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ColorSO* lightColor0;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _lightColor1
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ColorSO* lightColor1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor0
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ColorSO* highlightColor0;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor1
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ColorSO* highlightColor1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _lightColor0Boost
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ColorSO* lightColor0Boost;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _lightColor1Boost
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ColorSO* lightColor1Boost;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor0Boost
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ColorSO* highlightColor0Boost;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor1Boost
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::ColorSO* highlightColor1Boost;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // private System.Single _offColorIntensity
    // Size: 0x4
    // Offset: 0x58
    float offColorIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _lightOnStart
    // Size: 0x1
    // Offset: 0x5C
    bool lightOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lightOnStart and: lightsID
    char __padding9[0x3] = {};
    // private System.Int32 _lightsID
    // Size: 0x4
    // Offset: 0x60
    int lightsID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BasicBeatmapEventType _event
    // Size: 0x4
    // Offset: 0x64
    ::GlobalNamespace::BasicBeatmapEventType event;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // [InjectAttribute] Offset: 0x1251654
    // private readonly LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIdManager*) == 0x8);
    // [InjectAttribute] Offset: 0x1251664
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // [InjectAttribute] Offset: 0x1251674
    // private readonly Tweening.SongTimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x78
    ::Tweening::SongTimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::SongTimeTweeningManager*) == 0x8);
    // private Tweening.ColorTween _colorTween
    // Size: 0x8
    // Offset: 0x80
    ::Tweening::ColorTween* colorTween;
    // Field size check
    static_assert(sizeof(::Tweening::ColorTween*) == 0x8);
    // private UnityEngine.Color _alternativeFromColor
    // Size: 0x10
    // Offset: 0x88
    ::UnityEngine::Color alternativeFromColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _alternativeToColor
    // Size: 0x10
    // Offset: 0x98
    ::UnityEngine::Color alternativeToColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _usingBoostColors
    // Size: 0x1
    // Offset: 0xA8
    bool usingBoostColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usingBoostColors and: colorChangeBeatmapDataCallbackWrapper
    char __padding18[0x7] = {};
    // private BeatmapDataCallbackWrapper _colorChangeBeatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::BeatmapDataCallbackWrapper* colorChangeBeatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    // private BeatmapDataCallbackWrapper _colorBoostBeatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::BeatmapDataCallbackWrapper* colorBoostBeatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kFlashAndFadeDuration
    static constexpr const float kFlashAndFadeDuration = 1.5;
    // Get static field: static private System.Single kFlashAndFadeDuration
    static float _get_kFlashAndFadeDuration();
    // Set static field: static private System.Single kFlashAndFadeDuration
    static void _set_kFlashAndFadeDuration(float value);
    // static field const value: static private System.Single kHighlightDuration
    static constexpr const float kHighlightDuration = 0.6;
    // Get static field: static private System.Single kHighlightDuration
    static float _get_kHighlightDuration();
    // Set static field: static private System.Single kHighlightDuration
    static void _set_kHighlightDuration(float value);
    // Get instance field reference: private ColorSO _lightColor0
    ::GlobalNamespace::ColorSO*& dyn__lightColor0();
    // Get instance field reference: private ColorSO _lightColor1
    ::GlobalNamespace::ColorSO*& dyn__lightColor1();
    // Get instance field reference: private ColorSO _highlightColor0
    ::GlobalNamespace::ColorSO*& dyn__highlightColor0();
    // Get instance field reference: private ColorSO _highlightColor1
    ::GlobalNamespace::ColorSO*& dyn__highlightColor1();
    // Get instance field reference: private ColorSO _lightColor0Boost
    ::GlobalNamespace::ColorSO*& dyn__lightColor0Boost();
    // Get instance field reference: private ColorSO _lightColor1Boost
    ::GlobalNamespace::ColorSO*& dyn__lightColor1Boost();
    // Get instance field reference: private ColorSO _highlightColor0Boost
    ::GlobalNamespace::ColorSO*& dyn__highlightColor0Boost();
    // Get instance field reference: private ColorSO _highlightColor1Boost
    ::GlobalNamespace::ColorSO*& dyn__highlightColor1Boost();
    // Get instance field reference: private System.Single _offColorIntensity
    float& dyn__offColorIntensity();
    // Get instance field reference: private System.Boolean _lightOnStart
    bool& dyn__lightOnStart();
    // Get instance field reference: private System.Int32 _lightsID
    int& dyn__lightsID();
    // Get instance field reference: private BasicBeatmapEventType _event
    ::GlobalNamespace::BasicBeatmapEventType& dyn__event();
    // Get instance field reference: private readonly LightWithIdManager _lightManager
    ::GlobalNamespace::LightWithIdManager*& dyn__lightManager();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly Tweening.SongTimeTweeningManager _tweeningManager
    ::Tweening::SongTimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private Tweening.ColorTween _colorTween
    ::Tweening::ColorTween*& dyn__colorTween();
    // Get instance field reference: private UnityEngine.Color _alternativeFromColor
    ::UnityEngine::Color& dyn__alternativeFromColor();
    // Get instance field reference: private UnityEngine.Color _alternativeToColor
    ::UnityEngine::Color& dyn__alternativeToColor();
    // Get instance field reference: private System.Boolean _usingBoostColors
    bool& dyn__usingBoostColors();
    // Get instance field reference: private BeatmapDataCallbackWrapper _colorChangeBeatmapDataCallbackWrapper
    ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__colorChangeBeatmapDataCallbackWrapper();
    // Get instance field reference: private BeatmapDataCallbackWrapper _colorBoostBeatmapDataCallbackWrapper
    ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__colorBoostBeatmapDataCallbackWrapper();
    // public System.Int32 get_lightsId()
    // Offset: 0x148FB58
    int get_lightsId();
    // protected System.Void Awake()
    // Offset: 0x148FB60
    void Awake();
    // protected System.Void Start()
    // Offset: 0x148FD64
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x148FEEC
    void OnDestroy();
    // private System.Void HandleColorChangeBeatmapEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x148FFAC
    void HandleColorChangeBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // private System.Void HandleColorBoostBeatmapEvent(ColorBoostBeatmapEventData eventData)
    // Offset: 0x1490644
    void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData);
    // private System.Void SetupTweenAndSaveOtherColors(UnityEngine.Color fromColor, UnityEngine.Color toColor, UnityEngine.Color alternativeFromColor, UnityEngine.Color alternativeToColor)
    // Offset: 0x148FD24
    void SetupTweenAndSaveOtherColors(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor, ::UnityEngine::Color alternativeToColor);
    // private System.Void CheckNextEventForFade(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x1490340
    void CheckNextEventForFade(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // private UnityEngine.Color GetNormalColor(System.Int32 beatmapEventValue, System.Boolean colorBoost)
    // Offset: 0x149056C
    ::UnityEngine::Color GetNormalColor(int beatmapEventValue, bool colorBoost);
    // private UnityEngine.Color GetHighlightColor(System.Int32 beatmapEventValue, System.Boolean colorBoost)
    // Offset: 0x14905D8
    ::UnityEngine::Color GetHighlightColor(int beatmapEventValue, bool colorBoost);
    // private System.Boolean IsColor0(System.Int32 beatmapEventValue)
    // Offset: 0x1490770
    bool IsColor0(int beatmapEventValue);
    // private System.Boolean IsFixedDurationLightSwitch(System.Int32 beatmapEventValue)
    // Offset: 0x1490734
    bool IsFixedDurationLightSwitch(int beatmapEventValue);
    // private System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x149031C
    void SetColor(::UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x149077C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightSwitchEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightSwitchEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightSwitchEventEffect*, creationType>()));
    }
  }; // LightSwitchEventEffect
  #pragma pack(pop)
  static check_size<sizeof(LightSwitchEventEffect), 184 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_LightSwitchEventEffectSizeCheck;
  static_assert(sizeof(LightSwitchEventEffect) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::get_lightsId
// Il2CppName: get_lightsId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::get_lightsId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "get_lightsId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::HandleColorChangeBeatmapEvent
// Il2CppName: HandleColorChangeBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::LightSwitchEventEffect::HandleColorChangeBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "HandleColorChangeBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::HandleColorBoostBeatmapEvent
// Il2CppName: HandleColorBoostBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(&GlobalNamespace::LightSwitchEventEffect::HandleColorBoostBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("", "ColorBoostBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "HandleColorBoostBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::SetupTweenAndSaveOtherColors
// Il2CppName: SetupTweenAndSaveOtherColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&GlobalNamespace::LightSwitchEventEffect::SetupTweenAndSaveOtherColors)> {
  static const MethodInfo* get() {
    static auto* fromColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* toColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* alternativeFromColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* alternativeToColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "SetupTweenAndSaveOtherColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromColor, toColor, alternativeFromColor, alternativeToColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::CheckNextEventForFade
// Il2CppName: CheckNextEventForFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::LightSwitchEventEffect::CheckNextEventForFade)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "CheckNextEventForFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::GetNormalColor
// Il2CppName: GetNormalColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::LightSwitchEventEffect::*)(int, bool)>(&GlobalNamespace::LightSwitchEventEffect::GetNormalColor)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* colorBoost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "GetNormalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue, colorBoost});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::GetHighlightColor
// Il2CppName: GetHighlightColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::LightSwitchEventEffect::*)(int, bool)>(&GlobalNamespace::LightSwitchEventEffect::GetHighlightColor)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* colorBoost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "GetHighlightColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue, colorBoost});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::IsColor0
// Il2CppName: IsColor0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightSwitchEventEffect::*)(int)>(&GlobalNamespace::LightSwitchEventEffect::IsColor0)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "IsColor0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::IsFixedDurationLightSwitch
// Il2CppName: IsFixedDurationLightSwitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightSwitchEventEffect::*)(int)>(&GlobalNamespace::LightSwitchEventEffect::IsFixedDurationLightSwitch)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "IsFixedDurationLightSwitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(::UnityEngine::Color)>(&GlobalNamespace::LightSwitchEventEffect::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
