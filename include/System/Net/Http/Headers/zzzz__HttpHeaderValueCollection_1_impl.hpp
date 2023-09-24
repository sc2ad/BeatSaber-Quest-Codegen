#pragma once
#include "System/Net/Http/Headers/zzzz__HttpHeaderValueCollection_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr  System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator System::Collections::Generic::ICollection_1<T>() const noexcept {
return System::Collections::Generic::ICollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__set_list(System::Collections::Generic::List_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<T>>(value));
}
constexpr System::Collections::Generic::List_1<T> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_list() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__set_headers(System::Net::Http::Headers::HttpHeaders value)  {
::cordl_internals::setInstanceField<System::Net::Http::Headers::HttpHeaders, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::Headers::HttpHeaders>(value));
}
constexpr System::Net::Http::Headers::HttpHeaders System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_headers() const {
return ::cordl_internals::getInstanceField<System::Net::Http::Headers::HttpHeaders, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__set_headerInfo(System::Net::Http::Headers::HeaderInfo value)  {
::cordl_internals::setInstanceField<System::Net::Http::Headers::HeaderInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::Headers::HeaderInfo>(value));
}
constexpr System::Net::Http::Headers::HeaderInfo System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_headerInfo() const {
return ::cordl_internals::getInstanceField<System::Net::Http::Headers::HeaderInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__set_invalidValues(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__get_invalidValues() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Http::Headers::HttpHeaderValueCollection_1<T> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::New_ctor(System::Net::Http::Headers::HttpHeaders headers, System::Net::Http::Headers::HeaderInfo headerInfo)  {
System::Net::Http::Headers::HttpHeaderValueCollection_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>(headers, headerInfo))};
return o;
}
 void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::_ctor(System::Net::Http::Headers::HttpHeaders headers, System::Net::Http::Headers::HeaderInfo headerInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::HttpHeaders>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::HeaderInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headers, headerInfo);
}
 int32_t System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<::StringW> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_InvalidValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "get_InvalidValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::AddRange(System::Collections::Generic::List_1<T> values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "AddRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, values);
}
 void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::AddInvalidValue(::StringW invalidValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "AddInvalidValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, invalidValue);
}
 void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Contains(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Remove(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 ::StringW System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 T System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Find(System::Predicate_1<T> predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Predicate_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, predicate);
}
