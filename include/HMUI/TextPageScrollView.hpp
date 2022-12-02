// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ScrollView
#include "HMUI/ScrollView.hpp"
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
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::TextPageScrollView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextPageScrollView*, "HMUI", "TextPageScrollView");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TextPageScrollView
  // [TokenAttribute] Offset: FFFFFFFF
  class TextPageScrollView : public ::HMUI::ScrollView {
    public:
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0xA0
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // public System.Void SetText(System.String text)
    // Offset: 0x1714FAC
    void SetText(::StringW text);
    // public System.Void .ctor()
    // Offset: 0x1715010
    // Implemented from: HMUI.ScrollView
    // Base method: System.Void ScrollView::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextPageScrollView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::TextPageScrollView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextPageScrollView*, creationType>()));
    }
  }; // HMUI.TextPageScrollView
  #pragma pack(pop)
  static check_size<sizeof(TextPageScrollView), 160 + sizeof(::TMPro::TextMeshProUGUI*)> __HMUI_TextPageScrollViewSizeCheck;
  static_assert(sizeof(TextPageScrollView) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::TextPageScrollView::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextPageScrollView::*)(::StringW)>(&HMUI::TextPageScrollView::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextPageScrollView*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HMUI::TextPageScrollView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
