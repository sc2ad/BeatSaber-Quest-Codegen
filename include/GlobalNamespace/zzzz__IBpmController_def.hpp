#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IBpmController;
}
// Type: ::IBpmController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4949))
// CS Name: IBpmController
class CORDL_TYPE IBpmController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBpmController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBpmController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_currentBpm))  currentBpm;


// Methods

/// @brief Method get_currentBpm addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_currentBpm() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IBpmController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBpmController, "", "IBpmController");
