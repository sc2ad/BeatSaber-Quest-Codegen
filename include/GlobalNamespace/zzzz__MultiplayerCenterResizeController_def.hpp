#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerCenterResizeController;
}
// Type: ::MultiplayerCenterResizeController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5292))
// CS Name: MultiplayerCenterResizeController
class CORDL_TYPE MultiplayerCenterResizeController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerCenterResizeController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterResizeController", modifiers: " const&", def_value: None }]
constexpr MultiplayerCenterResizeController(MultiplayerCenterResizeController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterResizeController", modifiers: "&&", def_value: None }]
constexpr MultiplayerCenterResizeController(MultiplayerCenterResizeController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerCenterResizeController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerCenterResizeController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerCenterResizeController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerCenterResizeController& operator=(MultiplayerCenterResizeController&& o) noexcept = default;
  constexpr MultiplayerCenterResizeController& operator=(MultiplayerCenterResizeController const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__platformWidth, put=__set__platformWidth))  _platformWidth;

constexpr void __set__platformWidth(float_t value) ;

constexpr float_t __get__platformWidth() const;

 GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 System::Action_1<float_t> __declspec(property(get=__get_edgeDistanceFromCenterWasCalculatedEvent, put=__set_edgeDistanceFromCenterWasCalculatedEvent))  edgeDistanceFromCenterWasCalculatedEvent;

constexpr void __set_edgeDistanceFromCenterWasCalculatedEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_edgeDistanceFromCenterWasCalculatedEvent() const;

 bool __declspec(property(get=__get__isEdgeDistanceFromCenterCalculated_k__BackingField, put=__set__isEdgeDistanceFromCenterCalculated_k__BackingField))  _isEdgeDistanceFromCenterCalculated_k__BackingField;

constexpr void __set__isEdgeDistanceFromCenterCalculated_k__BackingField(bool value) ;

constexpr bool __get__isEdgeDistanceFromCenterCalculated_k__BackingField() const;

 float_t __declspec(property(get=__get__edgeDistanceFromCenter_k__BackingField, put=__set__edgeDistanceFromCenter_k__BackingField))  _edgeDistanceFromCenter_k__BackingField;

constexpr void __set__edgeDistanceFromCenter_k__BackingField(float_t value) ;

constexpr float_t __get__edgeDistanceFromCenter_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isEdgeDistanceFromCenterCalculated, put=set_isEdgeDistanceFromCenterCalculated))  isEdgeDistanceFromCenterCalculated;

 float_t __declspec(property(get=get_edgeDistanceFromCenter, put=set_edgeDistanceFromCenter))  edgeDistanceFromCenter;


// Methods

/// @brief Method add_edgeDistanceFromCenterWasCalculatedEvent addr 0x20f0810 size 0xb0 virtual false final false
 void add_edgeDistanceFromCenterWasCalculatedEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_edgeDistanceFromCenterWasCalculatedEvent addr 0x20f08c0 size 0xb0 virtual false final false
 void remove_edgeDistanceFromCenterWasCalculatedEvent(System::Action_1<float_t> value) ;

/// @brief Method get_isEdgeDistanceFromCenterCalculated addr 0x20f0970 size 0x8 virtual false final false
 bool get_isEdgeDistanceFromCenterCalculated() ;

/// @brief Method set_isEdgeDistanceFromCenterCalculated addr 0x20f0978 size 0xc virtual false final false
 void set_isEdgeDistanceFromCenterCalculated(bool value) ;

/// @brief Method get_edgeDistanceFromCenter addr 0x20f0984 size 0x8 virtual false final false
 float_t get_edgeDistanceFromCenter() ;

/// @brief Method set_edgeDistanceFromCenter addr 0x20f098c size 0x8 virtual false final false
 void set_edgeDistanceFromCenter(float_t value) ;

/// @brief Method Start addr 0x20f0994 size 0xa4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20f0b60 size 0x94 virtual false final false
 void OnDestroy() ;

/// @brief Method HandlePlayersLayoutWasCalculated addr 0x20f0a38 size 0x78 virtual false final false
 void HandlePlayersLayoutWasCalculated(GlobalNamespace::MultiplayerPlayerLayout layout, int32_t numberOfPlayers) ;

// Ctor Parameters []
explicit MultiplayerCenterResizeController() ;

/// @brief Method .ctor addr 0x20f0ca4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerCenterResizeController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCenterResizeController, "", "MultiplayerCenterResizeController");
