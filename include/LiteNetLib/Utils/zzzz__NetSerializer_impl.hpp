#pragma once
#include "LiteNetLib/Utils/zzzz__NetSerializer_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::__set_IsArray(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::__get_IsArray() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::__set_Getter(System::Func_2<TClass,double_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,double_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,double_t>>(value));
}
constexpr System::Func_2<TClass,double_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,double_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::__set_Setter(System::Action_2<TClass,double_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,double_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,double_t>>(value));
}
constexpr System::Action_2<TClass,double_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,double_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::__set_GetterArr(System::Func_2<TClass,::ArrayW<double_t>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<double_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<double_t>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<double_t>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<double_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::__set_SetterArr(System::Action_2<TClass,::ArrayW<double_t>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<double_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<double_t>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<double_t>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<double_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<double_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<double_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,double_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__set_Getter(System::Func_2<TClass,char16_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,char16_t>>(value));
}
constexpr System::Func_2<TClass,char16_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__set_Setter(System::Action_2<TClass,char16_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,char16_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,char16_t>>(value));
}
constexpr System::Action_2<TClass,char16_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,char16_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__set_GetterArr(System::Func_2<TClass,::ArrayW<char16_t>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<char16_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<char16_t>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<char16_t>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<char16_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__set_SetterArr(System::Action_2<TClass,::ArrayW<char16_t>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<char16_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<char16_t>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<char16_t>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<char16_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<char16_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<char16_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::__set_Getter(System::Func_2<TClass,float_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,float_t>>(value));
}
constexpr System::Func_2<TClass,float_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::__set_Setter(System::Action_2<TClass,float_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,float_t>>(value));
}
constexpr System::Action_2<TClass,float_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::__set_GetterArr(System::Func_2<TClass,::ArrayW<float_t>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<float_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<float_t>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<float_t>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<float_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::__set_SetterArr(System::Action_2<TClass,::ArrayW<float_t>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<float_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<float_t>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<float_t>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<float_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<float_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<float_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::__set_Getter(System::Func_2<TClass,bool> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,bool>>(value));
}
constexpr System::Func_2<TClass,bool> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::__set_Setter(System::Action_2<TClass,bool> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,bool>>(value));
}
constexpr System::Action_2<TClass,bool> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::__set_GetterArr(System::Func_2<TClass,::ArrayW<bool>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<bool>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<bool>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<bool>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<bool>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::__set_SetterArr(System::Action_2<TClass,::ArrayW<bool>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<bool>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<bool>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<bool>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<bool>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<bool> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<bool> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(System::Func_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,TProperty>>(value));
}
constexpr System::Func_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(System::Action_2<TClass,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,TProperty>>(value));
}
constexpr System::Action_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,TProperty>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(System::Func_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Func_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<System::Func_2<TClass,::ArrayW<TProperty>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(System::Action_2<TClass,::ArrayW<TProperty>> value)  {
::cordl_internals::setInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<TClass,::ArrayW<TProperty>>>(value));
}
constexpr System::Action_2<TClass,::ArrayW<TProperty>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<System::Action_2<TClass,::ArrayW<TProperty>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 ::ArrayW<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty>, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(System::Reflection::MethodInfo getMethod, System::Reflection::MethodInfo setMethod, bool isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getMethod, setMethod, isArray);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecific_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2::__set__p(TProperty value)  {
::cordl_internals::setInstanceField<TProperty, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TProperty>(value));
}
constexpr TProperty LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2::__get__p() const {
return ::cordl_internals::getInstanceField<TProperty, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2::Read(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2::Write(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2::ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2::WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2 o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStruct_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209944c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1 o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStruct_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: LiteNetLib::Utils::NetSerializer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetSerializer::*)()>(&LiteNetLib::Utils::NetSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2098f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::NetSerializer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetSerializer::*)(int32_t)>(&LiteNetLib::Utils::NetSerializer::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2099018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::NetSerializer::__set__writer(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter LiteNetLib::Utils::NetSerializer::__get__writer() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::NetSerializer::__set__maxStringLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::Utils::NetSerializer::__get__maxStringLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::NetSerializer::__set__registeredTypes(System::Collections::Generic::Dictionary_2<System::Type,LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Type,LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Type,LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Type,LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType> LiteNetLib::Utils::NetSerializer::__get__registeredTypes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Type,LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
template<typename T>
 void LiteNetLib::Utils::NetSerializer::RegisterNestedType()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void LiteNetLib::Utils::NetSerializer::RegisterNestedType(System::Func_1<T> constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, constructor);
}
template<typename T>
 void LiteNetLib::Utils::NetSerializer::RegisterNestedType(System::Action_2<LiteNetLib::Utils::NetDataWriter,T> writer, System::Func_2<LiteNetLib::Utils::NetDataReader,T> reader)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<LiteNetLib::Utils::NetDataWriter,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<LiteNetLib::Utils::NetDataReader,T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, reader);
}
 LiteNetLib::Utils::NetSerializer LiteNetLib::Utils::NetSerializer::New_ctor()  {
LiteNetLib::Utils::NetSerializer o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::NetSerializer>())};
return o;
}
 void LiteNetLib::Utils::NetSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 LiteNetLib::Utils::NetSerializer LiteNetLib::Utils::NetSerializer::New_ctor(int32_t maxStringLength)  {
LiteNetLib::Utils::NetSerializer o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::NetSerializer>(maxStringLength))};
return o;
}
 void LiteNetLib::Utils::NetSerializer::_ctor(int32_t maxStringLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxStringLength);
}
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> LiteNetLib::Utils::NetSerializer::RegisterInternal()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "RegisterInternal",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void LiteNetLib::Utils::NetSerializer::Register()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "Register",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 T LiteNetLib::Utils::NetSerializer::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "Deserialize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, reader);
}
template<typename T>
 bool LiteNetLib::Utils::NetSerializer::Deserialize(LiteNetLib::Utils::NetDataReader reader, T target)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "Deserialize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, reader, target);
}
template<typename T>
 void LiteNetLib::Utils::NetSerializer::Serialize(LiteNetLib::Utils::NetDataWriter writer, T obj)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "Serialize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, obj);
}
template<typename T>
 ::ArrayW<uint8_t> LiteNetLib::Utils::NetSerializer::Serialize(T obj)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetSerializer>::get(),
                        "Serialize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::ElementRead(LiteNetLib::Utils::NetDataReader r, ByRef<char16_t> prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>>::get(),
                            "ElementRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, r, prop);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::ElementWrite(LiteNetLib::Utils::NetDataWriter w, ByRef<char16_t> prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>>::get(),
                            "ElementWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, w, prop);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::Read(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::Write(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::ElementRead(LiteNetLib::Utils::NetDataReader r, ByRef<TProperty> prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>>::get(),
                            "ElementRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TProperty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, r, prop);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::ElementWrite(LiteNetLib::Utils::NetDataWriter w, ByRef<TProperty> prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>>::get(),
                            "ElementWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TProperty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, w, prop);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::Read(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::Write(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::__set__writer(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty>>(value));
}
constexpr System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::__get__writer() const {
return ::cordl_internals::getInstanceField<System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::__set__reader(System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty>>(value));
}
constexpr System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::__get__reader() const {
return ::cordl_internals::getInstanceField<System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::New_ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> write, System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> read)  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>>(write, read))};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::_ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> write, System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> read)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, write, read);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::Read(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::Write(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>::WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallStatic_2<TClass,TProperty>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>::__set__constructor(System::Func_1<TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_1<TProperty>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<TProperty>>(value));
}
constexpr System::Func_1<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>::__get__constructor() const {
return ::cordl_internals::getInstanceField<System::Func_1<TProperty>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>::New_ctor(System::Func_1<TProperty> constructor)  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>>(constructor))};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>::_ctor(System::Func_1<TProperty> constructor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TProperty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, constructor);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>::Read(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>::Write(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>::ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>::WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCallClass_2<TClass,TProperty>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IntSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UIntSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ShortSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__UShortSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__LongSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ULongSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ByteSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__SByteSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FloatSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__DoubleSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__BoolSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>::ElementWrite(LiteNetLib::Utils::NetDataWriter w, ByRef<char16_t> prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>>::get(),
                            "ElementWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, w, prop);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>::ElementRead(LiteNetLib::Utils::NetDataReader r, ByRef<char16_t> prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>>::get(),
                            "ElementRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, r, prop);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CharSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>::ElementWrite(LiteNetLib::Utils::NetDataWriter w, ByRef<System::Net::IPEndPoint> prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>>::get(),
                            "ElementWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::IPEndPoint>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, w, prop);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>::ElementRead(LiteNetLib::Utils::NetDataReader r, ByRef<System::Net::IPEndPoint> prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>>::get(),
                            "ElementRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::IPEndPoint>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, r, prop);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>::New_ctor()  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>>())};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__IPEndPointSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>::__set__maxLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>::__get__maxLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>::New_ctor(int32_t maxLength)  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>>(maxLength))};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>::_ctor(int32_t maxLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxLength);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>::ReadArray(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>::WriteArray(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__StringSerializer_1<T>>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>::__set_Property(System::Reflection::PropertyInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::PropertyInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::PropertyInfo>(value));
}
constexpr System::Reflection::PropertyInfo LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>::__get_Property() const {
return ::cordl_internals::getInstanceField<System::Reflection::PropertyInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>::__set_PropertyType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>::__get_PropertyType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>::New_ctor(System::Reflection::PropertyInfo property, System::Type propertyType)  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>>(property, propertyType))};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>::_ctor(System::Reflection::PropertyInfo property, System::Type propertyType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::PropertyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, property, propertyType);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumByteSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>::New_ctor(System::Reflection::PropertyInfo property, System::Type propertyType)  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>>(property, propertyType))};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>::_ctor(System::Reflection::PropertyInfo property, System::Type propertyType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::PropertyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, property, propertyType);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>::Read(T inf, LiteNetLib::Utils::NetDataReader r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, r);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>::Write(T inf, LiteNetLib::Utils::NetDataWriter w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__EnumIntSerializer_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inf, w);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::__set_Instance(LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> value)  {
::cordl_internals::setStaticField<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>>::get>(std::forward<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>>(value));
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::__get_Instance()  {
return ::cordl_internals::getStaticField<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>>::get>();
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::__set__serializers(::ArrayW<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>>(value));
}
constexpr ::ArrayW<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::__get__serializers() const {
return ::cordl_internals::getInstanceField<::ArrayW<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::__set__membersCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::__get__membersCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::New_ctor(System::Collections::Generic::List_1<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> serializers)  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>>(serializers))};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::_ctor(System::Collections::Generic::List_1<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>> serializers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializers);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::Write(T obj, LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, writer);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>::Read(T obj, LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__ClassInfo_1<T>>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, reader);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>::__set__constructor(System::Func_1<TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_1<TProperty>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<TProperty>>(value));
}
constexpr System::Func_1<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>::__get__constructor() const {
return ::cordl_internals::getInstanceField<System::Func_1<TProperty>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>::New_ctor(System::Func_1<TProperty> constructor)  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>>(constructor))};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>::_ctor(System::Func_1<TProperty> constructor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TProperty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, constructor);
}
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeClass_1<TProperty>>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>::__set__writer(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> value)  {
::cordl_internals::setInstanceField<System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty>>(value));
}
constexpr System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>::__get__writer() const {
return ::cordl_internals::getInstanceField<System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>::__set__reader(System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> value)  {
::cordl_internals::setInstanceField<System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty>>(value));
}
constexpr System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>::__get__reader() const {
return ::cordl_internals::getInstanceField<System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>::New_ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> writer, System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> reader)  {
LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty> o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>>(writer, reader))};
return o;
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>::_ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty> writer, System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty> reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<LiteNetLib::Utils::NetDataWriter,TProperty>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<LiteNetLib::Utils::NetDataReader,TProperty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, reader);
}
template<typename T>
 LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__CustomTypeStatic_1<TProperty>>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::LiteNetLib__Utils__NetSerializer__FastCall_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
