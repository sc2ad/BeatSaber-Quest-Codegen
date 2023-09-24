#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::Mono__Unity__UnityTls__unitytls_error_code(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_SUCCESS{0u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_INVALID_ARGUMENT{1u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_INVALID_FORMAT{2u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_INVALID_PASSWORD{3u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_INVALID_STATE{4u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_BUFFER_OVERFLOW{5u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_OUT_OF_MEMORY{6u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_INTERNAL_ERROR{7u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_NOT_SUPPORTED{8u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_ENTROPY_SOURCE_FAILED{9u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_STREAM_CLOSED{10u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_USER_CUSTOM_ERROR_START{1048576u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_USER_WOULD_BLOCK{1048577u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_USER_READ_FAILED{1048578u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_USER_WRITE_FAILED{1048579u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_USER_UNKNOWN_ERROR{1048580u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code  Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code::UNITYTLS_USER_CUSTOM_ERROR_END{2097152u};
// Ctor Parameters [CppParam { name: "magic", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "code", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate::Mono__Unity__UnityTls__unitytls_errorstate(uint32_t magic, Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code code, uint64_t reserved) noexcept : ::bs_hook::ValueTypeWrapper() {this->magic = magic;
this->code = code;
this->reserved = reserved;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate::__set_magic(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate::__get_magic() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate::__set_code(Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code, 0x4>(this->__instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate::__get_code() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code, 0x4>(this->__instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate::__set_reserved(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate::__get_reserved() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref::Mono__Unity__UnityTls__unitytls_key_ref(uint64_t handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->handle = handle;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref::__set_handle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref::__get_handle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref::Mono__Unity__UnityTls__unitytls_x509_ref(uint64_t handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->handle = handle;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref::__set_handle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref::__get_handle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref::Mono__Unity__UnityTls__unitytls_x509list_ref(uint64_t handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->handle = handle;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref::__set_handle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref::__get_handle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::Mono__Unity__UnityTls__unitytls_x509verify_result(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_SUCCESS{0u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_NOT_DONE{2147483648u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FATAL_ERROR{4294967295u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_EXPIRED{1u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_REVOKED{2u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH{4u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED{8u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR1{65536u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR2{131072u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR3{262144u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR4{524288u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR5{1048576u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR6{2097152u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR7{4194304u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR8{8388608u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result  Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR{134217728u};
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26862f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result (Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback::*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, void*)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26863c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback>(object, method))};
return o;
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback::Invoke(void* userData, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref cert, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result result, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, false>(const_cast<void*>(instance), ___internal_method, userData, cert, result, errorState);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite::Mono__Unity__UnityTls__unitytls_ciphersuite(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite  Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite::UNITYTLS_CIPHERSUITE_INVALID{16777215u};
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol::Mono__Unity__UnityTls__unitytls_protocol(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol  Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_0{0u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol  Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_1{1u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol  Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_2{2u};
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol  Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol::UNITYTLS_PROTOCOL_INVALID{3u};
// Ctor Parameters [CppParam { name: "min", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol min, Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol max) noexcept : ::bs_hook::ValueTypeWrapper() {this->min = min;
this->max = max;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange::__set_min(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol, 0x0>(this->__instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange::__get_min() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol, 0x0>(this->__instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange::__set_max(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol, 0x4>(this->__instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange::__get_max() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol, 0x4>(this->__instance);
}
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26863dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback::*)(void*, void*, ::cordl_internals::intptr_t, void*)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26864b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback>(object, method))};
return o;
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::cordl_internals::intptr_t Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback::Invoke(void* userData, void* data, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, userData, data, bufferLen, errorState);
}
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26864c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback::*)(void*, void*, ::cordl_internals::intptr_t, void*)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26865a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback>(object, method))};
return o;
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::cordl_internals::intptr_t Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback::Invoke(void* userData, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, userData, buffer, bufferLen, errorState);
}
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26865b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback::*)(void*, void*, void*, ::cordl_internals::intptr_t)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x268668c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback>(object, method))};
return o;
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback::Invoke(void* userData, void* ctx, void* traceMessage, ::cordl_internals::intptr_t traceMessageLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userData, ctx, traceMessage, traceMessageLen);
}
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26866a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback::*)(void*, void*, void*, ::cordl_internals::intptr_t, void*, ::cordl_internals::intptr_t, void*, void*, void*)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2686778;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback>(object, method))};
return o;
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback::Invoke(void* userData, void* ctx, void* cn, ::cordl_internals::intptr_t cnLen, void* caList, ::cordl_internals::intptr_t caListLen, void* chain, void* key, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2686794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result (Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback::*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, void*)>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x268686c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback>(object, method))};
return o;
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback::Invoke(void* userData, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, false>(const_cast<void*>(instance), ___internal_method, userData, chain, errorState);
}
// Ctor Parameters [CppParam { name: "read", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback", modifiers: "", def_value: Some("csnull") }, CppParam { name: "write", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback", modifiers: "", def_value: Some("csnull") }, CppParam { name: "data", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback read, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback write, void* data) noexcept : ::bs_hook::ValueTypeWrapper() {this->read = read;
this->write = write;
this->data = data;
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks::__set_read(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback, 0x0>(this->__instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks::__get_read() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback, 0x0>(this->__instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks::__set_write(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback, 0x8>(this->__instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks::__get_write() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback, 0x8>(this->__instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks::__set_data(void* value)  {
::cordl_internals::setInstanceField<void*, 0x10>(this->__instance, std::forward<void*>(value));
}
constexpr void* Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks::__get_data() const {
return ::cordl_internals::getInstanceField<void*, 0x10>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2686888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::*)()>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2686944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2686958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2686a30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::Invoke(void* errorState, Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, errorState, errorCode);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2686a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::*)(void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2686b1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::Invoke(void* key, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref, false>(const_cast<void*>(instance), ___internal_method, key, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2686b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::*)(void*, ::cordl_internals::intptr_t, void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2686c08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void* GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::Invoke(void* buffer, ::cordl_internals::intptr_t bufferLen, void* password, ::cordl_internals::intptr_t passwordLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferLen, password, passwordLen, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2686c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::*)(void*, ::cordl_internals::intptr_t, void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2686cf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void* GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::Invoke(void* buffer, ::cordl_internals::intptr_t bufferLen, void* password, ::cordl_internals::intptr_t passwordLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferLen, password, passwordLen, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2686d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t::*)(void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2686ddc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t::Invoke(void* key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2686df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref, void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2686eb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::cordl_internals::intptr_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref cert, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, cert, buffer, bufferLen, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2686ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::*)(void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2686fa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::Invoke(void* list, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, false>(const_cast<void*>(instance), ___internal_method, list, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2686fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687078;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref list, ::cordl_internals::intptr_t index, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref, false>(const_cast<void*>(instance), ___internal_method, list, index, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x268708c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::*)(void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void* GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::Invoke(void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2687174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x268724c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::Invoke(void* list, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref cert, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, list, cert, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2687260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::*)(void*, void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::Invoke(void* list, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, list, buffer, bufferLen, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x268734c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::*)(void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::Invoke(void* list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, list);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2687434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, void*, ::cordl_internals::intptr_t, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback, void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26874f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, void* cn, ::cordl_internals::intptr_t cnLen, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback cb, void* userData, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, false>(const_cast<void*>(instance), ___internal_method, chain, cn, cnLen, cb, userData, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x268750c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, void*, ::cordl_internals::intptr_t, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback, void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26875d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref trustCA, void* cn, ::cordl_internals::intptr_t cnLen, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback cb, void* userData, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, false>(const_cast<void*>(instance), ___internal_method, chain, trustCA, cn, cnLen, cb, userData, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26875e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks, uint64_t, uint64_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26876ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void* GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange supportedProtocols, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method, supportedProtocols, callbacks, certChain, leafCertificateKey, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26876e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks, void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26877ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void* GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange supportedProtocols, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks callbacks, void* cn, ::cordl_internals::intptr_t cnLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(instance), ___internal_method, supportedProtocols, callbacks, cn, cnLen, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26877e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26878c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::Invoke(void* ctx, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref clientAuthCAList, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx, clientAuthCAList, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26878d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback, void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26879ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::Invoke(void* ctx, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback cb, void* userData, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx, cb, userData, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26879c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback, void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::Invoke(void* ctx, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback cb, void* userData, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx, cb, userData, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2687aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback, void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687b84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::Invoke(void* ctx, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback cb, void* userData, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx, cb, userData, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2687b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::*)(void*, void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687c70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(void* ctx, void* supportedCiphersuites, ::cordl_internals::intptr_t supportedCiphersuitesLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx, supportedCiphersuites, supportedCiphersuitesLen, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2687c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::*)(void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687d5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::Invoke(void* ctx, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite, false>(const_cast<void*>(instance), ___internal_method, ctx, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2687d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::*)(void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687e48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::Invoke(void* ctx, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol, false>(const_cast<void*>(instance), ___internal_method, ctx, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2687e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::*)(void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2687f34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::Invoke(void* ctx, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, false>(const_cast<void*>(instance), ___internal_method, ctx, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2687f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::*)(void*, void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2688020;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::cordl_internals::intptr_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::Invoke(void* ctx, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, ctx, buffer, bufferLen, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2688034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::*)(void*, void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x268810c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::cordl_internals::intptr_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::Invoke(void* ctx, void* data, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, ctx, data, bufferLen, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2688120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::*)(void*, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26881f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::Invoke(void* ctx, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx, errorState);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x268820c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::*)(void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26882e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::Invoke(void* ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx);
}
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26882f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::*)(void*, ::cordl_internals::intptr_t, void*)>(&GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26883cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t>(object, method))};
return o;
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::Invoke(void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferLen, errorState);
}
//  Writing Method size for method: Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::*)()>(&Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2686880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_UNITYTLS_INVALID_HANDLE(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_UNITYTLS_INVALID_HANDLE() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_errorstate_create(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_errorstate_create() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_errorstate_raise_error(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_errorstate_raise_error() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_key_get_ref(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_key_get_ref() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_key_parse_der(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_key_parse_der() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_key_parse_pem(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_key_parse_pem() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_key_free(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_key_free() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509_export_der(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509_export_der() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_get_ref(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_get_ref() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_get_x509(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_get_x509() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_create(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_create() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_append(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_append_der(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append_der() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_append_pem(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append_pem() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_free(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_free() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509verify_default_ca(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509verify_default_ca() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_x509verify_explicit_ca(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_x509verify_explicit_ca() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_create_server(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_create_server() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_create_client(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_create_client() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_server_require_client_authentication(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_server_require_client_authentication() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_set_certificate_callback(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_certificate_callback() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_set_trace_callback(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_trace_callback() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_set_x509verify_callback(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_x509verify_callback() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_set_supported_ciphersuites(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_supported_ciphersuites() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_get_ciphersuite(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_get_ciphersuite() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_get_protocol(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_get_protocol() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_process_handshake(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_process_handshake() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_read(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_read() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_write(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_write() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_notify_close(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_notify_close() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_free(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_free() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__set_unitytls_random_generate_bytes(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t>(value));
}
constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::__get_unitytls_random_generate_bytes() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::New_ctor()  {
Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct>())};
return o;
}
 void Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Mono::Unity::UnityTls.GetUnityTlsInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)()>(&Mono::Unity::UnityTls::GetUnityTlsInterface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26862d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTls>::get(),
                            "GetUnityTlsInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTls.get_IsSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Mono::Unity::UnityTls::get_IsSupported)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26862d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTls>::get(),
                            "get_IsSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTls.get_NativeInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct (*)()>(&Mono::Unity::UnityTls::get_NativeInterface)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2686024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTls>::get(),
                            "get_NativeInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Mono::Unity::UnityTls::__set_marshalledInterface(Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct value)  {
::cordl_internals::setStaticField<Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct, "marshalledInterface", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTls>::get>(std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct>(value));
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct Mono::Unity::UnityTls::__get_marshalledInterface()  {
return ::cordl_internals::getStaticField<Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct, "marshalledInterface", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTls>::get>();
}
 ::cordl_internals::intptr_t Mono::Unity::UnityTls::GetUnityTlsInterface()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTls>::get(),
                            "GetUnityTlsInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method);
}
 bool Mono::Unity::UnityTls::get_IsSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTls>::get(),
                            "get_IsSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct Mono::Unity::UnityTls::get_NativeInterface()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTls>::get(),
                            "get_NativeInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct, false>(nullptr, ___internal_method);
}
