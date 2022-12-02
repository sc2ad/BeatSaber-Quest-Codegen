// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PageControlElement
  class PageControlElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PageControlElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PageControlElement*, "", "PageControlElement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PageControlElement
  // [TokenAttribute] Offset: FFFFFFFF
  class PageControlElement : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private HMUI.ImageView _imageView
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::ImageView* imageView;
    // Field size check
    static_assert(sizeof(::HMUI::ImageView*) == 0x8);
    // [SpaceAttribute] Offset: 0x1122A24
    // private UnityEngine.Color _selectedColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color selectedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _unselectedColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color unselectedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__rectTransform();
    // Get instance field reference: private HMUI.ImageView _imageView
    [[deprecated("Use field access instead!")]] ::HMUI::ImageView*& dyn__imageView();
    // Get instance field reference: private UnityEngine.Color _selectedColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__selectedColor();
    // Get instance field reference: private UnityEngine.Color _unselectedColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__unselectedColor();
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x137DA54
    ::UnityEngine::RectTransform* get_rectTransform();
    // public System.Void .ctor()
    // Offset: 0x137DA5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PageControlElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PageControlElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PageControlElement*, creationType>()));
    }
    // public System.Void SetSelected(System.Boolean isSelected)
    // Offset: 0x137D81C
    void SetSelected(bool isSelected);
  }; // PageControlElement
  #pragma pack(pop)
  static check_size<sizeof(PageControlElement), 56 + sizeof(::UnityEngine::Color)> __GlobalNamespace_PageControlElementSizeCheck;
  static_assert(sizeof(PageControlElement) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PageControlElement::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (GlobalNamespace::PageControlElement::*)()>(&GlobalNamespace::PageControlElement::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageControlElement*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PageControlElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PageControlElement::SetSelected
// Il2CppName: SetSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageControlElement::*)(bool)>(&GlobalNamespace::PageControlElement::SetSelected)> {
  static const MethodInfo* get() {
    static auto* isSelected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PageControlElement*), "SetSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isSelected});
  }
};
