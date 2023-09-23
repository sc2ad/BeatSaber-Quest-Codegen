#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_ciphersuite;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_error_code;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_protocol;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509verify_result;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t;
}
namespace GlobalNamespace {
class Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_interface_struct;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_read_callback;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_write_callback;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_x509verify_callback;
}
namespace Mono::Unity {
class UnityTls;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_errorstate;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_key;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_key_ref;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_tlsctx;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_tlsctx_callbacks;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509_ref;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509list;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509list_ref;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509name;
}
// Type: ::unitytls_error_code
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7609))
// CS Name: Mono.Unity.UnityTls::unitytls_error_code
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_error_code : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_error_code(uint32_t value__) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_error_code(Mono__Unity__UnityTls__unitytls_error_code const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_error_code(Mono__Unity__UnityTls__unitytls_error_code&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_error_code& operator=(Mono__Unity__UnityTls__unitytls_error_code const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_error_code& operator=(Mono__Unity__UnityTls__unitytls_error_code&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_error_code(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Mono__Unity__UnityTls__unitytls_error_code_Unwrapped : uint32_t {
__UNITYTLS_SUCCESS = 0u,
__UNITYTLS_INVALID_ARGUMENT = 1u,
__UNITYTLS_INVALID_FORMAT = 2u,
__UNITYTLS_INVALID_PASSWORD = 3u,
__UNITYTLS_INVALID_STATE = 4u,
__UNITYTLS_BUFFER_OVERFLOW = 5u,
__UNITYTLS_OUT_OF_MEMORY = 6u,
__UNITYTLS_INTERNAL_ERROR = 7u,
__UNITYTLS_NOT_SUPPORTED = 8u,
__UNITYTLS_ENTROPY_SOURCE_FAILED = 9u,
__UNITYTLS_STREAM_CLOSED = 10u,
__UNITYTLS_USER_CUSTOM_ERROR_START = 1048576u,
__UNITYTLS_USER_WOULD_BLOCK = 1048577u,
__UNITYTLS_USER_READ_FAILED = 1048578u,
__UNITYTLS_USER_WRITE_FAILED = 1048579u,
__UNITYTLS_USER_UNKNOWN_ERROR = 1048580u,
__UNITYTLS_USER_CUSTOM_ERROR_END = 2097152u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mono__Unity__UnityTls__unitytls_error_code_Unwrapped () const noexcept {
return std::bit_cast<__Mono__Unity__UnityTls__unitytls_error_code_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field UNITYTLS_SUCCESS offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_SUCCESS;

/// @brief Field UNITYTLS_INVALID_ARGUMENT offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_INVALID_ARGUMENT;

/// @brief Field UNITYTLS_INVALID_FORMAT offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_INVALID_FORMAT;

/// @brief Field UNITYTLS_INVALID_PASSWORD offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_INVALID_PASSWORD;

/// @brief Field UNITYTLS_INVALID_STATE offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_INVALID_STATE;

/// @brief Field UNITYTLS_BUFFER_OVERFLOW offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_BUFFER_OVERFLOW;

/// @brief Field UNITYTLS_OUT_OF_MEMORY offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_OUT_OF_MEMORY;

/// @brief Field UNITYTLS_INTERNAL_ERROR offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_INTERNAL_ERROR;

/// @brief Field UNITYTLS_NOT_SUPPORTED offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_NOT_SUPPORTED;

/// @brief Field UNITYTLS_ENTROPY_SOURCE_FAILED offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_ENTROPY_SOURCE_FAILED;

/// @brief Field UNITYTLS_STREAM_CLOSED offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_STREAM_CLOSED;

/// @brief Field UNITYTLS_USER_CUSTOM_ERROR_START offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_USER_CUSTOM_ERROR_START;

/// @brief Field UNITYTLS_USER_WOULD_BLOCK offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_USER_WOULD_BLOCK;

/// @brief Field UNITYTLS_USER_READ_FAILED offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_USER_READ_FAILED;

/// @brief Field UNITYTLS_USER_WRITE_FAILED offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_USER_WRITE_FAILED;

/// @brief Field UNITYTLS_USER_UNKNOWN_ERROR offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_USER_UNKNOWN_ERROR;

/// @brief Field UNITYTLS_USER_CUSTOM_ERROR_END offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code const UNITYTLS_USER_CUSTOM_ERROR_END;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_errorstate
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7610))
// CS Name: Mono.Unity.UnityTls::unitytls_errorstate
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_errorstate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "magic", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "code", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code", modifiers: "", def_value: None }, CppParam { name: "reserved", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_errorstate(uint32_t magic, Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code code, uint64_t reserved) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_errorstate(Mono__Unity__UnityTls__unitytls_errorstate const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_errorstate(Mono__Unity__UnityTls__unitytls_errorstate&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_errorstate& operator=(Mono__Unity__UnityTls__unitytls_errorstate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_errorstate& operator=(Mono__Unity__UnityTls__unitytls_errorstate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_errorstate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_magic, put=__set_magic))  magic;

constexpr void __set_magic(uint32_t value) ;

constexpr uint32_t __get_magic() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code __declspec(property(get=__get_code, put=__set_code))  code;

constexpr void __set_code(Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code __get_code() const;

 uint64_t __declspec(property(get=__get_reserved, put=__set_reserved))  reserved;

constexpr void __set_reserved(uint64_t value) ;

constexpr uint64_t __get_reserved() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_key
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7611))
// CS Name: Mono.Unity.UnityTls::unitytls_key
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_key : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr Mono__Unity__UnityTls__unitytls_key(Mono__Unity__UnityTls__unitytls_key const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_key(Mono__Unity__UnityTls__unitytls_key&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_key& operator=(Mono__Unity__UnityTls__unitytls_key const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_key& operator=(Mono__Unity__UnityTls__unitytls_key&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_key(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_key_ref
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7612))
// CS Name: Mono.Unity.UnityTls::unitytls_key_ref
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_key_ref : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_key_ref(uint64_t handle) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_key_ref(Mono__Unity__UnityTls__unitytls_key_ref const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_key_ref(Mono__Unity__UnityTls__unitytls_key_ref&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_key_ref& operator=(Mono__Unity__UnityTls__unitytls_key_ref const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_key_ref& operator=(Mono__Unity__UnityTls__unitytls_key_ref&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_key_ref(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(uint64_t value) ;

constexpr uint64_t __get_handle() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_x509_ref
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7613))
// CS Name: Mono.Unity.UnityTls::unitytls_x509_ref
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_x509_ref : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_x509_ref(uint64_t handle) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_x509_ref(Mono__Unity__UnityTls__unitytls_x509_ref const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509_ref(Mono__Unity__UnityTls__unitytls_x509_ref&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509_ref& operator=(Mono__Unity__UnityTls__unitytls_x509_ref const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_x509_ref& operator=(Mono__Unity__UnityTls__unitytls_x509_ref&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_x509_ref(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(uint64_t value) ;

constexpr uint64_t __get_handle() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_x509list
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7614))
// CS Name: Mono.Unity.UnityTls::unitytls_x509list
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_x509list : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr Mono__Unity__UnityTls__unitytls_x509list(Mono__Unity__UnityTls__unitytls_x509list const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509list(Mono__Unity__UnityTls__unitytls_x509list&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509list& operator=(Mono__Unity__UnityTls__unitytls_x509list const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_x509list& operator=(Mono__Unity__UnityTls__unitytls_x509list&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_x509list(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_x509list_ref
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7615))
// CS Name: Mono.Unity.UnityTls::unitytls_x509list_ref
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_x509list_ref : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_x509list_ref(uint64_t handle) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_x509list_ref(Mono__Unity__UnityTls__unitytls_x509list_ref const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509list_ref(Mono__Unity__UnityTls__unitytls_x509list_ref&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509list_ref& operator=(Mono__Unity__UnityTls__unitytls_x509list_ref const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_x509list_ref& operator=(Mono__Unity__UnityTls__unitytls_x509list_ref&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_x509list_ref(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(uint64_t value) ;

constexpr uint64_t __get_handle() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_x509verify_result
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7616))
// CS Name: Mono.Unity.UnityTls::unitytls_x509verify_result
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_x509verify_result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_x509verify_result(uint32_t value__) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_x509verify_result(Mono__Unity__UnityTls__unitytls_x509verify_result const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509verify_result(Mono__Unity__UnityTls__unitytls_x509verify_result&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509verify_result& operator=(Mono__Unity__UnityTls__unitytls_x509verify_result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_x509verify_result& operator=(Mono__Unity__UnityTls__unitytls_x509verify_result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_x509verify_result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Mono__Unity__UnityTls__unitytls_x509verify_result_Unwrapped : uint32_t {
__UNITYTLS_X509VERIFY_SUCCESS = 0u,
__UNITYTLS_X509VERIFY_NOT_DONE = 2147483648u,
__UNITYTLS_X509VERIFY_FATAL_ERROR = 4294967295u,
__UNITYTLS_X509VERIFY_FLAG_EXPIRED = 1u,
__UNITYTLS_X509VERIFY_FLAG_REVOKED = 2u,
__UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = 4u,
__UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = 8u,
__UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = 65536u,
__UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = 131072u,
__UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = 262144u,
__UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = 524288u,
__UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = 1048576u,
__UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = 2097152u,
__UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = 4194304u,
__UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = 8388608u,
__UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = 134217728u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mono__Unity__UnityTls__unitytls_x509verify_result_Unwrapped () const noexcept {
return std::bit_cast<__Mono__Unity__UnityTls__unitytls_x509verify_result_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field UNITYTLS_X509VERIFY_SUCCESS offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_SUCCESS;

/// @brief Field UNITYTLS_X509VERIFY_NOT_DONE offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_NOT_DONE;

/// @brief Field UNITYTLS_X509VERIFY_FATAL_ERROR offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FATAL_ERROR;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_EXPIRED offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_EXPIRED;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_REVOKED offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_REVOKED;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR1;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR2;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR3;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR4;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR5;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR6;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR7;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_USER_ERROR8;

/// @brief Field UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result const UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_x509verify_callback
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7617))
// CS Name: Mono.Unity.UnityTls::unitytls_x509verify_callback
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_x509verify_callback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_x509verify_callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_x509verify_callback", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_x509verify_callback(Mono__Unity__UnityTls__unitytls_x509verify_callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_x509verify_callback", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_x509verify_callback(Mono__Unity__UnityTls__unitytls_x509verify_callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_x509verify_callback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_x509verify_callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_x509verify_callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_x509verify_callback& operator=(Mono__Unity__UnityTls__unitytls_x509verify_callback&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_x509verify_callback& operator=(Mono__Unity__UnityTls__unitytls_x509verify_callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_x509verify_callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26862f0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26863c8 size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Invoke(void* userData, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref cert, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result result, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_tlsctx
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7618))
// CS Name: Mono.Unity.UnityTls::unitytls_tlsctx
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_tlsctx : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx(Mono__Unity__UnityTls__unitytls_tlsctx const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx(Mono__Unity__UnityTls__unitytls_tlsctx&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx& operator=(Mono__Unity__UnityTls__unitytls_tlsctx const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx& operator=(Mono__Unity__UnityTls__unitytls_tlsctx&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_tlsctx(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_x509name
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7619))
// CS Name: Mono.Unity.UnityTls::unitytls_x509name
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_x509name : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr Mono__Unity__UnityTls__unitytls_x509name(Mono__Unity__UnityTls__unitytls_x509name const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509name(Mono__Unity__UnityTls__unitytls_x509name&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_x509name& operator=(Mono__Unity__UnityTls__unitytls_x509name const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_x509name& operator=(Mono__Unity__UnityTls__unitytls_x509name&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_x509name(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_ciphersuite
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7620))
// CS Name: Mono.Unity.UnityTls::unitytls_ciphersuite
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_ciphersuite : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_ciphersuite(uint32_t value__) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_ciphersuite(Mono__Unity__UnityTls__unitytls_ciphersuite const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_ciphersuite(Mono__Unity__UnityTls__unitytls_ciphersuite&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_ciphersuite& operator=(Mono__Unity__UnityTls__unitytls_ciphersuite const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_ciphersuite& operator=(Mono__Unity__UnityTls__unitytls_ciphersuite&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_ciphersuite(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Mono__Unity__UnityTls__unitytls_ciphersuite_Unwrapped : uint32_t {
__UNITYTLS_CIPHERSUITE_INVALID = 16777215u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mono__Unity__UnityTls__unitytls_ciphersuite_Unwrapped () const noexcept {
return std::bit_cast<__Mono__Unity__UnityTls__unitytls_ciphersuite_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field UNITYTLS_CIPHERSUITE_INVALID offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite const UNITYTLS_CIPHERSUITE_INVALID;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_protocol
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7621))
// CS Name: Mono.Unity.UnityTls::unitytls_protocol
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_protocol : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_protocol(uint32_t value__) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_protocol(Mono__Unity__UnityTls__unitytls_protocol const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_protocol(Mono__Unity__UnityTls__unitytls_protocol&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_protocol& operator=(Mono__Unity__UnityTls__unitytls_protocol const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_protocol& operator=(Mono__Unity__UnityTls__unitytls_protocol&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_protocol(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Mono__Unity__UnityTls__unitytls_protocol_Unwrapped : uint32_t {
__UNITYTLS_PROTOCOL_TLS_1_0 = 0u,
__UNITYTLS_PROTOCOL_TLS_1_1 = 1u,
__UNITYTLS_PROTOCOL_TLS_1_2 = 2u,
__UNITYTLS_PROTOCOL_INVALID = 3u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mono__Unity__UnityTls__unitytls_protocol_Unwrapped () const noexcept {
return std::bit_cast<__Mono__Unity__UnityTls__unitytls_protocol_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field UNITYTLS_PROTOCOL_TLS_1_0 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_0;

/// @brief Field UNITYTLS_PROTOCOL_TLS_1_1 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_1;

/// @brief Field UNITYTLS_PROTOCOL_TLS_1_2 offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_2;

/// @brief Field UNITYTLS_PROTOCOL_INVALID offset 0
static Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol const UNITYTLS_PROTOCOL_INVALID;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_tlsctx_protocolrange
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7622))
// CS Name: Mono.Unity.UnityTls::unitytls_tlsctx_protocolrange
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "min", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol", modifiers: "", def_value: None }, CppParam { name: "max", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol min, Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol max) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange(Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange(Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol __get_min() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol __get_max() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_tlsctx_write_callback
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7623))
// CS Name: Mono.Unity.UnityTls::unitytls_tlsctx_write_callback
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_tlsctx_write_callback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_tlsctx_write_callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_write_callback", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_write_callback(Mono__Unity__UnityTls__unitytls_tlsctx_write_callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_write_callback", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_write_callback(Mono__Unity__UnityTls__unitytls_tlsctx_write_callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_tlsctx_write_callback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_write_callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_write_callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_write_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_write_callback&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_write_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_write_callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_tlsctx_write_callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26863dc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26864b4 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(void* userData, void* data, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_tlsctx_read_callback
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7624))
// CS Name: Mono.Unity.UnityTls::unitytls_tlsctx_read_callback
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_tlsctx_read_callback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_tlsctx_read_callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_read_callback", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_read_callback(Mono__Unity__UnityTls__unitytls_tlsctx_read_callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_read_callback", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_read_callback(Mono__Unity__UnityTls__unitytls_tlsctx_read_callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_tlsctx_read_callback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_read_callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_read_callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_read_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_read_callback&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_read_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_read_callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_tlsctx_read_callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26864c8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26865a0 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(void* userData, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_tlsctx_trace_callback
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7625))
// CS Name: Mono.Unity.UnityTls::unitytls_tlsctx_trace_callback
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback(Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback(Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26865b4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268668c size 0x14 virtual true final false
 void Invoke(void* userData, void* ctx, void* traceMessage, ::cordl_internals::intptr_t traceMessageLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_tlsctx_certificate_callback
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7626))
// CS Name: Mono.Unity.UnityTls::unitytls_tlsctx_certificate_callback
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback(Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback(Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26866a0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686778 size 0x1c virtual true final false
 void Invoke(void* userData, void* ctx, void* cn, ::cordl_internals::intptr_t cnLen, void* caList, ::cordl_internals::intptr_t caListLen, void* chain, void* key, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_tlsctx_x509verify_callback
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7627))
// CS Name: Mono.Unity.UnityTls::unitytls_tlsctx_x509verify_callback
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback(Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback(Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686794 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268686c size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Invoke(void* userData, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_tlsctx_callbacks
namespace Mono::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7628))
// CS Name: Mono.Unity.UnityTls::unitytls_tlsctx_callbacks
struct CORDL_TYPE Mono__Unity__UnityTls__unitytls_tlsctx_callbacks : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "read", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback", modifiers: "", def_value: None }, CppParam { name: "write", ty: "Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback", modifiers: "", def_value: None }, CppParam { name: "data", ty: "void*", modifiers: "", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_tlsctx_callbacks(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback read, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback write, void* data) noexcept;


                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx_callbacks(Mono__Unity__UnityTls__unitytls_tlsctx_callbacks const&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx_callbacks(Mono__Unity__UnityTls__unitytls_tlsctx_callbacks&&) = default;
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx_callbacks& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_callbacks const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Unity__UnityTls__unitytls_tlsctx_callbacks& operator=(Mono__Unity__UnityTls__unitytls_tlsctx_callbacks&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_tlsctx_callbacks(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback __declspec(property(get=__get_read, put=__set_read))  read;

constexpr void __set_read(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback __get_read() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback __declspec(property(get=__get_write, put=__set_write))  write;

constexpr void __set_write(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback __get_write() const;

 void* __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(void* value) ;

constexpr void* __get_data() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: ::unitytls_errorstate_create_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7629))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686888 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686944 size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_errorstate_raise_error_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7630))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_errorstate_raise_error_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686958 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686a30 size 0x14 virtual true final false
 void Invoke(void* errorState, Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code errorCode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_key_get_ref_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7631))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_key_get_ref_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686a44 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686b1c size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref Invoke(void* key, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_key_parse_der_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7632))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_key_parse_der_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686b30 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686c08 size 0x14 virtual true final false
 void* Invoke(void* buffer, ::cordl_internals::intptr_t bufferLen, void* password, ::cordl_internals::intptr_t passwordLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_key_parse_pem_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7633))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686c1c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686cf4 size 0x14 virtual true final false
 void* Invoke(void* buffer, ::cordl_internals::intptr_t bufferLen, void* password, ::cordl_internals::intptr_t passwordLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_key_free_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7634))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_key_free_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686d08 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686ddc size 0x14 virtual true final false
 void Invoke(void* key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509_export_der_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7635))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509_export_der_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686df0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686eb4 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref cert, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509list_get_ref_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7636))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509list_get_ref_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686ec8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2686fa0 size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref Invoke(void* list, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509list_get_x509_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7637))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509list_get_x509_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2686fb4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687078 size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref list, ::cordl_internals::intptr_t index, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509list_create_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7638))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509list_create_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268708c size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687160 size 0x14 virtual true final false
 void* Invoke(void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509list_append_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7639))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509list_append_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687174 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268724c size 0x14 virtual true final false
 void Invoke(void* list, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref cert, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509list_append_der_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7640))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509list_append_der_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687260 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687338 size 0x14 virtual true final false
 void Invoke(void* list, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509list_free_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7641))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509list_free_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268734c size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687420 size 0x14 virtual true final false
 void Invoke(void* list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509verify_default_ca_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7642))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509verify_default_ca_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687434 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26874f8 size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, void* cn, ::cordl_internals::intptr_t cnLen, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback cb, void* userData, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_x509verify_explicit_ca_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7643))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_x509verify_explicit_ca_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268750c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26875d0 size 0x18 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref trustCA, void* cn, ::cordl_internals::intptr_t cnLen, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback cb, void* userData, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_create_server_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7644))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26875e8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26876ac size 0x3c virtual true final false
 void* Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange supportedProtocols, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_create_client_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7645))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_client_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26876e8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26877ac size 0x3c virtual true final false
 void* Invoke(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange supportedProtocols, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks callbacks, void* cn, ::cordl_internals::intptr_t cnLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_server_require_client_authentication_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7646))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_server_require_client_authentication_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26877e8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26878c0 size 0x14 virtual true final false
 void Invoke(void* ctx, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref clientAuthCAList, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_set_certificate_callback_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7647))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_certificate_callback_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26878d4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26879ac size 0x14 virtual true final false
 void Invoke(void* ctx, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback cb, void* userData, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_set_trace_callback_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7648))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_trace_callback_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26879c0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687a98 size 0x14 virtual true final false
 void Invoke(void* ctx, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback cb, void* userData, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_set_x509verify_callback_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7649))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687aac size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687b84 size 0x14 virtual true final false
 void Invoke(void* ctx, Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback cb, void* userData, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_set_supported_ciphersuites_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7650))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_supported_ciphersuites_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687b98 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687c70 size 0x14 virtual true final false
 void Invoke(void* ctx, void* supportedCiphersuites, ::cordl_internals::intptr_t supportedCiphersuitesLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_get_ciphersuite_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7651))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_ciphersuite_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687c84 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687d5c size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite Invoke(void* ctx, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_get_protocol_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7652))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_get_protocol_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687d70 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687e48 size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol Invoke(void* ctx, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_process_handshake_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7653))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_process_handshake_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687e5c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2687f34 size 0x14 virtual true final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Invoke(void* ctx, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_read_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7654))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2687f48 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2688020 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(void* ctx, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_write_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7655))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_write_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688034 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x268810c size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(void* ctx, void* data, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_notify_close_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7656))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_notify_close_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2688120 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26881f8 size 0x14 virtual true final false
 void Invoke(void* ctx, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_tlsctx_free_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7657))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_tlsctx_free_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x268820c size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26882e0 size 0x14 virtual true final false
 void Invoke(void* ctx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_random_generate_bytes_t
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7658))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t& operator=(Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26882f4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26883cc size 0x14 virtual true final false
 void Invoke(void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::unitytls_interface_struct
namespace Mono::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7659))
// CS Name: Mono.Unity.UnityTls::unitytls_interface_struct
class CORDL_TYPE Mono__Unity__UnityTls__unitytls_interface_struct : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using unitytls_random_generate_bytes_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t;

using unitytls_tlsctx_free_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t;

using unitytls_tlsctx_notify_close_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t;

using unitytls_tlsctx_write_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t;

using unitytls_tlsctx_read_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t;

using unitytls_tlsctx_process_handshake_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t;

using unitytls_tlsctx_get_protocol_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t;

using unitytls_tlsctx_get_ciphersuite_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t;

using unitytls_tlsctx_set_supported_ciphersuites_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t;

using unitytls_tlsctx_set_x509verify_callback_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t;

using unitytls_tlsctx_set_trace_callback_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t;

using unitytls_tlsctx_set_certificate_callback_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t;

using unitytls_tlsctx_server_require_client_authentication_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t;

using unitytls_tlsctx_create_client_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t;

using unitytls_tlsctx_create_server_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t;

using unitytls_x509verify_explicit_ca_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t;

using unitytls_x509verify_default_ca_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t;

using unitytls_x509list_free_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t;

using unitytls_x509list_append_der_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t;

using unitytls_x509list_append_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t;

using unitytls_x509list_create_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t;

using unitytls_x509list_get_x509_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t;

using unitytls_x509list_get_ref_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t;

using unitytls_x509_export_der_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t;

using unitytls_key_free_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t;

using unitytls_key_parse_pem_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t;

using unitytls_key_parse_der_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t;

using unitytls_key_get_ref_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t;

using unitytls_errorstate_raise_error_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t;

using unitytls_errorstate_create_t = GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~Mono__Unity__UnityTls__unitytls_interface_struct() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct", modifiers: " const&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct(Mono__Unity__UnityTls__unitytls_interface_struct const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Unity__UnityTls__unitytls_interface_struct", modifiers: "&&", def_value: None }]
constexpr Mono__Unity__UnityTls__unitytls_interface_struct(Mono__Unity__UnityTls__unitytls_interface_struct&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Unity__UnityTls__unitytls_interface_struct(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Unity__UnityTls__unitytls_interface_struct& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Unity__UnityTls__unitytls_interface_struct& operator=(Mono__Unity__UnityTls__unitytls_interface_struct&& o) noexcept = default;
  constexpr Mono__Unity__UnityTls__unitytls_interface_struct& operator=(Mono__Unity__UnityTls__unitytls_interface_struct const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_UNITYTLS_INVALID_HANDLE, put=__set_UNITYTLS_INVALID_HANDLE))  UNITYTLS_INVALID_HANDLE;

constexpr void __set_UNITYTLS_INVALID_HANDLE(uint64_t value) ;

constexpr uint64_t __get_UNITYTLS_INVALID_HANDLE() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange __declspec(property(get=__get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT, put=__set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT))  UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;

constexpr void __set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange __get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t __declspec(property(get=__get_unitytls_errorstate_create, put=__set_unitytls_errorstate_create))  unitytls_errorstate_create;

constexpr void __set_unitytls_errorstate_create(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t __get_unitytls_errorstate_create() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t __declspec(property(get=__get_unitytls_errorstate_raise_error, put=__set_unitytls_errorstate_raise_error))  unitytls_errorstate_raise_error;

constexpr void __set_unitytls_errorstate_raise_error(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t __get_unitytls_errorstate_raise_error() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t __declspec(property(get=__get_unitytls_key_get_ref, put=__set_unitytls_key_get_ref))  unitytls_key_get_ref;

constexpr void __set_unitytls_key_get_ref(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t __get_unitytls_key_get_ref() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t __declspec(property(get=__get_unitytls_key_parse_der, put=__set_unitytls_key_parse_der))  unitytls_key_parse_der;

constexpr void __set_unitytls_key_parse_der(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t __get_unitytls_key_parse_der() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t __declspec(property(get=__get_unitytls_key_parse_pem, put=__set_unitytls_key_parse_pem))  unitytls_key_parse_pem;

constexpr void __set_unitytls_key_parse_pem(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t __get_unitytls_key_parse_pem() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t __declspec(property(get=__get_unitytls_key_free, put=__set_unitytls_key_free))  unitytls_key_free;

constexpr void __set_unitytls_key_free(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t __get_unitytls_key_free() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t __declspec(property(get=__get_unitytls_x509_export_der, put=__set_unitytls_x509_export_der))  unitytls_x509_export_der;

constexpr void __set_unitytls_x509_export_der(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t __get_unitytls_x509_export_der() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t __declspec(property(get=__get_unitytls_x509list_get_ref, put=__set_unitytls_x509list_get_ref))  unitytls_x509list_get_ref;

constexpr void __set_unitytls_x509list_get_ref(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t __get_unitytls_x509list_get_ref() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t __declspec(property(get=__get_unitytls_x509list_get_x509, put=__set_unitytls_x509list_get_x509))  unitytls_x509list_get_x509;

constexpr void __set_unitytls_x509list_get_x509(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t __get_unitytls_x509list_get_x509() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t __declspec(property(get=__get_unitytls_x509list_create, put=__set_unitytls_x509list_create))  unitytls_x509list_create;

constexpr void __set_unitytls_x509list_create(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t __get_unitytls_x509list_create() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t __declspec(property(get=__get_unitytls_x509list_append, put=__set_unitytls_x509list_append))  unitytls_x509list_append;

constexpr void __set_unitytls_x509list_append(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t __get_unitytls_x509list_append() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t __declspec(property(get=__get_unitytls_x509list_append_der, put=__set_unitytls_x509list_append_der))  unitytls_x509list_append_der;

constexpr void __set_unitytls_x509list_append_der(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t __get_unitytls_x509list_append_der() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t __declspec(property(get=__get_unitytls_x509list_append_pem, put=__set_unitytls_x509list_append_pem))  unitytls_x509list_append_pem;

constexpr void __set_unitytls_x509list_append_pem(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t __get_unitytls_x509list_append_pem() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t __declspec(property(get=__get_unitytls_x509list_free, put=__set_unitytls_x509list_free))  unitytls_x509list_free;

constexpr void __set_unitytls_x509list_free(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t __get_unitytls_x509list_free() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t __declspec(property(get=__get_unitytls_x509verify_default_ca, put=__set_unitytls_x509verify_default_ca))  unitytls_x509verify_default_ca;

constexpr void __set_unitytls_x509verify_default_ca(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t __get_unitytls_x509verify_default_ca() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t __declspec(property(get=__get_unitytls_x509verify_explicit_ca, put=__set_unitytls_x509verify_explicit_ca))  unitytls_x509verify_explicit_ca;

constexpr void __set_unitytls_x509verify_explicit_ca(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t __get_unitytls_x509verify_explicit_ca() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t __declspec(property(get=__get_unitytls_tlsctx_create_server, put=__set_unitytls_tlsctx_create_server))  unitytls_tlsctx_create_server;

constexpr void __set_unitytls_tlsctx_create_server(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t __get_unitytls_tlsctx_create_server() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t __declspec(property(get=__get_unitytls_tlsctx_create_client, put=__set_unitytls_tlsctx_create_client))  unitytls_tlsctx_create_client;

constexpr void __set_unitytls_tlsctx_create_client(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t __get_unitytls_tlsctx_create_client() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t __declspec(property(get=__get_unitytls_tlsctx_server_require_client_authentication, put=__set_unitytls_tlsctx_server_require_client_authentication))  unitytls_tlsctx_server_require_client_authentication;

constexpr void __set_unitytls_tlsctx_server_require_client_authentication(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t __get_unitytls_tlsctx_server_require_client_authentication() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t __declspec(property(get=__get_unitytls_tlsctx_set_certificate_callback, put=__set_unitytls_tlsctx_set_certificate_callback))  unitytls_tlsctx_set_certificate_callback;

constexpr void __set_unitytls_tlsctx_set_certificate_callback(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t __get_unitytls_tlsctx_set_certificate_callback() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t __declspec(property(get=__get_unitytls_tlsctx_set_trace_callback, put=__set_unitytls_tlsctx_set_trace_callback))  unitytls_tlsctx_set_trace_callback;

constexpr void __set_unitytls_tlsctx_set_trace_callback(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t __get_unitytls_tlsctx_set_trace_callback() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t __declspec(property(get=__get_unitytls_tlsctx_set_x509verify_callback, put=__set_unitytls_tlsctx_set_x509verify_callback))  unitytls_tlsctx_set_x509verify_callback;

constexpr void __set_unitytls_tlsctx_set_x509verify_callback(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t __get_unitytls_tlsctx_set_x509verify_callback() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t __declspec(property(get=__get_unitytls_tlsctx_set_supported_ciphersuites, put=__set_unitytls_tlsctx_set_supported_ciphersuites))  unitytls_tlsctx_set_supported_ciphersuites;

constexpr void __set_unitytls_tlsctx_set_supported_ciphersuites(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t __get_unitytls_tlsctx_set_supported_ciphersuites() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t __declspec(property(get=__get_unitytls_tlsctx_get_ciphersuite, put=__set_unitytls_tlsctx_get_ciphersuite))  unitytls_tlsctx_get_ciphersuite;

constexpr void __set_unitytls_tlsctx_get_ciphersuite(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t __get_unitytls_tlsctx_get_ciphersuite() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t __declspec(property(get=__get_unitytls_tlsctx_get_protocol, put=__set_unitytls_tlsctx_get_protocol))  unitytls_tlsctx_get_protocol;

constexpr void __set_unitytls_tlsctx_get_protocol(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t __get_unitytls_tlsctx_get_protocol() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t __declspec(property(get=__get_unitytls_tlsctx_process_handshake, put=__set_unitytls_tlsctx_process_handshake))  unitytls_tlsctx_process_handshake;

constexpr void __set_unitytls_tlsctx_process_handshake(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t __get_unitytls_tlsctx_process_handshake() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t __declspec(property(get=__get_unitytls_tlsctx_read, put=__set_unitytls_tlsctx_read))  unitytls_tlsctx_read;

constexpr void __set_unitytls_tlsctx_read(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t __get_unitytls_tlsctx_read() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t __declspec(property(get=__get_unitytls_tlsctx_write, put=__set_unitytls_tlsctx_write))  unitytls_tlsctx_write;

constexpr void __set_unitytls_tlsctx_write(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t __get_unitytls_tlsctx_write() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t __declspec(property(get=__get_unitytls_tlsctx_notify_close, put=__set_unitytls_tlsctx_notify_close))  unitytls_tlsctx_notify_close;

constexpr void __set_unitytls_tlsctx_notify_close(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t __get_unitytls_tlsctx_notify_close() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t __declspec(property(get=__get_unitytls_tlsctx_free, put=__set_unitytls_tlsctx_free))  unitytls_tlsctx_free;

constexpr void __set_unitytls_tlsctx_free(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t __get_unitytls_tlsctx_free() const;

 GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t __declspec(property(get=__get_unitytls_random_generate_bytes, put=__set_unitytls_random_generate_bytes))  unitytls_random_generate_bytes;

constexpr void __set_unitytls_random_generate_bytes(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t value) ;

constexpr GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t __get_unitytls_random_generate_bytes() const;


// Methods

// Ctor Parameters []
explicit Mono__Unity__UnityTls__unitytls_interface_struct() ;

/// @brief Method .ctor addr 0x2686880 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
// Type: Mono.Unity::UnityTls
namespace Mono::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7660))
// CS Name: Mono.Unity.UnityTls
class CORDL_TYPE UnityTls : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using unitytls_interface_struct = Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct;

using unitytls_tlsctx_callbacks = Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks;

using unitytls_tlsctx_x509verify_callback = Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback;

using unitytls_tlsctx_certificate_callback = Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback;

using unitytls_tlsctx_trace_callback = Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback;

using unitytls_tlsctx_read_callback = Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback;

using unitytls_tlsctx_write_callback = Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback;

using unitytls_tlsctx_protocolrange = Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange;

using unitytls_protocol = Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol;

using unitytls_ciphersuite = Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite;

using unitytls_x509name = Mono::Unity::Mono__Unity__UnityTls__unitytls_x509name;

using unitytls_tlsctx = Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx;

using unitytls_x509verify_callback = Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback;

using unitytls_x509verify_result = Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result;

using unitytls_x509list_ref = Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref;

using unitytls_x509list = Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list;

using unitytls_x509_ref = Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref;

using unitytls_key_ref = Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref;

using unitytls_key = Mono::Unity::Mono__Unity__UnityTls__unitytls_key;

using unitytls_errorstate = Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate;

using unitytls_error_code = Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityTls() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls", modifiers: " const&", def_value: None }]
constexpr UnityTls(UnityTls const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTls", modifiers: "&&", def_value: None }]
constexpr UnityTls(UnityTls&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityTls(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityTls& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityTls& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityTls& operator=(UnityTls&& o) noexcept = default;
  constexpr UnityTls& operator=(UnityTls const& o) noexcept = default;
                


// Fields

static Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct __declspec(property(get=__get_marshalledInterface, put=__set_marshalledInterface))  marshalledInterface;

static void __set_marshalledInterface(Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct value) ;

static Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct __get_marshalledInterface() ;


// Properties

static bool __declspec(property(get=get_IsSupported))  IsSupported;

static Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct __declspec(property(get=get_NativeInterface))  NativeInterface;


// Methods

/// @brief Method GetUnityTlsInterface addr 0x26862d4 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetUnityTlsInterface() ;

/// @brief Method get_IsSupported addr 0x26862d8 size 0x18 virtual false final false
static bool get_IsSupported() ;

/// @brief Method get_NativeInterface addr 0x2686024 size 0xe4 virtual false final false
static Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct get_NativeInterface() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_ciphersuite, "Mono.Unity", "UnityTls/unitytls_ciphersuite");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_error_code, "Mono.Unity", "UnityTls/unitytls_error_code");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol, "Mono.Unity", "UnityTls/unitytls_protocol");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, "Mono.Unity", "UnityTls/unitytls_x509verify_result");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_free_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_free_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_append_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_create_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_free_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t");
NEED_NO_BOX(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mono__Unity__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t");
NEED_NO_BOX(Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_interface_struct, "Mono.Unity", "UnityTls/unitytls_interface_struct");
NEED_NO_BOX(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback, "Mono.Unity", "UnityTls/unitytls_tlsctx_certificate_callback");
NEED_NO_BOX(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback, "Mono.Unity", "UnityTls/unitytls_tlsctx_read_callback");
NEED_NO_BOX(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_trace_callback, "Mono.Unity", "UnityTls/unitytls_tlsctx_trace_callback");
NEED_NO_BOX(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback, "Mono.Unity", "UnityTls/unitytls_tlsctx_write_callback");
NEED_NO_BOX(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback, "Mono.Unity", "UnityTls/unitytls_tlsctx_x509verify_callback");
NEED_NO_BOX(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_callback, "Mono.Unity", "UnityTls/unitytls_x509verify_callback");
NEED_NO_BOX(Mono::Unity::UnityTls);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls, "Mono.Unity", "UnityTls");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_errorstate, "Mono.Unity", "UnityTls/unitytls_errorstate");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_key, "Mono.Unity", "UnityTls/unitytls_key");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_key_ref, "Mono.Unity", "UnityTls/unitytls_key_ref");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx, "Mono.Unity", "UnityTls/unitytls_tlsctx");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_callbacks, "Mono.Unity", "UnityTls/unitytls_tlsctx_callbacks");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_protocolrange, "Mono.Unity", "UnityTls/unitytls_tlsctx_protocolrange");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref, "Mono.Unity", "UnityTls/unitytls_x509_ref");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list, "Mono.Unity", "UnityTls/unitytls_x509list");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, "Mono.Unity", "UnityTls/unitytls_x509list_ref");
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509name, "Mono.Unity", "UnityTls/unitytls_x509name");
