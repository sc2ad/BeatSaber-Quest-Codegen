// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
  // Forward declaring type: TitleViewController
  class TitleViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::TitleViewController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TitleViewController*, "HMUI", "TitleViewController");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TitleViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class TitleViewController : public ::HMUI::ViewController {
    public:
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x70
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // public System.Void SetText(System.String text)
    // Offset: 0x17164A0
    void SetText(::StringW text);
    // public System.Void .ctor()
    // Offset: 0x17164BC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TitleViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::TitleViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TitleViewController*, creationType>()));
    }
  }; // HMUI.TitleViewController
  #pragma pack(pop)
  static check_size<sizeof(TitleViewController), 112 + sizeof(::TMPro::TextMeshProUGUI*)> __HMUI_TitleViewControllerSizeCheck;
  static_assert(sizeof(TitleViewController) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::TitleViewController::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TitleViewController::*)(::StringW)>(&HMUI::TitleViewController::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TitleViewController*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HMUI::TitleViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
