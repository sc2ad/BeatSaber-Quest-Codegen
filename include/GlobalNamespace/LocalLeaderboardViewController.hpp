// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: LocalLeaderboardsModel/LeaderboardType
#include "GlobalNamespace/LocalLeaderboardsModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LocalLeaderboardsModel because it is already included!
  // Forward declaring type: LocalLeaderboardTableView
  class LocalLeaderboardTableView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: NoTransitionsButton
  class NoTransitionsButton;
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardViewController*, "", "LocalLeaderboardViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xCA
  #pragma pack(push, 1)
  // Autogenerated type: LocalLeaderboardViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
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
    // private System.Int32 _maxNumberOfCells
    // Size: 0x4
    // Offset: 0x70
    int maxNumberOfCells;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxNumberOfCells and: localLeaderboardsModel
    char __padding0[0x4] = {};
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // [SpaceAttribute] Offset: 0x124C820
    // private LocalLeaderboardTableView _leaderboardTableView
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::LocalLeaderboardTableView* leaderboardTableView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocalLeaderboardTableView*) == 0x8);
    // private UnityEngine.GameObject _clearLeaderboardsWrapper
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::GameObject* clearLeaderboardsWrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private HMUI.NoTransitionsButton _clearLeaderboardsButton
    // Size: 0x8
    // Offset: 0x90
    ::HMUI::NoTransitionsButton* clearLeaderboardsButton;
    // Field size check
    static_assert(sizeof(::HMUI::NoTransitionsButton*) == 0x8);
    // private HMUI.IconSegmentedControl _scopeSegmentedControl
    // Size: 0x8
    // Offset: 0x98
    ::HMUI::IconSegmentedControl* scopeSegmentedControl;
    // Field size check
    static_assert(sizeof(::HMUI::IconSegmentedControl*) == 0x8);
    // [SpaceAttribute] Offset: 0x124C888
    // private UnityEngine.Sprite _allTimeLeaderboardIcon
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Sprite* allTimeLeaderboardIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _todayLeaderboardIcon
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::Sprite* todayLeaderboardIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _clearLeaderboardIcon
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Sprite* clearLeaderboardIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // [InjectAttribute] Offset: 0x124C8E0
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private System.Boolean _refreshIsNeeded
    // Size: 0x1
    // Offset: 0xC8
    bool refreshIsNeeded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _enableClear
    // Size: 0x1
    // Offset: 0xC9
    bool enableClear;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x124C8F0
    // Get static field: static private LocalLeaderboardsModel/LeaderboardType _leaderboardType
    static ::GlobalNamespace::LocalLeaderboardsModel::LeaderboardType _get__leaderboardType();
    // Set static field: static private LocalLeaderboardsModel/LeaderboardType _leaderboardType
    static void _set__leaderboardType(::GlobalNamespace::LocalLeaderboardsModel::LeaderboardType value);
    // Get instance field reference: private System.Int32 _maxNumberOfCells
    int& dyn__maxNumberOfCells();
    // Get instance field reference: private LocalLeaderboardsModel _localLeaderboardsModel
    ::GlobalNamespace::LocalLeaderboardsModel*& dyn__localLeaderboardsModel();
    // Get instance field reference: private LocalLeaderboardTableView _leaderboardTableView
    ::GlobalNamespace::LocalLeaderboardTableView*& dyn__leaderboardTableView();
    // Get instance field reference: private UnityEngine.GameObject _clearLeaderboardsWrapper
    ::UnityEngine::GameObject*& dyn__clearLeaderboardsWrapper();
    // Get instance field reference: private HMUI.NoTransitionsButton _clearLeaderboardsButton
    ::HMUI::NoTransitionsButton*& dyn__clearLeaderboardsButton();
    // Get instance field reference: private HMUI.IconSegmentedControl _scopeSegmentedControl
    ::HMUI::IconSegmentedControl*& dyn__scopeSegmentedControl();
    // Get instance field reference: private UnityEngine.Sprite _allTimeLeaderboardIcon
    ::UnityEngine::Sprite*& dyn__allTimeLeaderboardIcon();
    // Get instance field reference: private UnityEngine.Sprite _todayLeaderboardIcon
    ::UnityEngine::Sprite*& dyn__todayLeaderboardIcon();
    // Get instance field reference: private UnityEngine.Sprite _clearLeaderboardIcon
    ::UnityEngine::Sprite*& dyn__clearLeaderboardIcon();
    // Get instance field reference: private PlayerDataModel _playerDataModel
    ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private IDifficultyBeatmap _difficultyBeatmap
    ::GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // Get instance field reference: private System.Boolean _refreshIsNeeded
    bool& dyn__refreshIsNeeded();
    // Get instance field reference: private System.Boolean _enableClear
    bool& dyn__enableClear();
    // public LocalLeaderboardsModel get_leaderboardsModel()
    // Offset: 0x2B9C474
    ::GlobalNamespace::LocalLeaderboardsModel* get_leaderboardsModel();
    // public System.Void Setup(System.Boolean enableClear)
    // Offset: 0x2B9C47C
    void Setup(bool enableClear);
    // private System.Void RefreshScopeSegmentedControl()
    // Offset: 0x2B9C71C
    void RefreshScopeSegmentedControl();
    // private System.Void HandleScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x2B9C96C
    void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // private System.Void ClearLeaderboards()
    // Offset: 0x2B9CD20
    void ClearLeaderboards();
    // private System.Void SetContent(System.String leaderboardID, LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x2B9CEB0
    void SetContent(::StringW leaderboardID, ::GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // private System.Void HandleNewScoreWasAddedToLeaderboard(System.String leaderboardID, LocalLeaderboardsModel/LeaderboardType leaderboardType)
    // Offset: 0x2B9CFEC
    void HandleNewScoreWasAddedToLeaderboard(::StringW leaderboardID, ::GlobalNamespace::LocalLeaderboardsModel::LeaderboardType leaderboardType);
    // private System.Void Refresh()
    // Offset: 0x2B9C4B4
    void Refresh();
    // private System.Void <DidActivate>b__18_0()
    // Offset: 0x2B9D0C8
    void $DidActivate$b__18_0();
    // public System.Void .ctor()
    // Offset: 0x2B9D0B4
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalLeaderboardViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalLeaderboardViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalLeaderboardViewController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2B9D0C4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x2B9C488
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x2B9C548
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x2B9CAEC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x2B9CC84
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // LocalLeaderboardViewController
  #pragma pack(pop)
  static check_size<sizeof(LocalLeaderboardViewController), 201 + sizeof(bool)> __GlobalNamespace_LocalLeaderboardViewControllerSizeCheck;
  static_assert(sizeof(LocalLeaderboardViewController) == 0xCA);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::get_leaderboardsModel
// Il2CppName: get_leaderboardsModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LocalLeaderboardsModel* (GlobalNamespace::LocalLeaderboardViewController::*)()>(&GlobalNamespace::LocalLeaderboardViewController::get_leaderboardsModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "get_leaderboardsModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)(bool)>(&GlobalNamespace::LocalLeaderboardViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* enableClear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enableClear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::RefreshScopeSegmentedControl
// Il2CppName: RefreshScopeSegmentedControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)()>(&GlobalNamespace::LocalLeaderboardViewController::RefreshScopeSegmentedControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "RefreshScopeSegmentedControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell
// Il2CppName: HandleScopeSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)(::HMUI::SegmentedControl*, int)>(&GlobalNamespace::LocalLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "HandleScopeSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellNumber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::ClearLeaderboards
// Il2CppName: ClearLeaderboards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)()>(&GlobalNamespace::LocalLeaderboardViewController::ClearLeaderboards)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "ClearLeaderboards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::SetContent
// Il2CppName: SetContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel::LeaderboardType)>(&GlobalNamespace::LocalLeaderboardViewController::SetContent)> {
  static const MethodInfo* get() {
    static auto* leaderboardID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* leaderboardType = &::il2cpp_utils::GetClassFromName("", "LocalLeaderboardsModel/LeaderboardType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "SetContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardID, leaderboardType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::HandleNewScoreWasAddedToLeaderboard
// Il2CppName: HandleNewScoreWasAddedToLeaderboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel::LeaderboardType)>(&GlobalNamespace::LocalLeaderboardViewController::HandleNewScoreWasAddedToLeaderboard)> {
  static const MethodInfo* get() {
    static auto* leaderboardID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* leaderboardType = &::il2cpp_utils::GetClassFromName("", "LocalLeaderboardsModel/LeaderboardType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "HandleNewScoreWasAddedToLeaderboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardID, leaderboardType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)()>(&GlobalNamespace::LocalLeaderboardViewController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::$DidActivate$b__18_0
// Il2CppName: <DidActivate>b__18_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)()>(&GlobalNamespace::LocalLeaderboardViewController::$DidActivate$b__18_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "<DidActivate>b__18_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LocalLeaderboardViewController::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::LocalLeaderboardViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)(bool, bool, bool)>(&GlobalNamespace::LocalLeaderboardViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::LocalLeaderboardViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardViewController::*)()>(&GlobalNamespace::LocalLeaderboardViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalLeaderboardViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
