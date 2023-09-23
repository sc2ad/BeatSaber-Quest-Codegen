#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IntSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__NamedIntListSettingsController__TextValuePair;
}
namespace GlobalNamespace {
class NamedIntListSettingsController;
}
// Type: ::TextValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5688))
// CS Name: NamedIntListSettingsController::TextValuePair
class CORDL_TYPE GlobalNamespace__NamedIntListSettingsController__TextValuePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__NamedIntListSettingsController__TextValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NamedIntListSettingsController__TextValuePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NamedIntListSettingsController__TextValuePair(GlobalNamespace__NamedIntListSettingsController__TextValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NamedIntListSettingsController__TextValuePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NamedIntListSettingsController__TextValuePair(GlobalNamespace__NamedIntListSettingsController__TextValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NamedIntListSettingsController__TextValuePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__NamedIntListSettingsController__TextValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NamedIntListSettingsController__TextValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NamedIntListSettingsController__TextValuePair& operator=(GlobalNamespace__NamedIntListSettingsController__TextValuePair&& o) noexcept = default;
  constexpr GlobalNamespace__NamedIntListSettingsController__TextValuePair& operator=(GlobalNamespace__NamedIntListSettingsController__TextValuePair const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;


// Properties

 ::StringW __declspec(property(get=get_localizedText))  localizedText;


// Methods

/// @brief Method get_localizedText addr 0x2153944 size 0xc virtual false final false
 ::StringW get_localizedText() ;

// Ctor Parameters []
explicit GlobalNamespace__NamedIntListSettingsController__TextValuePair() ;

/// @brief Method .ctor addr 0x2153958 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NamedIntListSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5689))
// CS Name: NamedIntListSettingsController
class CORDL_TYPE NamedIntListSettingsController : public GlobalNamespace::ListSettingsController {
public:
// Declarations
using TextValuePair = GlobalNamespace::GlobalNamespace__NamedIntListSettingsController__TextValuePair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NamedIntListSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController", modifiers: " const&", def_value: None }]
constexpr NamedIntListSettingsController(NamedIntListSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedIntListSettingsController", modifiers: "&&", def_value: None }]
constexpr NamedIntListSettingsController(NamedIntListSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamedIntListSettingsController(void* ptr) noexcept : GlobalNamespace::ListSettingsController(ptr) {
}


  constexpr NamedIntListSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamedIntListSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamedIntListSettingsController& operator=(NamedIntListSettingsController&& o) noexcept = default;
  constexpr NamedIntListSettingsController& operator=(NamedIntListSettingsController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IntSO __declspec(property(get=__get__settingsValue, put=__set__settingsValue))  _settingsValue;

constexpr void __set__settingsValue(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get__settingsValue() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__NamedIntListSettingsController__TextValuePair> __declspec(property(get=__get__textValuePairs, put=__set__textValuePairs))  _textValuePairs;

constexpr void __set__textValuePairs(::ArrayW<GlobalNamespace::GlobalNamespace__NamedIntListSettingsController__TextValuePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__NamedIntListSettingsController__TextValuePair> __get__textValuePairs() const;


// Methods

/// @brief Method GetInitValues addr 0x21537c4 size 0xc8 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x215388c size 0x7c virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x2153908 size 0x3c virtual true final false
 ::StringW TextForValue(int32_t idx) ;

// Ctor Parameters []
explicit NamedIntListSettingsController() ;

/// @brief Method .ctor addr 0x2153950 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NamedIntListSettingsController__TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NamedIntListSettingsController__TextValuePair, "", "NamedIntListSettingsController/TextValuePair");
NEED_NO_BOX(GlobalNamespace::NamedIntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedIntListSettingsController, "", "NamedIntListSettingsController");
