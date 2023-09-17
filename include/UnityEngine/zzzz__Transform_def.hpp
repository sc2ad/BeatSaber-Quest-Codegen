#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
struct RotationOrder;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class ____UnityEngine__Transform__Enumerator;
}
// Type: ::Enumerator
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10216))
// CS Name: UnityEngine.Transform::Enumerator
class CORDL_TYPE ____UnityEngine__Transform__Enumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__Transform__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Transform__Enumerator", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Transform__Enumerator(____UnityEngine__Transform__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Transform__Enumerator", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Transform__Enumerator(____UnityEngine__Transform__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Transform__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Transform__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Transform__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Transform__Enumerator& operator=(____UnityEngine__Transform__Enumerator&& o) noexcept = default;
  constexpr ____UnityEngine__Transform__Enumerator& operator=(____UnityEngine__Transform__Enumerator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_outer, put=__set_outer))  outer;

constexpr void __set_outer(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_outer() const;

 int32_t __declspec(property(get=__get_currentIndex, put=__set_currentIndex))  currentIndex;

constexpr void __set_currentIndex(int32_t value) ;

constexpr int32_t __get_currentIndex() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ____UnityEngine__Transform__Enumerator(::UnityEngine::Transform outer) ;

/// @brief Method .ctor addr 0x2b6bba0 size 0x30 virtual false final false
 void _ctor(::UnityEngine::Transform outer) ;

/// @brief Method get_Current addr 0x2b6c074 size 0x4c virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x2b6c0c0 size 0x60 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2b6c120 size 0xc virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Transform
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10217))
// CS Name: UnityEngine.Transform
class CORDL_TYPE Transform : public ::UnityEngine::Component {
public:
// Declarations
using Enumerator = ::UnityEngine::____UnityEngine__Transform__Enumerator;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Transform() = default;

// Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: " const&", def_value: None }]
constexpr Transform(Transform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "&&", def_value: None }]
constexpr Transform(Transform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Transform(void* ptr) noexcept : ::UnityEngine::Component(ptr) {
}


  constexpr Transform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Transform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Transform& operator=(Transform&& o) noexcept = default;
  constexpr Transform& operator=(Transform const& o) noexcept = default;
                


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 ::UnityEngine::Vector3 __declspec(property(get=get_localPosition, put=set_localPosition))  localPosition;

 ::UnityEngine::Vector3 __declspec(property(get=get_eulerAngles, put=set_eulerAngles))  eulerAngles;

 ::UnityEngine::Vector3 __declspec(property(get=get_localEulerAngles, put=set_localEulerAngles))  localEulerAngles;

 ::UnityEngine::Vector3 __declspec(property(get=get_right, put=set_right))  right;

 ::UnityEngine::Vector3 __declspec(property(get=get_up, put=set_up))  up;

 ::UnityEngine::Vector3 __declspec(property(get=get_forward, put=set_forward))  forward;

 ::UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 ::UnityEngine::Quaternion __declspec(property(get=get_localRotation, put=set_localRotation))  localRotation;

 ::UnityEngine::RotationOrder __declspec(property(get=get_rotationOrder, put=set_rotationOrder))  rotationOrder;

 ::UnityEngine::Vector3 __declspec(property(get=get_localScale, put=set_localScale))  localScale;

 ::UnityEngine::Transform __declspec(property(get=get_parent, put=set_parent))  parent;

 ::UnityEngine::Transform __declspec(property(get=get_parentInternal, put=set_parentInternal))  parentInternal;

 ::UnityEngine::Matrix4x4 __declspec(property(get=get_worldToLocalMatrix))  worldToLocalMatrix;

 ::UnityEngine::Matrix4x4 __declspec(property(get=get_localToWorldMatrix))  localToWorldMatrix;

 ::UnityEngine::Transform __declspec(property(get=get_root))  root;

 int32_t __declspec(property(get=get_childCount))  childCount;

 ::UnityEngine::Vector3 __declspec(property(get=get_lossyScale))  lossyScale;

 bool __declspec(property(get=get_hasChanged, put=set_hasChanged))  hasChanged;

 int32_t __declspec(property(get=get_hierarchyCapacity, put=set_hierarchyCapacity))  hierarchyCapacity;

 int32_t __declspec(property(get=get_hierarchyCount))  hierarchyCount;

 bool __declspec(property(get=get_constrainProportionsScale, put=set_constrainProportionsScale))  constrainProportionsScale;


// Methods

// Ctor Parameters []
explicit Transform() ;

/// @brief Method .ctor addr 0x2b69770 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_position addr 0x2b69778 size 0x5c virtual false final false
 ::UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2b69818 size 0x54 virtual false final false
 void set_position(::UnityEngine::Vector3 value) ;

/// @brief Method get_localPosition addr 0x2b698b0 size 0x5c virtual false final false
 ::UnityEngine::Vector3 get_localPosition() ;

/// @brief Method set_localPosition addr 0x2b69950 size 0x54 virtual false final false
 void set_localPosition(::UnityEngine::Vector3 value) ;

/// @brief Method GetLocalEulerAngles addr 0x2b699e8 size 0x64 virtual false final false
 ::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder order) ;

