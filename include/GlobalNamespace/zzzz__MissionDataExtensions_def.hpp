#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__MissionObjective__ReferenceValueComparisonType;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionDataExtensions;
}
// Type: ::MissionDataExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4470))
// CS Name: MissionDataExtensions
class CORDL_TYPE MissionDataExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MissionDataExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionDataExtensions", modifiers: " const&", def_value: None }]
constexpr MissionDataExtensions(MissionDataExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionDataExtensions", modifiers: "&&", def_value: None }]
constexpr MissionDataExtensions(MissionDataExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionDataExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MissionDataExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionDataExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionDataExtensions& operator=(MissionDataExtensions&& o) noexcept = default;
  constexpr MissionDataExtensions& operator=(MissionDataExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Name addr 0x21f1140 size 0x94 virtual false final false
static ::StringW Name(::GlobalNamespace::____GlobalNamespace__MissionObjective__ReferenceValueComparisonType comparisonType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionDataExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionDataExtensions, "", "MissionDataExtensions");
