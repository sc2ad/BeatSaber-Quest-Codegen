#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Cryptography/zzzz__MD4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD4Managed;
}
// Type: Mono.Security.Cryptography::MD4Managed
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2279))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2280))
// CS Name: Mono.Security.Cryptography.MD4Managed
class CORDL_TYPE MD4Managed : public Mono::Security::Cryptography::MD4 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MD4Managed() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD4Managed", modifiers: " const&", def_value: None }]
constexpr MD4Managed(MD4Managed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD4Managed", modifiers: "&&", def_value: None }]
constexpr MD4Managed(MD4Managed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD4Managed(void* ptr) noexcept : Mono::Security::Cryptography::MD4(ptr) {
}


  constexpr MD4Managed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD4Managed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD4Managed& operator=(MD4Managed&& o) noexcept = default;
  constexpr MD4Managed& operator=(MD4Managed const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_state() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_count() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_x() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_digest() const;


// Methods

// Ctor Parameters []
explicit MD4Managed() ;

/// @brief Method .ctor addr 0x22b394c size 0xd0 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x22b3a1c size 0xb4 virtual true final false
 void Initialize() ;

/// @brief Method HashCore addr 0x22b3ad0 size 0x124 virtual true final false
 void HashCore(::ArrayW<uint8_t> array, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x22b426c size 0xfc virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method Padding addr 0x22b4460 size 0x78 virtual false final false
 ::ArrayW<uint8_t> Padding(int32_t nLength) ;

/// @brief Method F addr 0x22b44d8 size 0x10 virtual false final false
 uint32_t F(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method G addr 0x22b44e8 size 0x14 virtual false final false
 uint32_t G(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method H addr 0x22b44fc size 0xc virtual false final false
 uint32_t H(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method ROL addr 0x22b4508 size 0x10 virtual false final false
 uint32_t ROL(uint32_t x, uint8_t n) ;

/// @brief Method FF addr 0x22b4518 size 0x2c virtual false final false
 void FF(ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) ;

/// @brief Method GG addr 0x22b4544 size 0x3c virtual false final false
 void GG(ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) ;

/// @brief Method HH addr 0x22b4580 size 0x34 virtual false final false
 void HH(ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) ;

/// @brief Method Encode addr 0x22b4368 size 0xf8 virtual false final false
 void Encode(::ArrayW<uint8_t> output, ::ArrayW<uint32_t> input) ;

/// @brief Method Decode addr 0x22b45b4 size 0xb4 virtual false final false
 void Decode(::ArrayW<uint32_t> output, ::ArrayW<uint8_t> input, int32_t index) ;

/// @brief Method MD4Transform addr 0x22b3bf4 size 0x678 virtual false final false
 void MD4Transform(::ArrayW<uint32_t> state, ::ArrayW<uint8_t> block, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::MD4Managed);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::MD4Managed, "Mono.Security.Cryptography", "MD4Managed");
