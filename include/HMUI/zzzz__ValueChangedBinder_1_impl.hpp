#pragma once
#include "HMUI/zzzz__ValueChangedBinder_1_def.hpp"
#include "HMUI/zzzz__IValueChanger_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
constexpr void HMUI::ValueChangedBinder_1<T>::__set__bindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>>(value));
}
constexpr System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> HMUI::ValueChangedBinder_1<T>::__get__bindings() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::ValueChangedBinder_1<T> HMUI::ValueChangedBinder_1<T>::New_ctor()  {
HMUI::ValueChangedBinder_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HMUI::ValueChangedBinder_1<T>>())};
return o;
}
 void HMUI::ValueChangedBinder_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::ValueChangedBinder_1<T> HMUI::ValueChangedBinder_1<T>::New_ctor(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action)  {
HMUI::ValueChangedBinder_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HMUI::ValueChangedBinder_1<T>>(valueChanger, action))};
return o;
}
 void HMUI::ValueChangedBinder_1<T>::_ctor(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::IValueChanger_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueChanger, action);
}
 HMUI::ValueChangedBinder_1<T> HMUI::ValueChangedBinder_1<T>::New_ctor(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData)  {
HMUI::ValueChangedBinder_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HMUI::ValueChangedBinder_1<T>>(bindingData))};
return o;
}
 void HMUI::ValueChangedBinder_1<T>::_ctor(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingData);
}
 void HMUI::ValueChangedBinder_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ValueChangedBinder_1<T>::AddBindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            "AddBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingData);
}
 void HMUI::ValueChangedBinder_1<T>::AddBinding(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            "AddBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::IValueChanger_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueChanger, action);
}
 void HMUI::ValueChangedBinder_1<T>::ClearBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void HMUI::ValueChangedBinder_1<T>::__set__bindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>>(value));
}
constexpr System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> HMUI::ValueChangedBinder_1<T>::__get__bindings() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::ValueChangedBinder_1<T> HMUI::ValueChangedBinder_1<T>::New_ctor()  {
HMUI::ValueChangedBinder_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HMUI::ValueChangedBinder_1<T>>())};
return o;
}
 void HMUI::ValueChangedBinder_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::ValueChangedBinder_1<T> HMUI::ValueChangedBinder_1<T>::New_ctor(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action)  {
HMUI::ValueChangedBinder_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HMUI::ValueChangedBinder_1<T>>(valueChanger, action))};
return o;
}
 void HMUI::ValueChangedBinder_1<T>::_ctor(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::IValueChanger_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueChanger, action);
}
 HMUI::ValueChangedBinder_1<T> HMUI::ValueChangedBinder_1<T>::New_ctor(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData)  {
HMUI::ValueChangedBinder_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HMUI::ValueChangedBinder_1<T>>(bindingData))};
return o;
}
 void HMUI::ValueChangedBinder_1<T>::_ctor(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingData);
}
 void HMUI::ValueChangedBinder_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ValueChangedBinder_1<T>::AddBindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            "AddBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingData);
}
 void HMUI::ValueChangedBinder_1<T>::AddBinding(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            "AddBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::IValueChanger_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueChanger, action);
}
 void HMUI::ValueChangedBinder_1<T>::ClearBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ValueChangedBinder_1<T>>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