/// @brief Method SetLocalEulerAngles addr 0x2b69aa0 size 0x5c virtual false final false
 void SetLocalEulerAngles(::UnityEngine::Vector3 euler, ::UnityEngine::RotationOrder order) ;

/// @brief Method SetLocalEulerHint addr 0x2b69b50 size 0x54 virtual false final false
 void SetLocalEulerHint(::UnityEngine::Vector3 euler) ;

/// @brief Method get_eulerAngles addr 0x2b69be8 size 0x28 virtual false final false
 ::UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method set_eulerAngles addr 0x2b69c68 size 0x2c virtual false final false
 void set_eulerAngles(::UnityEngine::Vector3 value) ;

/// @brief Method get_localEulerAngles addr 0x2b69ce8 size 0x28 virtual false final false
 ::UnityEngine::Vector3 get_localEulerAngles() ;

/// @brief Method set_localEulerAngles addr 0x2b69d68 size 0x2c virtual false final false
 void set_localEulerAngles(::UnityEngine::Vector3 value) ;

/// @brief Method get_right addr 0x2b69de8 size 0x78 virtual false final false
 ::UnityEngine::Vector3 get_right() ;

/// @brief Method set_right addr 0x2b69e60 size 0x80 virtual false final false
 void set_right(::UnityEngine::Vector3 value) ;

/// @brief Method get_up addr 0x2b69ee0 size 0x78 virtual false final false
 ::UnityEngine::Vector3 get_up() ;

/// @brief Method set_up addr 0x2b69f58 size 0x80 virtual false final false
 void set_up(::UnityEngine::Vector3 value) ;

/// @brief Method get_forward addr 0x2b69fd8 size 0x78 virtual false final false
 ::UnityEngine::Vector3 get_forward() ;

