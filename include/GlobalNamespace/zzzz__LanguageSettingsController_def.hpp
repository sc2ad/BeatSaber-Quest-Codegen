#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__DropdownSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class LanguageSO;
}
// Forward declare root types
namespace GlobalNamespace {
class LanguageSettingsController;
}
// Type: ::LanguageSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5679))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5696))
// CS Name: LanguageSettingsController
class CORDL_TYPE LanguageSettingsController : public ::GlobalNamespace::DropdownSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LanguageSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsController", modifiers: " const&", def_value: None }]
constexpr LanguageSettingsController(LanguageSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsController", modifiers: "&&", def_value: None }]
constexpr LanguageSettingsController(LanguageSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LanguageSettingsController(void* ptr) noexcept : ::GlobalNamespace::DropdownSettingsController(ptr) {
}


  constexpr LanguageSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LanguageSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LanguageSettingsController& operator=(LanguageSettingsController&& o) noexcept = default;
  constexpr LanguageSettingsController& operator=(LanguageSettingsController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LanguageSO __declspec(property(get=__get__settingsValue, put=__set__settingsValue))  _settingsValue;

constexpr void __set__settingsValue(::GlobalNamespace::LanguageSO value) ;

constexpr ::GlobalNamespace::LanguageSO __get__settingsValue() const;


// Methods

/// @brief Method GetInitValues addr 0x2153eb0 size 0xa8 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x2153f58 size 0x90 virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x2153fe8 size 0x64 virtual true final false
 ::StringW TextForValue(int32_t idx) ;

// Ctor Parameters []
explicit LanguageSettingsController() ;

/// @brief Method .ctor addr 0x215404c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LanguageSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSettingsController, "", "LanguageSettingsController");
