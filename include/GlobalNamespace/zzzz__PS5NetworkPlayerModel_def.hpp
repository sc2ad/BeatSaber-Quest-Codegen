#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class PS5NetworkPlayerModel;
}
// Type: ::PS5NetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4597))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4599))
// CS Name: PS5NetworkPlayerModel
class CORDL_TYPE PS5NetworkPlayerModel : public GlobalNamespace::PlatformNetworkPlayerModel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PS5NetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5NetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr PS5NetworkPlayerModel(PS5NetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5NetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr PS5NetworkPlayerModel(PS5NetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5NetworkPlayerModel(void* ptr) noexcept : GlobalNamespace::PlatformNetworkPlayerModel(ptr) {
}


  constexpr PS5NetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5NetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5NetworkPlayerModel& operator=(PS5NetworkPlayerModel&& o) noexcept = default;
  constexpr PS5NetworkPlayerModel& operator=(PS5NetworkPlayerModel const& o) noexcept = default;
                


// Methods

static GlobalNamespace::PS5NetworkPlayerModel New_ctor() ;

/// @brief Method .ctor addr 0x2211778 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS5NetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS5NetworkPlayerModel, "", "PS5NetworkPlayerModel");
