#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct OffsetDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class OffsetDirectionExtensions;
}
// Type: ::OffsetDirectionExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14944))
// CS Name: OffsetDirectionExtensions
class CORDL_TYPE OffsetDirectionExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OffsetDirectionExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetDirectionExtensions", modifiers: " const&", def_value: None }]
constexpr OffsetDirectionExtensions(OffsetDirectionExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetDirectionExtensions", modifiers: "&&", def_value: None }]
constexpr OffsetDirectionExtensions(OffsetDirectionExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OffsetDirectionExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OffsetDirectionExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OffsetDirectionExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OffsetDirectionExtensions& operator=(OffsetDirectionExtensions&& o) noexcept = default;
  constexpr OffsetDirectionExtensions& operator=(OffsetDirectionExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method OppositeDirection addr 0xd94a80 size 0x1c virtual false final false
static GlobalNamespace::OffsetDirection OppositeDirection(GlobalNamespace::OffsetDirection offsetDirection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OffsetDirectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OffsetDirectionExtensions, "", "OffsetDirectionExtensions");
