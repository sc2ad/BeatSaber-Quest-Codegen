// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EditAvatarViewController
#include "GlobalNamespace/EditAvatarViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Menu::ViewControllers
namespace Menu::ViewControllers {
  // Forward declaring type: EditAvatarHistorySnapshot
  class EditAvatarHistorySnapshot;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarData
  class AvatarData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarEditHistory
  class AvatarEditHistory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarEditHistory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarEditHistory*, "", "AvatarEditHistory");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: AvatarEditHistory
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarEditHistory : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean disableNextSnapshotOverride
    // Size: 0x1
    // Offset: 0x10
    bool disableNextSnapshotOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableNextSnapshotOverride and: snapShots
    char __padding0[0x7] = {};
    // private System.Collections.Generic.List`1<Menu.ViewControllers.EditAvatarHistorySnapshot> _snapShots
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>* snapShots;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>*) == 0x8);
    // private System.Int32 _currentDataId
    // Size: 0x4
    // Offset: 0x20
    int currentDataId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Boolean disableNextSnapshotOverride
    [[deprecated("Use field access instead!")]] bool& dyn_disableNextSnapshotOverride();
    // Get instance field reference: private System.Collections.Generic.List`1<Menu.ViewControllers.EditAvatarHistorySnapshot> _snapShots
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Menu::ViewControllers::EditAvatarHistorySnapshot*>*& dyn__snapShots();
    // Get instance field reference: private System.Int32 _currentDataId
    [[deprecated("Use field access instead!")]] int& dyn__currentDataId();
    // public System.Boolean get_undoAvailable()
    // Offset: 0x1540B6C
    bool get_undoAvailable();
    // public System.Boolean get_redoAvailable()
    // Offset: 0x1540B7C
    bool get_redoAvailable();
    // public Menu.ViewControllers.EditAvatarHistorySnapshot get_currentSnapShot()
    // Offset: 0x1540BDC
    ::Menu::ViewControllers::EditAvatarHistorySnapshot* get_currentSnapShot();
    // public EditAvatarViewController/AvatarEditPart get_lastEditedPart()
    // Offset: 0x1540C4C
    ::GlobalNamespace::EditAvatarViewController::AvatarEditPart get_lastEditedPart();
    // public System.Void .ctor()
    // Offset: 0x1540EC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarEditHistory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarEditHistory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarEditHistory*, creationType>()));
    }
    // public System.Void Clear()
    // Offset: 0x1540C6C
    void Clear();
    // public System.Void Undo()
    // Offset: 0x1540CCC
    void Undo();
    // public System.Void Redo()
    // Offset: 0x1540CE8
    void Redo();
    // public System.Void UpdateEditHistory(AvatarData avatarData, EditAvatarViewController/AvatarEditPart avatarEditPart)
    // Offset: 0x1540D58
    void UpdateEditHistory(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart);
  }; // AvatarEditHistory
  #pragma pack(pop)
  static check_size<sizeof(AvatarEditHistory), 32 + sizeof(int)> __GlobalNamespace_AvatarEditHistorySizeCheck;
  static_assert(sizeof(AvatarEditHistory) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::get_undoAvailable
// Il2CppName: get_undoAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AvatarEditHistory::*)()>(&GlobalNamespace::AvatarEditHistory::get_undoAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditHistory*), "get_undoAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::get_redoAvailable
// Il2CppName: get_redoAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AvatarEditHistory::*)()>(&GlobalNamespace::AvatarEditHistory::get_redoAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditHistory*), "get_redoAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::get_currentSnapShot
// Il2CppName: get_currentSnapShot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Menu::ViewControllers::EditAvatarHistorySnapshot* (GlobalNamespace::AvatarEditHistory::*)()>(&GlobalNamespace::AvatarEditHistory::get_currentSnapShot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditHistory*), "get_currentSnapShot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::get_lastEditedPart
// Il2CppName: get_lastEditedPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EditAvatarViewController::AvatarEditPart (GlobalNamespace::AvatarEditHistory::*)()>(&GlobalNamespace::AvatarEditHistory::get_lastEditedPart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditHistory*), "get_lastEditedPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarEditHistory::*)()>(&GlobalNamespace::AvatarEditHistory::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditHistory*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::Undo
// Il2CppName: Undo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarEditHistory::*)()>(&GlobalNamespace::AvatarEditHistory::Undo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditHistory*), "Undo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::Redo
// Il2CppName: Redo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarEditHistory::*)()>(&GlobalNamespace::AvatarEditHistory::Redo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditHistory*), "Redo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditHistory::UpdateEditHistory
// Il2CppName: UpdateEditHistory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarEditHistory::*)(::GlobalNamespace::AvatarData*, ::GlobalNamespace::EditAvatarViewController::AvatarEditPart)>(&GlobalNamespace::AvatarEditHistory::UpdateEditHistory)> {
  static const MethodInfo* get() {
    static auto* avatarData = &::il2cpp_utils::GetClassFromName("", "AvatarData")->byval_arg;
    static auto* avatarEditPart = &::il2cpp_utils::GetClassFromName("", "EditAvatarViewController/AvatarEditPart")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditHistory*), "UpdateEditHistory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarData, avatarEditPart});
  }
};
