#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class RootMotion__FinalIK__InteractionTrigger__Range__Interaction;
}
namespace RootMotion::FinalIK {
class InteractionTrigger;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionTrigger__CameraPosition;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionTrigger__CharacterPosition;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionTrigger__Range;
}
// Type: ::CharacterPosition
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12551))
// CS Name: RootMotion.FinalIK.InteractionTrigger::CharacterPosition
class CORDL_TYPE RootMotion__FinalIK__InteractionTrigger__CharacterPosition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RootMotion__FinalIK__InteractionTrigger__CharacterPosition() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionTrigger__CharacterPosition", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionTrigger__CharacterPosition(RootMotion__FinalIK__InteractionTrigger__CharacterPosition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionTrigger__CharacterPosition", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionTrigger__CharacterPosition(RootMotion__FinalIK__InteractionTrigger__CharacterPosition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionTrigger__CharacterPosition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionTrigger__CharacterPosition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionTrigger__CharacterPosition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionTrigger__CharacterPosition& operator=(RootMotion__FinalIK__InteractionTrigger__CharacterPosition&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionTrigger__CharacterPosition& operator=(RootMotion__FinalIK__InteractionTrigger__CharacterPosition const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_use, put=__set_use))  use;

constexpr void __set_use(bool value) ;

constexpr bool __get_use() const;

 UnityEngine::Vector2 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_offset() const;

 float_t __declspec(property(get=__get_angleOffset, put=__set_angleOffset))  angleOffset;

constexpr void __set_angleOffset(float_t value) ;

constexpr float_t __get_angleOffset() const;

 float_t __declspec(property(get=__get_maxAngle, put=__set_maxAngle))  maxAngle;

constexpr void __set_maxAngle(float_t value) ;

constexpr float_t __get_maxAngle() const;

 float_t __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(float_t value) ;

constexpr float_t __get_radius() const;

 bool __declspec(property(get=__get_orbit, put=__set_orbit))  orbit;

constexpr void __set_orbit(bool value) ;

constexpr bool __get_orbit() const;

 bool __declspec(property(get=__get_fixYAxis, put=__set_fixYAxis))  fixYAxis;

constexpr void __set_fixYAxis(bool value) ;

constexpr bool __get_fixYAxis() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_offset3D))  offset3D;

 UnityEngine::Vector3 __declspec(property(get=get_direction3D))  direction3D;


// Methods

/// @brief Method get_offset3D addr 0x11ff788 size 0xc virtual false final false
 UnityEngine::Vector3 get_offset3D() ;

/// @brief Method get_direction3D addr 0x11ff794 size 0xc0 virtual false final false
 UnityEngine::Vector3 get_direction3D() ;

/// @brief Method IsInRange addr 0x11ff854 size 0x764 virtual false final false
 bool IsInRange(UnityEngine::Transform character, UnityEngine::Transform trigger, ByRef<float_t> error) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionTrigger__CharacterPosition() ;

