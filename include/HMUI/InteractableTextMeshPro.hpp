// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: InteractableTextMeshPro
  class InteractableTextMeshPro;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::InteractableTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InteractableTextMeshPro*, "HMUI", "InteractableTextMeshPro");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.InteractableTextMeshPro
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractableTextMeshPro : public ::UnityEngine::EventSystems::UIBehaviour {
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
    // private System.Single _interactionAlpha
    // Size: 0x4
    // Offset: 0x18
    float interactionAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noInteractionAlpha
    // Size: 0x4
    // Offset: 0x1C
    float noInteractionAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x122B650
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.CanvasGroup> _canvasGroupCache
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* canvasGroupCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _interactionAlpha
    float& dyn__interactionAlpha();
    // Get instance field reference: private System.Single _noInteractionAlpha
    float& dyn__noInteractionAlpha();
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.CanvasGroup> _canvasGroupCache
    ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>*& dyn__canvasGroupCache();
    // public System.Void .ctor()
    // Offset: 0x16A5AD4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractableTextMeshPro* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::InteractableTextMeshPro::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractableTextMeshPro*, creationType>()));
    }
    // protected override System.Void OnCanvasGroupChanged()
    // Offset: 0x16A593C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnCanvasGroupChanged()
    void OnCanvasGroupChanged();
  }; // HMUI.InteractableTextMeshPro
  #pragma pack(pop)
  static check_size<sizeof(InteractableTextMeshPro), 40 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>*)> __HMUI_InteractableTextMeshProSizeCheck;
  static_assert(sizeof(InteractableTextMeshPro) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::InteractableTextMeshPro::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::InteractableTextMeshPro::OnCanvasGroupChanged
// Il2CppName: OnCanvasGroupChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InteractableTextMeshPro::*)()>(&HMUI::InteractableTextMeshPro::OnCanvasGroupChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InteractableTextMeshPro*), "OnCanvasGroupChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
