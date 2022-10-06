// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EnterPlayerGuestNameViewController
#include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GuestNameButtonsListItem
  class GuestNameButtonsListItem;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnterPlayerGuestNameViewController/<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EnterPlayerGuestNameViewController::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<System.String> guestPlayerNames
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public EnterPlayerGuestNameViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::EnterPlayerGuestNameViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnterPlayerGuestNameViewController*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> guestPlayerNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_guestPlayerNames();
    // Get instance field reference: public EnterPlayerGuestNameViewController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnterPlayerGuestNameViewController*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x139525C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterPlayerGuestNameViewController::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*, creationType>()));
    }
    // System.Void <DidActivate>b__0(System.Int32 idx, GuestNameButtonsListItem item)
    // Offset: 0x13957D4
    void $DidActivate$b__0(int idx, ::GlobalNamespace::GuestNameButtonsListItem* item);
  }; // EnterPlayerGuestNameViewController/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(EnterPlayerGuestNameViewController::$$c__DisplayClass10_0), 24 + sizeof(::GlobalNamespace::EnterPlayerGuestNameViewController*)> __GlobalNamespace_EnterPlayerGuestNameViewController_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(EnterPlayerGuestNameViewController::$$c__DisplayClass10_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0::$DidActivate$b__0
// Il2CppName: <DidActivate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0::*)(int, ::GlobalNamespace::GuestNameButtonsListItem*)>(&GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0::$DidActivate$b__0)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* item = &::il2cpp_utils::GetClassFromName("", "GuestNameButtonsListItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0*), "<DidActivate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, item});
  }
};
