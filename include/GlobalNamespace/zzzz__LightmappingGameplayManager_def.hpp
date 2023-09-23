#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmappingGameplayManager;
}
// Type: ::LightmappingGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5117))
// CS Name: LightmappingGameplayManager
class CORDL_TYPE LightmappingGameplayManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LightmappingGameplayManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmappingGameplayManager", modifiers: " const&", def_value: None }]
constexpr LightmappingGameplayManager(LightmappingGameplayManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmappingGameplayManager", modifiers: "&&", def_value: None }]
constexpr LightmappingGameplayManager(LightmappingGameplayManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmappingGameplayManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightmappingGameplayManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmappingGameplayManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmappingGameplayManager& operator=(LightmappingGameplayManager&& o) noexcept = default;
  constexpr LightmappingGameplayManager& operator=(LightmappingGameplayManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;


// Methods

/// @brief Method Start addr 0x2270834 size 0x188 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit LightmappingGameplayManager() ;

/// @brief Method .ctor addr 0x22709bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightmappingGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightmappingGameplayManager, "", "LightmappingGameplayManager");
