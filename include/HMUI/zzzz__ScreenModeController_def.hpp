#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace HMUI {
class CurvedCanvasSettings;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace HMUI {
class ScreenModeData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class ScreenModeController;
}
// Type: HMUI::ScreenModeController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13642))
// CS Name: HMUI.ScreenModeController
class CORDL_TYPE ScreenModeController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ScreenModeController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeController", modifiers: " const&", def_value: None }]
constexpr ScreenModeController(ScreenModeController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeController", modifiers: "&&", def_value: None }]
constexpr ScreenModeController(ScreenModeController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenModeController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScreenModeController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenModeController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenModeController& operator=(ScreenModeController&& o) noexcept = default;
  constexpr ScreenModeController& operator=(ScreenModeController const& o) noexcept = default;
                


// Fields

 ::ArrayW<::HMUI::CurvedCanvasSettings> __declspec(property(get=__get__curvedCanvases, put=__set__curvedCanvases))  _curvedCanvases;

constexpr void __set__curvedCanvases(::ArrayW<::HMUI::CurvedCanvasSettings> value) ;

constexpr ::ArrayW<::HMUI::CurvedCanvasSettings> __get__curvedCanvases() const;

 ::GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 ::HMUI::ScreenModeData __declspec(property(get=__get__defaultModeData, put=__set__defaultModeData))  _defaultModeData;

constexpr void __set__defaultModeData(::HMUI::ScreenModeData value) ;

constexpr ::HMUI::ScreenModeData __get__defaultModeData() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Awake addr 0x1fb895c size 0x144 virtual false final false
 void Awake() ;

/// @brief Method SetMode addr 0x1fb8b38 size 0x214 virtual false final false
 void SetMode(::HMUI::ScreenModeData screenModeData) ;

/// @brief Method SetDefaultMode addr 0x1fb8d4c size 0x8 virtual false final false
 void SetDefaultMode() ;

// Ctor Parameters []
explicit ScreenModeController() ;

/// @brief Method .ctor addr 0x1fb8d54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::ScreenModeController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeController, "HMUI", "ScreenModeController");
