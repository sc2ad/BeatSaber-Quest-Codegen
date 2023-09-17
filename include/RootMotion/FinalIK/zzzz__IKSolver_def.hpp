#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RotationLimit;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__Bone;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__IterationDelegate;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__Node;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__Point;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKSolver__UpdateDelegate;
}
// Type: ::Point
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12501))
// CS Name: RootMotion.FinalIK.IKSolver::Point
class CORDL_TYPE ____RootMotion__FinalIK__IKSolver__Point : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~____RootMotion__FinalIK__IKSolver__Point() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__Point", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__Point(____RootMotion__FinalIK__IKSolver__Point const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__Point", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__Point(____RootMotion__FinalIK__IKSolver__Point&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKSolver__Point(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____RootMotion__FinalIK__IKSolver__Point& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__Point& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__Point& operator=(____RootMotion__FinalIK__IKSolver__Point&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__IKSolver__Point& operator=(____RootMotion__FinalIK__IKSolver__Point const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_solverPosition, put=__set_solverPosition))  solverPosition;

constexpr void __set_solverPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_solverPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_solverRotation, put=__set_solverRotation))  solverRotation;

constexpr void __set_solverRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_solverRotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_defaultLocalPosition, put=__set_defaultLocalPosition))  defaultLocalPosition;

constexpr void __set_defaultLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_defaultLocalPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation))  defaultLocalRotation;

constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_defaultLocalRotation() const;


// Methods

/// @brief Method StoreDefaultLocalState addr 0x11d39c4 size 0x44 virtual false final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransform addr 0x11d3a08 size 0xe0 virtual false final false
 void FixTransform() ;

/// @brief Method UpdateSolverPosition addr 0x11d3ae8 size 0x2c virtual false final false
 void UpdateSolverPosition() ;

/// @brief Method UpdateSolverLocalPosition addr 0x11d3b14 size 0x2c virtual false final false
 void UpdateSolverLocalPosition() ;

/// @brief Method UpdateSolverState addr 0x11d3b40 size 0x44 virtual false final false
 void UpdateSolverState() ;

/// @brief Method UpdateSolverLocalState addr 0x11d3b84 size 0x44 virtual false final false
 void UpdateSolverLocalState() ;

// Ctor Parameters []
explicit ____RootMotion__FinalIK__IKSolver__Point() ;

