#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemHeader;
}
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemHeader
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1805))
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemHeader
class CORDL_TYPE PemHeader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PemHeader() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemHeader", modifiers: " const&", def_value: None }]
constexpr PemHeader(PemHeader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemHeader", modifiers: "&&", def_value: None }]
constexpr PemHeader(PemHeader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemHeader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PemHeader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemHeader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemHeader& operator=(PemHeader&& o) noexcept = default;
  constexpr PemHeader& operator=(PemHeader const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_val, put=__set_val))  val;

constexpr void __set_val(::StringW value) ;

constexpr ::StringW __get_val() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "val", ty: "::StringW", modifiers: "", def_value: None }]
explicit PemHeader(::StringW name, ::StringW val) ;

/// @brief Method .ctor addr 0x10d3750 size 0x2c virtual false final false
 void _ctor(::StringW name, ::StringW val) ;

/// @brief Method get_Name addr 0x10d377c size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_Value addr 0x10d3784 size 0x8 virtual true final false
 ::StringW get_Value() ;

/// @brief Method GetHashCode addr 0x10d378c size 0x58 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x10d37fc size 0xb4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x10d37e4 size 0x18 virtual false final false
 int32_t GetHashCode(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemHeader);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemHeader, "Org.BouncyCastle.Utilities.IO.Pem", "PemHeader");
