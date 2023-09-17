#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Status::____System__Net__WebCompletionSource_1__Status(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1__Status::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebCompletionSource_1__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Status<T>  ::System::Net::____System__Net__WebCompletionSource_1__Status::Running{0};
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Status<T>  ::System::Net::____System__Net__WebCompletionSource_1__Status::Completed{1};
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Status<T>  ::System::Net::____System__Net__WebCompletionSource_1__Status::Canceled{2};
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Status<T>  ::System::Net::____System__Net__WebCompletionSource_1__Status::Faulted{3};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__WebCompletionSource_1__Status<T> (::System::Net::____System__Net__WebCompletionSource_1__Result::*)()>(&::System::Net::____System__Net__WebCompletionSource_1__Result::get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result.get_Success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::____System__Net__WebCompletionSource_1__Result::*)()>(&::System::Net::____System__Net__WebCompletionSource_1__Result::get_Success)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result.get_Error
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo (::System::Net::____System__Net__WebCompletionSource_1__Result::*)()>(&::System::Net::____System__Net__WebCompletionSource_1__Result::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result.get_Argument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::System::Net::____System__Net__WebCompletionSource_1__Result::*)()>(&::System::Net::____System__Net__WebCompletionSource_1__Result::get_Argument)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            "get_Argument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebCompletionSource_1__Result::*)(T)>(&::System::Net::____System__Net__WebCompletionSource_1__Result::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebCompletionSource_1__Result::*)(::System::Net::____System__Net__WebCompletionSource_1__Status<T>, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo)>(&::System::Net::____System__Net__WebCompletionSource_1__Result::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__WebCompletionSource_1__Status<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::____System__Net__WebCompletionSource_1__Result::__set__Status_k__BackingField(::System::Net::____System__Net__WebCompletionSource_1__Status<T> value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__WebCompletionSource_1__Status<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::____System__Net__WebCompletionSource_1__Status<T>>(value));
}
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Status<T> ::System::Net::____System__Net__WebCompletionSource_1__Result::__get__Status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__WebCompletionSource_1__Status<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1__Result::__set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::System::Net::____System__Net__WebCompletionSource_1__Result::__get__Error_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1__Result::__set__Argument_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::System::Net::____System__Net__WebCompletionSource_1__Result::__get__Argument_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::____System__Net__WebCompletionSource_1__Status<T> ::System::Net::____System__Net__WebCompletionSource_1__Result::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__WebCompletionSource_1__Status<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::____System__Net__WebCompletionSource_1__Result::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::System::Net::____System__Net__WebCompletionSource_1__Result::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 T ::System::Net::____System__Net__WebCompletionSource_1__Result::get_Argument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            "get_Argument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "argument", ty: "T", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__WebCompletionSource_1__Result::____System__Net__WebCompletionSource_1__Result(T argument)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__WebCompletionSource_1__Result>(argument))) {}
 void ::System::Net::____System__Net__WebCompletionSource_1__Result::_ctor(T argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, argument);
}
// Ctor Parameters [CppParam { name: "state", ty: "::System::Net::____System__Net__WebCompletionSource_1__Status<T>", modifiers: "", def_value: None }, CppParam { name: "error", ty: "::System::Runtime::ExceptionServices::ExceptionDispatchInfo", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__WebCompletionSource_1__Result::____System__Net__WebCompletionSource_1__Result(::System::Net::____System__Net__WebCompletionSource_1__Status<T> state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo error)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__WebCompletionSource_1__Result>(state, error))) {}
 void ::System::Net::____System__Net__WebCompletionSource_1__Result::_ctor(::System::Net::____System__Net__WebCompletionSource_1__Status<T> state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__WebCompletionSource_1__Status<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, error);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> (::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.get_Success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Success)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.get_Error
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo (::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.get_Argument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> (::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Argument)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Argument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>)>(&::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo)>(&::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set__Status_k__BackingField(::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get__Status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get__Error_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set__Argument_k__BackingField(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get__Argument_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Argument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Argument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "argument", ty: "::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::____System__Net__WebCompletionSource_1__Result(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> argument)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__WebCompletionSource_1__Result>(argument))) {}
 void ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, argument);
}
// Ctor Parameters [CppParam { name: "state", ty: "::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "error", ty: "::System::Runtime::ExceptionServices::ExceptionDispatchInfo", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::____System__Net__WebCompletionSource_1__Result(::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo error)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__WebCompletionSource_1__Result>(state, error))) {}
 void ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor(::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::____System__Net__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, error);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::*)()>(&::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<T>>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::System::Net::WebCompletionSource_1<T> __4__this, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<T>> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::__set___4__this(::System::Net::WebCompletionSource_1<T> value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource_1<T>, 0x10>(this->__instance, std::forward<::System::Net::WebCompletionSource_1<T>>(value));
}
constexpr ::System::Net::WebCompletionSource_1<T> ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<T>, 0x10>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<T>> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<T>>, 0x18>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<T>>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<T>> ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<T>>, 0x18>(this->__instance);
}
 void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __t__builder, ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __4__this, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set___4__this(::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x10>(this->__instance, std::forward<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x10>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>, 0x18>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>, 0x18>(this->__instance);
}
 void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::WebCompletionSource_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebCompletionSource_1::*)(bool)>(&::System::Net::WebCompletionSource_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.get_CurrentResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__WebCompletionSource_1__Result<T> (::System::Net::WebCompletionSource_1::*)()>(&::System::Net::WebCompletionSource_1::get_CurrentResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "get_CurrentResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebCompletionSource_1::*)()>(&::System::Net::WebCompletionSource_1::get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.TrySetCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1::*)(T)>(&::System::Net::WebCompletionSource_1::TrySetCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.TrySetCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1::*)()>(&::System::Net::WebCompletionSource_1::TrySetCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.TrySetCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1::*)()>(&::System::Net::WebCompletionSource_1::TrySetCanceled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.TrySetCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1::*)(::System::OperationCanceledException)>(&::System::Net::WebCompletionSource_1::TrySetCanceled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::OperationCanceledException>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.TrySetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1::*)(::System::Exception)>(&::System::Net::WebCompletionSource_1::TrySetException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.ThrowOnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebCompletionSource_1::*)()>(&::System::Net::WebCompletionSource_1::ThrowOnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1.WaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<T> (::System::Net::WebCompletionSource_1::*)()>(&::System::Net::WebCompletionSource_1::WaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::WebCompletionSource_1::__set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<T>> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<T>>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<T>> ::System::Net::WebCompletionSource_1::__get_completion() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebCompletionSource_1::__set_currentResult(::System::Net::____System__Net__WebCompletionSource_1__Result<T> value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__WebCompletionSource_1__Result<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::____System__Net__WebCompletionSource_1__Result<T>>(value));
}
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Result<T> ::System::Net::WebCompletionSource_1::__get_currentResult() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__WebCompletionSource_1__Result<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "runAsync", ty: "bool", modifiers: "", def_value: Some("true") }]
 ::System::Net::WebCompletionSource_1::WebCompletionSource_1(bool runAsync)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<WebCompletionSource_1>(runAsync))) {}
