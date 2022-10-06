// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: EaseType
#include "GlobalNamespace/EaseType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
  // Forward declaring type: Vector2Tween
  class Vector2Tween;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AnnotatedBeatmapLevelCollectionsGridViewAnimator
  class AnnotatedBeatmapLevelCollectionsGridViewAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*, "", "AnnotatedBeatmapLevelCollectionsGridViewAnimator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: AnnotatedBeatmapLevelCollectionsGridViewAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class AnnotatedBeatmapLevelCollectionsGridViewAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.RectTransform _viewportTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* viewportTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _contentTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* contentTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0x110C2CC
    // private System.Single _transitionDuration
    // Size: 0x4
    // Offset: 0x28
    float transitionDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private EaseType _easeType
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::EaseType easeType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EaseType) == 0x4);
    // [InjectAttribute] Offset: 0x110C314
    // private readonly Tweening.TimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x30
    ::Tweening::TimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::TimeTweeningManager*) == 0x8);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x38
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _rowCount
    // Size: 0x4
    // Offset: 0x3C
    int rowCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _selectedRow
    // Size: 0x4
    // Offset: 0x40
    int selectedRow;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedRow and: viewportSizeTween
    char __padding7[0x4] = {};
    // private Tweening.Vector2Tween _viewportSizeTween
    // Size: 0x8
    // Offset: 0x48
    ::Tweening::Vector2Tween* viewportSizeTween;
    // Field size check
    static_assert(sizeof(::Tweening::Vector2Tween*) == 0x8);
    // private Tweening.Vector2Tween _contentPositionTween
    // Size: 0x8
    // Offset: 0x50
    ::Tweening::Vector2Tween* contentPositionTween;
    // Field size check
    static_assert(sizeof(::Tweening::Vector2Tween*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _viewportTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__viewportTransform();
    // Get instance field reference: private UnityEngine.RectTransform _contentTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__contentTransform();
    // Get instance field reference: private System.Single _transitionDuration
    [[deprecated("Use field access instead!")]] float& dyn__transitionDuration();
    // Get instance field reference: private EaseType _easeType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EaseType& dyn__easeType();
    // Get instance field reference: private readonly Tweening.TimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::TimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private System.Single _rowHeight
    [[deprecated("Use field access instead!")]] float& dyn__rowHeight();
    // Get instance field reference: private System.Int32 _rowCount
    [[deprecated("Use field access instead!")]] int& dyn__rowCount();
    // Get instance field reference: private System.Int32 _selectedRow
    [[deprecated("Use field access instead!")]] int& dyn__selectedRow();
    // Get instance field reference: private Tweening.Vector2Tween _viewportSizeTween
    [[deprecated("Use field access instead!")]] ::Tweening::Vector2Tween*& dyn__viewportSizeTween();
    // Get instance field reference: private Tweening.Vector2Tween _contentPositionTween
    [[deprecated("Use field access instead!")]] ::Tweening::Vector2Tween*& dyn__contentPositionTween();
    // public System.Void .ctor()
    // Offset: 0x1531F8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnnotatedBeatmapLevelCollectionsGridViewAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnnotatedBeatmapLevelCollectionsGridViewAnimator*, creationType>()));
    }
    // public System.Void Init(System.Single rowHeight, System.Int32 rowCount)
    // Offset: 0x1530450
    void Init(float rowHeight, int rowCount);
    // protected System.Void OnDestroy()
    // Offset: 0x1531EA4
    void OnDestroy();
    // public System.Void ScrollToRowIdxInstant(System.Int32 selectedRow)
    // Offset: 0x1530DC4
    void ScrollToRowIdxInstant(int selectedRow);
    // public System.Void AnimateOpen(System.Boolean animated)
    // Offset: 0x1530E88
    void AnimateOpen(bool animated);
    // public System.Void AnimateClose(System.Int32 selectedRow, System.Boolean animated)
    // Offset: 0x1531244
    void AnimateClose(int selectedRow, bool animated);
    // private System.Void DespawnAllActiveTweens()
    // Offset: 0x1531EA8
    void DespawnAllActiveTweens();
    // private System.Single GetContentYOffset()
    // Offset: 0x1531E78
    float GetContentYOffset();
    // private System.Void <AnimateOpen>b__13_0(UnityEngine.Vector2 size)
    // Offset: 0x1531FA4
    void $AnimateOpen$b__13_0(::UnityEngine::Vector2 size);
    // private System.Void <AnimateOpen>b__13_1()
    // Offset: 0x1531FC0
    void $AnimateOpen$b__13_1();
    // private System.Void <AnimateOpen>b__13_2(UnityEngine.Vector2 pos)
    // Offset: 0x153204C
    void $AnimateOpen$b__13_2(::UnityEngine::Vector2 pos);
    // private System.Void <AnimateOpen>b__13_3()
    // Offset: 0x1532068
    void $AnimateOpen$b__13_3();
    // private System.Void <AnimateClose>b__14_0(UnityEngine.Vector2 size)
    // Offset: 0x15320F4
    void $AnimateClose$b__14_0(::UnityEngine::Vector2 size);
    // private System.Void <AnimateClose>b__14_1()
    // Offset: 0x1532110
    void $AnimateClose$b__14_1();
    // private System.Void <AnimateClose>b__14_2(UnityEngine.Vector2 pos)
    // Offset: 0x153219C
    void $AnimateClose$b__14_2(::UnityEngine::Vector2 pos);
    // private System.Void <AnimateClose>b__14_3()
    // Offset: 0x15321B8
    void $AnimateClose$b__14_3();
  }; // AnnotatedBeatmapLevelCollectionsGridViewAnimator
  #pragma pack(pop)
  static check_size<sizeof(AnnotatedBeatmapLevelCollectionsGridViewAnimator), 80 + sizeof(::Tweening::Vector2Tween*)> __GlobalNamespace_AnnotatedBeatmapLevelCollectionsGridViewAnimatorSizeCheck;
  static_assert(sizeof(AnnotatedBeatmapLevelCollectionsGridViewAnimator) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)(float, int)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::Init)> {
  static const MethodInfo* get() {
    static auto* rowHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rowCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rowHeight, rowCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::ScrollToRowIdxInstant
// Il2CppName: ScrollToRowIdxInstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)(int)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::ScrollToRowIdxInstant)> {
  static const MethodInfo* get() {
    static auto* selectedRow = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "ScrollToRowIdxInstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedRow});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::AnimateOpen
// Il2CppName: AnimateOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)(bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::AnimateOpen)> {
  static const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "AnimateOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::AnimateClose
// Il2CppName: AnimateClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)(int, bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::AnimateClose)> {
  static const MethodInfo* get() {
    static auto* selectedRow = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "AnimateClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedRow, animated});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::DespawnAllActiveTweens
// Il2CppName: DespawnAllActiveTweens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::DespawnAllActiveTweens)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "DespawnAllActiveTweens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::GetContentYOffset
// Il2CppName: GetContentYOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::GetContentYOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "GetContentYOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateOpen$b__13_0
// Il2CppName: <AnimateOpen>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)(::UnityEngine::Vector2)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateOpen$b__13_0)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "<AnimateOpen>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateOpen$b__13_1
// Il2CppName: <AnimateOpen>b__13_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateOpen$b__13_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "<AnimateOpen>b__13_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateOpen$b__13_2
// Il2CppName: <AnimateOpen>b__13_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)(::UnityEngine::Vector2)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateOpen$b__13_2)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "<AnimateOpen>b__13_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateOpen$b__13_3
// Il2CppName: <AnimateOpen>b__13_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateOpen$b__13_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "<AnimateOpen>b__13_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateClose$b__14_0
// Il2CppName: <AnimateClose>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)(::UnityEngine::Vector2)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateClose$b__14_0)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "<AnimateClose>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateClose$b__14_1
// Il2CppName: <AnimateClose>b__14_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateClose$b__14_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "<AnimateClose>b__14_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateClose$b__14_2
// Il2CppName: <AnimateClose>b__14_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)(::UnityEngine::Vector2)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateClose$b__14_2)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "<AnimateClose>b__14_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateClose$b__14_3
// Il2CppName: <AnimateClose>b__14_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator::$AnimateClose$b__14_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator*), "<AnimateClose>b__14_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
