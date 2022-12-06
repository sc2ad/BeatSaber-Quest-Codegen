// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerCenterTextAnimator
  class MultiplayerCenterTextAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerCenterTextAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerCenterTextAnimator*, "", "MultiplayerCenterTextAnimator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerCenterTextAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerCenterTextAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [SpaceAttribute] Offset: 0x111A348
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Transform _scalingTarget
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* scalingTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0x111A390
    // private readonly Tweening.TimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    ::Tweening::TimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::TimeTweeningManager*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fadeInTween
    // Size: 0x8
    // Offset: 0x30
    ::Tweening::Tween_1<float>* fadeInTween;
    // Field size check
    static_assert(sizeof(::Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fadeOutTween
    // Size: 0x8
    // Offset: 0x38
    ::Tweening::Tween_1<float>* fadeOutTween;
    // Field size check
    static_assert(sizeof(::Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fontSizeTween
    // Size: 0x8
    // Offset: 0x40
    ::Tweening::Tween_1<float>* fontSizeTween;
    // Field size check
    static_assert(sizeof(::Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Color> _colorTween
    // Size: 0x8
    // Offset: 0x48
    ::Tweening::Tween_1<::UnityEngine::Color>* colorTween;
    // Field size check
    static_assert(sizeof(::Tweening::Tween_1<::UnityEngine::Color>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _offsetTween
    // Size: 0x8
    // Offset: 0x50
    ::Tweening::Tween_1<::UnityEngine::Vector3>* offsetTween;
    // Field size check
    static_assert(sizeof(::Tweening::Tween_1<::UnityEngine::Vector3>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__text();
    // Get instance field reference: private UnityEngine.Transform _scalingTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__scalingTarget();
    // Get instance field reference: private readonly Tweening.TimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::TimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private Tweening.Tween`1<System.Single> _fadeInTween
    [[deprecated("Use field access instead!")]] ::Tweening::Tween_1<float>*& dyn__fadeInTween();
    // Get instance field reference: private Tweening.Tween`1<System.Single> _fadeOutTween
    [[deprecated("Use field access instead!")]] ::Tweening::Tween_1<float>*& dyn__fadeOutTween();
    // Get instance field reference: private Tweening.Tween`1<System.Single> _fontSizeTween
    [[deprecated("Use field access instead!")]] ::Tweening::Tween_1<float>*& dyn__fontSizeTween();
    // Get instance field reference: private Tweening.Tween`1<UnityEngine.Color> _colorTween
    [[deprecated("Use field access instead!")]] ::Tweening::Tween_1<::UnityEngine::Color>*& dyn__colorTween();
    // Get instance field reference: private Tweening.Tween`1<UnityEngine.Vector3> _offsetTween
    [[deprecated("Use field access instead!")]] ::Tweening::Tween_1<::UnityEngine::Vector3>*& dyn__offsetTween();
    // public System.Void .ctor()
    // Offset: 0x14594E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerCenterTextAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerCenterTextAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerCenterTextAnimator*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1458D6C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x14590FC
    void OnDestroy();
    // public System.Void AnimateTextColor(UnityEngine.Color color, System.Single duration, EaseType easeType)
    // Offset: 0x1459194
    void AnimateTextColor(::UnityEngine::Color color, float duration, ::GlobalNamespace::EaseType easeType);
    // public System.Void AnimateFontSize(System.Single fontSize, System.Single duration, EaseType easeType)
    // Offset: 0x1459244
    void AnimateFontSize(float fontSize, float duration, ::GlobalNamespace::EaseType easeType);
    // public System.Void AnimatePositionOffsetSize(UnityEngine.Vector3 offset, System.Single duration, EaseType easeType)
    // Offset: 0x14592A8
    void AnimatePositionOffsetSize(::UnityEngine::Vector3 offset, float duration, ::GlobalNamespace::EaseType easeType);
    // public System.Void AnimateEnabled(System.Boolean isEnabled, System.Single duration, EaseType easeType)
    // Offset: 0x145934C
    void AnimateEnabled(bool isEnabled, float duration, ::GlobalNamespace::EaseType easeType);
    // public System.Void SetText(System.String text)
    // Offset: 0x14594C8
    void SetText(::StringW text);
    // private System.Void <Awake>b__8_0(System.Single val)
    // Offset: 0x14594EC
    void $Awake$b__8_0(float val);
    // private System.Void <Awake>b__8_1(System.Single val)
    // Offset: 0x1459580
    void $Awake$b__8_1(float val);
    // private System.Void <Awake>b__8_5()
    // Offset: 0x1459614
    void $Awake$b__8_5();
    // private System.Void <Awake>b__8_2(System.Single val)
    // Offset: 0x1459644
    void $Awake$b__8_2(float val);
    // private System.Void <Awake>b__8_3(UnityEngine.Color val)
    // Offset: 0x1459660
    void $Awake$b__8_3(::UnityEngine::Color val);
    // private System.Void <Awake>b__8_4(UnityEngine.Vector3 val)
    // Offset: 0x1459684
    void $Awake$b__8_4(::UnityEngine::Vector3 val);
  }; // MultiplayerCenterTextAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerCenterTextAnimator), 80 + sizeof(::Tweening::Tween_1<::UnityEngine::Vector3>*)> __GlobalNamespace_MultiplayerCenterTextAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerCenterTextAnimator) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&GlobalNamespace::MultiplayerCenterTextAnimator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&GlobalNamespace::MultiplayerCenterTextAnimator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::AnimateTextColor
// Il2CppName: AnimateTextColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(::UnityEngine::Color, float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerCenterTextAnimator::AnimateTextColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "AnimateTextColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::AnimateFontSize
// Il2CppName: AnimateFontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(float, float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerCenterTextAnimator::AnimateFontSize)> {
  static const MethodInfo* get() {
    static auto* fontSize = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "AnimateFontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fontSize, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::AnimatePositionOffsetSize
// Il2CppName: AnimatePositionOffsetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(::UnityEngine::Vector3, float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerCenterTextAnimator::AnimatePositionOffsetSize)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "AnimatePositionOffsetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::AnimateEnabled
// Il2CppName: AnimateEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(bool, float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::MultiplayerCenterTextAnimator::AnimateEnabled)> {
  static const MethodInfo* get() {
    static auto* isEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "AnimateEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isEnabled, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(::StringW)>(&GlobalNamespace::MultiplayerCenterTextAnimator::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_0
// Il2CppName: <Awake>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(float)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_1
// Il2CppName: <Awake>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(float)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_5
// Il2CppName: <Awake>b__8_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_2
// Il2CppName: <Awake>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(float)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_2)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_3
// Il2CppName: <Awake>b__8_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(::UnityEngine::Color)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_3)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_4
// Il2CppName: <Awake>b__8_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(::UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_4)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