/// @brief Method .ctor addr 0x11fffb8 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::CameraPosition
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12552))
// CS Name: RootMotion.FinalIK.InteractionTrigger::CameraPosition
class CORDL_TYPE RootMotion__FinalIK__InteractionTrigger__CameraPosition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RootMotion__FinalIK__InteractionTrigger__CameraPosition() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionTrigger__CameraPosition", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionTrigger__CameraPosition(RootMotion__FinalIK__InteractionTrigger__CameraPosition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionTrigger__CameraPosition", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionTrigger__CameraPosition(RootMotion__FinalIK__InteractionTrigger__CameraPosition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionTrigger__CameraPosition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionTrigger__CameraPosition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionTrigger__CameraPosition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionTrigger__CameraPosition& operator=(RootMotion__FinalIK__InteractionTrigger__CameraPosition&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionTrigger__CameraPosition& operator=(RootMotion__FinalIK__InteractionTrigger__CameraPosition const& o) noexcept = default;
                


// Fields

 UnityEngine::Collider __declspec(property(get=__get_lookAtTarget, put=__set_lookAtTarget))  lookAtTarget;

constexpr void __set_lookAtTarget(UnityEngine::Collider value) ;

constexpr UnityEngine::Collider __get_lookAtTarget() const;

 UnityEngine::Vector3 __declspec(property(get=__get_direction, put=__set_direction))  direction;

constexpr void __set_direction(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_direction() const;

 float_t __declspec(property(get=__get_maxDistance, put=__set_maxDistance))  maxDistance;

constexpr void __set_maxDistance(float_t value) ;

constexpr float_t __get_maxDistance() const;

 float_t __declspec(property(get=__get_maxAngle, put=__set_maxAngle))  maxAngle;

constexpr void __set_maxAngle(float_t value) ;

constexpr float_t __get_maxAngle() const;

 bool __declspec(property(get=__get_fixYAxis, put=__set_fixYAxis))  fixYAxis;

constexpr void __set_fixYAxis(bool value) ;

constexpr bool __get_fixYAxis() const;


// Methods

/// @brief Method GetRotation addr 0x11fffcc size 0x178 virtual false final false
 UnityEngine::Quaternion GetRotation() ;

/// @brief Method IsInRange addr 0x1200144 size 0x308 virtual false final false
 bool IsInRange(UnityEngine::Transform raycastFrom, UnityEngine::RaycastHit hit, UnityEngine::Transform trigger, ByRef<float_t> error) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionTrigger__CameraPosition() ;

/// @brief Method .ctor addr 0x120044c size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Interaction
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12553))
// CS Name: RootMotion.FinalIK.InteractionTrigger::Range::Interaction
class CORDL_TYPE RootMotion__FinalIK__InteractionTrigger__Range__Interaction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RootMotion__FinalIK__InteractionTrigger__Range__Interaction() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionTrigger__Range__Interaction", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionTrigger__Range__Interaction(RootMotion__FinalIK__InteractionTrigger__Range__Interaction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionTrigger__Range__Interaction", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionTrigger__Range__Interaction(RootMotion__FinalIK__InteractionTrigger__Range__Interaction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionTrigger__Range__Interaction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionTrigger__Range__Interaction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionTrigger__Range__Interaction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionTrigger__Range__Interaction& operator=(RootMotion__FinalIK__InteractionTrigger__Range__Interaction&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionTrigger__Range__Interaction& operator=(RootMotion__FinalIK__InteractionTrigger__Range__Interaction const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::InteractionObject __declspec(property(get=__get_interactionObject, put=__set_interactionObject))  interactionObject;

constexpr void __set_interactionObject(RootMotion::FinalIK::InteractionObject value) ;

constexpr RootMotion::FinalIK::InteractionObject __get_interactionObject() const;

 ::ArrayW<RootMotion::FinalIK::FullBodyBipedEffector> __declspec(property(get=__get_effectors, put=__set_effectors))  effectors;

constexpr void __set_effectors(::ArrayW<RootMotion::FinalIK::FullBodyBipedEffector> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::FullBodyBipedEffector> __get_effectors() const;


// Methods

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionTrigger__Range__Interaction() ;

/// @brief Method .ctor addr 0x12004d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Range
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12554))
// CS Name: RootMotion.FinalIK.InteractionTrigger::Range
class CORDL_TYPE RootMotion__FinalIK__InteractionTrigger__Range : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Interaction = GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RootMotion__FinalIK__InteractionTrigger__Range() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionTrigger__Range", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionTrigger__Range(RootMotion__FinalIK__InteractionTrigger__Range const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionTrigger__Range", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionTrigger__Range(RootMotion__FinalIK__InteractionTrigger__Range&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionTrigger__Range(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionTrigger__Range& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionTrigger__Range& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionTrigger__Range& operator=(RootMotion__FinalIK__InteractionTrigger__Range&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionTrigger__Range& operator=(RootMotion__FinalIK__InteractionTrigger__Range const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 bool __declspec(property(get=__get_show, put=__set_show))  show;

constexpr void __set_show(bool value) ;

constexpr bool __get_show() const;

 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition __declspec(property(get=__get_characterPosition, put=__set_characterPosition))  characterPosition;

constexpr void __set_characterPosition(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition __get_characterPosition() const;

 RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition __declspec(property(get=__get_cameraPosition, put=__set_cameraPosition))  cameraPosition;

constexpr void __set_cameraPosition(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition __get_cameraPosition() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction> __declspec(property(get=__get_interactions, put=__set_interactions))  interactions;

constexpr void __set_interactions(::ArrayW<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction> __get_interactions() const;


// Methods

/// @brief Method IsInRange addr 0x11ff680 size 0xb0 virtual false final false
 bool IsInRange(UnityEngine::Transform character, UnityEngine::Transform raycastFrom, UnityEngine::RaycastHit raycastHit, UnityEngine::Transform trigger, ByRef<float_t> maxError) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionTrigger__Range() ;

/// @brief Method .ctor addr 0x12004c0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionTrigger
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12555))
// CS Name: RootMotion.FinalIK.InteractionTrigger
class CORDL_TYPE InteractionTrigger : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Range = RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range;

using CameraPosition = RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition;

using CharacterPosition = RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InteractionTrigger() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionTrigger", modifiers: " const&", def_value: None }]
constexpr InteractionTrigger(InteractionTrigger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionTrigger", modifiers: "&&", def_value: None }]
constexpr InteractionTrigger(InteractionTrigger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteractionTrigger(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr InteractionTrigger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteractionTrigger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteractionTrigger& operator=(InteractionTrigger&& o) noexcept = default;
  constexpr InteractionTrigger& operator=(InteractionTrigger const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range> __declspec(property(get=__get_ranges, put=__set_ranges))  ranges;

constexpr void __set_ranges(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range> __get_ranges() const;


// Methods

/// @brief Method OpenUserManual addr 0x11ff528 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11ff56c size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method OpenTutorial4 addr 0x11ff5b0 size 0x44 virtual false final false
 void OpenTutorial4() ;

/// @brief Method SupportGroup addr 0x11ff5f4 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11ff638 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method Start addr 0x11ff67c size 0x4 virtual false final false
 void Start() ;

/// @brief Method GetBestRangeIndex addr 0x11fdfc0 size 0x1b4 virtual false final false
 int32_t GetBestRangeIndex(UnityEngine::Transform character, UnityEngine::Transform raycastFrom, UnityEngine::RaycastHit raycastHit) ;

// Ctor Parameters []
explicit InteractionTrigger() ;

/// @brief Method .ctor addr 0x11ff730 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__InteractionTrigger__Range__Interaction, "RootMotion.FinalIK", "InteractionTrigger/Range/Interaction");
NEED_NO_BOX(RootMotion::FinalIK::InteractionTrigger);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger, "RootMotion.FinalIK", "InteractionTrigger");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CameraPosition, "RootMotion.FinalIK", "InteractionTrigger/CameraPosition");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__CharacterPosition, "RootMotion.FinalIK", "InteractionTrigger/CharacterPosition");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionTrigger__Range, "RootMotion.FinalIK", "InteractionTrigger/Range");
