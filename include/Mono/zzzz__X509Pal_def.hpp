#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Mono {
class X509PalImpl;
}
// Forward declare root types
namespace Mono {
class X509Pal;
}
// Type: Mono::X509Pal
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7603))
// CS Name: Mono.X509Pal
class CORDL_TYPE X509Pal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509Pal() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Pal", modifiers: " const&", def_value: None }]
constexpr X509Pal(X509Pal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Pal", modifiers: "&&", def_value: None }]
constexpr X509Pal(X509Pal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Pal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Pal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Pal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Pal& operator=(X509Pal&& o) noexcept = default;
  constexpr X509Pal& operator=(X509Pal const& o) noexcept = default;
                


// Properties

static Mono::X509PalImpl __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_Instance addr 0x2685524 size 0x60 virtual false final false
static Mono::X509PalImpl get_Instance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
NEED_NO_BOX(Mono::X509Pal);
DEFINE_IL2CPP_ARG_TYPE(Mono::X509Pal, "Mono", "X509Pal");
