#pragma once
namespace {
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolResult.get_UserResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::AsyncProtocolResult::*)()>(&::Mono::Net::Security::AsyncProtocolResult::get_UserResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268c80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult>::get(),
                            "get_UserResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolResult.get_Error
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo (::Mono::Net::Security::AsyncProtocolResult::*)()>(&::Mono::Net::Security::AsyncProtocolResult::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268c814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncProtocolResult::*)(int32_t)>(&::Mono::Net::Security::AsyncProtocolResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x268c81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncProtocolResult::*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo)>(&::Mono::Net::Security::AsyncProtocolResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x268c844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Mono::Net::Security::AsyncProtocolResult::__set__UserResult_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::AsyncProtocolResult::__get__UserResult_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::AsyncProtocolResult::__set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::Mono::Net::Security::AsyncProtocolResult::__get__Error_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::Mono::Net::Security::AsyncProtocolResult::get_UserResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult>::get(),
                            "get_UserResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::Mono::Net::Security::AsyncProtocolResult::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: None }]
 ::Mono::Net::Security::AsyncProtocolResult::AsyncProtocolResult(int32_t result)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncProtocolResult>(result))) {}
 void ::Mono::Net::Security::AsyncProtocolResult::_ctor(int32_t result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "error", ty: "::System::Runtime::ExceptionServices::ExceptionDispatchInfo", modifiers: "", def_value: None }]
 ::Mono::Net::Security::AsyncProtocolResult::AsyncProtocolResult(::System::Runtime::ExceptionServices::ExceptionDispatchInfo error)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncProtocolResult>(error))) {}
 void ::Mono::Net::Security::AsyncProtocolResult::_ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
} // end anonymous namespace
