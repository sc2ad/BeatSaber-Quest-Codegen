#pragma once
#include "Zenject/zzzz__PlaceholderFactory_2_impl.hpp"
namespace {
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
#include "Zenject/zzzz__SignalSubscription_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SignalDeclaration._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalDeclarationBindInfo, ::Zenject::ZenjectSettings)>(&::Zenject::SignalDeclaration::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2d49380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenjectSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_TickPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_TickPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d49508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "get_TickPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.set_TickPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(int32_t)>(&::Zenject::SignalDeclaration::set_TickPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d49510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "set_TickPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_IsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_IsAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d49518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "get_IsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.get_BindingId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingId (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::get_BindingId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d49520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "get_BindingId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::Dispose)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2d4952c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Fire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::bs_hook::Il2CppWrapperType)>(&::Zenject::SignalDeclaration::Fire)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2d49688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.FireInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::System::Collections::Generic::List_1<::Zenject::SignalSubscription>, ::bs_hook::Il2CppWrapperType)>(&::Zenject::SignalDeclaration::FireInternal)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2d49964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "FireInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::SignalSubscription>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)()>(&::Zenject::SignalDeclaration::Tick)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2d49bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalSubscription)>(&::Zenject::SignalDeclaration::Add)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d49ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SignalDeclaration::*)(::Zenject::SignalSubscription)>(&::Zenject::SignalDeclaration::Remove)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d49fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::SignalDeclaration::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d4a018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalDeclaration.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::SignalDeclaration::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2d4a134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::ITickable
constexpr  ::Zenject::SignalDeclaration::operator ::Zenject::ITickable() const noexcept {
return ::Zenject::ITickable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::Zenject::SignalDeclaration::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SignalDeclaration::__set__subscriptions(::System::Collections::Generic::List_1<::Zenject::SignalSubscription> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::SignalSubscription>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::Zenject::SignalSubscription>>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::SignalSubscription> ::Zenject::SignalDeclaration::__get__subscriptions() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::SignalSubscription>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SignalDeclaration::__set__asyncQueue(::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> ::Zenject::SignalDeclaration::__get__asyncQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SignalDeclaration::__set__bindingId(::Zenject::BindingId value)  {
::cordl_internals::setInstanceField<::Zenject::BindingId, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::BindingId>(value));
}
constexpr ::Zenject::BindingId ::Zenject::SignalDeclaration::__get__bindingId() const {
return ::cordl_internals::getInstanceField<::Zenject::BindingId, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SignalDeclaration::__set__missingHandlerResponses(::Zenject::SignalMissingHandlerResponses value)  {
::cordl_internals::setInstanceField<::Zenject::SignalMissingHandlerResponses, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::SignalMissingHandlerResponses>(value));
}
constexpr ::Zenject::SignalMissingHandlerResponses ::Zenject::SignalDeclaration::__get__missingHandlerResponses() const {
return ::cordl_internals::getInstanceField<::Zenject::SignalMissingHandlerResponses, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SignalDeclaration::__set__isAsync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Zenject::SignalDeclaration::__get__isAsync() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SignalDeclaration::__set__settings(::Zenject::____Zenject__ZenjectSettings__SignalSettings value)  {
::cordl_internals::setInstanceField<::Zenject::____Zenject__ZenjectSettings__SignalSettings, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::____Zenject__ZenjectSettings__SignalSettings>(value));
}
constexpr ::Zenject::____Zenject__ZenjectSettings__SignalSettings ::Zenject::SignalDeclaration::__get__settings() const {
return ::cordl_internals::getInstanceField<::Zenject::____Zenject__ZenjectSettings__SignalSettings, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SignalDeclaration::__set__TickPriority_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Zenject::SignalDeclaration::__get__TickPriority_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bindInfo", ty: "::Zenject::SignalDeclarationBindInfo", modifiers: "", def_value: None }, CppParam { name: "zenjectSettings", ty: "::Zenject::ZenjectSettings", modifiers: "", def_value: None }]
 ::Zenject::SignalDeclaration::SignalDeclaration(::Zenject::SignalDeclarationBindInfo bindInfo, ::Zenject::ZenjectSettings zenjectSettings)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SignalDeclaration>(bindInfo, zenjectSettings))) {}
 void ::Zenject::SignalDeclaration::_ctor(::Zenject::SignalDeclarationBindInfo bindInfo, ::Zenject::ZenjectSettings zenjectSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenjectSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo, zenjectSettings);
}
 int32_t ::Zenject::SignalDeclaration::get_TickPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "get_TickPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::SignalDeclaration::set_TickPriority(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "set_TickPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Zenject::SignalDeclaration::get_IsAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "get_IsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::BindingId ::Zenject::SignalDeclaration::get_BindingId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "get_BindingId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::BindingId, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::SignalDeclaration::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::SignalDeclaration::Fire(::bs_hook::Il2CppWrapperType signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signal);
}
 void ::Zenject::SignalDeclaration::FireInternal(::System::Collections::Generic::List_1<::Zenject::SignalSubscription> subscriptions, ::bs_hook::Il2CppWrapperType signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "FireInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::SignalSubscription>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subscriptions, signal);
}
 void ::Zenject::SignalDeclaration::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::SignalDeclaration::Add(::Zenject::SignalSubscription subscription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subscription);
}
 void ::Zenject::SignalDeclaration::Remove(::Zenject::SignalSubscription subscription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalSubscription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subscription);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::SignalDeclaration::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::SignalDeclaration::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SignalDeclaration>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::____Zenject__SignalDeclaration__Factory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__SignalDeclaration__Factory::*)()>(&::Zenject::____Zenject__SignalDeclaration__Factory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d4a438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__SignalDeclaration__Factory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__SignalDeclaration__Factory.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__SignalDeclaration__Factory::__zenCreate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d4a480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__SignalDeclaration__Factory>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__SignalDeclaration__Factory.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__SignalDeclaration__Factory::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d4a4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__SignalDeclaration__Factory>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Zenject::____Zenject__SignalDeclaration__Factory::____Zenject__SignalDeclaration__Factory()  : ::Zenject::PlaceholderFactory_2<::Zenject::SignalDeclarationBindInfo,::Zenject::SignalDeclaration>(THROW_UNLESS(::il2cpp_utils::New<____Zenject__SignalDeclaration__Factory>())) {}
 void ::Zenject::____Zenject__SignalDeclaration__Factory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__SignalDeclaration__Factory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__SignalDeclaration__Factory::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__SignalDeclaration__Factory>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__SignalDeclaration__Factory::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__SignalDeclaration__Factory>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
