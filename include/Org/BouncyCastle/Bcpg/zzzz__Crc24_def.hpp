#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
// Type: Org.BouncyCastle.Bcpg::Crc24
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(561))
// CS Name: Org.BouncyCastle.Bcpg.Crc24
class CORDL_TYPE Crc24 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Crc24() = default;

// Ctor Parameters [CppParam { name: "", ty: "Crc24", modifiers: " const&", def_value: None }]
constexpr Crc24(Crc24 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Crc24", modifiers: "&&", def_value: None }]
constexpr Crc24(Crc24&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Crc24(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Crc24& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Crc24& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Crc24& operator=(Crc24&& o) noexcept = default;
  constexpr Crc24& operator=(Crc24 const& o) noexcept = default;
                


// Fields

/// @brief Field Crc24Init offset 0
static constexpr int32_t  Crc24Init{11994318};

/// @brief Field Crc24Poly offset 0
static constexpr int32_t  Crc24Poly{25578747};

 int32_t __declspec(property(get=__get_crc, put=__set_crc))  crc;

constexpr void __set_crc(int32_t value) ;

constexpr int32_t __get_crc() const;


// Properties

 int32_t __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters []
explicit Crc24() ;

/// @brief Method .ctor addr 0x113f60c size 0x14 virtual false final false
 void _ctor() ;

/// @brief Method Update addr 0x11402e0 size 0x38 virtual false final false
 void Update(int32_t b) ;

/// @brief Method GetValue addr 0x1146320 size 0x8 virtual false final false
 int32_t GetValue() ;

/// @brief Method get_Value addr 0x1146328 size 0x8 virtual false final false
 int32_t get_Value() ;

/// @brief Method Reset addr 0x11402d0 size 0x10 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Crc24);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Crc24, "Org.BouncyCastle.Bcpg", "Crc24");
