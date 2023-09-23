#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateOnInputFocusCapture;
}
// Type: ::DeactivateOnInputFocusCapture
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13735))
// CS Name: DeactivateOnInputFocusCapture
class CORDL_TYPE DeactivateOnInputFocusCapture : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IVerboseLogger
constexpr operator  GlobalNamespace::IVerboseLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DeactivateOnInputFocusCapture() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateOnInputFocusCapture", modifiers: " const&", def_value: None }]
constexpr DeactivateOnInputFocusCapture(DeactivateOnInputFocusCapture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeactivateOnInputFocusCapture", modifiers: "&&", def_value: None }]
constexpr DeactivateOnInputFocusCapture(DeactivateOnInputFocusCapture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeactivateOnInputFocusCapture(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DeactivateOnInputFocusCapture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeactivateOnInputFocusCapture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeactivateOnInputFocusCapture& operator=(DeactivateOnInputFocusCapture&& o) noexcept = default;
  constexpr DeactivateOnInputFocusCapture& operator=(DeactivateOnInputFocusCapture const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;


// Properties

 ::StringW __declspec(property(get=get_loggerPrefix))  loggerPrefix;


// Methods

/// @brief Method get_loggerPrefix addr 0x1f7075c size 0x40 virtual true final true
 ::StringW get_loggerPrefix() ;

/// @brief Method Init addr 0x1f7079c size 0x8 virtual false final false
 void Init(GlobalNamespace::IVRPlatformHelper vrPlatformHelper) ;

/// @brief Method OnEnable addr 0x1f709bc size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method Setup addr 0x1f707a4 size 0x218 virtual false final false
 void Setup() ;

/// @brief Method OnDestroy addr 0x1f70b64 size 0x1a4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleInputFocusCaptured addr 0x1f70d08 size 0x15c virtual false final false
 void HandleInputFocusCaptured() ;

/// @brief Method HandleInputFocusReleased addr 0x1f70e64 size 0x15c virtual false final false
 void HandleInputFocusReleased() ;

/// @brief Method ActivateGameObject addr 0x1f70fc0 size 0x1a0 virtual false final false
 void ActivateGameObject() ;

/// @brief Method DeactivateGameObject addr 0x1f709c0 size 0x1a4 virtual false final false
 void DeactivateGameObject() ;

// Ctor Parameters []
explicit DeactivateOnInputFocusCapture() ;

/// @brief Method .ctor addr 0x1f71160 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DeactivateOnInputFocusCapture);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeactivateOnInputFocusCapture, "", "DeactivateOnInputFocusCapture");
