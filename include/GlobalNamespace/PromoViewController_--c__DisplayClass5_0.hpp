// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PromoViewController
#include "GlobalNamespace/PromoViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PromoViewController::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoViewController::$$c__DisplayClass5_0*, "", "PromoViewController/<>c__DisplayClass5_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PromoViewController/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PromoViewController::$$c__DisplayClass5_0 : public ::Il2CppObject {
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
    // public PromoViewController/ButtonPromoTypePair item
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PromoViewController::ButtonPromoTypePair* item;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PromoViewController::ButtonPromoTypePair*) == 0x8);
    // public PromoViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PromoViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PromoViewController*) == 0x8);
    public:
    // Get instance field reference: public PromoViewController/ButtonPromoTypePair item
    ::GlobalNamespace::PromoViewController::ButtonPromoTypePair*& dyn_item();
    // Get instance field reference: public PromoViewController <>4__this
    ::GlobalNamespace::PromoViewController*& dyn_$$4__this();
    // System.Void <DidActivate>b__0()
    // Offset: 0x13EAE44
    void $DidActivate$b__0();
    // public System.Void .ctor()
    // Offset: 0x13EAE34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromoViewController::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PromoViewController::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromoViewController::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // PromoViewController/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(PromoViewController::$$c__DisplayClass5_0), 24 + sizeof(::GlobalNamespace::PromoViewController*)> __GlobalNamespace_PromoViewController_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(PromoViewController::$$c__DisplayClass5_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PromoViewController::$$c__DisplayClass5_0::$DidActivate$b__0
// Il2CppName: <DidActivate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PromoViewController::$$c__DisplayClass5_0::*)()>(&GlobalNamespace::PromoViewController::$$c__DisplayClass5_0::$DidActivate$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PromoViewController::$$c__DisplayClass5_0*), "<DidActivate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PromoViewController::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
