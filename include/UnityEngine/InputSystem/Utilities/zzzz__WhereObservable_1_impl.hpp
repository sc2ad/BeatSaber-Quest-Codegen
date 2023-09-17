#pragma once
namespace {
#include "UnityEngine/InputSystem/Utilities/zzzz__WhereObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::*)(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>, ::System::IObserver_1<TValue>)>(&::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::*)()>(&::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where.OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::*)(::System::Exception)>(&::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::OnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where.OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::*)(TValue)>(&::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::OnNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IObserver_1<TValue>
constexpr  ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::operator ::System::IObserver_1<TValue>() const noexcept {
return ::System::IObserver_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::__set_m_Observable(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::__get_m_Observable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::__set_m_Observer(::System::IObserver_1<TValue> value)  {
::cordl_internals::setInstanceField<::System::IObserver_1<TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IObserver_1<TValue>>(value));
}
constexpr ::System::IObserver_1<TValue> ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<::System::IObserver_1<TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "observable", ty: "::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "observer", ty: "::System::IObserver_1<TValue>", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> observable, ::System::IObserver_1<TValue> observer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>(observable, observer))) {}
 void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::_ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue> observable, ::System::IObserver_1<TValue> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, observable, observer);
}
 void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::OnError(::System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where::OnNext(TValue evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__WhereObservable_1__Where>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::WhereObservable_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::WhereObservable_1::*)(::System::IObservable_1<TValue>, ::System::Func_2<TValue,bool>)>(&::UnityEngine::InputSystem::Utilities::WhereObservable_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::WhereObservable_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TValue,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::WhereObservable_1.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable (::UnityEngine::InputSystem::Utilities::WhereObservable_1::*)(::System::IObserver_1<TValue>)>(&::UnityEngine::InputSystem::Utilities::WhereObservable_1::Subscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::WhereObservable_1>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IObservable_1<TValue>
constexpr  ::UnityEngine::InputSystem::Utilities::WhereObservable_1::operator ::System::IObservable_1<TValue>() const noexcept {
return ::System::IObservable_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::WhereObservable_1::__set_m_Source(::System::IObservable_1<TValue> value)  {
::cordl_internals::setInstanceField<::System::IObservable_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IObservable_1<TValue>>(value));
}
constexpr ::System::IObservable_1<TValue> ::UnityEngine::InputSystem::Utilities::WhereObservable_1::__get_m_Source() const {
return ::cordl_internals::getInstanceField<::System::IObservable_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Utilities::WhereObservable_1::__set_m_Predicate(::System::Func_2<TValue,bool> value)  {
::cordl_internals::setInstanceField<::System::Func_2<TValue,bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<TValue,bool>>(value));
}
constexpr ::System::Func_2<TValue,bool> ::UnityEngine::InputSystem::Utilities::WhereObservable_1::__get_m_Predicate() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TValue,bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "::System::IObservable_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "predicate", ty: "::System::Func_2<TValue,bool>", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::Utilities::WhereObservable_1::WhereObservable_1(::System::IObservable_1<TValue> source, ::System::Func_2<TValue,bool> predicate)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<WhereObservable_1>(source, predicate))) {}
 void ::UnityEngine::InputSystem::Utilities::WhereObservable_1::_ctor(::System::IObservable_1<TValue> source, ::System::Func_2<TValue,bool> predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::WhereObservable_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TValue,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, predicate);
}
 ::System::IDisposable ::UnityEngine::InputSystem::Utilities::WhereObservable_1::Subscribe(::System::IObserver_1<TValue> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::WhereObservable_1>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
} // end anonymous namespace
