#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Polyglot/zzzz__ILocalize_def.hpp"
#include "Polyglot/zzzz__LanguageDirection_def.hpp"
/// @brief Convert operator to Polyglot::ILocalize
constexpr  Polyglot::LocalizedTextComponent_1<T>::operator Polyglot::ILocalize() const noexcept {
return Polyglot::ILocalize(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Polyglot::LocalizedTextComponent_1<T>::__set_localizedComponent(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T Polyglot::LocalizedTextComponent_1<T>::__get_localizedComponent() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Polyglot::LocalizedTextComponent_1<T>::__set_maintainTextAlignment(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Polyglot::LocalizedTextComponent_1<T>::__get_maintainTextAlignment() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Polyglot::LocalizedTextComponent_1<T>::__set_key(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Polyglot::LocalizedTextComponent_1<T>::__get_key() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Polyglot::LocalizedTextComponent_1<T>::__set_parameters(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> Polyglot::LocalizedTextComponent_1<T>::__get_parameters() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool Polyglot::LocalizedTextComponent_1<T>::get_MaintainTextAlignment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "get_MaintainTextAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Polyglot::LocalizedTextComponent_1<T>::set_MaintainTextAlignment(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "set_MaintainTextAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW Polyglot::LocalizedTextComponent_1<T>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void Polyglot::LocalizedTextComponent_1<T>::set_Key(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "set_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> Polyglot::LocalizedTextComponent_1<T>::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Polyglot::LocalizedTextComponent_1<T>::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Polyglot::LocalizedTextComponent_1<T>::SetText(T component, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, component, value);
}
 void Polyglot::LocalizedTextComponent_1<T>::UpdateAlignment(T component, Polyglot::LanguageDirection direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "UpdateAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Polyglot::LanguageDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, component, direction);
}
 void Polyglot::LocalizedTextComponent_1<T>::OnLocalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Polyglot::LocalizedTextComponent_1<T>::ClearParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "ClearParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Polyglot::LocalizedTextComponent_1<T>::AddParameter(::bs_hook::Il2CppWrapperType parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "AddParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameter);
}
 void Polyglot::LocalizedTextComponent_1<T>::AddParameter(int32_t parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "AddParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameter);
}
 void Polyglot::LocalizedTextComponent_1<T>::AddParameter(float_t parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "AddParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameter);
}
 void Polyglot::LocalizedTextComponent_1<T>::AddParameter(::StringW parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            "AddParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameter);
}
 Polyglot::LocalizedTextComponent_1<T> Polyglot::LocalizedTextComponent_1<T>::New_ctor()  {
Polyglot::LocalizedTextComponent_1<T> o{THROW_UNLESS(::il2cpp_utils::New<Polyglot::LocalizedTextComponent_1<T>>())};
return o;
}
 void Polyglot::LocalizedTextComponent_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Polyglot::LocalizedTextComponent_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
