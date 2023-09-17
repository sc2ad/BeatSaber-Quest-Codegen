#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__RIPEMD160_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Cryptography {
class RIPEMD160Managed;
}
// Type: System.Security.Cryptography::RIPEMD160Managed
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2949))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2950))
// CS Name: System.Security.Cryptography.RIPEMD160Managed
class CORDL_TYPE RIPEMD160Managed : public ::System::Security::Cryptography::RIPEMD160 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RIPEMD160Managed() = default;

// Ctor Parameters [CppParam { name: "", ty: "RIPEMD160Managed", modifiers: " const&", def_value: None }]
constexpr RIPEMD160Managed(RIPEMD160Managed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RIPEMD160Managed", modifiers: "&&", def_value: None }]
constexpr RIPEMD160Managed(RIPEMD160Managed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RIPEMD160Managed(void* ptr) noexcept : ::System::Security::Cryptography::RIPEMD160(ptr) {
}


  constexpr RIPEMD160Managed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RIPEMD160Managed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RIPEMD160Managed& operator=(RIPEMD160Managed&& o) noexcept = default;
  constexpr RIPEMD160Managed& operator=(RIPEMD160Managed const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 int64_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int64_t value) ;

constexpr int64_t __get__count() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__stateMD160, put=__set__stateMD160))  _stateMD160;

constexpr void __set__stateMD160(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__stateMD160() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__blockDWords, put=__set__blockDWords))  _blockDWords;

constexpr void __set__blockDWords(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__blockDWords() const;


// Methods

// Ctor Parameters []
explicit RIPEMD160Managed() ;

/// @brief Method .ctor addr 0x22f3924 size 0x124 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x22f8994 size 0x44 virtual true final false
 void Initialize() ;

/// @brief Method HashCore addr 0x22f89d8 size 0x4 virtual true final false
 void HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x22f8b58 size 0x4 virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method InitializeState addr 0x22f8910 size 0x84 virtual false final false
 void InitializeState() ;

/// @brief Method _HashData addr 0x22f89dc size 0x17c virtual false final false
 void _HashData(::ArrayW<uint8_t> partIn, int32_t ibStart, int32_t cbSize) ;

/// @brief Method _EndHash addr 0x22f8b5c size 0x1a8 virtual false final false
 ::ArrayW<uint8_t> _EndHash() ;

/// @brief Method MDTransform addr 0x22f8d04 size 0x16fc virtual false final false
static void MDTransform(void* blockDWords, void* state, void* block) ;

/// @brief Method F addr 0x22fa400 size 0xc virtual false final false
static uint32_t F(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method G addr 0x22fa40c size 0x10 virtual false final false
static uint32_t G(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method H addr 0x22fa41c size 0xc virtual false final false
static uint32_t H(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method I addr 0x22fa428 size 0x10 virtual false final false
static uint32_t I(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method J addr 0x22fa438 size 0xc virtual false final false
static uint32_t J(uint32_t x, uint32_t y, uint32_t z) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::RIPEMD160Managed);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RIPEMD160Managed, "System.Security.Cryptography", "RIPEMD160Managed");
