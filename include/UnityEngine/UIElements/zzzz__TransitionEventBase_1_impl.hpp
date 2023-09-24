#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
constexpr void UnityEngine::UIElements::TransitionEventBase_1<T>::__set__stylePropertyNames_k__BackingField(UnityEngine::UIElements::StylePropertyNameCollection value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StylePropertyNameCollection, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::StylePropertyNameCollection>(value));
}
constexpr UnityEngine::UIElements::StylePropertyNameCollection UnityEngine::UIElements::TransitionEventBase_1<T>::__get__stylePropertyNames_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StylePropertyNameCollection, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::TransitionEventBase_1<T>::__set__elapsedTime_k__BackingField(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::UIElements::TransitionEventBase_1<T>::__get__elapsedTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<double_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::StylePropertyNameCollection UnityEngine::UIElements::TransitionEventBase_1<T>::get_stylePropertyNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TransitionEventBase_1<T>>::get(),
                            "get_stylePropertyNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::StylePropertyNameCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::TransitionEventBase_1<T>::set_elapsedTime(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TransitionEventBase_1<T>>::get(),
                            "set_elapsedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::TransitionEventBase_1<T> UnityEngine::UIElements::TransitionEventBase_1<T>::New_ctor()  {
UnityEngine::UIElements::TransitionEventBase_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::TransitionEventBase_1<T>>())};
return o;
}
 void UnityEngine::UIElements::TransitionEventBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TransitionEventBase_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::TransitionEventBase_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TransitionEventBase_1<T>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::TransitionEventBase_1<T>::LocalInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TransitionEventBase_1<T>>::get(),
                            "LocalInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T UnityEngine::UIElements::TransitionEventBase_1<T>::GetPooled(UnityEngine::UIElements::StylePropertyName stylePropertyName, double_t elapsedTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TransitionEventBase_1<T>>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StylePropertyName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, stylePropertyName, elapsedTime);
}
