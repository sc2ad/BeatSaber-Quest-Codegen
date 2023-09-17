#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLightsUpdateSystem;
}
// Type: ::BloomPrePassLightsUpdateSystem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14636))
// CS Name: BloomPrePassLightsUpdateSystem
class CORDL_TYPE BloomPrePassLightsUpdateSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BloomPrePassLightsUpdateSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightsUpdateSystem", modifiers: " const&", def_value: None }]
constexpr BloomPrePassLightsUpdateSystem(BloomPrePassLightsUpdateSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightsUpdateSystem", modifiers: "&&", def_value: None }]
constexpr BloomPrePassLightsUpdateSystem(BloomPrePassLightsUpdateSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassLightsUpdateSystem(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BloomPrePassLightsUpdateSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassLightsUpdateSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassLightsUpdateSystem& operator=(BloomPrePassLightsUpdateSystem&& o) noexcept = default;
  constexpr BloomPrePassLightsUpdateSystem& operator=(BloomPrePassLightsUpdateSystem const& o) noexcept = default;
                


// Methods

/// @brief Method LateUpdate addr 0x1f94bb4 size 0x2f0 virtual false final false
 void LateUpdate() ;

// Ctor Parameters []
explicit BloomPrePassLightsUpdateSystem() ;

/// @brief Method .ctor addr 0x1f94ea4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLightsUpdateSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLightsUpdateSystem, "", "BloomPrePassLightsUpdateSystem");
