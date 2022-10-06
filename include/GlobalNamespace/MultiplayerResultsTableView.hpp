// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsTableCell
  class MultiplayerResultsTableCell;
  // Forward declaring type: MultiplayerOffsetPositionByLocalPlayerPosition
  class MultiplayerOffsetPositionByLocalPlayerPosition;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsTableView
  class MultiplayerResultsTableView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsTableView*, "", "MultiplayerResultsTableView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerResultsTableView : public ::UnityEngine::MonoBehaviour/*, public ::HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // Nested type: ::GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_1
    class $$c__DisplayClass30_1;
    // Nested type: ::GlobalNamespace::MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__31
    class $PlayRandomRowSlideInSound$d__31;
    // Nested type: ::GlobalNamespace::MultiplayerResultsTableView::$PlayAvatarSlideInSound$d__32
    class $PlayAvatarSlideInSound$d__32;
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(::HMUI::TableView*) == 0x8);
    // private UnityEngine.RectTransform _tableViewRectTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* tableViewRectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private MultiplayerResultsTableCell _winnerTableCell
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerResultsTableCell* winnerTableCell;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerResultsTableCell*) == 0x8);
    // private MultiplayerResultsTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MultiplayerResultsTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerResultsTableCell*) == 0x8);
    // [SpaceAttribute] Offset: 0x110D15C
    // private System.Single _startRowXPosition
    // Size: 0x4
    // Offset: 0x38
    float startRowXPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x3C
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rowXOffset
    // Size: 0x4
    // Offset: 0x40
    float rowXOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animationDuration
    // Size: 0x4
    // Offset: 0x44
    float animationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animationSeparationTime
    // Size: 0x4
    // Offset: 0x48
    float animationSeparationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _winnerAnimationDuration
    // Size: 0x4
    // Offset: 0x4C
    float winnerAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _duelTablePosXOffset
    // Size: 0x4
    // Offset: 0x50
    float duelTablePosXOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duelTablePosXOffset and: multiplayerOffsetByLocalPlayerPosition
    char __padding10[0x4] = {};
    // private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* multiplayerOffsetByLocalPlayerPosition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*) == 0x8);
    // [HeaderAttribute] Offset: 0x110D204
    // private UnityEngine.AudioSource _outroSfxAudioSource
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::AudioSource* outroSfxAudioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip[] _rowSlideAudioClips
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::AudioClip*> rowSlideAudioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private UnityEngine.AudioClip _avatarSlideAudioClip
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::AudioClip* avatarSlideAudioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // [InjectAttribute] Offset: 0x110D270
    // private readonly Tweening.TimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x78
    ::Tweening::TimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::TimeTweeningManager*) == 0x8);
    // [InjectAttribute] Offset: 0x110D280
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [InjectAttribute] Offset: 0x110D290
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x88
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _dataList
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* dataList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*) == 0x8);
    // private UnityEngine.Vector3 _positionOffset
    // Size: 0xC
    // Offset: 0x98
    ::UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _rotationOffset
    // Size: 0x10
    // Offset: 0xA4
    ::UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _lastParentPosition
    // Size: 0xC
    // Offset: 0xB4
    ::UnityEngine::Vector3 lastParentPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _lastParentRotation
    // Size: 0x10
    // Offset: 0xC0
    ::UnityEngine::Quaternion lastParentRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating interface conversion operator: operator ::HMUI::TableView::IDataSource
    operator ::HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Creating interface conversion operator: i_IDataSource
    inline ::HMUI::TableView::IDataSource* i_IDataSource() noexcept {
      return reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::StringW _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::StringW value);
    // Get instance field reference: private HMUI.TableView _tableView
    [[deprecated("Use field access instead!")]] ::HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private UnityEngine.RectTransform _tableViewRectTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__tableViewRectTransform();
    // Get instance field reference: private MultiplayerResultsTableCell _winnerTableCell
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerResultsTableCell*& dyn__winnerTableCell();
    // Get instance field reference: private MultiplayerResultsTableCell _cellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerResultsTableCell*& dyn__cellPrefab();
    // Get instance field reference: private System.Single _startRowXPosition
    [[deprecated("Use field access instead!")]] float& dyn__startRowXPosition();
    // Get instance field reference: private System.Single _rowHeight
    [[deprecated("Use field access instead!")]] float& dyn__rowHeight();
    // Get instance field reference: private System.Single _rowXOffset
    [[deprecated("Use field access instead!")]] float& dyn__rowXOffset();
    // Get instance field reference: private System.Single _animationDuration
    [[deprecated("Use field access instead!")]] float& dyn__animationDuration();
    // Get instance field reference: private System.Single _animationSeparationTime
    [[deprecated("Use field access instead!")]] float& dyn__animationSeparationTime();
    // Get instance field reference: private System.Single _winnerAnimationDuration
    [[deprecated("Use field access instead!")]] float& dyn__winnerAnimationDuration();
    // Get instance field reference: private System.Single _duelTablePosXOffset
    [[deprecated("Use field access instead!")]] float& dyn__duelTablePosXOffset();
    // Get instance field reference: private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*& dyn__multiplayerOffsetByLocalPlayerPosition();
    // Get instance field reference: private UnityEngine.AudioSource _outroSfxAudioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__outroSfxAudioSource();
    // Get instance field reference: private UnityEngine.AudioClip[] _rowSlideAudioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__rowSlideAudioClips();
    // Get instance field reference: private UnityEngine.AudioClip _avatarSlideAudioClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__avatarSlideAudioClip();
    // Get instance field reference: private readonly Tweening.TimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::TimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _layoutProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLayoutProvider*& dyn__layoutProvider();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _dataList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& dyn__dataList();
    // Get instance field reference: private UnityEngine.Vector3 _positionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__positionOffset();
    // Get instance field reference: private UnityEngine.Quaternion _rotationOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__rotationOffset();
    // Get instance field reference: private UnityEngine.Vector3 _lastParentPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__lastParentPosition();
    // Get instance field reference: private UnityEngine.Quaternion _lastParentRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__lastParentRotation();
    // public System.Void .ctor()
    // Offset: 0x13E23C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerResultsTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsTableView*, creationType>()));
    }
    // public System.Single CellSize()
    // Offset: 0x13E1168
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x13E1170
    int NumberOfCells();
    // protected System.Void Awake()
    // Offset: 0x13E11E0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x13E1240
    void OnDestroy();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x13E12D8
    ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int idx);
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> dataList)
    // Offset: 0x13E1738
    void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* dataList);
    // public System.Single StartAnimation()
    // Offset: 0x13E19E8
    float StartAnimation();
    // private System.Collections.IEnumerator PlayRandomRowSlideInSound(System.Single delay)
    // Offset: 0x13E226C
    ::System::Collections::IEnumerator* PlayRandomRowSlideInSound(float delay);
    // private System.Collections.IEnumerator PlayAvatarSlideInSound(System.Single delay)
    // Offset: 0x13E2318
    ::System::Collections::IEnumerator* PlayAvatarSlideInSound(float delay);
    // private System.Void <StartAnimation>b__30_1()
    // Offset: 0x13E23E0
    void $StartAnimation$b__30_1();
    // private System.Void <StartAnimation>b__30_4()
    // Offset: 0x13E2414
    void $StartAnimation$b__30_4();
    // private System.Void <StartAnimation>b__30_5(System.Single val)
    // Offset: 0x13E2448
    void $StartAnimation$b__30_5(float val);
  }; // MultiplayerResultsTableView
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsTableView), 192 + sizeof(::UnityEngine::Quaternion)> __GlobalNamespace_MultiplayerResultsTableViewSizeCheck;
  static_assert(sizeof(MultiplayerResultsTableView) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerResultsTableView::*)()>(&GlobalNamespace::MultiplayerResultsTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerResultsTableView::*)()>(&GlobalNamespace::MultiplayerResultsTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::*)()>(&GlobalNamespace::MultiplayerResultsTableView::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::*)()>(&GlobalNamespace::MultiplayerResultsTableView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (GlobalNamespace::MultiplayerResultsTableView::*)(::HMUI::TableView*, int)>(&GlobalNamespace::MultiplayerResultsTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*)>(&GlobalNamespace::MultiplayerResultsTableView::SetData)> {
  static const MethodInfo* get() {
    static auto* dataList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataList});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::StartAnimation
// Il2CppName: StartAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerResultsTableView::*)()>(&GlobalNamespace::MultiplayerResultsTableView::StartAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "StartAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::PlayRandomRowSlideInSound
// Il2CppName: PlayRandomRowSlideInSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MultiplayerResultsTableView::*)(float)>(&GlobalNamespace::MultiplayerResultsTableView::PlayRandomRowSlideInSound)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "PlayRandomRowSlideInSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::PlayAvatarSlideInSound
// Il2CppName: PlayAvatarSlideInSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MultiplayerResultsTableView::*)(float)>(&GlobalNamespace::MultiplayerResultsTableView::PlayAvatarSlideInSound)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "PlayAvatarSlideInSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__30_1
// Il2CppName: <StartAnimation>b__30_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::*)()>(&GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__30_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "<StartAnimation>b__30_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__30_4
// Il2CppName: <StartAnimation>b__30_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::*)()>(&GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__30_4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "<StartAnimation>b__30_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__30_5
// Il2CppName: <StartAnimation>b__30_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::*)(float)>(&GlobalNamespace::MultiplayerResultsTableView::$StartAnimation$b__30_5)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView*), "<StartAnimation>b__30_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
