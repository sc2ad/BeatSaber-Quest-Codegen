// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerPlayerLayout
#include "GlobalNamespace/MultiplayerPlayerLayout.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLayoutProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLayoutProvider : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private MultiplayerPlayerLayout <layout>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::MultiplayerPlayerLayout layout;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayerLayout) == 0x4);
    // private System.Int32 <activePlayerSpotsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int activePlayerSpotsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Action`2<MultiplayerPlayerLayout,System.Int32> playersLayoutWasCalculatedEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action_2<GlobalNamespace::MultiplayerPlayerLayout, int>* playersLayoutWasCalculatedEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerPlayerLayout, int>*) == 0x8);
    public:
    // Get instance field reference: private MultiplayerPlayerLayout <layout>k__BackingField
    GlobalNamespace::MultiplayerPlayerLayout& dyn_$layout$k__BackingField();
    // Get instance field reference: private System.Int32 <activePlayerSpotsCount>k__BackingField
    int& dyn_$activePlayerSpotsCount$k__BackingField();
    // Get instance field reference: private System.Action`2<MultiplayerPlayerLayout,System.Int32> playersLayoutWasCalculatedEvent
    System::Action_2<GlobalNamespace::MultiplayerPlayerLayout, int>*& dyn_playersLayoutWasCalculatedEvent();
    // public MultiplayerPlayerLayout get_layout()
    // Offset: 0x1168594
    GlobalNamespace::MultiplayerPlayerLayout get_layout();
    // private System.Void set_layout(MultiplayerPlayerLayout value)
    // Offset: 0x116859C
    void set_layout(GlobalNamespace::MultiplayerPlayerLayout value);
    // public System.Int32 get_activePlayerSpotsCount()
    // Offset: 0x11685A4
    int get_activePlayerSpotsCount();
    // private System.Void set_activePlayerSpotsCount(System.Int32 value)
    // Offset: 0x11685AC
    void set_activePlayerSpotsCount(int value);
    // public System.Void add_playersLayoutWasCalculatedEvent(System.Action`2<MultiplayerPlayerLayout,System.Int32> value)
    // Offset: 0x11685B4
    void add_playersLayoutWasCalculatedEvent(System::Action_2<GlobalNamespace::MultiplayerPlayerLayout, int>* value);
    // public System.Void remove_playersLayoutWasCalculatedEvent(System.Action`2<MultiplayerPlayerLayout,System.Int32> value)
    // Offset: 0x1168658
    void remove_playersLayoutWasCalculatedEvent(System::Action_2<GlobalNamespace::MultiplayerPlayerLayout, int>* value);
    // public MultiplayerPlayerLayout CalculateLayout(System.Int32 activePlayersCount)
    // Offset: 0x11686FC
    GlobalNamespace::MultiplayerPlayerLayout CalculateLayout(int activePlayersCount);
    // public System.Void .ctor()
    // Offset: 0x1168798
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLayoutProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLayoutProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLayoutProvider*, creationType>()));
    }
  }; // MultiplayerLayoutProvider
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLayoutProvider), 24 + sizeof(System::Action_2<GlobalNamespace::MultiplayerPlayerLayout, int>*)> __GlobalNamespace_MultiplayerLayoutProviderSizeCheck;
  static_assert(sizeof(MultiplayerLayoutProvider) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLayoutProvider*, "", "MultiplayerLayoutProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLayoutProvider::get_layout
// Il2CppName: get_layout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerPlayerLayout (GlobalNamespace::MultiplayerLayoutProvider::*)()>(&GlobalNamespace::MultiplayerLayoutProvider::get_layout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLayoutProvider*), "get_layout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLayoutProvider::set_layout
// Il2CppName: set_layout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLayoutProvider::*)(GlobalNamespace::MultiplayerPlayerLayout)>(&GlobalNamespace::MultiplayerLayoutProvider::set_layout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerLayout")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLayoutProvider*), "set_layout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLayoutProvider::get_activePlayerSpotsCount
// Il2CppName: get_activePlayerSpotsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerLayoutProvider::*)()>(&GlobalNamespace::MultiplayerLayoutProvider::get_activePlayerSpotsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLayoutProvider*), "get_activePlayerSpotsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLayoutProvider::set_activePlayerSpotsCount
// Il2CppName: set_activePlayerSpotsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLayoutProvider::*)(int)>(&GlobalNamespace::MultiplayerLayoutProvider::set_activePlayerSpotsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLayoutProvider*), "set_activePlayerSpotsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLayoutProvider::add_playersLayoutWasCalculatedEvent
// Il2CppName: add_playersLayoutWasCalculatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLayoutProvider::*)(System::Action_2<GlobalNamespace::MultiplayerPlayerLayout, int>*)>(&GlobalNamespace::MultiplayerLayoutProvider::add_playersLayoutWasCalculatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerLayout"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLayoutProvider*), "add_playersLayoutWasCalculatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLayoutProvider::remove_playersLayoutWasCalculatedEvent
// Il2CppName: remove_playersLayoutWasCalculatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLayoutProvider::*)(System::Action_2<GlobalNamespace::MultiplayerPlayerLayout, int>*)>(&GlobalNamespace::MultiplayerLayoutProvider::remove_playersLayoutWasCalculatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerLayout"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLayoutProvider*), "remove_playersLayoutWasCalculatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLayoutProvider::CalculateLayout
// Il2CppName: CalculateLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerPlayerLayout (GlobalNamespace::MultiplayerLayoutProvider::*)(int)>(&GlobalNamespace::MultiplayerLayoutProvider::CalculateLayout)> {
  static const MethodInfo* get() {
    static auto* activePlayersCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLayoutProvider*), "CalculateLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activePlayersCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLayoutProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
