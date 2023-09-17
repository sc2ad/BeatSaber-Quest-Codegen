#pragma once
namespace {
#include "GlobalNamespace/zzzz__ShuffleExtensions_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
 ::System::Collections::Generic::IEnumerable_1<T> ::GlobalNamespace::ShuffleExtensions::Shuffle(::System::Collections::Generic::IEnumerable_1<T> source, ::System::Random random)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions>::get(),
                        "Shuffle",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, source, random);
}
template<typename T>
 ::System::Collections::Generic::IEnumerable_1<T> ::GlobalNamespace::ShuffleExtensions::PickRandomElementsWithTombstone(::System::Collections::Generic::IEnumerable_1<T> source, int32_t limit, int32_t count, ::System::Random random, T tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions>::get(),
                        "PickRandomElementsWithTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Random>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, source, limit, count, random, tombstone);
}
template<typename T>
 ::System::Collections::Generic::IEnumerable_1<T> ::GlobalNamespace::ShuffleExtensions::TakeWithTombstone(::System::Collections::Generic::IEnumerable_1<T> source, int32_t limit, T tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions>::get(),
                        "TakeWithTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, source, limit, tombstone);
}
template<typename T1,typename T2>
 ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>> ::GlobalNamespace::ShuffleExtensions::ZipSkipTombstone(::System::Collections::Generic::IEnumerable_1<T1> collection1, ::System::Collections::Generic::IEnumerable_1<T2> collection2, T2 collection2Tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShuffleExtensions>::get(),
                        "ZipSkipTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T1>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>, false>(nullptr, ___internal_method, collection1, collection2, collection2Tombstone);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<T> (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::operator ::System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::operator ::System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set_source(::System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<T> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get_source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___3__source(::System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<T> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___3__source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set_random(::System::Random value)  {
::cordl_internals::setInstanceField<::System::Random, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Random>(value));
}
constexpr ::System::Random ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get_random() const {
return ::cordl_internals::getInstanceField<::System::Random, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___3__random(::System::Random value)  {
::cordl_internals::setInstanceField<::System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Random>(value));
}
constexpr ::System::Random ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___3__random() const {
return ::cordl_internals::getInstanceField<::System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___3__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___3__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set_limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___3__limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set_tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get_tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___3__tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set__index_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get__index_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set__picked_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get__picked_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__set___7__wrap3(::System::Collections::Generic::IEnumerator_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerator_1<T>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<T> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<T> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t> (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<int32_t>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<int32_t>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::Collections::Generic::IEnumerator_1<int32_t>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___2__current(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___2__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_source(::System::Collections::Generic::IEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__source(::System::Collections::Generic::IEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_random(::System::Random value)  {
::cordl_internals::setInstanceField<::System::Random, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Random>(value));
}
constexpr ::System::Random ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_random() const {
return ::cordl_internals::getInstanceField<::System::Random, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__random(::System::Random value)  {
::cordl_internals::setInstanceField<::System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Random>(value));
}
constexpr ::System::Random ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__random() const {
return ::cordl_internals::getInstanceField<::System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set_tombstone(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___3__tombstone(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set__index_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get__index_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set__picked_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get__picked_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__set___7__wrap3(::System::Collections::Generic::IEnumerator_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerator_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<int32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<T> (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::operator ::System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::operator ::System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set_source(::System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<T> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get_source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set___3__source(::System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<T> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get___3__source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set_limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set___3__limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set_tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get_tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set___3__tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerator_1<T>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<T> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get__enumerator_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__set__index_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__get__index_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<T> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t> (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<int32_t>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<int32_t>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::Collections::Generic::IEnumerator_1<int32_t>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___2__current(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___2__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set_source(::System::Collections::Generic::IEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___3__source(::System::Collections::Generic::IEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__source() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set_limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___3__limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set_tombstone(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set___3__tombstone(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set__enumerator_5__2(::System::Collections::Generic::IEnumerator_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerator_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get__enumerator_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__set__index_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__get__index_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<int32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__m__Finally2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.System_Collections_Generic_IEnumerator_(T1,T2)__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<T1,T2> (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_Generic_IEnumerator_(T1,T2)__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>> (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<T1,T2>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set___2__current(::System::ValueTuple_2<T1,T2> value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<T1,T2>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::ValueTuple_2<T1,T2>>(value));
}
constexpr ::System::ValueTuple_2<T1,T2> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<T1,T2>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set_collection1(::System::Collections::Generic::IEnumerable_1<T1> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T1>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T1>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<T1> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get_collection1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T1>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set___3__collection1(::System::Collections::Generic::IEnumerable_1<T1> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T1>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T1>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<T1> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get___3__collection1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T1>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set_collection2(::System::Collections::Generic::IEnumerable_1<T2> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T2>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T2>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<T2> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get_collection2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T2>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set___3__collection2(::System::Collections::Generic::IEnumerable_1<T2> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T2>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<T2>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<T2> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get___3__collection2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T2>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set_collection2Tombstone(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get_collection2Tombstone() const {
return ::cordl_internals::getInstanceField<T2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set___3__collection2Tombstone(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get___3__collection2Tombstone() const {
return ::cordl_internals::getInstanceField<T2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<T1> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T1>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerator_1<T1>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<T1> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get__enum1_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T1>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<T2> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T2>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerator_1<T2>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<T2> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__get__enum2_5__3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T2>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::ValueTuple_2<T1,T2> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_Generic_IEnumerator_(T1,T2)__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T1,T2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1,T2>>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__m__Finally2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_Generic_IEnumerator_(T1,T2)__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,int32_t> (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_Generic_IEnumerator_(T1,T2)__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>> (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<int32_t,int32_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___2__current(::System::ValueTuple_2<int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<int32_t,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::ValueTuple_2<int32_t,int32_t>>(value));
}
constexpr ::System::ValueTuple_2<int32_t,int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<int32_t,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set_collection1(::System::Collections::Generic::IEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___3__collection1(::System::Collections::Generic::IEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set_collection2(::System::Collections::Generic::IEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___3__collection2(::System::Collections::Generic::IEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set_collection2Tombstone(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get_collection2Tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set___3__collection2Tombstone(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get___3__collection2Tombstone() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set__enum1_5__2(::System::Collections::Generic::IEnumerator_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerator_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get__enum1_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__set__enum2_5__3(::System::Collections::Generic::IEnumerator_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerator_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__get__enum2_5__3() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<int32_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::ValueTuple_2<int32_t,int32_t> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_Generic_IEnumerator_(T1,T2)__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>> ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<int32_t,int32_t>>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<int32_t,int32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
