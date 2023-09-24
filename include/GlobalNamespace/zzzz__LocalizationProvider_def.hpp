#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace Polyglot {
class Localization;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizationProvider;
}
// Type: ::LocalizationProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15521))
// CS Name: LocalizationProvider
class CORDL_TYPE LocalizationProvider : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LocalizationProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationProvider", modifiers: " const&", def_value: None }]
constexpr LocalizationProvider(LocalizationProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationProvider", modifiers: "&&", def_value: None }]
constexpr LocalizationProvider(LocalizationProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizationProvider(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr LocalizationProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizationProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizationProvider& operator=(LocalizationProvider&& o) noexcept = default;
  constexpr LocalizationProvider& operator=(LocalizationProvider const& o) noexcept = default;
                


// Fields

 Polyglot::Localization __declspec(property(get=__get__localization, put=__set__localization))  _localization;

constexpr void __set__localization(Polyglot::Localization value) ;

constexpr Polyglot::Localization __get__localization() const;

static GlobalNamespace::LocalizationProvider __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(GlobalNamespace::LocalizationProvider value) ;

static GlobalNamespace::LocalizationProvider __get__instance() ;


// Properties

 Polyglot::Localization __declspec(property(get=get_localization))  localization;

static GlobalNamespace::LocalizationProvider __declspec(property(get=get_Instance, put=set_Instance))  Instance;

static bool __declspec(property(get=get_HasInstance))  HasInstance;


// Methods

/// @brief Method get_localization addr 0x266f394 size 0x8 virtual false final false
 Polyglot::Localization get_localization() ;

/// @brief Method get_Instance addr 0x266f39c size 0x94 virtual false final false
static GlobalNamespace::LocalizationProvider get_Instance() ;

/// @brief Method set_Instance addr 0x266f518 size 0x4c virtual false final false
static void set_Instance(GlobalNamespace::LocalizationProvider value) ;

/// @brief Method get_HasInstance addr 0x266f430 size 0xe8 virtual false final false
static bool get_HasInstance() ;

static GlobalNamespace::LocalizationProvider New_ctor() ;

/// @brief Method .ctor addr 0x266f564 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LocalizationProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizationProvider, "", "LocalizationProvider");
