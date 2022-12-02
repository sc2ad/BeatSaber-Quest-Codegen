// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_protocolrange
#include "Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Unity
namespace Mono::Unity {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Unity::UnityTls::unitytls_interface_struct);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_interface_struct*, "Mono.Unity", "UnityTls/unitytls_interface_struct");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x118
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityTls::unitytls_interface_struct : public ::Il2CppObject {
    public:
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t
    class unitytls_errorstate_create_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t
    class unitytls_errorstate_raise_error_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_get_ref_t
    class unitytls_key_get_ref_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_der_t
    class unitytls_key_parse_der_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t
    class unitytls_key_parse_pem_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_free_t
    class unitytls_key_free_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509_export_der_t
    class unitytls_x509_export_der_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_get_ref_t
    class unitytls_x509list_get_ref_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_get_x509_t
    class unitytls_x509list_get_x509_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_create_t
    class unitytls_x509list_create_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t
    class unitytls_x509list_append_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t
    class unitytls_x509list_append_der_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_free_t
    class unitytls_x509list_free_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_default_ca_t
    class unitytls_x509verify_default_ca_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t
    class unitytls_x509verify_explicit_ca_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t
    class unitytls_tlsctx_create_server_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t
    class unitytls_tlsctx_create_client_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_server_require_client_authentication_t
    class unitytls_tlsctx_server_require_client_authentication_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t
    class unitytls_tlsctx_set_certificate_callback_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_trace_callback_t
    class unitytls_tlsctx_set_trace_callback_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t
    class unitytls_tlsctx_set_x509verify_callback_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_supported_ciphersuites_t
    class unitytls_tlsctx_set_supported_ciphersuites_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_ciphersuite_t
    class unitytls_tlsctx_get_ciphersuite_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t
    class unitytls_tlsctx_get_protocol_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_process_handshake_t
    class unitytls_tlsctx_process_handshake_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t
    class unitytls_tlsctx_read_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_write_t
    class unitytls_tlsctx_write_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_notify_close_t
    class unitytls_tlsctx_notify_close_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t
    class unitytls_tlsctx_free_t;
    // Nested type: ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t
    class unitytls_random_generate_bytes_t;
    public:
    // public readonly System.UInt64 UNITYTLS_INVALID_HANDLE
    // Size: 0x8
    // Offset: 0x10
    uint64_t UNITYTLS_INVALID_HANDLE;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT
    // Size: 0x8
    // Offset: 0x18
    ::Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_errorstate_create_t unitytls_errorstate_create
    // Size: 0x8
    // Offset: 0x20
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t* unitytls_errorstate_create;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_errorstate_raise_error_t unitytls_errorstate_raise_error
    // Size: 0x8
    // Offset: 0x28
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t* unitytls_errorstate_raise_error;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_key_get_ref_t unitytls_key_get_ref
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_get_ref_t* unitytls_key_get_ref;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_get_ref_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_key_parse_der_t unitytls_key_parse_der
    // Size: 0x8
    // Offset: 0x38
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_der_t* unitytls_key_parse_der;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_der_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_key_parse_pem_t unitytls_key_parse_pem
    // Size: 0x8
    // Offset: 0x40
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t* unitytls_key_parse_pem;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_key_free_t unitytls_key_free
    // Size: 0x8
    // Offset: 0x48
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_free_t* unitytls_key_free;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_free_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509_export_der_t unitytls_x509_export_der
    // Size: 0x8
    // Offset: 0x50
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509_export_der_t* unitytls_x509_export_der;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509_export_der_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_get_ref_t unitytls_x509list_get_ref
    // Size: 0x8
    // Offset: 0x58
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_get_ref_t* unitytls_x509list_get_ref;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_get_ref_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_get_x509_t unitytls_x509list_get_x509
    // Size: 0x8
    // Offset: 0x60
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_get_x509_t* unitytls_x509list_get_x509;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_get_x509_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_create_t unitytls_x509list_create
    // Size: 0x8
    // Offset: 0x68
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_create_t* unitytls_x509list_create;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_create_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_append_t unitytls_x509list_append
    // Size: 0x8
    // Offset: 0x70
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t* unitytls_x509list_append;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_append_der_t unitytls_x509list_append_der
    // Size: 0x8
    // Offset: 0x78
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t* unitytls_x509list_append_der;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_append_der_t unitytls_x509list_append_pem
    // Size: 0x8
    // Offset: 0x80
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t* unitytls_x509list_append_pem;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_free_t unitytls_x509list_free
    // Size: 0x8
    // Offset: 0x88
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_free_t* unitytls_x509list_free;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_free_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509verify_default_ca_t unitytls_x509verify_default_ca
    // Size: 0x8
    // Offset: 0x90
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_default_ca_t* unitytls_x509verify_default_ca;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_default_ca_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509verify_explicit_ca_t unitytls_x509verify_explicit_ca
    // Size: 0x8
    // Offset: 0x98
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t* unitytls_x509verify_explicit_ca;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_create_server_t unitytls_tlsctx_create_server
    // Size: 0x8
    // Offset: 0xA0
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t* unitytls_tlsctx_create_server;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_create_client_t unitytls_tlsctx_create_client
    // Size: 0x8
    // Offset: 0xA8
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t* unitytls_tlsctx_create_client;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_server_require_client_authentication_t unitytls_tlsctx_server_require_client_authentication
    // Size: 0x8
    // Offset: 0xB0
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_server_require_client_authentication_t* unitytls_tlsctx_server_require_client_authentication;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_server_require_client_authentication_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_set_certificate_callback_t unitytls_tlsctx_set_certificate_callback
    // Size: 0x8
    // Offset: 0xB8
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t* unitytls_tlsctx_set_certificate_callback;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_set_trace_callback_t unitytls_tlsctx_set_trace_callback
    // Size: 0x8
    // Offset: 0xC0
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_trace_callback_t* unitytls_tlsctx_set_trace_callback;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_trace_callback_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_set_x509verify_callback_t unitytls_tlsctx_set_x509verify_callback
    // Size: 0x8
    // Offset: 0xC8
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t* unitytls_tlsctx_set_x509verify_callback;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_set_supported_ciphersuites_t unitytls_tlsctx_set_supported_ciphersuites
    // Size: 0x8
    // Offset: 0xD0
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_supported_ciphersuites_t* unitytls_tlsctx_set_supported_ciphersuites;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_supported_ciphersuites_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_get_ciphersuite_t unitytls_tlsctx_get_ciphersuite
    // Size: 0x8
    // Offset: 0xD8
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_ciphersuite_t* unitytls_tlsctx_get_ciphersuite;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_ciphersuite_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_get_protocol_t unitytls_tlsctx_get_protocol
    // Size: 0x8
    // Offset: 0xE0
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t* unitytls_tlsctx_get_protocol;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_process_handshake_t unitytls_tlsctx_process_handshake
    // Size: 0x8
    // Offset: 0xE8
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_process_handshake_t* unitytls_tlsctx_process_handshake;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_process_handshake_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_read_t unitytls_tlsctx_read
    // Size: 0x8
    // Offset: 0xF0
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t* unitytls_tlsctx_read;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_write_t unitytls_tlsctx_write
    // Size: 0x8
    // Offset: 0xF8
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_write_t* unitytls_tlsctx_write;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_write_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_notify_close_t unitytls_tlsctx_notify_close
    // Size: 0x8
    // Offset: 0x100
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_notify_close_t* unitytls_tlsctx_notify_close;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_notify_close_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_free_t unitytls_tlsctx_free
    // Size: 0x8
    // Offset: 0x108
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t* unitytls_tlsctx_free;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_random_generate_bytes_t unitytls_random_generate_bytes
    // Size: 0x8
    // Offset: 0x110
    ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t* unitytls_random_generate_bytes;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t*) == 0x8);
    public:
    // Get instance field reference: public readonly System.UInt64 UNITYTLS_INVALID_HANDLE
    [[deprecated("Use field access instead!")]] uint64_t& dyn_UNITYTLS_INVALID_HANDLE();
    // Get instance field reference: public readonly Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange& dyn_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_errorstate_create_t unitytls_errorstate_create
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t*& dyn_unitytls_errorstate_create();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_errorstate_raise_error_t unitytls_errorstate_raise_error
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t*& dyn_unitytls_errorstate_raise_error();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_key_get_ref_t unitytls_key_get_ref
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_get_ref_t*& dyn_unitytls_key_get_ref();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_key_parse_der_t unitytls_key_parse_der
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_der_t*& dyn_unitytls_key_parse_der();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_key_parse_pem_t unitytls_key_parse_pem
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t*& dyn_unitytls_key_parse_pem();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_key_free_t unitytls_key_free
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_free_t*& dyn_unitytls_key_free();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509_export_der_t unitytls_x509_export_der
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509_export_der_t*& dyn_unitytls_x509_export_der();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_get_ref_t unitytls_x509list_get_ref
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_get_ref_t*& dyn_unitytls_x509list_get_ref();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_get_x509_t unitytls_x509list_get_x509
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_get_x509_t*& dyn_unitytls_x509list_get_x509();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_create_t unitytls_x509list_create
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_create_t*& dyn_unitytls_x509list_create();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_append_t unitytls_x509list_append
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t*& dyn_unitytls_x509list_append();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_append_der_t unitytls_x509list_append_der
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t*& dyn_unitytls_x509list_append_der();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_append_der_t unitytls_x509list_append_pem
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t*& dyn_unitytls_x509list_append_pem();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509list_free_t unitytls_x509list_free
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_free_t*& dyn_unitytls_x509list_free();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509verify_default_ca_t unitytls_x509verify_default_ca
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_default_ca_t*& dyn_unitytls_x509verify_default_ca();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_x509verify_explicit_ca_t unitytls_x509verify_explicit_ca
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t*& dyn_unitytls_x509verify_explicit_ca();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_create_server_t unitytls_tlsctx_create_server
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*& dyn_unitytls_tlsctx_create_server();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_create_client_t unitytls_tlsctx_create_client
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t*& dyn_unitytls_tlsctx_create_client();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_server_require_client_authentication_t unitytls_tlsctx_server_require_client_authentication
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_server_require_client_authentication_t*& dyn_unitytls_tlsctx_server_require_client_authentication();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_set_certificate_callback_t unitytls_tlsctx_set_certificate_callback
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t*& dyn_unitytls_tlsctx_set_certificate_callback();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_set_trace_callback_t unitytls_tlsctx_set_trace_callback
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_trace_callback_t*& dyn_unitytls_tlsctx_set_trace_callback();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_set_x509verify_callback_t unitytls_tlsctx_set_x509verify_callback
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*& dyn_unitytls_tlsctx_set_x509verify_callback();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_set_supported_ciphersuites_t unitytls_tlsctx_set_supported_ciphersuites
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_supported_ciphersuites_t*& dyn_unitytls_tlsctx_set_supported_ciphersuites();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_get_ciphersuite_t unitytls_tlsctx_get_ciphersuite
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_ciphersuite_t*& dyn_unitytls_tlsctx_get_ciphersuite();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_get_protocol_t unitytls_tlsctx_get_protocol
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t*& dyn_unitytls_tlsctx_get_protocol();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_process_handshake_t unitytls_tlsctx_process_handshake
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_process_handshake_t*& dyn_unitytls_tlsctx_process_handshake();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_read_t unitytls_tlsctx_read
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t*& dyn_unitytls_tlsctx_read();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_write_t unitytls_tlsctx_write
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_write_t*& dyn_unitytls_tlsctx_write();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_notify_close_t unitytls_tlsctx_notify_close
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_notify_close_t*& dyn_unitytls_tlsctx_notify_close();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_free_t unitytls_tlsctx_free
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t*& dyn_unitytls_tlsctx_free();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_random_generate_bytes_t unitytls_random_generate_bytes
    [[deprecated("Use field access instead!")]] ::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t*& dyn_unitytls_random_generate_bytes();
    // public System.Void .ctor()
    // Offset: 0x1B03678
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Unity::UnityTls::unitytls_interface_struct::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct*, creationType>()));
    }
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct
  #pragma pack(pop)
  static check_size<sizeof(UnityTls::unitytls_interface_struct), 272 + sizeof(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t*)> __Mono_Unity_UnityTls_unitytls_interface_structSizeCheck;
  static_assert(sizeof(UnityTls::unitytls_interface_struct) == 0x118);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
