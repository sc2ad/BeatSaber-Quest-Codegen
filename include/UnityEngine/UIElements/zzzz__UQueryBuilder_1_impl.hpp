#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryBuilder_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryState_1_def.hpp"
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::UQueryBuilder_1<T>>
constexpr  UnityEngine::UIElements::UQueryBuilder_1<T>::operator System::IEquatable_1<UnityEngine::UIElements::UQueryBuilder_1<T>>() const {
return System::IEquatable_1<UnityEngine::UIElements::UQueryBuilder_1<T>>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_StyleSelectors", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Parts", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Element", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Matchers", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Relationship", ty: "UnityEngine::UIElements::StyleSelectorRelationship", modifiers: "", def_value: Some("{}") }, CppParam { name: "pseudoStatesMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "negatedPseudoStatesMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UQueryBuilder_1<T>::UQueryBuilder_1(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> m_StyleSelectors, System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> m_Parts, UnityEngine::UIElements::VisualElement m_Element, System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> m_Matchers, UnityEngine::UIElements::StyleSelectorRelationship m_Relationship, int32_t pseudoStatesMask, int32_t negatedPseudoStatesMask) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_StyleSelectors = m_StyleSelectors;
this->m_Parts = m_Parts;
this->m_Element = m_Element;
this->m_Matchers = m_Matchers;
this->m_Relationship = m_Relationship;
this->pseudoStatesMask = pseudoStatesMask;
this->negatedPseudoStatesMask = negatedPseudoStatesMask;
}
constexpr void UnityEngine::UIElements::UQueryBuilder_1<T>::__set_m_StyleSelectors(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector>, 0x0>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> UnityEngine::UIElements::UQueryBuilder_1<T>::__get_m_StyleSelectors() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector>, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UQueryBuilder_1<T>::__set_m_Parts(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart>, 0x8>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> UnityEngine::UIElements::UQueryBuilder_1<T>::__get_m_Parts() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart>, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UQueryBuilder_1<T>::__set_m_Element(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x10>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UQueryBuilder_1<T>::__get_m_Element() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UQueryBuilder_1<T>::__set_m_Matchers(System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher>, 0x18>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher> UnityEngine::UIElements::UQueryBuilder_1<T>::__get_m_Matchers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::RuleMatcher>, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::UQueryBuilder_1<T>::__set_m_Relationship(UnityEngine::UIElements::StyleSelectorRelationship value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSelectorRelationship, 0x20>(this->__instance, std::forward<UnityEngine::UIElements::StyleSelectorRelationship>(value));
}
constexpr UnityEngine::UIElements::StyleSelectorRelationship UnityEngine::UIElements::UQueryBuilder_1<T>::__get_m_Relationship() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSelectorRelationship, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::UQueryBuilder_1<T>::__set_pseudoStatesMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UQueryBuilder_1<T>::__get_pseudoStatesMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void UnityEngine::UIElements::UQueryBuilder_1<T>::__set_negatedPseudoStatesMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UQueryBuilder_1<T>::__get_negatedPseudoStatesMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector> UnityEngine::UIElements::UQueryBuilder_1<T>::get_styleSelectors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "get_styleSelectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelector>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart> UnityEngine::UIElements::UQueryBuilder_1<T>::get_parts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "get_parts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSelectorPart>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UQueryBuilder_1<T>::_ctor(UnityEngine::UIElements::VisualElement visualElement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, visualElement);
}
 UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Class(::StringW classname)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "Class",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UQueryBuilder_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, classname);
}
 UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Name(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UQueryBuilder_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, id);
}
/// @param name: ::StringW (default: csnull)
/// @param className: ::StringW (default: csnull)
template<typename T2>
 UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::OfType(::StringW name, ::StringW className)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                        "OfType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UQueryBuilder_1<T2>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name, className);
}
 UnityEngine::UIElements::UQueryBuilder_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::SingleBaseType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "SingleBaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UQueryBuilder_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UQueryBuilder_1<T>::AddClass(::StringW c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "AddClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, c);
}
 void UnityEngine::UIElements::UQueryBuilder_1<T>::AddName(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "AddName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, id);
}
template<typename T2>
 void UnityEngine::UIElements::UQueryBuilder_1<T>::AddType()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                        "AddType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
template<typename T2>
 UnityEngine::UIElements::UQueryBuilder_1<T2> UnityEngine::UIElements::UQueryBuilder_1<T>::AddRelationship(UnityEngine::UIElements::StyleSelectorRelationship relationship)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                        "AddRelationship",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSelectorRelationship>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UQueryBuilder_1<T2>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, relationship);
}
 void UnityEngine::UIElements::UQueryBuilder_1<T>::AddPseudoStatesRuleIfNecessasy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "AddPseudoStatesRuleIfNecessasy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UQueryBuilder_1<T>::FinishSelector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "FinishSelector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::UIElements::UQueryBuilder_1<T>::CurrentSelectorEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "CurrentSelectorEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UQueryBuilder_1<T>::FinishCurrentSelector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "FinishCurrentSelector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::UIElements::UQueryState_1<T> UnityEngine::UIElements::UQueryBuilder_1<T>::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UQueryState_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 T UnityEngine::UIElements::UQueryBuilder_1<T>::op_Implicit_T(UnityEngine::UIElements::UQueryBuilder_1<T> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UQueryBuilder_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, s);
}
 T UnityEngine::UIElements::UQueryBuilder_1<T>::First()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UQueryBuilder_1<T>::ToList(System::Collections::Generic::List_1<T> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "ToList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, results);
}
 bool UnityEngine::UIElements::UQueryBuilder_1<T>::Equals(UnityEngine::UIElements::UQueryBuilder_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UQueryBuilder_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::UIElements::UQueryBuilder_1<T>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t UnityEngine::UIElements::UQueryBuilder_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UQueryBuilder_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
