// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UIKeyboard
#include "GlobalNamespace/UIKeyboard.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0*, "", "UIKeyboard/<>c__DisplayClass21_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UIKeyboard/<>c__DisplayClass21_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UIKeyboard::$$c__DisplayClass21_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String key
    // Size: 0x8
    // Offset: 0x10
    ::StringW key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UIKeyboard <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::UIKeyboard* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UIKeyboard*) == 0x8);
    public:
    // Get instance field reference: public System.String key
    [[deprecated("Use field access instead!")]] ::StringW& dyn_key();
    // Get instance field reference: public UIKeyboard <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UIKeyboard*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x13F5B08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboard::$$c__DisplayClass21_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboard::$$c__DisplayClass21_0*, creationType>()));
    }
    // System.Void <Awake>b__4()
    // Offset: 0x13F5BC8
    void $Awake$b__4();
  }; // UIKeyboard/<>c__DisplayClass21_0
  #pragma pack(pop)
  static check_size<sizeof(UIKeyboard::$$c__DisplayClass21_0), 24 + sizeof(::GlobalNamespace::UIKeyboard*)> __GlobalNamespace_UIKeyboard_$$c__DisplayClass21_0SizeCheck;
  static_assert(sizeof(UIKeyboard::$$c__DisplayClass21_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0::$Awake$b__4
// Il2CppName: <Awake>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0::*)()>(&GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0::$Awake$b__4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0*), "<Awake>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
