#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
/// @brief Convert operator to Newtonsoft::Json::Linq::IJEnumerable_1<T>
constexpr  Newtonsoft::Json::Linq::JEnumerable_1<T>::operator Newtonsoft::Json::Linq::IJEnumerable_1<T>() const {
return Newtonsoft::Json::Linq::IJEnumerable_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  Newtonsoft::Json::Linq::JEnumerable_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const {
return System::Collections::Generic::IEnumerable_1<T>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Newtonsoft::Json::Linq::JEnumerable_1<T>::operator System::Collections::IEnumerable() const {
return System::Collections::IEnumerable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "System::Collections::Generic::IEnumerable_1<T>", modifiers: "", def_value: Some("csnull") }]
constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::JEnumerable_1(System::Collections::Generic::IEnumerable_1<T> _enumerable) noexcept : ::bs_hook::ValueTypeWrapper() {this->_enumerable = _enumerable;
}
 void Newtonsoft::Json::Linq::JEnumerable_1<T>::__set_Empty(Newtonsoft::Json::Linq::JEnumerable_1<T> value)  {
::cordl_internals::setStaticField<Newtonsoft::Json::Linq::JEnumerable_1<T>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get>(std::forward<Newtonsoft::Json::Linq::JEnumerable_1<T>>(value));
}
 Newtonsoft::Json::Linq::JEnumerable_1<T> Newtonsoft::Json::Linq::JEnumerable_1<T>::__get_Empty()  {
return ::cordl_internals::getStaticField<Newtonsoft::Json::Linq::JEnumerable_1<T>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get>();
}
constexpr void Newtonsoft::Json::Linq::JEnumerable_1<T>::__set__enumerable(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x0>(this->__instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> Newtonsoft::Json::Linq::JEnumerable_1<T>::__get__enumerable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x0>(this->__instance);
}
 void Newtonsoft::Json::Linq::JEnumerable_1<T>::_ctor(System::Collections::Generic::IEnumerable_1<T> enumerable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, enumerable);
}
 System::Collections::Generic::IEnumerator_1<T> Newtonsoft::Json::Linq::JEnumerable_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Collections::IEnumerator Newtonsoft::Json::Linq::JEnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken> Newtonsoft::Json::Linq::JEnumerable_1<T>::get_Item(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, key);
}
 bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(Newtonsoft::Json::Linq::JEnumerable_1<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t Newtonsoft::Json::Linq::JEnumerable_1<T>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
