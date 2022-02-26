// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VisualMetronome
  class VisualMetronome;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VisualMetronome);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VisualMetronome*, "", "VisualMetronome");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: VisualMetronome
  // [TokenAttribute] Offset: FFFFFFFF
  class VisualMetronome : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single _leftPadding
    // Size: 0x4
    // Offset: 0x20
    float leftPadding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightPadding
    // Size: 0x4
    // Offset: 0x24
    float rightPadding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.RectTransform _ticker
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RectTransform* ticker;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _movingTicker
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::RectTransform* movingTicker;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Image _tickerImage
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Image* tickerImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _movingTickerImage
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Image* movingTickerImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private System.Single _metronomeInterval
    // Size: 0x4
    // Offset: 0x48
    float metronomeInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 _normalTickerSize
    // Size: 0x8
    // Offset: 0x4C
    ::UnityEngine::Vector2 normalTickerSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _tickTickerSize0
    // Size: 0x8
    // Offset: 0x54
    ::UnityEngine::Vector2 tickTickerSize0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _tickTickerSize1
    // Size: 0x8
    // Offset: 0x5C
    ::UnityEngine::Vector2 tickTickerSize1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x64
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevAudioTime
    // Size: 0x4
    // Offset: 0x68
    float prevAudioTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _zeroOffset
    // Size: 0x4
    // Offset: 0x6C
    float zeroOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _direction
    // Size: 0x4
    // Offset: 0x70
    float direction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _dontTickThisFrame
    // Size: 0x1
    // Offset: 0x74
    bool dontTickThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Single _leftPadding
    float& dyn__leftPadding();
    // Get instance field reference: private System.Single _rightPadding
    float& dyn__rightPadding();
    // Get instance field reference: private UnityEngine.RectTransform _ticker
    ::UnityEngine::RectTransform*& dyn__ticker();
    // Get instance field reference: private UnityEngine.RectTransform _movingTicker
    ::UnityEngine::RectTransform*& dyn__movingTicker();
    // Get instance field reference: private UnityEngine.UI.Image _tickerImage
    ::UnityEngine::UI::Image*& dyn__tickerImage();
    // Get instance field reference: private UnityEngine.UI.Image _movingTickerImage
    ::UnityEngine::UI::Image*& dyn__movingTickerImage();
    // Get instance field reference: private System.Single _metronomeInterval
    float& dyn__metronomeInterval();
    // Get instance field reference: private UnityEngine.Vector2 _normalTickerSize
    ::UnityEngine::Vector2& dyn__normalTickerSize();
    // Get instance field reference: private UnityEngine.Vector2 _tickTickerSize0
    ::UnityEngine::Vector2& dyn__tickTickerSize0();
    // Get instance field reference: private UnityEngine.Vector2 _tickTickerSize1
    ::UnityEngine::Vector2& dyn__tickTickerSize1();
    // Get instance field reference: private System.Single _smooth
    float& dyn__smooth();
    // Get instance field reference: private System.Single _prevAudioTime
    float& dyn__prevAudioTime();
    // Get instance field reference: private System.Single _zeroOffset
    float& dyn__zeroOffset();
    // Get instance field reference: private System.Single _direction
    float& dyn__direction();
    // Get instance field reference: private System.Boolean _dontTickThisFrame
    bool& dyn__dontTickThisFrame();
    // public System.Void set_tickerColor(UnityEngine.Color value)
    // Offset: 0x2CBC65C
    void set_tickerColor(::UnityEngine::Color value);
    // public System.Void set_movingTickerColor(UnityEngine.Color value)
    // Offset: 0x2CBC680
    void set_movingTickerColor(::UnityEngine::Color value);
    // public System.Single get_zeroOffset()
    // Offset: 0x2CBC6B4
    float get_zeroOffset();
    // public System.Void set_zeroOffset(System.Single value)
    // Offset: 0x2CBC6A4
    void set_zeroOffset(float value);
    // protected System.Void Awake()
    // Offset: 0x2CBC6BC
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x2CBC7CC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x2CBC820
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x2CBC874
    void Update();
    // private System.Void SetMovingTickerNormalizedPosition(System.Single t)
    // Offset: 0x2CBCA38
    void SetMovingTickerNormalizedPosition(float t);
    // public System.Void .ctor()
    // Offset: 0x2CBCB1C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualMetronome* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VisualMetronome::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualMetronome*, creationType>()));
    }
  }; // VisualMetronome
  #pragma pack(pop)
  static check_size<sizeof(VisualMetronome), 116 + sizeof(bool)> __GlobalNamespace_VisualMetronomeSizeCheck;
  static_assert(sizeof(VisualMetronome) == 0x75);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::set_tickerColor
// Il2CppName: set_tickerColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)(::UnityEngine::Color)>(&GlobalNamespace::VisualMetronome::set_tickerColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "set_tickerColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::set_movingTickerColor
// Il2CppName: set_movingTickerColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)(::UnityEngine::Color)>(&GlobalNamespace::VisualMetronome::set_movingTickerColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "set_movingTickerColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::get_zeroOffset
// Il2CppName: get_zeroOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::get_zeroOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "get_zeroOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::set_zeroOffset
// Il2CppName: set_zeroOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)(float)>(&GlobalNamespace::VisualMetronome::set_zeroOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "set_zeroOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)()>(&GlobalNamespace::VisualMetronome::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::SetMovingTickerNormalizedPosition
// Il2CppName: SetMovingTickerNormalizedPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VisualMetronome::*)(float)>(&GlobalNamespace::VisualMetronome::SetMovingTickerNormalizedPosition)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VisualMetronome*), "SetMovingTickerNormalizedPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VisualMetronome::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
