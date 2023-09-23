#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__Observable_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::Observable.ForDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> (*)(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Utilities::Observable::ForDevice)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2983644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                            "ForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
template<typename TValue>
 System::IObservable_1<TValue> UnityEngine::InputSystem::Utilities::Observable::Where(System::IObservable_1<TValue> source, System::Func_2<TValue,bool> predicate)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                        "Where",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TValue,bool>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::IObservable_1<TValue>, false>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource,typename TResult>
 System::IObservable_1<TResult> UnityEngine::InputSystem::Utilities::Observable::Select(System::IObservable_1<TSource> source, System::Func_2<TSource,TResult> filter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                        "Select",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TSource>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TSource,TResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::IObservable_1<TResult>, false>(nullptr, ___internal_method, source, filter);
}
template<typename TSource,typename TResult>
 System::IObservable_1<TResult> UnityEngine::InputSystem::Utilities::Observable::SelectMany(System::IObservable_1<TSource> source, System::Func_2<TSource,System::Collections::Generic::IEnumerable_1<TResult>> filter)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                        "SelectMany",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TSource>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TSource,System::Collections::Generic::IEnumerable_1<TResult>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::IObservable_1<TResult>, false>(nullptr, ___internal_method, source, filter);
}
template<typename TValue>
 System::IObservable_1<TValue> UnityEngine::InputSystem::Utilities::Observable::Take(System::IObservable_1<TValue> source, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                        "Take",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::IObservable_1<TValue>, false>(nullptr, ___internal_method, source, count);
}
 System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> UnityEngine::InputSystem::Utilities::Observable::ForDevice(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> source, UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                            "ForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>, false>(nullptr, ___internal_method, source, device);
}
template<typename TDevice>
 System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> UnityEngine::InputSystem::Utilities::Observable::ForDevice(System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> source)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                        "ForDevice",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>, false>(nullptr, ___internal_method, source);
}
template<typename TValue>
 System::IDisposable UnityEngine::InputSystem::Utilities::Observable::CallOnce(System::IObservable_1<TValue> source, System::Action_1<TValue> action)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                        "CallOnce",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(nullptr, ___internal_method, source, action);
}
template<typename TValue>
 System::IDisposable UnityEngine::InputSystem::Utilities::Observable::Call(System::IObservable_1<TValue> source, System::Action_1<TValue> action)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observable>::get(),
                        "Call",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(nullptr, ___internal_method, source, action);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1._CallOnce_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::_CallOnce_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1>::get(),
                            "<CallOnce>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::__set_subscription(System::IDisposable value)  {
::cordl_internals::setInstanceField<System::IDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IDisposable>(value));
}
constexpr System::IDisposable UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::__get_subscription() const {
return ::cordl_internals::getInstanceField<System::IDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1>())) {}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1::_CallOnce_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__Observable____c__DisplayClass6_0_1>::get(),
                            "<CallOnce>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
