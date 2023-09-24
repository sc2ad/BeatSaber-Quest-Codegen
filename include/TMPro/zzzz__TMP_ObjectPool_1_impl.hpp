#pragma once
#include "TMPro/zzzz__TMP_ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
constexpr void TMPro::TMP_ObjectPool_1<T>::__set_m_Stack(System::Collections::Generic::Stack_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Stack_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Stack_1<T>>(value));
}
constexpr System::Collections::Generic::Stack_1<T> TMPro::TMP_ObjectPool_1<T>::__get_m_Stack() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Stack_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_ObjectPool_1<T>::__set_m_ActionOnGet(UnityEngine::Events::UnityAction_1<T> value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityAction_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityAction_1<T>>(value));
}
constexpr UnityEngine::Events::UnityAction_1<T> TMPro::TMP_ObjectPool_1<T>::__get_m_ActionOnGet() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityAction_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_ObjectPool_1<T>::__set_m_ActionOnRelease(UnityEngine::Events::UnityAction_1<T> value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityAction_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityAction_1<T>>(value));
}
constexpr UnityEngine::Events::UnityAction_1<T> TMPro::TMP_ObjectPool_1<T>::__get_m_ActionOnRelease() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityAction_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_ObjectPool_1<T>::__set__countAll_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_ObjectPool_1<T>::__get__countAll_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t TMPro::TMP_ObjectPool_1<T>::get_countAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ObjectPool_1<T>>::get(),
                            "get_countAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void TMPro::TMP_ObjectPool_1<T>::set_countAll(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ObjectPool_1<T>>::get(),
                            "set_countAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t TMPro::TMP_ObjectPool_1<T>::get_countActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ObjectPool_1<T>>::get(),
                            "get_countActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t TMPro::TMP_ObjectPool_1<T>::get_countInactive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ObjectPool_1<T>>::get(),
                            "get_countInactive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 TMPro::TMP_ObjectPool_1<T> TMPro::TMP_ObjectPool_1<T>::New_ctor(UnityEngine::Events::UnityAction_1<T> actionOnGet, UnityEngine::Events::UnityAction_1<T> actionOnRelease)  {
TMPro::TMP_ObjectPool_1<T> o{THROW_UNLESS(::il2cpp_utils::New<TMPro::TMP_ObjectPool_1<T>>(actionOnGet, actionOnRelease))};
return o;
}
 void TMPro::TMP_ObjectPool_1<T>::_ctor(UnityEngine::Events::UnityAction_1<T> actionOnGet, UnityEngine::Events::UnityAction_1<T> actionOnRelease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ObjectPool_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, actionOnGet, actionOnRelease);
}
 T TMPro::TMP_ObjectPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ObjectPool_1<T>>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void TMPro::TMP_ObjectPool_1<T>::Release(T element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ObjectPool_1<T>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
