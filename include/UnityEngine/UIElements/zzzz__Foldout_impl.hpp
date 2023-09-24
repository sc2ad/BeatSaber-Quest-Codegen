#pragma once
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Toggle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::IUxmlAttributes, UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2cbcbbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2cbccec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::__set_m_Text(UnityEngine::UIElements::UxmlStringAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlStringAttributeDescription, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlStringAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlStringAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::__get_m_Text() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlStringAttributeDescription, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::__set_m_Value(UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::__get_m_Value() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, bag, cc);
}
 UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::New_ctor()  {
UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits>())};
return o;
}
 void UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UIElements::Foldout.get_contentContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::VisualElement (UnityEngine::UIElements::Foldout::*)()>(&UnityEngine::UIElements::Foldout::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cbc430;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::Foldout),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                                  95
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::Foldout::*)()>(&UnityEngine::UIElements::Foldout::get_text)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2cbc438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Foldout::*)(::StringW)>(&UnityEngine::UIElements::Foldout::set_text)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2cb5b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Foldout::*)()>(&UnityEngine::UIElements::Foldout::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cbc46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout.set_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Foldout::*)(bool)>(&UnityEngine::UIElements::Foldout::set_value)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2cbc474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "set_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout.SetValueWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Foldout::*)(bool)>(&UnityEngine::UIElements::Foldout::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2cbc654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "SetValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout.OnViewDataReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Foldout::*)()>(&UnityEngine::UIElements::Foldout::OnViewDataReady)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cbc774;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::Foldout),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                                  92
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Foldout::*)()>(&UnityEngine::UIElements::Foldout::_ctor)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2cb5848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout.OnAttachToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Foldout::*)(UnityEngine::UIElements::AttachToPanelEvent)>(&UnityEngine::UIElements::Foldout::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2cbc7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Foldout.__ctor_b__23_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Foldout::*)(UnityEngine::UIElements::ChangeEvent_1<bool>)>(&UnityEngine::UIElements::Foldout::__ctor_b__23_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2cbcb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "<.ctor>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ChangeEvent_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::INotifyValueChanged_1<bool>
constexpr  UnityEngine::UIElements::Foldout::operator UnityEngine::UIElements::INotifyValueChanged_1<bool>() const noexcept {
return UnityEngine::UIElements::INotifyValueChanged_1<bool>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::Foldout::__set_m_Toggle(UnityEngine::UIElements::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Toggle, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::Toggle>(value));
}
constexpr UnityEngine::UIElements::Toggle UnityEngine::UIElements::Foldout::__get_m_Toggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Toggle, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::Foldout::__set_m_Container(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::Foldout::__get_m_Container() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::Foldout::__set_m_Value(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::Foldout::__get_m_Value() const {
return ::cordl_internals::getInstanceField<bool, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::Foldout::__set_ussClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::Foldout::__get_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>();
}
 void UnityEngine::UIElements::Foldout::__set_toggleUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "toggleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::Foldout::__get_toggleUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "toggleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>();
}
 void UnityEngine::UIElements::Foldout::__set_contentUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::Foldout::__get_contentUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>();
}
 void UnityEngine::UIElements::Foldout::__set_inputUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::Foldout::__get_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>();
}
 void UnityEngine::UIElements::Foldout::__set_checkmarkUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::Foldout::__get_checkmarkUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>();
}
 void UnityEngine::UIElements::Foldout::__set_textUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::Foldout::__get_textUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>();
}
 void UnityEngine::UIElements::Foldout::__set_ussFoldoutDepthClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussFoldoutDepthClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::Foldout::__get_ussFoldoutDepthClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussFoldoutDepthClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>();
}
 void UnityEngine::UIElements::Foldout::__set_ussFoldoutMaxDepth(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "ussFoldoutMaxDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::Foldout::__get_ussFoldoutMaxDepth()  {
return ::cordl_internals::getStaticField<int32_t, "ussFoldoutMaxDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get>();
}
 UnityEngine::UIElements::VisualElement UnityEngine::UIElements::Foldout::get_contentContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "get_contentContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::UIElements::Foldout::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::Foldout::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::Foldout::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::Foldout::set_value(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "set_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::Foldout::SetValueWithoutNotify(bool newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "SetValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newValue);
}
 void UnityEngine::UIElements::Foldout::OnViewDataReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "OnViewDataReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::Foldout UnityEngine::UIElements::Foldout::New_ctor()  {
UnityEngine::UIElements::Foldout o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::Foldout>())};
return o;
}
 void UnityEngine::UIElements::Foldout::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::Foldout::OnAttachToPanel(UnityEngine::UIElements::AttachToPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::Foldout::__ctor_b__23_0(UnityEngine::UIElements::ChangeEvent_1<bool> evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Foldout>::get(),
                            "<.ctor>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ChangeEvent_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cbcb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory::New_ctor()  {
UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory>())};
return o;
}
 void UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
