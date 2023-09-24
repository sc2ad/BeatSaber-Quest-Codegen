#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct DepthTextureMode;
}
// Forward declare root types
namespace GlobalNamespace {
class CameraDepthTextureMode;
}
// Type: ::CameraDepthTextureMode
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13776))
// CS Name: CameraDepthTextureMode
class CORDL_TYPE CameraDepthTextureMode : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CameraDepthTextureMode() = default;

// Ctor Parameters [CppParam { name: "", ty: "CameraDepthTextureMode", modifiers: " const&", def_value: None }]
constexpr CameraDepthTextureMode(CameraDepthTextureMode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CameraDepthTextureMode", modifiers: "&&", def_value: None }]
constexpr CameraDepthTextureMode(CameraDepthTextureMode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CameraDepthTextureMode(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CameraDepthTextureMode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CameraDepthTextureMode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CameraDepthTextureMode& operator=(CameraDepthTextureMode&& o) noexcept = default;
  constexpr CameraDepthTextureMode& operator=(CameraDepthTextureMode const& o) noexcept = default;
                


// Fields

 UnityEngine::DepthTextureMode __declspec(property(get=__get__depthTextureMode, put=__set__depthTextureMode))  _depthTextureMode;

constexpr void __set__depthTextureMode(UnityEngine::DepthTextureMode value) ;

constexpr UnityEngine::DepthTextureMode __get__depthTextureMode() const;


// Methods

/// @brief Method Awake addr 0x1f751bc size 0x5c virtual false final false
 void Awake() ;

static GlobalNamespace::CameraDepthTextureMode New_ctor() ;

/// @brief Method .ctor addr 0x1f75218 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CameraDepthTextureMode);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CameraDepthTextureMode, "", "CameraDepthTextureMode");
