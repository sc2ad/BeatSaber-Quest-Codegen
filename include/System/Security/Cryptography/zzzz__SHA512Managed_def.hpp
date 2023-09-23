#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SHA512_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class SHA512Managed;
}
// Type: System.Security.Cryptography::SHA512Managed
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2960))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2961))
// CS Name: System.Security.Cryptography.SHA512Managed
class CORDL_TYPE SHA512Managed : public System::Security::Cryptography::SHA512 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SHA512Managed() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA512Managed", modifiers: " const&", def_value: None }]
constexpr SHA512Managed(SHA512Managed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA512Managed", modifiers: "&&", def_value: None }]
constexpr SHA512Managed(SHA512Managed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA512Managed(void* ptr) noexcept : System::Security::Cryptography::SHA512(ptr) {
}


  constexpr SHA512Managed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA512Managed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA512Managed& operator=(SHA512Managed&& o) noexcept = default;
  constexpr SHA512Managed& operator=(SHA512Managed const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 uint64_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(uint64_t value) ;

constexpr uint64_t __get__count() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get__stateSHA512, put=__set__stateSHA512))  _stateSHA512;

constexpr void __set__stateSHA512(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get__stateSHA512() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get__W, put=__set__W))  _W;

constexpr void __set__W(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get__W() const;

static ::ArrayW<uint64_t> __declspec(property(get=__get__K, put=__set__K))  _K;

static void __set__K(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get__K() ;


// Methods

// Ctor Parameters []
explicit SHA512Managed() ;

/// @brief Method .ctor addr 0x22fe03c size 0xc8 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x22fe204 size 0x44 virtual true final false
 void Initialize() ;

/// @brief Method HashCore addr 0x22fe248 size 0x4 virtual true final false
 void HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x22fe418 size 0x4 virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method InitializeState addr 0x22fe104 size 0x100 virtual false final false
 void InitializeState() ;

/// @brief Method _HashData addr 0x22fe24c size 0x1cc virtual false final false
 void _HashData(::ArrayW<uint8_t> partIn, int32_t ibStart, int32_t cbSize) ;

/// @brief Method _EndHash addr 0x22fe41c size 0x1a4 virtual false final false
 ::ArrayW<uint8_t> _EndHash() ;

/// @brief Method SHATransform addr 0x22fe5c0 size 0x564 virtual false final false
static void SHATransform(void* expandedBuffer, void* state, void* block) ;

/// @brief Method RotateRight addr 0x22feca8 size 0x8 virtual false final false
static uint64_t RotateRight(uint64_t x, int32_t n) ;

/// @brief Method Ch addr 0x22fec28 size 0x10 virtual false final false
static uint64_t Ch(uint64_t x, uint64_t y, uint64_t z) ;

/// @brief Method Maj addr 0x22fec94 size 0x14 virtual false final false
static uint64_t Maj(uint64_t x, uint64_t y, uint64_t z) ;

/// @brief Method Sigma_0 addr 0x22fec38 size 0x5c virtual false final false
static uint64_t Sigma_0(uint64_t x) ;

/// @brief Method Sigma_1 addr 0x22febcc size 0x5c virtual false final false
static uint64_t Sigma_1(uint64_t x) ;

/// @brief Method sigma_0 addr 0x22fecb0 size 0x5c virtual false final false
static uint64_t sigma_0(uint64_t x) ;

/// @brief Method sigma_1 addr 0x22fed0c size 0x5c virtual false final false
static uint64_t sigma_1(uint64_t x) ;

/// @brief Method SHA512Expand addr 0x22feb24 size 0xa8 virtual false final false
static void SHA512Expand(void* x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SHA512Managed);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA512Managed, "System.Security.Cryptography", "SHA512Managed");
