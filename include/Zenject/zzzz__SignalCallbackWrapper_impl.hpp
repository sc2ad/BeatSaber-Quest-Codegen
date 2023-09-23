#pragma once
#include "Zenject/zzzz__SignalCallbackWrapper_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__SignalBus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: Zenject::SignalCallbackWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCallbackWrapper::*)(Zenject::SignalBindingBindInfo, System::Action_1<::bs_hook::Il2CppWrapperType>, Zenject::SignalBus)>(&Zenject::SignalCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2d48734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalBindingBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalBus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalCallbackWrapper.OnSignalFired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCallbackWrapper::*)(::bs_hook::Il2CppWrapperType)>(&Zenject::SignalCallbackWrapper::OnSignalFired)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d487fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            "OnSignalFired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalCallbackWrapper.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalCallbackWrapper::*)()>(&Zenject::SignalCallbackWrapper::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d48820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalCallbackWrapper.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::SignalCallbackWrapper::__zenCreate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2d488c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SignalCallbackWrapper.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::SignalCallbackWrapper::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2d48a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  Zenject::SignalCallbackWrapper::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SignalCallbackWrapper::__set__signalBus(Zenject::SignalBus value)  {
::cordl_internals::setInstanceField<Zenject::SignalBus, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SignalBus>(value));
}
constexpr Zenject::SignalBus Zenject::SignalCallbackWrapper::__get__signalBus() const {
return ::cordl_internals::getInstanceField<Zenject::SignalBus, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SignalCallbackWrapper::__set__action(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Action_1<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Action_1<::bs_hook::Il2CppWrapperType> Zenject::SignalCallbackWrapper::__get__action() const {
return ::cordl_internals::getInstanceField<System::Action_1<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SignalCallbackWrapper::__set__signalType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::SignalCallbackWrapper::__get__signalType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SignalCallbackWrapper::__set__identifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::SignalCallbackWrapper::__get__identifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::SignalBindingBindInfo", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Action_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "signalBus", ty: "Zenject::SignalBus", modifiers: "", def_value: None }]
 Zenject::SignalCallbackWrapper::SignalCallbackWrapper(Zenject::SignalBindingBindInfo bindInfo, System::Action_1<::bs_hook::Il2CppWrapperType> action, Zenject::SignalBus signalBus)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SignalCallbackWrapper>(bindInfo, action, signalBus))) {}
 void Zenject::SignalCallbackWrapper::_ctor(Zenject::SignalBindingBindInfo bindInfo, System::Action_1<::bs_hook::Il2CppWrapperType> action, Zenject::SignalBus signalBus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalBindingBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::SignalBus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo, action, signalBus);
}
 void Zenject::SignalCallbackWrapper::OnSignalFired(::bs_hook::Il2CppWrapperType signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            "OnSignalFired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signal);
}
 void Zenject::SignalCallbackWrapper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::SignalCallbackWrapper::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::SignalCallbackWrapper::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SignalCallbackWrapper>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
