#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace GlobalNamespace {
class MockPlayersModel;
}
// Type: ::MockPlayersModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5285))
// CS Name: MockPlayersModel
class CORDL_TYPE MockPlayersModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MockPlayersModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayersModel", modifiers: " const&", def_value: None }]
constexpr MockPlayersModel(MockPlayersModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayersModel", modifiers: "&&", def_value: None }]
constexpr MockPlayersModel(MockPlayersModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayersModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPlayersModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayersModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayersModel& operator=(MockPlayersModel&& o) noexcept = default;
  constexpr MockPlayersModel& operator=(MockPlayersModel const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MockPlayersModel() ;

/// @brief Method .ctor addr 0x20efa04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayersModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayersModel, "", "MockPlayersModel");