/// @brief Method set_forward addr 0x2b6a050 size 0x18 virtual false final false
 void set_forward(::UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x2b69c10 size 0x58 virtual false final false
 ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x2b69c94 size 0x54 virtual false final false
 void set_rotation(::UnityEngine::Quaternion value) ;

/// @brief Method get_localRotation addr 0x2b69d10 size 0x58 virtual false final false
 ::UnityEngine::Quaternion get_localRotation() ;

/// @brief Method set_localRotation addr 0x2b69d94 size 0x54 virtual false final false
 void set_localRotation(::UnityEngine::Quaternion value) ;

/// @brief Method get_rotationOrder addr 0x2b6a178 size 0x3c virtual false final false
 ::UnityEngine::RotationOrder get_rotationOrder() ;

/// @brief Method set_rotationOrder addr 0x2b6a1f0 size 0x44 virtual false final false
 void set_rotationOrder(::UnityEngine::RotationOrder value) ;

/// @brief Method GetRotationOrderInternal addr 0x2b6a1b4 size 0x3c virtual false final false
 int32_t GetRotationOrderInternal() ;

/// @brief Method SetRotationOrderInternal addr 0x2b6a234 size 0x44 virtual false final false
 void SetRotationOrderInternal(::UnityEngine::RotationOrder rotationOrder) ;

/// @brief Method get_localScale addr 0x2b6a278 size 0x5c virtual false final false
 ::UnityEngine::Vector3 get_localScale() ;

/// @brief Method set_localScale addr 0x2b6a318 size 0x54 virtual false final false
 void set_localScale(::UnityEngine::Vector3 value) ;

/// @brief Method get_parent addr 0x2b6a3b0 size 0x3c virtual false final false
 ::UnityEngine::Transform get_parent() ;

/// @brief Method set_parent addr 0x2b6a428 size 0xcc virtual false final false
 void set_parent(::UnityEngine::Transform value) ;

/// @brief Method get_parentInternal addr 0x2b6a3ec size 0x3c virtual false final false
 ::UnityEngine::Transform get_parentInternal() ;

/// @brief Method set_parentInternal addr 0x2b6a4f4 size 0x48 virtual false final false
 void set_parentInternal(::UnityEngine::Transform value) ;

/// @brief Method GetParent addr 0x2b6a53c size 0x3c virtual false final false
 ::UnityEngine::Transform GetParent() ;

/// @brief Method SetParent addr 0x2b6a578 size 0x48 virtual false final false
 void SetParent(::UnityEngine::Transform p) ;

/// @brief Method SetParent addr 0x2b6a5c0 size 0x54 virtual false final false
 void SetParent(::UnityEngine::Transform parent, bool worldPositionStays) ;

/// @brief Method get_worldToLocalMatrix addr 0x2b6a614 size 0x6c virtual false final false
 ::UnityEngine::Matrix4x4 get_worldToLocalMatrix() ;

/// @brief Method get_localToWorldMatrix addr 0x2b6a6c4 size 0x6c virtual false final false
 ::UnityEngine::Matrix4x4 get_localToWorldMatrix() ;

/// @brief Method SetPositionAndRotation addr 0x2b6a774 size 0x60 virtual false final false
 void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) ;

/// @brief Method SetLocalPositionAndRotation addr 0x2b6a828 size 0x60 virtual false final false
 void SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation) ;

/// @brief Method Translate addr 0x2b6a8dc size 0x88 virtual false final false
 void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Space relativeTo) ;

/// @brief Method Translate addr 0x2b6a9cc size 0x8 virtual false final false
 void Translate(::UnityEngine::Vector3 translation) ;

/// @brief Method Translate addr 0x2b6a9d4 size 0x4 virtual false final false
 void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Space relativeTo) ;

/// @brief Method Translate addr 0x2b6a9d8 size 0x8 virtual false final false
 void Translate(float_t x, float_t y, float_t z) ;

/// @brief Method Translate addr 0x2b6a9e0 size 0xe4 virtual false final false
 void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Transform relativeTo) ;

/// @brief Method Translate addr 0x2b6aac4 size 0x4 virtual false final false
 void Translate(float_t x, float_t y, float_t z, ::UnityEngine::Transform relativeTo) ;

/// @brief Method Rotate addr 0x2b6aac8 size 0x280 virtual false final false
 void Rotate(::UnityEngine::Vector3 eulers, ::UnityEngine::Space relativeTo) ;

/// @brief Method Rotate addr 0x2b6ad48 size 0x8 virtual false final false
 void Rotate(::UnityEngine::Vector3 eulers) ;

/// @brief Method Rotate addr 0x2b6ad50 size 0x4 virtual false final false
 void Rotate(float_t xAngle, float_t yAngle, float_t zAngle, ::UnityEngine::Space relativeTo) ;

/// @brief Method Rotate addr 0x2b6ad54 size 0x8 virtual false final false
 void Rotate(float_t xAngle, float_t yAngle, float_t zAngle) ;

/// @brief Method RotateAroundInternal addr 0x2b6ad5c size 0x64 virtual false final false
 void RotateAroundInternal(::UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method Rotate addr 0x2b6ae14 size 0x8c virtual false final false
 void Rotate(::UnityEngine::Vector3 axis, float_t angle, ::UnityEngine::Space relativeTo) ;

/// @brief Method Rotate addr 0x2b6aea0 size 0x8 virtual false final false
 void Rotate(::UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method RotateAround addr 0x2b6aea8 size 0xbc virtual false final false
 void RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method LookAt addr 0x2b6af64 size 0xc0 virtual false final false
 void LookAt(::UnityEngine::Transform target, ::UnityEngine::Vector3 worldUp) ;

/// @brief Method LookAt addr 0x2b6b028 size 0xf8 virtual false final false
 void LookAt(::UnityEngine::Transform target) ;

/// @brief Method LookAt addr 0x2b6b024 size 0x4 virtual false final false
 void LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp) ;

/// @brief Method LookAt addr 0x2b6b180 size 0x7c virtual false final false
 void LookAt(::UnityEngine::Vector3 worldPosition) ;

/// @brief Method Internal_LookAt addr 0x2b6b120 size 0x60 virtual false final false
 void Internal_LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp) ;

