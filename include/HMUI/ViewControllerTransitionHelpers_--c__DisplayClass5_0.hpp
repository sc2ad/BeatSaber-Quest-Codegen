// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers
#include "HMUI/ViewControllerTransitionHelpers.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass5_0");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewControllerTransitionHelpers/HMUI.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ViewControllerTransitionHelpers::$$c__DisplayClass5_0 : public ::Il2CppObject {
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
    // public HMUI.ViewController toPresentViewController
    // Size: 0x8
    // Offset: 0x10
    ::HMUI::ViewController* toPresentViewController;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController*) == 0x8);
    // public System.Single moveOffset
    // Size: 0x4
    // Offset: 0x18
    float moveOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: moveOffset and: toDismissViewController
    char __padding1[0x4] = {};
    // public HMUI.ViewController toDismissViewController
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::ViewController* toDismissViewController;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController*) == 0x8);
    // public System.Single baseCanvasGroupAlpha
    // Size: 0x4
    // Offset: 0x28
    float baseCanvasGroupAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public HMUI.ViewController toPresentViewController
    ::HMUI::ViewController*& dyn_toPresentViewController();
    // Get instance field reference: public System.Single moveOffset
    float& dyn_moveOffset();
    // Get instance field reference: public HMUI.ViewController toDismissViewController
    ::HMUI::ViewController*& dyn_toDismissViewController();
    // Get instance field reference: public System.Single baseCanvasGroupAlpha
    float& dyn_baseCanvasGroupAlpha();
    // System.Void <DoHorizontalTransition>b__0(System.Single t)
    // Offset: 0x29CD438
    void $DoHorizontalTransition$b__0(float t);
    // public System.Void .ctor()
    // Offset: 0x29CD430
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewControllerTransitionHelpers::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewControllerTransitionHelpers::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // HMUI.ViewControllerTransitionHelpers/HMUI.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(ViewControllerTransitionHelpers::$$c__DisplayClass5_0), 40 + sizeof(float)> __HMUI_ViewControllerTransitionHelpers_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(ViewControllerTransitionHelpers::$$c__DisplayClass5_0) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0::$DoHorizontalTransition$b__0
// Il2CppName: <DoHorizontalTransition>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0::*)(float)>(&HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0::$DoHorizontalTransition$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0*), "<DoHorizontalTransition>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: HMUI::ViewControllerTransitionHelpers::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
