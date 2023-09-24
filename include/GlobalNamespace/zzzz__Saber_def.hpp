#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class SaberMovementData;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Saber;
}
// Type: ::Saber
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5382))
// CS Name: Saber
class CORDL_TYPE Saber : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~Saber() = default;

// Ctor Parameters [CppParam { name: "", ty: "Saber", modifiers: " const&", def_value: None }]
constexpr Saber(Saber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Saber", modifiers: "&&", def_value: None }]
constexpr Saber(Saber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Saber(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Saber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Saber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Saber& operator=(Saber&& o) noexcept = default;
  constexpr Saber& operator=(Saber const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__saberBladeTopTransform, put=__set__saberBladeTopTransform))  _saberBladeTopTransform;

constexpr void __set__saberBladeTopTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__saberBladeTopTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__saberBladeBottomTransform, put=__set__saberBladeBottomTransform))  _saberBladeBottomTransform;

constexpr void __set__saberBladeBottomTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__saberBladeBottomTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__handleTransform, put=__set__handleTransform))  _handleTransform;

constexpr void __set__handleTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__handleTransform() const;

 GlobalNamespace::SaberTypeObject __declspec(property(get=__get__saberType, put=__set__saberType))  _saberType;

constexpr void __set__saberType(GlobalNamespace::SaberTypeObject value) ;

constexpr GlobalNamespace::SaberTypeObject __get__saberType() const;

 GlobalNamespace::SaberMovementData __declspec(property(get=__get__movementData, put=__set__movementData))  _movementData;

constexpr void __set__movementData(GlobalNamespace::SaberMovementData value) ;

constexpr GlobalNamespace::SaberMovementData __get__movementData() const;

 UnityEngine::Vector3 __declspec(property(get=__get__saberBladeTopPos, put=__set__saberBladeTopPos))  _saberBladeTopPos;

constexpr void __set__saberBladeTopPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__saberBladeTopPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__saberBladeBottomPos, put=__set__saberBladeBottomPos))  _saberBladeBottomPos;

constexpr void __set__saberBladeBottomPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__saberBladeBottomPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__handlePos, put=__set__handlePos))  _handlePos;

constexpr void __set__handlePos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__handlePos() const;

 UnityEngine::Quaternion __declspec(property(get=__get__handleRot, put=__set__handleRot))  _handleRot;

constexpr void __set__handleRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__handleRot() const;


// Properties

 GlobalNamespace::SaberType __declspec(property(get=get_saberType))  saberType;

 UnityEngine::Vector3 __declspec(property(get=get_saberBladeTopPos))  saberBladeTopPos;

 UnityEngine::Vector3 __declspec(property(get=get_saberBladeBottomPos))  saberBladeBottomPos;

 UnityEngine::Vector3 __declspec(property(get=get_handlePos))  handlePos;

 UnityEngine::Quaternion __declspec(property(get=get_handleRot))  handleRot;

 float_t __declspec(property(get=get_bladeSpeed))  bladeSpeed;

 GlobalNamespace::SaberMovementData __declspec(property(get=get_movementData))  movementData;


// Methods

/// @brief Method get_saberType addr 0x210b538 size 0x1c virtual false final false
 GlobalNamespace::SaberType get_saberType() ;

/// @brief Method get_saberBladeTopPos addr 0x210b554 size 0xc virtual false final false
 UnityEngine::Vector3 get_saberBladeTopPos() ;

/// @brief Method get_saberBladeBottomPos addr 0x210b560 size 0xc virtual false final false
 UnityEngine::Vector3 get_saberBladeBottomPos() ;

/// @brief Method get_handlePos addr 0x210b56c size 0xc virtual false final false
 UnityEngine::Vector3 get_handlePos() ;

/// @brief Method get_handleRot addr 0x210b578 size 0xc virtual false final false
 UnityEngine::Quaternion get_handleRot() ;

/// @brief Method get_bladeSpeed addr 0x210b584 size 0x1c virtual false final false
 float_t get_bladeSpeed() ;

/// @brief Method get_movementData addr 0x210b5a0 size 0x8 virtual false final false
 GlobalNamespace::SaberMovementData get_movementData() ;

/// @brief Method ManualUpdate addr 0x210b5a8 size 0x134 virtual false final false
 void ManualUpdate() ;

/// @brief Method OverridePositionAndRotation addr 0x210b6dc size 0x78 virtual false final false
 void OverridePositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) ;

static GlobalNamespace::Saber New_ctor() ;

/// @brief Method .ctor addr 0x210b754 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Saber);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Saber, "", "Saber");
