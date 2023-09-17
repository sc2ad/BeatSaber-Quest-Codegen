#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class SR;
}
// Type: ::SR
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2222))
// CS Name: SR
class CORDL_TYPE SR : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SR() = default;

// Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: " const&", def_value: None }]
constexpr SR(SR const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "&&", def_value: None }]
constexpr SR(SR&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SR(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SR& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SR& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SR& operator=(SR&& o) noexcept = default;
  constexpr SR& operator=(SR const& o) noexcept = default;
                


// Methods

/// @brief Method GetString addr 0x22a4764 size 0x70 virtual false final false
static ::StringW GetString(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method GetString addr 0x22a47d4 size 0x8 virtual false final false
static ::StringW GetString(::System::Globalization::CultureInfo culture, ::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method GetString addr 0x22a47dc size 0x4 virtual false final false
static ::StringW GetString(::StringW name) ;

/// @brief Method Format addr 0x22a37b0 size 0x70 virtual false final false
static ::StringW Format(::StringW resourceFormat, ::bs_hook::Il2CppWrapperType p1) ;

/// @brief Method Format addr 0x22a47e0 size 0x78 virtual false final false
static ::StringW Format(::StringW resourceFormat, ::bs_hook::Il2CppWrapperType p1, ::bs_hook::Il2CppWrapperType p2) ;

/// @brief Method Format addr 0x22a4858 size 0x88 virtual false final false
static ::StringW Format(::StringW resourceFormat, ::bs_hook::Il2CppWrapperType p1, ::bs_hook::Il2CppWrapperType p2, ::bs_hook::Il2CppWrapperType p3) ;

/// @brief Method GetResourceString addr 0x22a48e0 size 0x4 virtual false final false
static ::StringW GetResourceString(::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SR);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SR, "", "SR");