/// @brief Method TransformDirection addr 0x2b6a964 size 0x68 virtual false final false
 ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 direction) ;

/// @brief Method TransformDirection addr 0x2b6b2a4 size 0x4 virtual false final false
 ::UnityEngine::Vector3 TransformDirection(float_t x, float_t y, float_t z) ;

/// @brief Method InverseTransformDirection addr 0x2b6b2a8 size 0x68 virtual false final false
 ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 direction) ;

/// @brief Method InverseTransformDirection addr 0x2b6b364 size 0x4 virtual false final false
 ::UnityEngine::Vector3 InverseTransformDirection(float_t x, float_t y, float_t z) ;

/// @brief Method TransformVector addr 0x2b6b368 size 0x68 virtual false final false
 ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vector) ;

/// @brief Method TransformVector addr 0x2b6b424 size 0x4 virtual false final false
 ::UnityEngine::Vector3 TransformVector(float_t x, float_t y, float_t z) ;

/// @brief Method InverseTransformVector addr 0x2b6b428 size 0x68 virtual false final false
 ::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 vector) ;

/// @brief Method InverseTransformVector addr 0x2b6b4e4 size 0x4 virtual false final false
 ::UnityEngine::Vector3 InverseTransformVector(float_t x, float_t y, float_t z) ;

/// @brief Method TransformPoint addr 0x2b6b4e8 size 0x68 virtual false final false
 ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 position) ;

/// @brief Method TransformPoint addr 0x2b6b5a4 size 0x4 virtual false final false
 ::UnityEngine::Vector3 TransformPoint(float_t x, float_t y, float_t z) ;

/// @brief Method InverseTransformPoint addr 0x2b6b5a8 size 0x68 virtual false final false
 ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 position) ;

/// @brief Method InverseTransformPoint addr 0x2b6b664 size 0x4 virtual false final false
 ::UnityEngine::Vector3 InverseTransformPoint(float_t x, float_t y, float_t z) ;

/// @brief Method get_root addr 0x2b6b668 size 0x3c virtual false final false
 ::UnityEngine::Transform get_root() ;

/// @brief Method GetRoot addr 0x2b6b6a4 size 0x3c virtual false final false
 ::UnityEngine::Transform GetRoot() ;

/// @brief Method get_childCount addr 0x2b6b6e0 size 0x3c virtual false final false
 int32_t get_childCount() ;

/// @brief Method DetachChildren addr 0x2b6b71c size 0x3c virtual false final false
 void DetachChildren() ;

/// @brief Method SetAsFirstSibling addr 0x2b6b758 size 0x3c virtual false final false
 void SetAsFirstSibling() ;

/// @brief Method SetAsLastSibling addr 0x2b6b794 size 0x3c virtual false final false
 void SetAsLastSibling() ;

/// @brief Method SetSiblingIndex addr 0x2b6b7d0 size 0x44 virtual false final false
 void SetSiblingIndex(int32_t index) ;

/// @brief Method MoveAfterSibling addr 0x2b6b814 size 0x54 virtual false final false
 void MoveAfterSibling(::UnityEngine::Transform transform, bool notifyEditorAndMarkDirty) ;

/// @brief Method GetSiblingIndex addr 0x2b6b868 size 0x3c virtual false final false
 int32_t GetSiblingIndex() ;

/// @brief Method FindRelativeTransformWithPath addr 0x2b6b8a4 size 0x54 virtual false final false
static ::UnityEngine::Transform FindRelativeTransformWithPath(::UnityEngine::Transform transform, ::StringW path, bool isActiveOnly) ;

/// @brief Method Find addr 0x2b6b8f8 size 0x98 virtual false final false
 ::UnityEngine::Transform Find(::StringW n) ;

