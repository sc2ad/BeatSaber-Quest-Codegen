#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class FlexyFollow;
}
// Type: ::FlexyFollow
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13799))
// CS Name: FlexyFollow
class CORDL_TYPE FlexyFollow : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FlexyFollow() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlexyFollow", modifiers: " const&", def_value: None }]
constexpr FlexyFollow(FlexyFollow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlexyFollow", modifiers: "&&", def_value: None }]
constexpr FlexyFollow(FlexyFollow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlexyFollow(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlexyFollow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlexyFollow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlexyFollow& operator=(FlexyFollow&& o) noexcept = default;
  constexpr FlexyFollow& operator=(FlexyFollow const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__followObject, put=__set__followObject))  _followObject;

constexpr void __set__followObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__followObject() const;

 float_t __declspec(property(get=__get__followSpeed, put=__set__followSpeed))  _followSpeed;

constexpr void __set__followSpeed(float_t value) ;

constexpr float_t __get__followSpeed() const;

 UnityEngine::Vector3 __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__offset() const;

 bool __declspec(property(get=__get__fixedXOffset, put=__set__fixedXOffset))  _fixedXOffset;

constexpr void __set__fixedXOffset(bool value) ;

constexpr bool __get__fixedXOffset() const;

 bool __declspec(property(get=__get__fixedYOffset, put=__set__fixedYOffset))  _fixedYOffset;

constexpr void __set__fixedYOffset(bool value) ;

constexpr bool __get__fixedYOffset() const;

 bool __declspec(property(get=__get__fixedZOffset, put=__set__fixedZOffset))  _fixedZOffset;

constexpr void __set__fixedZOffset(bool value) ;

constexpr bool __get__fixedZOffset() const;

 bool __declspec(property(get=__get__useLocalPosition, put=__set__useLocalPosition))  _useLocalPosition;

constexpr void __set__useLocalPosition(bool value) ;

constexpr bool __get__useLocalPosition() const;

 UnityEngine::Transform __declspec(property(get=__get__followTransform, put=__set__followTransform))  _followTransform;

constexpr void __set__followTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__followTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Start addr 0x1f77e18 size 0x84 virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x1f77e9c size 0x13c virtual false final false
 void LateUpdate() ;

static GlobalNamespace::FlexyFollow New_ctor() ;

/// @brief Method .ctor addr 0x1f77fd8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FlexyFollow);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlexyFollow, "", "FlexyFollow");
