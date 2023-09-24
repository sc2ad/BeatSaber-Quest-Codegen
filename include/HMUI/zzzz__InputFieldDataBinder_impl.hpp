#pragma once
#include "HMUI/zzzz__InputFieldDataBinder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "GlobalNamespace/zzzz__IObservableChange_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Tuple_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "HMUI/zzzz__InputFieldDataBinder_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: HMUI::InputFieldDataBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldDataBinder::*)()>(&HMUI::InputFieldDataBinder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1fa5e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldDataBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldDataBinder.ClearBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldDataBinder::*)()>(&HMUI::InputFieldDataBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x1fa5ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldDataBinder>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::InputFieldDataBinder::__set__bindings(System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,GlobalNamespace::IObservableChange,UnityEngine::Events::UnityAction_1<::StringW>,System::Action>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,GlobalNamespace::IObservableChange,UnityEngine::Events::UnityAction_1<::StringW>,System::Action>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,GlobalNamespace::IObservableChange,UnityEngine::Events::UnityAction_1<::StringW>,System::Action>>>(value));
}
constexpr System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,GlobalNamespace::IObservableChange,UnityEngine::Events::UnityAction_1<::StringW>,System::Action>> HMUI::InputFieldDataBinder::__get__bindings() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,GlobalNamespace::IObservableChange,UnityEngine::Events::UnityAction_1<::StringW>,System::Action>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::InputFieldDataBinder HMUI::InputFieldDataBinder::New_ctor()  {
HMUI::InputFieldDataBinder o{THROW_UNLESS(::il2cpp_utils::New<HMUI::InputFieldDataBinder>())};
return o;
}
 void HMUI::InputFieldDataBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldDataBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T0,typename T1>
 void HMUI::InputFieldDataBinder::AddBindings(System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,T0,System::Func_2<::StringW,T1>,System::Func_2<T1,::StringW>>> bindingData)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldDataBinder>::get(),
                        "AddBindings",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,T0,System::Func_2<::StringW,T1>,System::Func_2<T1,::StringW>>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingData);
}
template<typename T>
 void HMUI::InputFieldDataBinder::AddStringBindings(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::InputField,T>> bindingData)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldDataBinder>::get(),
                        "AddStringBindings",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::InputField,T>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindingData);
}
 void HMUI::InputFieldDataBinder::ClearBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldDataBinder>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__set_toValueConvertor(System::Func_2<::StringW,T1> value)  {
::cordl_internals::setInstanceField<System::Func_2<::StringW,T1>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<::StringW,T1>>(value));
}
constexpr System::Func_2<::StringW,T1> HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_toValueConvertor() const {
return ::cordl_internals::getInstanceField<System::Func_2<::StringW,T1>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__set_valueItem(T0 value)  {
::cordl_internals::setInstanceField<T0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T0>(value));
}
constexpr T0 HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_valueItem() const {
return ::cordl_internals::getInstanceField<T0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__set_inputField(UnityEngine::UI::InputField value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::InputField, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::InputField>(value));
}
constexpr UnityEngine::UI::InputField HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_inputField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::InputField, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__set_toStringConvertor(System::Func_2<T1,::StringW> value)  {
::cordl_internals::setInstanceField<System::Func_2<T1,::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<T1,::StringW>>(value));
}
constexpr System::Func_2<T1,::StringW> HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::__get_toStringConvertor() const {
return ::cordl_internals::getInstanceField<System::Func_2<T1,::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1> HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::New_ctor()  {
HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1> o{THROW_UNLESS(::il2cpp_utils::New<HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>>())};
return o;
}
 void HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::_AddBindings_b__0(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>>::get(),
                            "<AddBindings>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>::_AddBindings_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>>::get(),
                            "<AddBindings>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::HMUI__InputFieldDataBinder____c__3_1<T>::__set___9(HMUI::HMUI__InputFieldDataBinder____c__3_1<T> value)  {
::cordl_internals::setStaticField<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>>::get>(std::forward<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>>(value));
}
 HMUI::HMUI__InputFieldDataBinder____c__3_1<T> HMUI::HMUI__InputFieldDataBinder____c__3_1<T>::__get___9()  {
return ::cordl_internals::getStaticField<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>>::get>();
}
 void HMUI::HMUI__InputFieldDataBinder____c__3_1<T>::__set___9__3_0(System::Func_2<::StringW,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<::StringW,::StringW>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>>::get>(std::forward<System::Func_2<::StringW,::StringW>>(value));
}
 System::Func_2<::StringW,::StringW> HMUI::HMUI__InputFieldDataBinder____c__3_1<T>::__get___9__3_0()  {
return ::cordl_internals::getStaticField<System::Func_2<::StringW,::StringW>, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>>::get>();
}
 HMUI::HMUI__InputFieldDataBinder____c__3_1<T> HMUI::HMUI__InputFieldDataBinder____c__3_1<T>::New_ctor()  {
HMUI::HMUI__InputFieldDataBinder____c__3_1<T> o{THROW_UNLESS(::il2cpp_utils::New<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>>())};
return o;
}
 void HMUI::HMUI__InputFieldDataBinder____c__3_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW HMUI::HMUI__InputFieldDataBinder____c__3_1<T>::_AddStringBindings_b__3_0(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldDataBinder____c__3_1<T>>::get(),
                            "<AddStringBindings>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
