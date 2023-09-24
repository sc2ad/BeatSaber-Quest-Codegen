#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Coroutine;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class ExtensionMethods;
}
// Type: ::ExtensionMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13794))
// CS Name: ExtensionMethods
class CORDL_TYPE ExtensionMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExtensionMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: " const&", def_value: None }]
constexpr ExtensionMethods(ExtensionMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "&&", def_value: None }]
constexpr ExtensionMethods(ExtensionMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtensionMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExtensionMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtensionMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtensionMethods& operator=(ExtensionMethods&& o) noexcept = default;
  constexpr ExtensionMethods& operator=(ExtensionMethods const& o) noexcept = default;
                


// Methods

/// @brief Method ContainsLayer addr 0x1f76f44 size 0x38 virtual false final false
static bool ContainsLayer(UnityEngine::LayerMask layerMask, int32_t layer) ;

/// @brief Method StartUniqueCoroutine addr 0x1f76f7c size 0x7c virtual false final false
static UnityEngine::Coroutine StartUniqueCoroutine(UnityEngine::MonoBehaviour m, System::Func_1<System::Collections::IEnumerator> func) ;

/// @brief Method StartUniqueCoroutine addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static UnityEngine::Coroutine StartUniqueCoroutine(UnityEngine::MonoBehaviour m, System::Func_2<T,System::Collections::IEnumerator> func, T value) ;

/// @brief Method StopUniqueCoroutine addr 0x1f76ff8 size 0x44 virtual false final false
static void StopUniqueCoroutine(UnityEngine::MonoBehaviour m, System::Func_1<System::Collections::IEnumerator> func) ;

/// @brief Method StopUniqueCoroutine addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void StopUniqueCoroutine(UnityEngine::MonoBehaviour m, System::Func_2<T,System::Collections::IEnumerator> func) ;

/// @brief Method IsDescendantOf addr 0x1f7703c size 0xcc virtual false final false
static bool IsDescendantOf(UnityEngine::Transform transform, UnityEngine::Transform parent) ;

/// @brief Method SetLocalPositionAndRotation addr 0x1f77108 size 0x58 virtual false final false
static void SetLocalPositionAndRotation(UnityEngine::Transform tr, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) ;

/// @brief Method GetPath addr 0x1f77160 size 0x100 virtual false final false
static ::StringW GetPath(UnityEngine::Transform current) ;

/// @brief Method Reflect addr 0x1f77260 size 0x164 virtual false final false
static UnityEngine::Quaternion Reflect(UnityEngine::Quaternion source, UnityEngine::Vector3 normal) ;

/// @brief Method CreateTexture2D addr 0x1f773c4 size 0x148 virtual false final false
static UnityEngine::Texture2D CreateTexture2D(UnityEngine::RenderTexture renderTexture, UnityEngine::TextureFormat textureFormat) ;

/// @brief Method Rotate addr 0x1f7750c size 0x48 virtual false final false
static UnityEngine::Vector2 Rotate(UnityEngine::Vector2 vector, float_t rads) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExtensionMethods, "", "ExtensionMethods");
