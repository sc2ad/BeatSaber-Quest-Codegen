#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SR;
}
// Type: ::SR
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15407))
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

/// @brief Method Format addr 0x26c8014 size 0x70 virtual false final false
static ::StringW Format(::StringW resourceFormat, ::bs_hook::Il2CppWrapperType p1) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SR);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SR, "", "SR");