/// @brief Method .ctor addr 0x11d3bc8 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Bone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12501))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12502))
// CS Name: RootMotion.FinalIK.IKSolver::Bone
class CORDL_TYPE ____RootMotion__FinalIK__IKSolver__Bone : public ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~____RootMotion__FinalIK__IKSolver__Bone() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__Bone", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__Bone(____RootMotion__FinalIK__IKSolver__Bone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__Bone", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__Bone(____RootMotion__FinalIK__IKSolver__Bone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKSolver__Bone(void* ptr) noexcept : ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point(ptr) {
}


  constexpr ____RootMotion__FinalIK__IKSolver__Bone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__Bone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__Bone& operator=(____RootMotion__FinalIK__IKSolver__Bone&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__IKSolver__Bone& operator=(____RootMotion__FinalIK__IKSolver__Bone const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_sqrMag, put=__set_sqrMag))  sqrMag;

constexpr void __set_sqrMag(float_t value) ;

constexpr float_t __get_sqrMag() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_axis() const;

 ::RootMotion::FinalIK::RotationLimit __declspec(property(get=__get__rotationLimit, put=__set__rotationLimit))  _rotationLimit;

constexpr void __set__rotationLimit(::RootMotion::FinalIK::RotationLimit value) ;

constexpr ::RootMotion::FinalIK::RotationLimit __get__rotationLimit() const;

 bool __declspec(property(get=__get_isLimited, put=__set_isLimited))  isLimited;

constexpr void __set_isLimited(bool value) ;

constexpr bool __get_isLimited() const;


// Properties

 ::RootMotion::FinalIK::RotationLimit __declspec(property(get=get_rotationLimit, put=set_rotationLimit))  rotationLimit;


// Methods

/// @brief Method get_rotationLimit addr 0x11d3c28 size 0xe0 virtual false final false
 ::RootMotion::FinalIK::RotationLimit get_rotationLimit() ;

/// @brief Method set_rotationLimit addr 0x11d3d08 size 0x78 virtual false final false
 void set_rotationLimit(::RootMotion::FinalIK::RotationLimit value) ;

/// @brief Method Swing addr 0x11d3d80 size 0x26c virtual false final false
 void Swing(::UnityEngine::Vector3 swingTarget, float_t weight) ;

/// @brief Method SolverSwing addr 0x11d3fec size 0x2bc virtual false final false
static void SolverSwing(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Bone> bones, int32_t index, ::UnityEngine::Vector3 swingTarget, float_t weight) ;

/// @brief Method Swing2D addr 0x11d42a8 size 0x1f4 virtual false final false
 void Swing2D(::UnityEngine::Vector3 swingTarget, float_t weight) ;

/// @brief Method SetToSolverPosition addr 0x11d449c size 0x28 virtual false final false
 void SetToSolverPosition() ;

// Ctor Parameters []
explicit ____RootMotion__FinalIK__IKSolver__Bone() ;

/// @brief Method .ctor addr 0x11d44c4 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__IKSolver__Bone(::UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x11d4530 size 0x78 virtual false final false
 void _ctor(::UnityEngine::Transform transform) ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__IKSolver__Bone(::UnityEngine::Transform transform, float_t weight) ;

/// @brief Method .ctor addr 0x11d45a8 size 0x88 virtual false final false
 void _ctor(::UnityEngine::Transform transform, float_t weight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Node
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12501))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12503))
// CS Name: RootMotion.FinalIK.IKSolver::Node
class CORDL_TYPE ____RootMotion__FinalIK__IKSolver__Node : public ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~____RootMotion__FinalIK__IKSolver__Node() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__Node", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__Node(____RootMotion__FinalIK__IKSolver__Node const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__Node", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__Node(____RootMotion__FinalIK__IKSolver__Node&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKSolver__Node(void* ptr) noexcept : ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point(ptr) {
}


  constexpr ____RootMotion__FinalIK__IKSolver__Node& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__Node& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__Node& operator=(____RootMotion__FinalIK__IKSolver__Node&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__IKSolver__Node& operator=(____RootMotion__FinalIK__IKSolver__Node const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_effectorPositionWeight, put=__set_effectorPositionWeight))  effectorPositionWeight;

constexpr void __set_effectorPositionWeight(float_t value) ;

constexpr float_t __get_effectorPositionWeight() const;

 float_t __declspec(property(get=__get_effectorRotationWeight, put=__set_effectorRotationWeight))  effectorRotationWeight;

constexpr void __set_effectorRotationWeight(float_t value) ;

constexpr float_t __get_effectorRotationWeight() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_offset() const;


// Methods

// Ctor Parameters []
explicit ____RootMotion__FinalIK__IKSolver__Node() ;

/// @brief Method .ctor addr 0x11d4630 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__IKSolver__Node(::UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x11d4634 size 0x24 virtual false final false
 void _ctor(::UnityEngine::Transform transform) ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__IKSolver__Node(::UnityEngine::Transform transform, float_t weight) ;

/// @brief Method .ctor addr 0x11d4658 size 0x34 virtual false final false
 void _ctor(::UnityEngine::Transform transform, float_t weight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::UpdateDelegate
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12504))
// CS Name: RootMotion.FinalIK.IKSolver::UpdateDelegate
class CORDL_TYPE ____RootMotion__FinalIK__IKSolver__UpdateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____RootMotion__FinalIK__IKSolver__UpdateDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__UpdateDelegate", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__UpdateDelegate(____RootMotion__FinalIK__IKSolver__UpdateDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__UpdateDelegate", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__UpdateDelegate(____RootMotion__FinalIK__IKSolver__UpdateDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKSolver__UpdateDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____RootMotion__FinalIK__IKSolver__UpdateDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__UpdateDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__UpdateDelegate& operator=(____RootMotion__FinalIK__IKSolver__UpdateDelegate&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__IKSolver__UpdateDelegate& operator=(____RootMotion__FinalIK__IKSolver__UpdateDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__IKSolver__UpdateDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x11d468c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x11d4748 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x11d475c size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x11d477c size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::IterationDelegate
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12505))
// CS Name: RootMotion.FinalIK.IKSolver::IterationDelegate
class CORDL_TYPE ____RootMotion__FinalIK__IKSolver__IterationDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____RootMotion__FinalIK__IKSolver__IterationDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__IterationDelegate", modifiers: " const&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__IterationDelegate(____RootMotion__FinalIK__IKSolver__IterationDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____RootMotion__FinalIK__IKSolver__IterationDelegate", modifiers: "&&", def_value: None }]
constexpr ____RootMotion__FinalIK__IKSolver__IterationDelegate(____RootMotion__FinalIK__IKSolver__IterationDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKSolver__IterationDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____RootMotion__FinalIK__IKSolver__IterationDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__IterationDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____RootMotion__FinalIK__IKSolver__IterationDelegate& operator=(____RootMotion__FinalIK__IKSolver__IterationDelegate&& o) noexcept = default;
  constexpr ____RootMotion__FinalIK__IKSolver__IterationDelegate& operator=(____RootMotion__FinalIK__IKSolver__IterationDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____RootMotion__FinalIK__IKSolver__IterationDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x11d4788 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x11d484c size 0x14 virtual true final false
 void Invoke(int32_t i) ;

/// @brief Method BeginInvoke addr 0x11d4860 size 0x84 virtual true final false
 ::System::IAsyncResult BeginInvoke(int32_t i, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x11d48e4 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolver
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12506))
// CS Name: RootMotion.FinalIK.IKSolver
class CORDL_TYPE IKSolver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using IterationDelegate = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__IterationDelegate;

using UpdateDelegate = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate;

using Node = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node;

using Bone = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Bone;

using Point = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~IKSolver() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolver", modifiers: " const&", def_value: None }]
constexpr IKSolver(IKSolver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolver", modifiers: "&&", def_value: None }]
constexpr IKSolver(IKSolver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IKSolver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolver& operator=(IKSolver&& o) noexcept = default;
  constexpr IKSolver& operator=(IKSolver const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_IKPosition, put=__set_IKPosition))  IKPosition;

constexpr void __set_IKPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_IKPosition() const;

 float_t __declspec(property(get=__get_IKPositionWeight, put=__set_IKPositionWeight))  IKPositionWeight;

constexpr void __set_IKPositionWeight(float_t value) ;

constexpr float_t __get_IKPositionWeight() const;

 bool __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField))  _initiated_k__BackingField;

constexpr void __set__initiated_k__BackingField(bool value) ;

constexpr bool __get__initiated_k__BackingField() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPreInitiate, put=__set_OnPreInitiate))  OnPreInitiate;

