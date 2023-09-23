#pragma once
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "HMUI/zzzz__InteractableTextMeshPro_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: HMUI::InteractableTextMeshPro.OnCanvasGroupChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InteractableTextMeshPro::*)()>(&HMUI::InteractableTextMeshPro::OnCanvasGroupChanged)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1fa924c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::InteractableTextMeshPro),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InteractableTextMeshPro>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InteractableTextMeshPro._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InteractableTextMeshPro::*)()>(&HMUI::InteractableTextMeshPro::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1fa93e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InteractableTextMeshPro>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::InteractableTextMeshPro::__set__interactionAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HMUI::InteractableTextMeshPro::__get__interactionAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InteractableTextMeshPro::__set__noInteractionAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HMUI::InteractableTextMeshPro::__get__noInteractionAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InteractableTextMeshPro::__set__text(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI HMUI::InteractableTextMeshPro::__get__text() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InteractableTextMeshPro::__set__canvasGroupCache(System::Collections::Generic::List_1<UnityEngine::CanvasGroup> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::CanvasGroup>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::CanvasGroup>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::CanvasGroup> HMUI::InteractableTextMeshPro::__get__canvasGroupCache() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::CanvasGroup>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::InteractableTextMeshPro::OnCanvasGroupChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InteractableTextMeshPro>::get(),
                            "OnCanvasGroupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 HMUI::InteractableTextMeshPro::InteractableTextMeshPro()  : UnityEngine::EventSystems::UIBehaviour(THROW_UNLESS(::il2cpp_utils::New<InteractableTextMeshPro>())) {}
 void HMUI::InteractableTextMeshPro::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InteractableTextMeshPro>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
