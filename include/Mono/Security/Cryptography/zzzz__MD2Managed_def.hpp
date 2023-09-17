#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Cryptography/zzzz__MD2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD2Managed;
}
// Type: Mono.Security.Cryptography::MD2Managed
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2277))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2278))
// CS Name: Mono.Security.Cryptography.MD2Managed
class CORDL_TYPE MD2Managed : public ::Mono::Security::Cryptography::MD2 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MD2Managed() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD2Managed", modifiers: " const&", def_value: None }]
constexpr MD2Managed(MD2Managed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD2Managed", modifiers: "&&", def_value: None }]
constexpr MD2Managed(MD2Managed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD2Managed(void* ptr) noexcept : ::Mono::Security::Cryptography::MD2(ptr) {
}


  constexpr MD2Managed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD2Managed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD2Managed& operator=(MD2Managed&& o) noexcept = default;
  constexpr MD2Managed& operator=(MD2Managed const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_state() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_checksum, put=__set_checksum))  checksum;

constexpr void __set_checksum(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_checksum() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_x() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_PI_SUBST, put=__set_PI_SUBST))  PI_SUBST;

static void __set_PI_SUBST(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_PI_SUBST() ;


// Methods

/// @brief Method Padding addr 0x22b3320 size 0x9c virtual false final false
 ::ArrayW<uint8_t> Padding(int32_t nLength) ;

// Ctor Parameters []
explicit MD2Managed() ;

/// @brief Method .ctor addr 0x22b327c size 0xa4 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x22b33bc size 0x60 virtual true final false
 void Initialize() ;

/// @brief Method HashCore addr 0x22b341c size 0xdc virtual true final false
 void HashCore(::ArrayW<uint8_t> array, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x22b3750 size 0xf0 virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method MD2Transform addr 0x22b34f8 size 0x258 virtual false final false
 void MD2Transform(::ArrayW<uint8_t> state, ::ArrayW<uint8_t> checksum, ::ArrayW<uint8_t> block, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Cryptography::MD2Managed);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD2Managed, "Mono.Security.Cryptography", "MD2Managed");