constexpr void __set_OnPreInitiate(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPreInitiate() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPostInitiate, put=__set_OnPostInitiate))  OnPostInitiate;

constexpr void __set_OnPostInitiate(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPostInitiate() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPreUpdate, put=__set_OnPreUpdate))  OnPreUpdate;

constexpr void __set_OnPreUpdate(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPreUpdate() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPostUpdate, put=__set_OnPostUpdate))  OnPostUpdate;

constexpr void __set_OnPostUpdate(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPostUpdate() const;

 bool __declspec(property(get=__get_firstInitiation, put=__set_firstInitiation))  firstInitiation;

constexpr void __set_firstInitiation(bool value) ;

constexpr bool __get_firstInitiation() const;

 ::UnityEngine::Transform __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_root() const;


// Properties

 bool __declspec(property(get=get_initiated, put=set_initiated))  initiated;


// Methods

/// @brief Method IsValid addr 0x11d3338 size 0x74 virtual false final false
 bool IsValid() ;

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method Initiate addr 0x11d33ac size 0x170 virtual false final false
 void Initiate(::UnityEngine::Transform root) ;

/// @brief Method Update addr 0x11d351c size 0x70 virtual false final false
 void Update() ;

/// @brief Method GetIKPosition addr 0x11d358c size 0xc virtual true final false
 ::UnityEngine::Vector3 GetIKPosition() ;

/// @brief Method SetIKPosition addr 0x11d3598 size 0xc virtual false final false
 void SetIKPosition(::UnityEngine::Vector3 position) ;

/// @brief Method GetIKPositionWeight addr 0x11d35a4 size 0x8 virtual false final false
 float_t GetIKPositionWeight() ;

/// @brief Method SetIKPositionWeight addr 0x11d35ac size 0x1c virtual false final false
 void SetIKPositionWeight(float_t weight) ;

/// @brief Method GetRoot addr 0x11d35c8 size 0x8 virtual false final false
 ::UnityEngine::Transform GetRoot() ;

/// @brief Method get_initiated addr 0x11d35d0 size 0x8 virtual false final false
 bool get_initiated() ;

/// @brief Method set_initiated addr 0x11d35d8 size 0xc virtual false final false
 void set_initiated(bool value) ;

/// @brief Method GetPoints addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x0 size 0xffffffffffffffff virtual true final false
 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point GetPoint(::UnityEngine::Transform transform) ;

/// @brief Method FixTransforms addr 0x0 size 0xffffffffffffffff virtual true final false
 void FixTransforms() ;

/// @brief Method StoreDefaultLocalState addr 0x0 size 0xffffffffffffffff virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method OnInitiate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnUpdate() ;

/// @brief Method LogWarning addr 0x11d35e4 size 0x18 virtual false final false
 void LogWarning(::StringW message) ;

/// @brief Method ContainsDuplicateBone addr 0x11d35fc size 0x124 virtual false final false
static ::UnityEngine::Transform ContainsDuplicateBone(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Bone> bones) ;

/// @brief Method HierarchyIsValid addr 0x11d3720 size 0x98 virtual false final false
static bool HierarchyIsValid(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Bone> bones) ;

/// @brief Method PreSolveBones addr 0x11d37b8 size 0x1f4 virtual false final false
static float_t PreSolveBones(ByRef<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Bone>> bones) ;

// Ctor Parameters []
explicit IKSolver() ;

/// @brief Method .ctor addr 0x11d39ac size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::IKSolver);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolver, "RootMotion.FinalIK", "IKSolver");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Bone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Bone, "RootMotion.FinalIK", "IKSolver/Bone");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__IterationDelegate);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__IterationDelegate, "RootMotion.FinalIK", "IKSolver/IterationDelegate");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Node, "RootMotion.FinalIK", "IKSolver/Node");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__Point, "RootMotion.FinalIK", "IKSolver/Point");
NEED_NO_BOX(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate, "RootMotion.FinalIK", "IKSolver/UpdateDelegate");
