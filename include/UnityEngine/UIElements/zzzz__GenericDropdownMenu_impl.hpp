#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GenericDropdownMenu_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb95e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::__set_element(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::__get_element() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::__set_action(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::__get_action() const {
return ::cordl_internals::getInstanceField<System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::__set_actionUserData(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Action_1<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Action_1<::bs_hook::Il2CppWrapperType> UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::__get_actionUserData() const {
return ::cordl_internals::getInstanceField<System::Action_1<::bs_hook::Il2CppWrapperType>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::UnityEngine__UIElements__GenericDropdownMenu__MenuItem()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UIElements__GenericDropdownMenu__MenuItem>())) {}
 void UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "__4__this", ty: "UnityEngine::UIElements::GenericDropdownMenu", modifiers: "", def_value: Some("csnull") }, CppParam { name: "selectedIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0(UnityEngine::UIElements::GenericDropdownMenu __4__this, int32_t selectedIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->__4__this = __4__this;
this->selectedIndex = selectedIndex;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0::__set___4__this(UnityEngine::UIElements::GenericDropdownMenu value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::GenericDropdownMenu, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::GenericDropdownMenu>(value));
}
constexpr UnityEngine::UIElements::GenericDropdownMenu UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::GenericDropdownMenu, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0::__set_selectedIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0::__get_selectedIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.get_contentContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::VisualElement (UnityEngine::UIElements::GenericDropdownMenu::*)()>(&UnityEngine::UIElements::GenericDropdownMenu::get_contentContainer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cb7cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "get_contentContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)()>(&UnityEngine::UIElements::GenericDropdownMenu::_ctor)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2cb18f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnAttachToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::AttachToPanelEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2cb7d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnDetachFromPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::DetachFromPanelEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2cb814c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.Hide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)()>(&UnityEngine::UIElements::GenericDropdownMenu::Hide)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2cb85e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::KeyboardNavigationOperation, UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::GenericDropdownMenu::Apply)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cb86c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::KeyboardNavigationOperation)>(&UnityEngine::UIElements::GenericDropdownMenu::Apply)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2cb8704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::PointerDownEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnPointerDown)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2cb8a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerDownEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnPointerMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::PointerMoveEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnPointerMove)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2cb8ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerMoveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::PointerUpEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnPointerUp)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2cb8e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerUpEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnFocusOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::FocusOutEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnFocusOut)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2cb8f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnFocusOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusOutEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnParentResized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::GeometryChangedEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnParentResized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cb9090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnParentResized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.UpdateSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::GenericDropdownMenu::UpdateSelection)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2cb8bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "UpdateSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.ChangeSelectedIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(int32_t, int32_t)>(&UnityEngine::UIElements::GenericDropdownMenu::ChangeSelectedIndex)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2cb9094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "ChangeSelectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.GetSelectedIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::GenericDropdownMenu::*)()>(&UnityEngine::UIElements::GenericDropdownMenu::GetSelectedIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2cb8888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "GetSelectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.AddItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, System::Action)>(&UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cb91c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "AddItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.AddSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW)>(&UnityEngine::UIElements::GenericDropdownMenu::AddSeparator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cb9530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "AddSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.AddItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem (UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, bool, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2cb91f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "AddItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.DropDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::Rect, UnityEngine::UIElements::VisualElement, bool)>(&UnityEngine::UIElements::GenericDropdownMenu::DropDown)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x2cb95e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "DropDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnTargetElementDetachFromPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::DetachFromPanelEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnTargetElementDetachFromPanel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cba428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnTargetElementDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.OnContainerGeometryChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(UnityEngine::UIElements::GeometryChangedEvent)>(&UnityEngine::UIElements::GenericDropdownMenu::OnContainerGeometryChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cba42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnContainerGeometryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu.EnsureVisibilityInParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)()>(&UnityEngine::UIElements::GenericDropdownMenu::EnsureVisibilityInParent)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x2cb9d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "EnsureVisibilityInParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu._Apply_g__UpdateSelectionDown_25_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(int32_t, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0>)>(&UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionDown_25_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2cb89d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "<Apply>g__UpdateSelectionDown|25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::GenericDropdownMenu._Apply_g__UpdateSelectionUp_25_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::GenericDropdownMenu::*)(int32_t, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0>)>(&UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionUp_25_1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cb8928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "<Apply>g__UpdateSelectionUp|25_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::IGenericMenu
constexpr  UnityEngine::UIElements::GenericDropdownMenu::operator UnityEngine::UIElements::IGenericMenu() const noexcept {
return UnityEngine::UIElements::IGenericMenu(::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::GenericDropdownMenu::__set_ussClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::GenericDropdownMenu::__get_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>();
}
 void UnityEngine::UIElements::GenericDropdownMenu::__set_itemUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::GenericDropdownMenu::__get_itemUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>();
}
 void UnityEngine::UIElements::GenericDropdownMenu::__set_labelUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::GenericDropdownMenu::__get_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>();
}
 void UnityEngine::UIElements::GenericDropdownMenu::__set_containerInnerUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "containerInnerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::GenericDropdownMenu::__get_containerInnerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "containerInnerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>();
}
 void UnityEngine::UIElements::GenericDropdownMenu::__set_containerOuterUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "containerOuterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::GenericDropdownMenu::__get_containerOuterUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "containerOuterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>();
}
 void UnityEngine::UIElements::GenericDropdownMenu::__set_checkmarkUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::GenericDropdownMenu::__get_checkmarkUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>();
}
 void UnityEngine::UIElements::GenericDropdownMenu::__set_separatorUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "separatorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::GenericDropdownMenu::__get_separatorUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "separatorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get>();
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_Items(System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem> UnityEngine::UIElements::GenericDropdownMenu::__get_m_Items() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_MenuContainer(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::GenericDropdownMenu::__get_m_MenuContainer() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_OuterContainer(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::GenericDropdownMenu::__get_m_OuterContainer() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_ScrollView(UnityEngine::UIElements::ScrollView value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ScrollView, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::ScrollView>(value));
}
constexpr UnityEngine::UIElements::ScrollView UnityEngine::UIElements::GenericDropdownMenu::__get_m_ScrollView() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ScrollView, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_PanelRootVisualContainer(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::GenericDropdownMenu::__get_m_PanelRootVisualContainer() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_TargetElement(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::GenericDropdownMenu::__get_m_TargetElement() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_DesiredRect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect UnityEngine::UIElements::GenericDropdownMenu::__get_m_DesiredRect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_NavigationManipulator(UnityEngine::UIElements::KeyboardNavigationManipulator value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::KeyboardNavigationManipulator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::KeyboardNavigationManipulator>(value));
}
constexpr UnityEngine::UIElements::KeyboardNavigationManipulator UnityEngine::UIElements::GenericDropdownMenu::__get_m_NavigationManipulator() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::KeyboardNavigationManipulator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__set_m_MousePosition(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::GenericDropdownMenu::__get_m_MousePosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::VisualElement UnityEngine::UIElements::GenericDropdownMenu::get_contentContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "get_contentContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UIElements::GenericDropdownMenu::GenericDropdownMenu()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GenericDropdownMenu>())) {}
 void UnityEngine::UIElements::GenericDropdownMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnAttachToPanel(UnityEngine::UIElements::AttachToPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnDetachFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::Hide()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::GenericDropdownMenu::Apply(UnityEngine::UIElements::KeyboardNavigationOperation op, UnityEngine::UIElements::EventBase sourceEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op, sourceEvent);
}
 bool UnityEngine::UIElements::GenericDropdownMenu::Apply(UnityEngine::UIElements::KeyboardNavigationOperation op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, op);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnPointerDown(UnityEngine::UIElements::PointerDownEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerDownEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnPointerMove(UnityEngine::UIElements::PointerMoveEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerMoveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnPointerUp(UnityEngine::UIElements::PointerUpEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerUpEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnFocusOut(UnityEngine::UIElements::FocusOutEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnFocusOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusOutEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnParentResized(UnityEngine::UIElements::GeometryChangedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnParentResized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::UpdateSelection(UnityEngine::UIElements::VisualElement target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "UpdateSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target);
}
 void UnityEngine::UIElements::GenericDropdownMenu::ChangeSelectedIndex(int32_t newIndex, int32_t previousIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "ChangeSelectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newIndex, previousIndex);
}
 int32_t UnityEngine::UIElements::GenericDropdownMenu::GetSelectedIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "GetSelectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "AddItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, itemName, isChecked, action);
}
 void UnityEngine::UIElements::GenericDropdownMenu::AddSeparator(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "AddSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path);
}
/// @param data: ::bs_hook::Il2CppWrapperType (default: csnull)
 UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, bool isEnabled, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "AddItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu__MenuItem, false>(const_cast<void*>(instance), ___internal_method, itemName, isChecked, isEnabled, data);
}
/// @param targetElement: UnityEngine::UIElements::VisualElement (default: csnull)
/// @param anchored: bool (default: false)
 void UnityEngine::UIElements::GenericDropdownMenu::DropDown(UnityEngine::Rect position, UnityEngine::UIElements::VisualElement targetElement, bool anchored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "DropDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position, targetElement, anchored);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnTargetElementDetachFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnTargetElementDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::OnContainerGeometryChanged(UnityEngine::UIElements::GeometryChangedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "OnContainerGeometryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::GenericDropdownMenu::EnsureVisibilityInParent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "EnsureVisibilityInParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionDown_25_0(int32_t newIndex, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0> )  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "<Apply>g__UpdateSelectionDown|25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newIndex, );
}
 void UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionUp_25_1(int32_t newIndex, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0> )  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::GenericDropdownMenu>::get(),
                            "<Apply>g__UpdateSelectionUp|25_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__GenericDropdownMenu____c__DisplayClass25_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newIndex, );
}
