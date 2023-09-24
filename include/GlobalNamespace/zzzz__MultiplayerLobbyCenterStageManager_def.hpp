#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class CenterStageScreenController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyCenterStageManager;
}
// Type: ::MultiplayerLobbyCenterStageManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5652))
// CS Name: MultiplayerLobbyCenterStageManager
class CORDL_TYPE MultiplayerLobbyCenterStageManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerLobbyCenterStageManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyCenterStageManager(MultiplayerLobbyCenterStageManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyCenterStageManager(MultiplayerLobbyCenterStageManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyCenterStageManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyCenterStageManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyCenterStageManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyCenterStageManager& operator=(MultiplayerLobbyCenterStageManager&& o) noexcept = default;
  constexpr MultiplayerLobbyCenterStageManager& operator=(MultiplayerLobbyCenterStageManager const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__centerObjectTransform, put=__set__centerObjectTransform))  _centerObjectTransform;

constexpr void __set__centerObjectTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__centerObjectTransform() const;

 GlobalNamespace::CenterStageScreenController __declspec(property(get=__get__centerStageScreenController, put=__set__centerStageScreenController))  _centerStageScreenController;

constexpr void __set__centerStageScreenController(GlobalNamespace::CenterStageScreenController value) ;

constexpr GlobalNamespace::CenterStageScreenController __get__centerStageScreenController() const;

 GlobalNamespace::ILobbyStateDataModel __declspec(property(get=__get__lobbyStateDataModel, put=__set__lobbyStateDataModel))  _lobbyStateDataModel;

constexpr void __set__lobbyStateDataModel(GlobalNamespace::ILobbyStateDataModel value) ;

constexpr GlobalNamespace::ILobbyStateDataModel __get__lobbyStateDataModel() const;

 float_t __declspec(property(get=__get__innerCircleRadius, put=__set__innerCircleRadius))  _innerCircleRadius;

constexpr void __set__innerCircleRadius(float_t value) ;

constexpr float_t __get__innerCircleRadius() const;

 float_t __declspec(property(get=__get__minOuterCircleRadius, put=__set__minOuterCircleRadius))  _minOuterCircleRadius;

constexpr void __set__minOuterCircleRadius(float_t value) ;

constexpr float_t __get__minOuterCircleRadius() const;


// Methods

/// @brief Method Init addr 0x214c1e0 size 0x8 virtual false final false
 void Init(float_t innerCircleRadius, float_t minOuterCircleRadius) ;

/// @brief Method ActivateCenterStageManager addr 0x214c1e8 size 0x24 virtual false final false
 void ActivateCenterStageManager() ;

/// @brief Method DeactivateCenterStageManager addr 0x214c304 size 0x24 virtual false final false
 void DeactivateCenterStageManager() ;

/// @brief Method RecalculateCenterPosition addr 0x214c20c size 0xf8 virtual false final false
 void RecalculateCenterPosition() ;

static GlobalNamespace::MultiplayerLobbyCenterStageManager New_ctor() ;

/// @brief Method .ctor addr 0x214c328 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLobbyCenterStageManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterStageManager, "", "MultiplayerLobbyCenterStageManager");
