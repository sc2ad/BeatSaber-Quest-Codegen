#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListColorController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
template<typename T>
class IValueChanger_1;
}
namespace GlobalNamespace {
class GlobalNamespace__NamedColorListController__ColorValuePair;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__NamedColorListController__ColorValuePair;
}
namespace GlobalNamespace {
class NamedColorListController;
}
// Type: ::ColorValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5530))
// CS Name: NamedColorListController::ColorValuePair
class CORDL_TYPE GlobalNamespace__NamedColorListController__ColorValuePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__NamedColorListController__ColorValuePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NamedColorListController__ColorValuePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NamedColorListController__ColorValuePair(GlobalNamespace__NamedColorListController__ColorValuePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NamedColorListController__ColorValuePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NamedColorListController__ColorValuePair(GlobalNamespace__NamedColorListController__ColorValuePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NamedColorListController__ColorValuePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__NamedColorListController__ColorValuePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NamedColorListController__ColorValuePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NamedColorListController__ColorValuePair& operator=(GlobalNamespace__NamedColorListController__ColorValuePair&& o) noexcept = default;
  constexpr GlobalNamespace__NamedColorListController__ColorValuePair& operator=(GlobalNamespace__NamedColorListController__ColorValuePair const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;


// Methods

static GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair New_ctor() ;

/// @brief Method .ctor addr 0x2126d4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NamedColorListController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5528))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5531))
// CS Name: NamedColorListController
class CORDL_TYPE NamedColorListController : public GlobalNamespace::ListColorController {
public:
// Declarations
using ColorValuePair = GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair;

/// @brief Convert operator to HMUI::IValueChanger_1<int32_t>
constexpr operator  HMUI::IValueChanger_1<int32_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~NamedColorListController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedColorListController", modifiers: " const&", def_value: None }]
constexpr NamedColorListController(NamedColorListController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedColorListController", modifiers: "&&", def_value: None }]
constexpr NamedColorListController(NamedColorListController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamedColorListController(void* ptr) noexcept : GlobalNamespace::ListColorController(ptr) {
}


  constexpr NamedColorListController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamedColorListController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamedColorListController& operator=(NamedColorListController&& o) noexcept = default;
  constexpr NamedColorListController& operator=(NamedColorListController const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair> __declspec(property(get=__get__textValuePairs, put=__set__textValuePairs))  _textValuePairs;

constexpr void __set__textValuePairs(::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair> __get__textValuePairs() const;

 int32_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(int32_t value) ;

constexpr int32_t __get__value() const;

 System::Action_1<int32_t> __declspec(property(get=__get_valueChangedEvent, put=__set_valueChangedEvent))  valueChangedEvent;

constexpr void __set_valueChangedEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_valueChangedEvent() const;


// Methods

/// @brief Method add_valueChangedEvent addr 0x2126aa0 size 0xb0 virtual true final true
 void add_valueChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_valueChangedEvent addr 0x2126b50 size 0xb0 virtual true final true
 void remove_valueChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method Init addr 0x2126c00 size 0x3c virtual false final false
 void Init(::ArrayW<GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair> values, int32_t value) ;

/// @brief Method SetValue addr 0x2126c3c size 0x38 virtual false final false
 void SetValue(int32_t value) ;

/// @brief Method GetInitValues addr 0x2126c74 size 0x74 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x2126ce8 size 0x20 virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method ColorForValue addr 0x2126d08 size 0x3c virtual true final false
 UnityEngine::Color ColorForValue(int32_t idx) ;

static GlobalNamespace::NamedColorListController New_ctor() ;

/// @brief Method .ctor addr 0x2126d44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NamedColorListController__ColorValuePair, "", "NamedColorListController/ColorValuePair");
NEED_NO_BOX(GlobalNamespace::NamedColorListController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedColorListController, "", "NamedColorListController");
