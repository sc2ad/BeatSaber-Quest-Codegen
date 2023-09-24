#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HMUI {
template<typename T>
class IValueChanger_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class GlobalNamespace__NamedIntListController__TextValuePair;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__NamedIntListController__TextValuePair;
}
namespace GlobalNamespace {
class NamedIntListController;
}
// Type: ::TextValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5532))
// CS Name: NamedIntListController::TextValuePair
class CORDL_TYPE GlobalNamespace__NamedIntListController__TextValuePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__NamedIntListController__TextValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NamedIntListController__TextValuePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NamedIntListController__TextValuePair(GlobalNamespace__NamedIntListController__TextValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NamedIntListController__TextValuePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NamedIntListController__TextValuePair(GlobalNamespace__NamedIntListController__TextValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NamedIntListController__TextValuePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__NamedIntListController__TextValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NamedIntListController__TextValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NamedIntListController__TextValuePair& operator=(GlobalNamespace__NamedIntListController__TextValuePair&& o) noexcept = default;
  constexpr GlobalNamespace__NamedIntListController__TextValuePair& operator=(GlobalNamespace__NamedIntListController__TextValuePair const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_localizationKey, put=__set_localizationKey))  localizationKey;

constexpr void __set_localizationKey(::StringW value) ;

constexpr ::StringW __get_localizationKey() const;

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;


// Properties

 ::StringW __declspec(property(get=get_localizedText))  localizedText;


// Methods

/// @brief Method get_localizedText addr 0x2126fa4 size 0xc virtual false final false
 ::StringW get_localizedText() ;

static GlobalNamespace::GlobalNamespace__NamedIntListController__TextValuePair New_ctor() ;

/// @brief Method .ctor addr 0x2126fb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NamedIntListController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5533))
// CS Name: NamedIntListController
class CORDL_TYPE NamedIntListController : public GlobalNamespace::ListSettingsController {
public:
// Declarations
using TextValuePair = GlobalNamespace::GlobalNamespace__NamedIntListController__TextValuePair;

/// @brief Convert operator to HMUI::IValueChanger_1<int32_t>
constexpr operator  HMUI::IValueChanger_1<int32_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~NamedIntListController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedIntListController", modifiers: " const&", def_value: None }]
constexpr NamedIntListController(NamedIntListController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedIntListController", modifiers: "&&", def_value: None }]
constexpr NamedIntListController(NamedIntListController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamedIntListController(void* ptr) noexcept : GlobalNamespace::ListSettingsController(ptr) {
}


  constexpr NamedIntListController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamedIntListController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamedIntListController& operator=(NamedIntListController&& o) noexcept = default;
  constexpr NamedIntListController& operator=(NamedIntListController const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__NamedIntListController__TextValuePair> __declspec(property(get=__get__textValuePairs, put=__set__textValuePairs))  _textValuePairs;

constexpr void __set__textValuePairs(::ArrayW<GlobalNamespace::GlobalNamespace__NamedIntListController__TextValuePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__NamedIntListController__TextValuePair> __get__textValuePairs() const;

 int32_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(int32_t value) ;

constexpr int32_t __get__value() const;

 System::Action_1<int32_t> __declspec(property(get=__get_valueChangedEvent, put=__set_valueChangedEvent))  valueChangedEvent;

constexpr void __set_valueChangedEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_valueChangedEvent() const;


// Methods

/// @brief Method add_valueChangedEvent addr 0x2126d54 size 0xb0 virtual true final true
 void add_valueChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_valueChangedEvent addr 0x2126e04 size 0xb0 virtual true final true
 void remove_valueChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method InitValues addr 0x2126eb4 size 0x10 virtual false final false
 void InitValues(::ArrayW<GlobalNamespace::GlobalNamespace__NamedIntListController__TextValuePair> values) ;

/// @brief Method SetValue addr 0x2126ec4 size 0x10 virtual false final false
 void SetValue(int32_t value) ;

/// @brief Method GetInitValues addr 0x2126ed4 size 0x74 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x2126f48 size 0x20 virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x2126f68 size 0x3c virtual true final false
 ::StringW TextForValue(int32_t idx) ;

static GlobalNamespace::NamedIntListController New_ctor() ;

/// @brief Method .ctor addr 0x2126fb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NamedIntListController__TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NamedIntListController__TextValuePair, "", "NamedIntListController/TextValuePair");
NEED_NO_BOX(GlobalNamespace::NamedIntListController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedIntListController, "", "NamedIntListController");
