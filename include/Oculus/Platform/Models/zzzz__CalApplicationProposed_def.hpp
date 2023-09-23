#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class CalApplicationProposed;
}
// Type: Oculus.Platform.Models::CalApplicationProposed
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13398))
// CS Name: Oculus.Platform.Models.CalApplicationProposed
class CORDL_TYPE CalApplicationProposed : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CalApplicationProposed() = default;

// Ctor Parameters [CppParam { name: "", ty: "CalApplicationProposed", modifiers: " const&", def_value: None }]
constexpr CalApplicationProposed(CalApplicationProposed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CalApplicationProposed", modifiers: "&&", def_value: None }]
constexpr CalApplicationProposed(CalApplicationProposed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CalApplicationProposed(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CalApplicationProposed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CalApplicationProposed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CalApplicationProposed& operator=(CalApplicationProposed&& o) noexcept = default;
  constexpr CalApplicationProposed& operator=(CalApplicationProposed const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CalApplicationProposed(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259d460 size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::CalApplicationProposed);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CalApplicationProposed, "Oculus.Platform.Models", "CalApplicationProposed");
