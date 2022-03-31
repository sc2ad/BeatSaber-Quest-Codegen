// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicsDropdown
  class BeatmapCharacteristicsDropdown;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsDropdown*, "", "BeatmapCharacteristicsDropdown");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicsDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicsDropdown : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BeatmapCharacteristicsDropdown::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::SimpleTextDropdown* simpleTextDropdown;
    // Field size check
    static_assert(sizeof(::HMUI::SimpleTextDropdown*) == 0x8);
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private System.Action`1<BeatmapCharacteristicSO> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.SimpleTextDropdown _simpleTextDropdown
    ::HMUI::SimpleTextDropdown*& dyn__simpleTextDropdown();
    // Get instance field reference: private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    ::GlobalNamespace::BeatmapCharacteristicCollectionSO*& dyn__beatmapCharacteristicCollection();
    // Get instance field reference: private System.Action`1<BeatmapCharacteristicSO> didSelectCellWithIdxEvent
    ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& dyn_didSelectCellWithIdxEvent();
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x1366180
    void add_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x1366224
    void remove_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // protected System.Void Start()
    // Offset: 0x13662C8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x136646C
    void OnDestroy();
    // public BeatmapCharacteristicSO GetSelectedBeatmapCharacteristic()
    // Offset: 0x1366548
    ::GlobalNamespace::BeatmapCharacteristicSO* GetSelectedBeatmapCharacteristic();
    // public System.Void SelectCellWithBeatmapCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x13665AC
    void SelectCellWithBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x136666C
    void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x1366724
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicsDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCharacteristicsDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicsDropdown*, creationType>()));
    }
  }; // BeatmapCharacteristicsDropdown
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicsDropdown), 40 + sizeof(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*)> __GlobalNamespace_BeatmapCharacteristicsDropdownSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicsDropdown) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::add_didSelectCellWithIdxEvent
// Il2CppName: add_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicsDropdown::add_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown*), "add_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::remove_didSelectCellWithIdxEvent
// Il2CppName: remove_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicsDropdown::remove_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown*), "remove_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsDropdown::*)()>(&GlobalNamespace::BeatmapCharacteristicsDropdown::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsDropdown::*)()>(&GlobalNamespace::BeatmapCharacteristicsDropdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::GetSelectedBeatmapCharacteristic
// Il2CppName: GetSelectedBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::BeatmapCharacteristicsDropdown::*)()>(&GlobalNamespace::BeatmapCharacteristicsDropdown::GetSelectedBeatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown*), "GetSelectedBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::SelectCellWithBeatmapCharacteristic
// Il2CppName: SelectCellWithBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapCharacteristicsDropdown::SelectCellWithBeatmapCharacteristic)> {
  static const MethodInfo* get() {
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown*), "SelectCellWithBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx
// Il2CppName: HandleSimpleTextDropdownDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::BeatmapCharacteristicsDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsDropdown*), "HandleSimpleTextDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
