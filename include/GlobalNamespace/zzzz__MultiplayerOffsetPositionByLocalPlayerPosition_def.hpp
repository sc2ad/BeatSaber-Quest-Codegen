#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
// Type: ::MultiplayerOffsetPositionByLocalPlayerPosition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5318))
// CS Name: MultiplayerOffsetPositionByLocalPlayerPosition
class CORDL_TYPE MultiplayerOffsetPositionByLocalPlayerPosition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerOffsetPositionByLocalPlayerPosition() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerOffsetPositionByLocalPlayerPosition", modifiers: " const&", def_value: None }]
constexpr MultiplayerOffsetPositionByLocalPlayerPosition(MultiplayerOffsetPositionByLocalPlayerPosition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerOffsetPositionByLocalPlayerPosition", modifiers: "&&", def_value: None }]
constexpr MultiplayerOffsetPositionByLocalPlayerPosition(MultiplayerOffsetPositionByLocalPlayerPosition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerOffsetPositionByLocalPlayerPosition(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerOffsetPositionByLocalPlayerPosition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerOffsetPositionByLocalPlayerPosition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerOffsetPositionByLocalPlayerPosition& operator=(MultiplayerOffsetPositionByLocalPlayerPosition&& o) noexcept = default;
  constexpr MultiplayerOffsetPositionByLocalPlayerPosition& operator=(MultiplayerOffsetPositionByLocalPlayerPosition const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__multiplayerPlayersManager, put=__set__multiplayerPlayersManager))  _multiplayerPlayersManager;

constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr ::GlobalNamespace::MultiplayerPlayersManager __get__multiplayerPlayersManager() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__positionOffset, put=__set__positionOffset))  _positionOffset;

constexpr void __set__positionOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__positionOffset() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get__rotationOffset, put=__set__rotationOffset))  _rotationOffset;

constexpr void __set__rotationOffset(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get__rotationOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__lastParentPosition, put=__set__lastParentPosition))  _lastParentPosition;

constexpr void __set__lastParentPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__lastParentPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get__lastParentRotation, put=__set__lastParentRotation))  _lastParentRotation;

constexpr void __set__lastParentRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get__lastParentRotation() const;


// Methods

/// @brief Method Awake addr 0x20fb450 size 0x50 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x20fb4a0 size 0x4 virtual false final false
 void Update() ;

/// @brief Method SetEnabled addr 0x20f9e6c size 0xc virtual false final false
 void SetEnabled(bool isEnabled) ;

/// @brief Method UpdatePositionAndRotationIfNeeded addr 0x20fb4a4 size 0x208 virtual false final false
 void UpdatePositionAndRotationIfNeeded() ;

// Ctor Parameters []
explicit MultiplayerOffsetPositionByLocalPlayerPosition() ;

/// @brief Method .ctor addr 0x20fb72c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, "", "MultiplayerOffsetPositionByLocalPlayerPosition");