/// @brief Method SendTransformChangedScale addr 0x2b6b990 size 0x3c virtual false final false
 void SendTransformChangedScale() ;

/// @brief Method get_lossyScale addr 0x2b6b9cc size 0x5c virtual false final false
 ::UnityEngine::Vector3 get_lossyScale() ;

/// @brief Method IsChildOf addr 0x2b6ba6c size 0x44 virtual false final false
 bool IsChildOf(::UnityEngine::Transform parent) ;

/// @brief Method get_hasChanged addr 0x2b6bab0 size 0x3c virtual false final false
 bool get_hasChanged() ;

/// @brief Method set_hasChanged addr 0x2b6baec size 0x44 virtual false final false
 void set_hasChanged(bool value) ;

/// @brief Method FindChild addr 0x2b6bb30 size 0x4 virtual false final false
 ::UnityEngine::Transform FindChild(::StringW n) ;

/// @brief Method GetEnumerator addr 0x2b6bb34 size 0x6c virtual true final true
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method RotateAround addr 0x2b6bbd0 size 0x64 virtual false final false
 void RotateAround(::UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method RotateAroundLocal addr 0x2b6bc88 size 0x64 virtual false final false
 void RotateAroundLocal(::UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method GetChild addr 0x2b6bd40 size 0x44 virtual false final false
 ::UnityEngine::Transform GetChild(int32_t index) ;

/// @brief Method GetChildCount addr 0x2b6bd84 size 0x3c virtual false final false
 int32_t GetChildCount() ;

/// @brief Method get_hierarchyCapacity addr 0x2b6bdc0 size 0x3c virtual false final false
 int32_t get_hierarchyCapacity() ;

/// @brief Method set_hierarchyCapacity addr 0x2b6be38 size 0x44 virtual false final false
 void set_hierarchyCapacity(int32_t value) ;

/// @brief Method internal_getHierarchyCapacity addr 0x2b6bdfc size 0x3c virtual false final false
 int32_t internal_getHierarchyCapacity() ;

/// @brief Method internal_setHierarchyCapacity addr 0x2b6be7c size 0x44 virtual false final false
 void internal_setHierarchyCapacity(int32_t value) ;

/// @brief Method get_hierarchyCount addr 0x2b6bec0 size 0x3c virtual false final false
 int32_t get_hierarchyCount() ;

/// @brief Method internal_getHierarchyCount addr 0x2b6befc size 0x3c virtual false final false
 int32_t internal_getHierarchyCount() ;

/// @brief Method IsNonUniformScaleTransform addr 0x2b6bf38 size 0x3c virtual false final false
 bool IsNonUniformScaleTransform() ;

/// @brief Method get_constrainProportionsScale addr 0x2b6bf74 size 0x3c virtual false final false
 bool get_constrainProportionsScale() ;

/// @brief Method set_constrainProportionsScale addr 0x2b6bfec size 0x44 virtual false final false
 void set_constrainProportionsScale(bool value) ;

/// @brief Method SetConstrainProportionsScale addr 0x2b6c030 size 0x44 virtual false final false
 void SetConstrainProportionsScale(bool isLinked) ;

/// @brief Method IsConstrainProportionsScale addr 0x2b6bfb0 size 0x3c virtual false final false
 bool IsConstrainProportionsScale() ;

/// @brief Method get_position_Injected addr 0x2b697d4 size 0x44 virtual false final false
 void get_position_Injected(ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method set_position_Injected addr 0x2b6986c size 0x44 virtual false final false
 void set_position_Injected(ByRef<::UnityEngine::Vector3> value) ;

/// @brief Method get_localPosition_Injected addr 0x2b6990c size 0x44 virtual false final false
 void get_localPosition_Injected(ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method set_localPosition_Injected addr 0x2b699a4 size 0x44 virtual false final false
 void set_localPosition_Injected(ByRef<::UnityEngine::Vector3> value) ;

/// @brief Method GetLocalEulerAngles_Injected addr 0x2b69a4c size 0x54 virtual false final false
 void GetLocalEulerAngles_Injected(::UnityEngine::RotationOrder order, ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method SetLocalEulerAngles_Injected addr 0x2b69afc size 0x54 virtual false final false
 void SetLocalEulerAngles_Injected(ByRef<::UnityEngine::Vector3> euler, ::UnityEngine::RotationOrder order) ;

/// @brief Method SetLocalEulerHint_Injected addr 0x2b69ba4 size 0x44 virtual false final false
 void SetLocalEulerHint_Injected(ByRef<::UnityEngine::Vector3> euler) ;

/// @brief Method get_rotation_Injected addr 0x2b6a068 size 0x44 virtual false final false
 void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret) ;

/// @brief Method set_rotation_Injected addr 0x2b6a0ac size 0x44 virtual false final false
 void set_rotation_Injected(ByRef<::UnityEngine::Quaternion> value) ;

/// @brief Method get_localRotation_Injected addr 0x2b6a0f0 size 0x44 virtual false final false
 void get_localRotation_Injected(ByRef<::UnityEngine::Quaternion> ret) ;

/// @brief Method set_localRotation_Injected addr 0x2b6a134 size 0x44 virtual false final false
 void set_localRotation_Injected(ByRef<::UnityEngine::Quaternion> value) ;

/// @brief Method get_localScale_Injected addr 0x2b6a2d4 size 0x44 virtual false final false
 void get_localScale_Injected(ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method set_localScale_Injected addr 0x2b6a36c size 0x44 virtual false final false
 void set_localScale_Injected(ByRef<::UnityEngine::Vector3> value) ;

/// @brief Method get_worldToLocalMatrix_Injected addr 0x2b6a680 size 0x44 virtual false final false
 void get_worldToLocalMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret) ;

/// @brief Method get_localToWorldMatrix_Injected addr 0x2b6a730 size 0x44 virtual false final false
 void get_localToWorldMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret) ;

/// @brief Method SetPositionAndRotation_Injected addr 0x2b6a7d4 size 0x54 virtual false final false
 void SetPositionAndRotation_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation) ;

/// @brief Method SetLocalPositionAndRotation_Injected addr 0x2b6a888 size 0x54 virtual false final false
 void SetLocalPositionAndRotation_Injected(ByRef<::UnityEngine::Vector3> localPosition, ByRef<::UnityEngine::Quaternion> localRotation) ;

/// @brief Method RotateAroundInternal_Injected addr 0x2b6adc0 size 0x54 virtual false final false
 void RotateAroundInternal_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle) ;

/// @brief Method Internal_LookAt_Injected addr 0x2b6b1fc size 0x54 virtual false final false
 void Internal_LookAt_Injected(ByRef<::UnityEngine::Vector3> worldPosition, ByRef<::UnityEngine::Vector3> worldUp) ;

/// @brief Method TransformDirection_Injected addr 0x2b6b250 size 0x54 virtual false final false
 void TransformDirection_Injected(ByRef<::UnityEngine::Vector3> direction, ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method InverseTransformDirection_Injected addr 0x2b6b310 size 0x54 virtual false final false
 void InverseTransformDirection_Injected(ByRef<::UnityEngine::Vector3> direction, ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method TransformVector_Injected addr 0x2b6b3d0 size 0x54 virtual false final false
 void TransformVector_Injected(ByRef<::UnityEngine::Vector3> vector, ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method InverseTransformVector_Injected addr 0x2b6b490 size 0x54 virtual false final false
 void InverseTransformVector_Injected(ByRef<::UnityEngine::Vector3> vector, ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method TransformPoint_Injected addr 0x2b6b550 size 0x54 virtual false final false
 void TransformPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method InverseTransformPoint_Injected addr 0x2b6b610 size 0x54 virtual false final false
 void InverseTransformPoint_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method get_lossyScale_Injected addr 0x2b6ba28 size 0x44 virtual false final false
 void get_lossyScale_Injected(ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method RotateAround_Injected addr 0x2b6bc34 size 0x54 virtual false final false
 void RotateAround_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle) ;

/// @brief Method RotateAroundLocal_Injected addr 0x2b6bcec size 0x54 virtual false final false
 void RotateAroundLocal_Injected(ByRef<::UnityEngine::Vector3> axis, float_t angle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Transform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Transform, "UnityEngine", "Transform");
NEED_NO_BOX(::UnityEngine::____UnityEngine__Transform__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::____UnityEngine__Transform__Enumerator, "UnityEngine", "Transform/Enumerator");
