#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class PS4NetworkPlayerModel;
}
// Type: ::PS4NetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4597))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4598))
// CS Name: PS4NetworkPlayerModel
class CORDL_TYPE PS4NetworkPlayerModel : public GlobalNamespace::PlatformNetworkPlayerModel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PS4NetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4NetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr PS4NetworkPlayerModel(PS4NetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4NetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr PS4NetworkPlayerModel(PS4NetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4NetworkPlayerModel(void* ptr) noexcept : GlobalNamespace::PlatformNetworkPlayerModel(ptr) {
}


  constexpr PS4NetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4NetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4NetworkPlayerModel& operator=(PS4NetworkPlayerModel&& o) noexcept = default;
  constexpr PS4NetworkPlayerModel& operator=(PS4NetworkPlayerModel const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PS4NetworkPlayerModel() ;

/// @brief Method .ctor addr 0x2211770 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS4NetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4NetworkPlayerModel, "", "PS4NetworkPlayerModel");
