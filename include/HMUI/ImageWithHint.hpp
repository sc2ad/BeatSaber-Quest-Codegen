// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageWithHint
  class ImageWithHint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ImageWithHint);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ImageWithHint*, "HMUI", "ImageWithHint");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ImageWithHint
  // [TokenAttribute] Offset: FFFFFFFF
  class ImageWithHint : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.UI.Image _image
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Image* image;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private HMUI.HoverHint _hoverHint
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::HoverHint* hoverHint;
    // Field size check
    static_assert(sizeof(::HMUI::HoverHint*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Image _image
    ::UnityEngine::UI::Image*& dyn__image();
    // Get instance field reference: private HMUI.HoverHint _hoverHint
    ::HMUI::HoverHint*& dyn__hoverHint();
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0x16A3BD0
    ::UnityEngine::Sprite* get_sprite();
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x16A3BB4
    void set_sprite(::UnityEngine::Sprite* value);
    // public System.Void set_hintText(System.String value)
    // Offset: 0x16A3BEC
    void set_hintText(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x16A3C08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageWithHint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ImageWithHint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageWithHint*, creationType>()));
    }
  }; // HMUI.ImageWithHint
  #pragma pack(pop)
  static check_size<sizeof(ImageWithHint), 32 + sizeof(::HMUI::HoverHint*)> __HMUI_ImageWithHintSizeCheck;
  static_assert(sizeof(ImageWithHint) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ImageWithHint::get_sprite
// Il2CppName: get_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (HMUI::ImageWithHint::*)()>(&HMUI::ImageWithHint::get_sprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageWithHint*), "get_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ImageWithHint::set_sprite
// Il2CppName: set_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageWithHint::*)(::UnityEngine::Sprite*)>(&HMUI::ImageWithHint::set_sprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageWithHint*), "set_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ImageWithHint::set_hintText
// Il2CppName: set_hintText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageWithHint::*)(::StringW)>(&HMUI::ImageWithHint::set_hintText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ImageWithHint*), "set_hintText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ImageWithHint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
