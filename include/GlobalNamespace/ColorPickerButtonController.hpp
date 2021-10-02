// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ColorPickerButtonController
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorPickerButtonController : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Image _colorImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* colorImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Button _button
    UnityEngine::UI::Button*& dyn__button();
    // Get instance field reference: private UnityEngine.UI.Image _colorImage
    UnityEngine::UI::Image*& dyn__colorImage();
    // public UnityEngine.UI.Button get_button()
    // Offset: 0x1199BC4
    UnityEngine::UI::Button* get_button();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1199BCC
    void SetColor(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1199BF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorPickerButtonController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorPickerButtonController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorPickerButtonController*, creationType>()));
    }
  }; // ColorPickerButtonController
  #pragma pack(pop)
  static check_size<sizeof(ColorPickerButtonController), 32 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_ColorPickerButtonControllerSizeCheck;
  static_assert(sizeof(ColorPickerButtonController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorPickerButtonController*, "", "ColorPickerButtonController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorPickerButtonController::get_button
// Il2CppName: get_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button* (GlobalNamespace::ColorPickerButtonController::*)()>(&GlobalNamespace::ColorPickerButtonController::get_button)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorPickerButtonController*), "get_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorPickerButtonController::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorPickerButtonController::*)(UnityEngine::Color)>(&GlobalNamespace::ColorPickerButtonController::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorPickerButtonController*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorPickerButtonController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