/// @param runAsync: bool (default: true)
 void ::System::Net::WebCompletionSource_1::_ctor(bool runAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runAsync);
}
 ::System::Net::____System__Net__WebCompletionSource_1__Result<T> ::System::Net::WebCompletionSource_1::get_CurrentResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "get_CurrentResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__WebCompletionSource_1__Result<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::System::Net::WebCompletionSource_1::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebCompletionSource_1::TrySetCompleted(T argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, argument);
}
 bool ::System::Net::WebCompletionSource_1::TrySetCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebCompletionSource_1::TrySetCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebCompletionSource_1::TrySetCanceled(::System::OperationCanceledException error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::OperationCanceledException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, error);
}
 bool ::System::Net::WebCompletionSource_1::TrySetException(::System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "TrySetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void ::System::Net::WebCompletionSource_1::ThrowOnError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<T> ::System::Net::WebCompletionSource_1::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(bool)>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.get_CurrentResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_CurrentResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_CurrentResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.TrySetCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>)>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.TrySetCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.TrySetCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetCanceled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.TrySetCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(::System::OperationCanceledException)>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetCanceled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::OperationCanceledException>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.TrySetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(::System::Exception)>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.ThrowOnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::ThrowOnError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.WaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> (::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::WaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_completion() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_currentResult(::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_currentResult() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "runAsync", ty: "bool", modifiers: "", def_value: Some("true") }]
 ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::WebCompletionSource_1(bool runAsync)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<WebCompletionSource_1>(runAsync))) {}
/// @param runAsync: bool (default: true)
 void ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor(bool runAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runAsync);
}
 ::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_CurrentResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_CurrentResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetCompleted(::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, argument);
}
 bool ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetCanceled(::System::OperationCanceledException error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::OperationCanceledException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, error);
}
 bool ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TrySetException(::System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "TrySetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::ThrowOnError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
