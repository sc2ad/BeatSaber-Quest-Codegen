// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EditAvatarViewController
#include "GlobalNamespace/EditAvatarViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0*, "", "EditAvatarViewController/<>c__DisplayClass60_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: EditAvatarViewController/<>c__DisplayClass60_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EditAvatarViewController::$$c__DisplayClass60_0 : public ::Il2CppObject {
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
    // public EditAvatarViewController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::EditAvatarViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditAvatarViewController*) == 0x8);
    // public System.Action`1<UnityEngine.Color> colorSetter
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::UnityEngine::Color>* colorSetter;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Color>*) == 0x8);
    // public EditAvatarViewController/AvatarEditPart avatarEditPart
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditAvatarViewController::AvatarEditPart) == 0x4);
    // Padding between fields: avatarEditPart and: currentColor
    char __padding2[0x4] = {};
    // public System.Func`1<UnityEngine.Color> currentColor
    // Size: 0x8
    // Offset: 0x28
    ::System::Func_1<::UnityEngine::Color>* currentColor;
    // Field size check
    static_assert(sizeof(::System::Func_1<::UnityEngine::Color>*) == 0x8);
    // public System.Int32 uvSegment
    // Size: 0x4
    // Offset: 0x30
    int uvSegment;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: uvSegment and: $$9__1
    char __padding4[0x4] = {};
    // public System.Action`1<UnityEngine.Color> <>9__1
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::UnityEngine::Color>* $$9__1;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Color>*) == 0x8);
    public:
    // Get instance field reference: public EditAvatarViewController <>4__this
    ::GlobalNamespace::EditAvatarViewController*& dyn_$$4__this();
    // Get instance field reference: public System.Action`1<UnityEngine.Color> colorSetter
    ::System::Action_1<::UnityEngine::Color>*& dyn_colorSetter();
    // Get instance field reference: public EditAvatarViewController/AvatarEditPart avatarEditPart
    ::GlobalNamespace::EditAvatarViewController::AvatarEditPart& dyn_avatarEditPart();
    // Get instance field reference: public System.Func`1<UnityEngine.Color> currentColor
    ::System::Func_1<::UnityEngine::Color>*& dyn_currentColor();
    // Get instance field reference: public System.Int32 uvSegment
    int& dyn_uvSegment();
    // Get instance field reference: public System.Action`1<UnityEngine.Color> <>9__1
    ::System::Action_1<::UnityEngine::Color>*& dyn_$$9__1();
    // System.Void <SetupColorButton>b__0()
    // Offset: 0x1414D4C
    void $SetupColorButton$b__0();
    // System.Void <SetupColorButton>b__1(UnityEngine.Color c)
    // Offset: 0x1414E2C
    void $SetupColorButton$b__1(::UnityEngine::Color c);
    // public System.Void .ctor()
    // Offset: 0x1414A54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditAvatarViewController::$$c__DisplayClass60_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditAvatarViewController::$$c__DisplayClass60_0*, creationType>()));
    }
  }; // EditAvatarViewController/<>c__DisplayClass60_0
  #pragma pack(pop)
  static check_size<sizeof(EditAvatarViewController::$$c__DisplayClass60_0), 56 + sizeof(::System::Action_1<::UnityEngine::Color>*)> __GlobalNamespace_EditAvatarViewController_$$c__DisplayClass60_0SizeCheck;
  static_assert(sizeof(EditAvatarViewController::$$c__DisplayClass60_0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0::$SetupColorButton$b__0
// Il2CppName: <SetupColorButton>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0::*)()>(&GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0::$SetupColorButton$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0*), "<SetupColorButton>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0::$SetupColorButton$b__1
// Il2CppName: <SetupColorButton>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0::*)(::UnityEngine::Color)>(&GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0::$SetupColorButton$b__1)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0*), "<SetupColorButton>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarViewController::$$c__DisplayClass60_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
