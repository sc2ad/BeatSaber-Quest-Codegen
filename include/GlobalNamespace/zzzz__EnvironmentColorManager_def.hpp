#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class SimpleColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentColorManager;
}
// Type: ::EnvironmentColorManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5920))
// CS Name: EnvironmentColorManager
class CORDL_TYPE EnvironmentColorManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~EnvironmentColorManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorManager", modifiers: " const&", def_value: None }]
constexpr EnvironmentColorManager(EnvironmentColorManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorManager", modifiers: "&&", def_value: None }]
constexpr EnvironmentColorManager(EnvironmentColorManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentColorManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnvironmentColorManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentColorManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentColorManager& operator=(EnvironmentColorManager&& o) noexcept = default;
  constexpr EnvironmentColorManager& operator=(EnvironmentColorManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ColorSchemeSO __declspec(property(get=__get__defaultColorScheme, put=__set__defaultColorScheme))  _defaultColorScheme;

constexpr void __set__defaultColorScheme(::GlobalNamespace::ColorSchemeSO value) ;

constexpr ::GlobalNamespace::ColorSchemeSO __get__defaultColorScheme() const;

 ::GlobalNamespace::SimpleColorSO __declspec(property(get=__get__environmentColor0, put=__set__environmentColor0))  _environmentColor0;

constexpr void __set__environmentColor0(::GlobalNamespace::SimpleColorSO value) ;

constexpr ::GlobalNamespace::SimpleColorSO __get__environmentColor0() const;

 ::GlobalNamespace::SimpleColorSO __declspec(property(get=__get__environmentColor1, put=__set__environmentColor1))  _environmentColor1;

constexpr void __set__environmentColor1(::GlobalNamespace::SimpleColorSO value) ;

constexpr ::GlobalNamespace::SimpleColorSO __get__environmentColor1() const;

 ::GlobalNamespace::SimpleColorSO __declspec(property(get=__get__environmentColor0Boost, put=__set__environmentColor0Boost))  _environmentColor0Boost;

constexpr void __set__environmentColor0Boost(::GlobalNamespace::SimpleColorSO value) ;

constexpr ::GlobalNamespace::SimpleColorSO __get__environmentColor0Boost() const;

 ::GlobalNamespace::SimpleColorSO __declspec(property(get=__get__environmentColor1Boost, put=__set__environmentColor1Boost))  _environmentColor1Boost;

constexpr void __set__environmentColor1Boost(::GlobalNamespace::SimpleColorSO value) ;

constexpr ::GlobalNamespace::SimpleColorSO __get__environmentColor1Boost() const;

 ::GlobalNamespace::ColorScheme __declspec(property(get=__get__colorScheme, put=__set__colorScheme))  _colorScheme;

constexpr void __set__colorScheme(::GlobalNamespace::ColorScheme value) ;

constexpr ::GlobalNamespace::ColorScheme __get__colorScheme() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_environmentColor0))  environmentColor0;

 ::UnityEngine::Color __declspec(property(get=get_environmentColor1))  environmentColor1;

 ::UnityEngine::Color __declspec(property(get=get_environmentColor0Boost))  environmentColor0Boost;

 ::UnityEngine::Color __declspec(property(get=get_environmentColor1Boost))  environmentColor1Boost;


// Methods

/// @brief Method get_environmentColor0 addr 0x2191bf0 size 0x20 virtual false final false
 ::UnityEngine::Color get_environmentColor0() ;

/// @brief Method get_environmentColor1 addr 0x2191c10 size 0x20 virtual false final false
 ::UnityEngine::Color get_environmentColor1() ;

/// @brief Method get_environmentColor0Boost addr 0x2191c30 size 0x54 virtual false final false
 ::UnityEngine::Color get_environmentColor0Boost() ;

/// @brief Method get_environmentColor1Boost addr 0x2191c84 size 0x54 virtual false final false
 ::UnityEngine::Color get_environmentColor1Boost() ;

/// @brief Method Awake addr 0x21923f4 size 0x28 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x219241c size 0x4 virtual false final false
 void Start() ;

/// @brief Method SetColorScheme addr 0x21924dc size 0x8 virtual false final false
 void SetColorScheme(::GlobalNamespace::ColorScheme colorScheme) ;

/// @brief Method InitColors addr 0x2192420 size 0xbc virtual false final false
 void InitColors() ;

// Ctor Parameters []
explicit EnvironmentColorManager() ;

/// @brief Method .ctor addr 0x21924e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentColorManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentColorManager, "", "EnvironmentColorManager");
