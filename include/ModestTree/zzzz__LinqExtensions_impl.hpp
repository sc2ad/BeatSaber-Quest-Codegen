#pragma once
namespace {
#include "ModestTree/zzzz__LinqExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
template<typename T>
 ::System::Collections::Generic::IEnumerable_1<T> ::ModestTree::LinqExtensions::Yield(T item)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "Yield",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, item);
}
template<typename TSource>
 TSource ::ModestTree::LinqExtensions::OnlyOrDefault(::System::Collections::Generic::IEnumerable_1<TSource> source)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "OnlyOrDefault",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template<typename T>
 bool ::ModestTree::LinqExtensions::HasAtLeast(::System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t amount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "HasAtLeast",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template<typename T>
 bool ::ModestTree::LinqExtensions::HasMoreThan(::System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t amount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "HasMoreThan",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template<typename T>
 bool ::ModestTree::LinqExtensions::HasLessThan(::System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t amount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "HasLessThan",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template<typename T>
 bool ::ModestTree::LinqExtensions::HasAtMost(::System::Collections::Generic::IEnumerable_1<T> enumerable, int32_t amount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "HasAtMost",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template<typename T>
 bool ::ModestTree::LinqExtensions::IsEmpty(::System::Collections::Generic::List_1<T> list)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "IsEmpty",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, list);
}
template<typename T>
 bool ::ModestTree::LinqExtensions::IsEmpty(::System::Collections::Generic::IEnumerable_1<T> enumerable)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "IsEmpty",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable);
}
template<typename T>
 ::System::Collections::Generic::IEnumerable_1<T> ::ModestTree::LinqExtensions::GetDuplicates(::System::Collections::Generic::IEnumerable_1<T> list)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "GetDuplicates",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, list);
}
template<typename T>
 ::System::Collections::Generic::IEnumerable_1<T> ::ModestTree::LinqExtensions::Except(::System::Collections::Generic::IEnumerable_1<T> list, T item)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "Except",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, list, item);
}
template<typename T>
 bool ::ModestTree::LinqExtensions::ContainsItem(::System::Collections::Generic::IEnumerable_1<T> list, T value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions>::get(),
                        "ContainsItem",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, list, value);
}
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::*)(int32_t)>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<T> (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::operator ::System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::operator ::System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__set_item(T value)  {
::cordl_internals::setInstanceField<T, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__get_item() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__set___3__item(T value)  {
::cordl_internals::setInstanceField<T, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::__get___3__item() const {
return ::cordl_internals::getInstanceField<T, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::____ModestTree__LinqExtensions___Yield_d__0_1(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____ModestTree__LinqExtensions___Yield_d__0_1>(__1__state))) {}
 void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<T> ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)(int32_t)>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene> (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::*)()>(&::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::SceneManagement::Scene>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set___2__current(::UnityEngine::SceneManagement::Scene value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::Scene, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::SceneManagement::Scene>(value));
}
constexpr ::UnityEngine::SceneManagement::Scene ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set_item(::UnityEngine::SceneManagement::Scene value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::Scene, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::SceneManagement::Scene>(value));
}
constexpr ::UnityEngine::SceneManagement::Scene ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get_item() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__set___3__item(::UnityEngine::SceneManagement::Scene value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::Scene, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::SceneManagement::Scene>(value));
}
constexpr ::UnityEngine::SceneManagement::Scene ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::__get___3__item() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::Scene, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::____ModestTree__LinqExtensions___Yield_d__0_1(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____ModestTree__LinqExtensions___Yield_d__0_1>(__1__state))) {}
 void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::SceneManagement::Scene ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene> ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::SceneManagement::Scene>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions___Yield_d__0_1<::UnityEngine::SceneManagement::Scene>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions____c__8_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::____ModestTree__LinqExtensions____c__8_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions____c__8_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions____c__8_1._GetDuplicates_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::ModestTree::____ModestTree__LinqExtensions____c__8_1::*)(T)>(&::ModestTree::____ModestTree__LinqExtensions____c__8_1::_GetDuplicates_b__8_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get(),
                            "<GetDuplicates>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions____c__8_1._GetDuplicates_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ModestTree::____ModestTree__LinqExtensions____c__8_1::*)(::System::Linq::IGrouping_2<T,T>)>(&::ModestTree::____ModestTree__LinqExtensions____c__8_1::_GetDuplicates_b__8_1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get(),
                            "<GetDuplicates>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<T,T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions____c__8_1._GetDuplicates_b__8_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::ModestTree::____ModestTree__LinqExtensions____c__8_1::*)(::System::Linq::IGrouping_2<T,T>)>(&::ModestTree::____ModestTree__LinqExtensions____c__8_1::_GetDuplicates_b__8_2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get(),
                            "<GetDuplicates>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<T,T>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::ModestTree::____ModestTree__LinqExtensions____c__8_1::__set___9(::ModestTree::____ModestTree__LinqExtensions____c__8_1<T> value)  {
::cordl_internals::setStaticField<::ModestTree::____ModestTree__LinqExtensions____c__8_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get>(std::forward<::ModestTree::____ModestTree__LinqExtensions____c__8_1<T>>(value));
}
 ::ModestTree::____ModestTree__LinqExtensions____c__8_1<T> ::ModestTree::____ModestTree__LinqExtensions____c__8_1::__get___9()  {
return ::cordl_internals::getStaticField<::ModestTree::____ModestTree__LinqExtensions____c__8_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get>();
}
 void ::ModestTree::____ModestTree__LinqExtensions____c__8_1::__set___9__8_0(::System::Func_2<T,T> value)  {
::cordl_internals::setStaticField<::System::Func_2<T,T>, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get>(std::forward<::System::Func_2<T,T>>(value));
}
 ::System::Func_2<T,T> ::ModestTree::____ModestTree__LinqExtensions____c__8_1::__get___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<T,T>, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get>();
}
 void ::ModestTree::____ModestTree__LinqExtensions____c__8_1::__set___9__8_1(::System::Func_2<::System::Linq::IGrouping_2<T,T>,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<T,T>,bool>, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get>(std::forward<::System::Func_2<::System::Linq::IGrouping_2<T,T>,bool>>(value));
}
 ::System::Func_2<::System::Linq::IGrouping_2<T,T>,bool> ::ModestTree::____ModestTree__LinqExtensions____c__8_1::__get___9__8_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::IGrouping_2<T,T>,bool>, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get>();
}
 void ::ModestTree::____ModestTree__LinqExtensions____c__8_1::__set___9__8_2(::System::Func_2<::System::Linq::IGrouping_2<T,T>,T> value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<T,T>,T>, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get>(std::forward<::System::Func_2<::System::Linq::IGrouping_2<T,T>,T>>(value));
}
 ::System::Func_2<::System::Linq::IGrouping_2<T,T>,T> ::ModestTree::____ModestTree__LinqExtensions____c__8_1::__get___9__8_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::IGrouping_2<T,T>,T>, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get>();
}
// Ctor Parameters []
 ::ModestTree::____ModestTree__LinqExtensions____c__8_1::____ModestTree__LinqExtensions____c__8_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____ModestTree__LinqExtensions____c__8_1>())) {}
 void ::ModestTree::____ModestTree__LinqExtensions____c__8_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T ::ModestTree::____ModestTree__LinqExtensions____c__8_1::_GetDuplicates_b__8_0(T x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get(),
                            "<GetDuplicates>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, x);
}
 bool ::ModestTree::____ModestTree__LinqExtensions____c__8_1::_GetDuplicates_b__8_1(::System::Linq::IGrouping_2<T,T> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get(),
                            "<GetDuplicates>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<T,T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 T ::ModestTree::____ModestTree__LinqExtensions____c__8_1::_GetDuplicates_b__8_2(::System::Linq::IGrouping_2<T,T> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__8_1>::get(),
                            "<GetDuplicates>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<T,T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::*)()>(&::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1._ContainsItem_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::*)(T)>(&::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::_ContainsItem_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1>::get(),
                            "<ContainsItem>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::__set_value(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::__get_value() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::____ModestTree__LinqExtensions____c__DisplayClass10_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____ModestTree__LinqExtensions____c__DisplayClass10_0_1>())) {}
 void ::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1::_ContainsItem_b__0(T x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::____ModestTree__LinqExtensions____c__DisplayClass10_0_1>::get(),
                            "<ContainsItem>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
} // end anonymous namespace
