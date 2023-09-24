#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
/// @brief Convert operator to UnityEngine::UIElements::IUxmlFactory
constexpr  UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::operator UnityEngine::UIElements::IUxmlFactory() const noexcept {
return UnityEngine::UIElements::IUxmlFactory(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::__set_m_Traits(TTraits value)  {
::cordl_internals::setInstanceField<TTraits, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TTraits>(value));
}
constexpr TTraits UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::__get_m_Traits() const {
return ::cordl_internals::getInstanceField<TTraits, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits> UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::New_ctor()  {
UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>>())};
return o;
}
 void UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::get_uxmlName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>>::get(),
                            "get_uxmlName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::get_uxmlNamespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>>::get(),
                            "get_uxmlNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::get_uxmlQualifiedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>>::get(),
                            "get_uxmlQualifiedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::AcceptsAttributeBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>>::get(),
                            "AcceptsAttributeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bag, cc);
}
 UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>::Create(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlFactory_2<TCreatedType,TTraits>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method, bag, cc);
}
