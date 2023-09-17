#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IntToRoman;
}
// Type: ::IntToRoman
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13810))
// CS Name: IntToRoman
class CORDL_TYPE IntToRoman : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IntToRoman() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntToRoman", modifiers: " const&", def_value: None }]
constexpr IntToRoman(IntToRoman const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntToRoman", modifiers: "&&", def_value: None }]
constexpr IntToRoman(IntToRoman&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntToRoman(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntToRoman& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntToRoman& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntToRoman& operator=(IntToRoman&& o) noexcept = default;
  constexpr IntToRoman& operator=(IntToRoman const& o) noexcept = default;
                


// Methods

/// @brief Method Roman addr 0x1f78b48 size 0x274 virtual false final false
static ::StringW Roman(int32_t number) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IntToRoman);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntToRoman, "", "IntToRoman");
