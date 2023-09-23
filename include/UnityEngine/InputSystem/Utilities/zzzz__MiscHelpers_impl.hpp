#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__MiscHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TKey,typename TValue>
 TValue UnityEngine::InputSystem::Utilities::MiscHelpers::GetValueOrDefault(System::Collections::Generic::Dictionary_2<TKey,TValue> dictionary, TKey key)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::MiscHelpers>::get(),
                        "GetValueOrDefault",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, dictionary, key);
}
/// @param start: int32_t (default: 0)
template<typename TValue>
 System::Collections::Generic::IEnumerable_1<TValue> UnityEngine::InputSystem::Utilities::MiscHelpers::EveryNth(System::Collections::Generic::IEnumerable_1<TValue> enumerable, int32_t n, int32_t start)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::MiscHelpers>::get(),
                        "EveryNth",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<TValue>, false>(nullptr, ___internal_method, enumerable, n, start);
}
template<typename TValue>
 int32_t UnityEngine::InputSystem::Utilities::MiscHelpers::IndexOf(System::Collections::Generic::IEnumerable_1<TValue> enumerable, TValue value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::MiscHelpers>::get(),
                        "IndexOf",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, enumerable, value);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)(int32_t)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__m__Finally1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1.System_Collections_Generic_IEnumerator_TValue__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_Generic_IEnumerator_TValue__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.Generic.IEnumerator<TValue>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1.System_Collections_Generic_IEnumerable_TValue__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<TValue> (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_Generic_IEnumerable_TValue__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::operator System::Collections::Generic::IEnumerable_1<TValue>() const noexcept {
return System::Collections::Generic::IEnumerable_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::operator System::Collections::Generic::IEnumerator_1<TValue>() const noexcept {
return System::Collections::Generic::IEnumerator_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set___2__current(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TValue>(value));
}
constexpr TValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get___2__current() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set_enumerable(System::Collections::Generic::IEnumerable_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<TValue>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get_enumerable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set___3__enumerable(System::Collections::Generic::IEnumerable_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<TValue>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<TValue>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get___3__enumerable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<TValue>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set_start(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get_start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set___3__start(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get___3__start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set_n(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get_n() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set___3__n(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get___3__n() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set__index_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get__index_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__set___7__wrap2(System::Collections::Generic::IEnumerator_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<TValue>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<TValue>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<TValue>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>(__1__state))) {}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 TValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_Generic_IEnumerator_TValue__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.Generic.IEnumerator<TValue>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_Generic_IEnumerable_TValue__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__MiscHelpers___EveryNth_d__1_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
