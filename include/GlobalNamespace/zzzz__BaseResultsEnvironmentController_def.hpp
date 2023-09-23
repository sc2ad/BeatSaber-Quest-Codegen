#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseResultsEnvironmentController;
}
// Type: ::BaseResultsEnvironmentController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4803))
// CS Name: BaseResultsEnvironmentController
class CORDL_TYPE BaseResultsEnvironmentController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BaseResultsEnvironmentController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseResultsEnvironmentController", modifiers: " const&", def_value: None }]
constexpr BaseResultsEnvironmentController(BaseResultsEnvironmentController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseResultsEnvironmentController", modifiers: "&&", def_value: None }]
constexpr BaseResultsEnvironmentController(BaseResultsEnvironmentController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseResultsEnvironmentController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BaseResultsEnvironmentController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseResultsEnvironmentController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseResultsEnvironmentController& operator=(BaseResultsEnvironmentController&& o) noexcept = default;
  constexpr BaseResultsEnvironmentController& operator=(BaseResultsEnvironmentController const& o) noexcept = default;
                


// Methods

/// @brief Method Activate addr 0x222c964 size 0x24 virtual true final false
 void Activate(bool immediately) ;

/// @brief Method Deactivate addr 0x222c988 size 0x24 virtual true final false
 void Deactivate(bool immediately) ;

/// @brief Method Setup addr 0x0 size 0xffffffffffffffff virtual true final false
 void Setup(GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

// Ctor Parameters []
explicit BaseResultsEnvironmentController() ;

/// @brief Method .ctor addr 0x222c9ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BaseResultsEnvironmentController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseResultsEnvironmentController, "", "BaseResultsEnvironmentController");
