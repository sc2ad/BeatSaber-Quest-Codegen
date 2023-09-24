#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveAndRotateWithMainCamera;
}
// Type: ::MoveAndRotateWithMainCamera
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6002))
// CS Name: MoveAndRotateWithMainCamera
class CORDL_TYPE MoveAndRotateWithMainCamera : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MoveAndRotateWithMainCamera() = default;

// Ctor Parameters [CppParam { name: "", ty: "MoveAndRotateWithMainCamera", modifiers: " const&", def_value: None }]
constexpr MoveAndRotateWithMainCamera(MoveAndRotateWithMainCamera const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MoveAndRotateWithMainCamera", modifiers: "&&", def_value: None }]
constexpr MoveAndRotateWithMainCamera(MoveAndRotateWithMainCamera&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MoveAndRotateWithMainCamera(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MoveAndRotateWithMainCamera& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MoveAndRotateWithMainCamera& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MoveAndRotateWithMainCamera& operator=(MoveAndRotateWithMainCamera&& o) noexcept = default;
  constexpr MoveAndRotateWithMainCamera& operator=(MoveAndRotateWithMainCamera const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainCamera __declspec(property(get=__get__mainCamera, put=__set__mainCamera))  _mainCamera;

constexpr void __set__mainCamera(GlobalNamespace::MainCamera value) ;

constexpr GlobalNamespace::MainCamera __get__mainCamera() const;

 UnityEngine::Quaternion __declspec(property(get=__get__rotationOffset, put=__set__rotationOffset))  _rotationOffset;

constexpr void __set__rotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__rotationOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get__positionOffset, put=__set__positionOffset))  _positionOffset;

constexpr void __set__positionOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__positionOffset() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Awake addr 0x21a3a74 size 0x4c virtual false final false
 void Awake() ;

/// @brief Method LateUpdate addr 0x21a3ac0 size 0xfc virtual false final false
 void LateUpdate() ;

static GlobalNamespace::MoveAndRotateWithMainCamera New_ctor() ;

/// @brief Method .ctor addr 0x21a3bbc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MoveAndRotateWithMainCamera);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MoveAndRotateWithMainCamera, "", "MoveAndRotateWithMainCamera");
