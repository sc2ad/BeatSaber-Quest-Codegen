#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__Interop__ErrorInfo;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__Interop__Error;
}
// Forward declare root types
namespace GlobalNamespace {
class InteropErrorExtensions;
}
// Type: ::InteropErrorExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2220))
// CS Name: InteropErrorExtensions
class CORDL_TYPE InteropErrorExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InteropErrorExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteropErrorExtensions", modifiers: " const&", def_value: None }]
constexpr InteropErrorExtensions(InteropErrorExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteropErrorExtensions", modifiers: "&&", def_value: None }]
constexpr InteropErrorExtensions(InteropErrorExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteropErrorExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InteropErrorExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteropErrorExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteropErrorExtensions& operator=(InteropErrorExtensions&& o) noexcept = default;
  constexpr InteropErrorExtensions& operator=(InteropErrorExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Info addr 0x22a4750 size 0x8 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__Interop__ErrorInfo Info(::GlobalNamespace::____GlobalNamespace__Interop__Error error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::InteropErrorExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InteropErrorExtensions, "", "InteropErrorExtensions");
