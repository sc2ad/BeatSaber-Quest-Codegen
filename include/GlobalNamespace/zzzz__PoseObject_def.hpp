#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class PoseObjectIdSO;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PoseObject;
}
// Type: ::PoseObject
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6016))
// CS Name: PoseObject
class CORDL_TYPE PoseObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PoseObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoseObject", modifiers: " const&", def_value: None }]
constexpr PoseObject(PoseObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoseObject", modifiers: "&&", def_value: None }]
constexpr PoseObject(PoseObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoseObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PoseObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoseObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoseObject& operator=(PoseObject&& o) noexcept = default;
  constexpr PoseObject& operator=(PoseObject const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 GlobalNamespace::PoseObjectIdSO __declspec(property(get=__get__poseObjectId, put=__set__poseObjectId))  _poseObjectId;

constexpr void __set__poseObjectId(GlobalNamespace::PoseObjectIdSO value) ;

constexpr GlobalNamespace::PoseObjectIdSO __get__poseObjectId() const;


// Properties

 UnityEngine::Transform __declspec(property(get=get_objectTransform))  objectTransform;

 ::StringW __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_objectTransform addr 0x21a64b4 size 0x8 virtual false final false
 UnityEngine::Transform get_objectTransform() ;

/// @brief Method get_id addr 0x21a64bc size 0x1c virtual false final false
 ::StringW get_id() ;

// Ctor Parameters [CppParam { name: "transform", ty: "UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "poseObjectId", ty: "GlobalNamespace::PoseObjectIdSO", modifiers: "", def_value: None }]
explicit PoseObject(UnityEngine::Transform transform, GlobalNamespace::PoseObjectIdSO poseObjectId) ;

/// @brief Method .ctor addr 0x21a4638 size 0x2c virtual false final false
 void _ctor(UnityEngine::Transform transform, GlobalNamespace::PoseObjectIdSO poseObjectId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PoseObject);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PoseObject, "", "PoseObject");
