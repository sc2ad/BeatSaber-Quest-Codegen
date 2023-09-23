#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class NamedPresetsSO;
}
namespace GlobalNamespace {
class IntSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PresetsSettingsController;
}
// Type: ::PresetsSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5690))
// CS Name: PresetsSettingsController
class CORDL_TYPE PresetsSettingsController : public GlobalNamespace::ListSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PresetsSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PresetsSettingsController", modifiers: " const&", def_value: None }]
constexpr PresetsSettingsController(PresetsSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PresetsSettingsController", modifiers: "&&", def_value: None }]
constexpr PresetsSettingsController(PresetsSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PresetsSettingsController(void* ptr) noexcept : GlobalNamespace::ListSettingsController(ptr) {
}


  constexpr PresetsSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PresetsSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PresetsSettingsController& operator=(PresetsSettingsController&& o) noexcept = default;
  constexpr PresetsSettingsController& operator=(PresetsSettingsController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IntSO __declspec(property(get=__get__settingsValue, put=__set__settingsValue))  _settingsValue;

constexpr void __set__settingsValue(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get__settingsValue() const;

 GlobalNamespace::NamedPresetsSO __declspec(property(get=__get__presets, put=__set__presets))  _presets;

constexpr void __set__presets(GlobalNamespace::NamedPresetsSO value) ;

constexpr GlobalNamespace::NamedPresetsSO __get__presets() const;

 bool __declspec(property(get=__get__limitNumberOfElements, put=__set__limitNumberOfElements))  _limitNumberOfElements;

constexpr void __set__limitNumberOfElements(bool value) ;

constexpr bool __get__limitNumberOfElements() const;

 int32_t __declspec(property(get=__get__numberOfElementsLimit, put=__set__numberOfElementsLimit))  _numberOfElementsLimit;

constexpr void __set__numberOfElementsLimit(int32_t value) ;

constexpr int32_t __get__numberOfElementsLimit() const;


// Methods

/// @brief Method GetInitValues addr 0x2153960 size 0xd8 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x2153a38 size 0x58 virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x2153a90 size 0x50 virtual true final false
 ::StringW TextForValue(int32_t idx) ;

// Ctor Parameters []
explicit PresetsSettingsController() ;

/// @brief Method .ctor addr 0x2153ae0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PresetsSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PresetsSettingsController, "", "PresetsSettingsController");
