#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector2Int;
}
namespace GlobalNamespace {
class Vector2IntSO;
}
// Forward declare root types
namespace GlobalNamespace {
class WindowResolutionSettingsController;
}
// Type: ::WindowResolutionSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5702))
// CS Name: WindowResolutionSettingsController
class CORDL_TYPE WindowResolutionSettingsController : public GlobalNamespace::ListSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~WindowResolutionSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowResolutionSettingsController", modifiers: " const&", def_value: None }]
constexpr WindowResolutionSettingsController(WindowResolutionSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowResolutionSettingsController", modifiers: "&&", def_value: None }]
constexpr WindowResolutionSettingsController(WindowResolutionSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WindowResolutionSettingsController(void* ptr) noexcept : GlobalNamespace::ListSettingsController(ptr) {
}


  constexpr WindowResolutionSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WindowResolutionSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WindowResolutionSettingsController& operator=(WindowResolutionSettingsController&& o) noexcept = default;
  constexpr WindowResolutionSettingsController& operator=(WindowResolutionSettingsController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Vector2IntSO __declspec(property(get=__get__windowResolution, put=__set__windowResolution))  _windowResolution;

constexpr void __set__windowResolution(GlobalNamespace::Vector2IntSO value) ;

constexpr GlobalNamespace::Vector2IntSO __get__windowResolution() const;

 ::ArrayW<UnityEngine::Vector2Int> __declspec(property(get=__get__windowResolutions, put=__set__windowResolutions))  _windowResolutions;

constexpr void __set__windowResolutions(::ArrayW<UnityEngine::Vector2Int> value) ;

constexpr ::ArrayW<UnityEngine::Vector2Int> __get__windowResolutions() const;


// Methods

/// @brief Method GetInitValues addr 0x2154b74 size 0x214 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x2154d88 size 0x74 virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x2154dfc size 0xcc virtual true final false
 ::StringW TextForValue(int32_t idx) ;

// Ctor Parameters []
explicit WindowResolutionSettingsController() ;

/// @brief Method .ctor addr 0x2154ec8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::WindowResolutionSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WindowResolutionSettingsController, "", "WindowResolutionSettingsController");
