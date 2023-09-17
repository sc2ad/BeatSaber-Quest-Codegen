#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Collider;
}
namespace GlobalNamespace {
class OVRGrabber;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGrabbable;
}
// Type: ::OVRGrabbable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8906))
// CS Name: OVRGrabbable
class CORDL_TYPE OVRGrabbable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OVRGrabbable() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGrabbable", modifiers: " const&", def_value: None }]
constexpr OVRGrabbable(OVRGrabbable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGrabbable", modifiers: "&&", def_value: None }]
constexpr OVRGrabbable(OVRGrabbable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRGrabbable(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRGrabbable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRGrabbable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRGrabbable& operator=(OVRGrabbable&& o) noexcept = default;
  constexpr OVRGrabbable& operator=(OVRGrabbable const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_allowOffhandGrab, put=__set_m_allowOffhandGrab))  m_allowOffhandGrab;

constexpr void __set_m_allowOffhandGrab(bool value) ;

constexpr bool __get_m_allowOffhandGrab() const;

 bool __declspec(property(get=__get_m_snapPosition, put=__set_m_snapPosition))  m_snapPosition;

constexpr void __set_m_snapPosition(bool value) ;

constexpr bool __get_m_snapPosition() const;

 bool __declspec(property(get=__get_m_snapOrientation, put=__set_m_snapOrientation))  m_snapOrientation;

constexpr void __set_m_snapOrientation(bool value) ;

constexpr bool __get_m_snapOrientation() const;

 ::UnityEngine::Transform __declspec(property(get=__get_m_snapOffset, put=__set_m_snapOffset))  m_snapOffset;

constexpr void __set_m_snapOffset(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_m_snapOffset() const;

 ::ArrayW<::UnityEngine::Collider> __declspec(property(get=__get_m_grabPoints, put=__set_m_grabPoints))  m_grabPoints;

constexpr void __set_m_grabPoints(::ArrayW<::UnityEngine::Collider> value) ;

constexpr ::ArrayW<::UnityEngine::Collider> __get_m_grabPoints() const;

 bool __declspec(property(get=__get_m_grabbedKinematic, put=__set_m_grabbedKinematic))  m_grabbedKinematic;

constexpr void __set_m_grabbedKinematic(bool value) ;

constexpr bool __get_m_grabbedKinematic() const;

 ::UnityEngine::Collider __declspec(property(get=__get_m_grabbedCollider, put=__set_m_grabbedCollider))  m_grabbedCollider;

constexpr void __set_m_grabbedCollider(::UnityEngine::Collider value) ;

constexpr ::UnityEngine::Collider __get_m_grabbedCollider() const;

 ::GlobalNamespace::OVRGrabber __declspec(property(get=__get_m_grabbedBy, put=__set_m_grabbedBy))  m_grabbedBy;

constexpr void __set_m_grabbedBy(::GlobalNamespace::OVRGrabber value) ;

constexpr ::GlobalNamespace::OVRGrabber __get_m_grabbedBy() const;


// Properties

 bool __declspec(property(get=get_allowOffhandGrab))  allowOffhandGrab;

 bool __declspec(property(get=get_isGrabbed))  isGrabbed;

 bool __declspec(property(get=get_snapPosition))  snapPosition;

 bool __declspec(property(get=get_snapOrientation))  snapOrientation;

 ::UnityEngine::Transform __declspec(property(get=get_snapOffset))  snapOffset;

 ::GlobalNamespace::OVRGrabber __declspec(property(get=get_grabbedBy))  grabbedBy;

 ::UnityEngine::Transform __declspec(property(get=get_grabbedTransform))  grabbedTransform;

 ::UnityEngine::Rigidbody __declspec(property(get=get_grabbedRigidbody))  grabbedRigidbody;

 ::ArrayW<::UnityEngine::Collider> __declspec(property(get=get_grabPoints))  grabPoints;


// Methods

/// @brief Method get_allowOffhandGrab addr 0x262123c size 0x8 virtual false final false
 bool get_allowOffhandGrab() ;

/// @brief Method get_isGrabbed addr 0x2621244 size 0x60 virtual false final false
 bool get_isGrabbed() ;

/// @brief Method get_snapPosition addr 0x26212a4 size 0x8 virtual false final false
 bool get_snapPosition() ;

/// @brief Method get_snapOrientation addr 0x26212ac size 0x8 virtual false final false
 bool get_snapOrientation() ;

/// @brief Method get_snapOffset addr 0x26212b4 size 0x8 virtual false final false
 ::UnityEngine::Transform get_snapOffset() ;

/// @brief Method get_grabbedBy addr 0x26212bc size 0x8 virtual false final false
 ::GlobalNamespace::OVRGrabber get_grabbedBy() ;

/// @brief Method get_grabbedTransform addr 0x26212c4 size 0x1c virtual false final false
 ::UnityEngine::Transform get_grabbedTransform() ;

/// @brief Method get_grabbedRigidbody addr 0x26212e0 size 0x1c virtual false final false
 ::UnityEngine::Rigidbody get_grabbedRigidbody() ;

/// @brief Method get_grabPoints addr 0x26212fc size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::Collider> get_grabPoints() ;

/// @brief Method GrabBegin addr 0x2621304 size 0x7c virtual true final false
 void GrabBegin(::GlobalNamespace::OVRGrabber hand, ::UnityEngine::Collider grabPoint) ;

/// @brief Method GrabEnd addr 0x2621380 size 0xd4 virtual true final false
 void GrabEnd(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity) ;

/// @brief Method Awake addr 0x2621454 size 0x14c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x26215a0 size 0x64 virtual true final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2621604 size 0x84 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit OVRGrabbable() ;

/// @brief Method .ctor addr 0x2621738 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGrabbable, "", "OVRGrabbable");
