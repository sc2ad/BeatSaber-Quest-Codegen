// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.InputFieldView
#include "HMUI/InputFieldView.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::InputFieldView::InputFieldChanged);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldView::InputFieldChanged*, "HMUI", "InputFieldView/InputFieldChanged");
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.InputFieldView/HMUI.InputFieldChanged
  // [TokenAttribute] Offset: FFFFFFFF
  class InputFieldView::InputFieldChanged : public ::UnityEngine::Events::UnityEvent_1<::HMUI::InputFieldView*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x16DB370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldView::InputFieldChanged* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::InputFieldView::InputFieldChanged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldView::InputFieldChanged*, creationType>()));
    }
  }; // HMUI.InputFieldView/HMUI.InputFieldChanged
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::InputFieldView::InputFieldChanged::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
