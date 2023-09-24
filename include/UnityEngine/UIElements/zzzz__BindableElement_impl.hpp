#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBindable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c4090c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::IUxmlAttributes, UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2c40750;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::__set_m_PropertyPath(UnityEngine::UIElements::UxmlStringAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlStringAttributeDescription, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlStringAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlStringAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::__get_m_PropertyPath() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlStringAttributeDescription, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::New_ctor()  {
UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits>())};
return o;
}
 void UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits::Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, bag, cc);
}
//  Writing Method size for method: UnityEngine::UIElements::BindableElement.get_binding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IBinding (UnityEngine::UIElements::BindableElement::*)()>(&UnityEngine::UIElements::BindableElement::get_binding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c441f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BindableElement>::get(),
                            "get_binding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BindableElement.set_bindingPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BindableElement::*)(::StringW)>(&UnityEngine::UIElements::BindableElement::set_bindingPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c441f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BindableElement>::get(),
                            "set_bindingPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BindableElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BindableElement::*)()>(&UnityEngine::UIElements::BindableElement::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c401a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BindableElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::UIElements::IBindable
constexpr  UnityEngine::UIElements::BindableElement::operator UnityEngine::UIElements::IBindable() const noexcept {
return UnityEngine::UIElements::IBindable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BindableElement::__set__binding_k__BackingField(UnityEngine::UIElements::IBinding value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::IBinding, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::IBinding>(value));
}
constexpr UnityEngine::UIElements::IBinding UnityEngine::UIElements::BindableElement::__get__binding_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::IBinding, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BindableElement::__set__bindingPath_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::BindableElement::__get__bindingPath_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::IBinding UnityEngine::UIElements::BindableElement::get_binding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BindableElement>::get(),
                            "get_binding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IBinding, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BindableElement::set_bindingPath(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BindableElement>::get(),
                            "set_bindingPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::BindableElement UnityEngine::UIElements::BindableElement::New_ctor()  {
UnityEngine::UIElements::BindableElement o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::BindableElement>())};
return o;
}
 void UnityEngine::UIElements::BindableElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BindableElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c44200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory::New_ctor()  {
UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory>())};
return o;
}
 void UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
