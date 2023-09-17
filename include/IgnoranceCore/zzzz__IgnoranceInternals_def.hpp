#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace IgnoranceCore {
class IgnoranceInternals;
}
// Type: IgnoranceCore::IgnoranceInternals
namespace IgnoranceCore {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15283))
// CS Name: IgnoranceCore.IgnoranceInternals
class CORDL_TYPE IgnoranceInternals : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IgnoranceInternals() = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceInternals", modifiers: " const&", def_value: None }]
constexpr IgnoranceInternals(IgnoranceInternals const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceInternals", modifiers: "&&", def_value: None }]
constexpr IgnoranceInternals(IgnoranceInternals&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IgnoranceInternals(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IgnoranceInternals& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IgnoranceInternals& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IgnoranceInternals& operator=(IgnoranceInternals&& o) noexcept = default;
  constexpr IgnoranceInternals& operator=(IgnoranceInternals const& o) noexcept = default;
                


// Fields

/// @brief Field Version offset 0
static constexpr ::ConstString  Version{u"1.4.0r2 (LTS)"};

/// @brief Field Scheme offset 0
static constexpr ::ConstString  Scheme{u"enet"};

/// @brief Field BindAnyAddress offset 0
static constexpr ::ConstString  BindAnyAddress{u"::0"};


// Methods

// Ctor Parameters []
explicit IgnoranceInternals() ;

/// @brief Method .ctor addr 0x2084854 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceCore
} // end anonymous namespace
NEED_NO_BOX(::IgnoranceCore::IgnoranceInternals);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceInternals, "IgnoranceCore", "IgnoranceInternals");
