#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class ActivateOnPlatform;
}
// Type: ::ActivateOnPlatform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13732))
// CS Name: ActivateOnPlatform
class CORDL_TYPE ActivateOnPlatform : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ActivateOnPlatform() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivateOnPlatform", modifiers: " const&", def_value: None }]
constexpr ActivateOnPlatform(ActivateOnPlatform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActivateOnPlatform", modifiers: "&&", def_value: None }]
constexpr ActivateOnPlatform(ActivateOnPlatform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActivateOnPlatform(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ActivateOnPlatform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActivateOnPlatform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActivateOnPlatform& operator=(ActivateOnPlatform&& o) noexcept = default;
  constexpr ActivateOnPlatform& operator=(ActivateOnPlatform const& o) noexcept = default;
                


// Fields

 GlobalNamespace::VRPlatformSDK __declspec(property(get=__get__vrPlatformSdk, put=__set__vrPlatformSdk))  _vrPlatformSdk;

constexpr void __set__vrPlatformSdk(GlobalNamespace::VRPlatformSDK value) ;

constexpr GlobalNamespace::VRPlatformSDK __get__vrPlatformSdk() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;


// Methods

/// @brief Method Awake addr 0x1f701dc size 0xd0 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit ActivateOnPlatform() ;

/// @brief Method .ctor addr 0x1f702ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ActivateOnPlatform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ActivateOnPlatform, "", "ActivateOnPlatform");
