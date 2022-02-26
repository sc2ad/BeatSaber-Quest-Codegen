// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: UIKeyboardKey
  class UIKeyboardKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::UIKeyboardKey);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UIKeyboardKey*, "HMUI", "UIKeyboardKey");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.UIKeyboardKey
  // [TokenAttribute] Offset: FFFFFFFF
  class UIKeyboardKey : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.KeyCode _keyCode
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::KeyCode keyCode;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // Padding between fields: keyCode and: text
    char __padding0[0x4] = {};
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private System.String _overrideText
    // Size: 0x8
    // Offset: 0x28
    ::StringW overrideText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _canBeUppercase
    // Size: 0x1
    // Offset: 0x30
    bool canBeUppercase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.KeyCode _keyCode
    ::UnityEngine::KeyCode& dyn__keyCode();
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private System.String _overrideText
    ::StringW& dyn__overrideText();
    // Get instance field reference: private System.Boolean _canBeUppercase
    bool& dyn__canBeUppercase();
    // public UnityEngine.KeyCode get_keyCode()
    // Offset: 0x16B6C38
    ::UnityEngine::KeyCode get_keyCode();
    // public System.Boolean get_canBeUppercase()
    // Offset: 0x16B6C40
    bool get_canBeUppercase();
    // protected System.Void Awake()
    // Offset: 0x16B6C48
    void Awake();
    // protected System.Void OnValidate()
    // Offset: 0x16B6D0C
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x16B6E08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboardKey* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::UIKeyboardKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboardKey*, creationType>()));
    }
  }; // HMUI.UIKeyboardKey
  #pragma pack(pop)
  static check_size<sizeof(UIKeyboardKey), 48 + sizeof(bool)> __HMUI_UIKeyboardKeySizeCheck;
  static_assert(sizeof(UIKeyboardKey) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::UIKeyboardKey::get_keyCode
// Il2CppName: get_keyCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::KeyCode (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::get_keyCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboardKey*), "get_keyCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboardKey::get_canBeUppercase
// Il2CppName: get_canBeUppercase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::get_canBeUppercase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboardKey*), "get_canBeUppercase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboardKey::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboardKey*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboardKey::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboardKey::*)()>(&HMUI::UIKeyboardKey::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboardKey*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboardKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
