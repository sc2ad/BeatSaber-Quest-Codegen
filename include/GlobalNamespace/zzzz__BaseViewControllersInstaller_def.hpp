#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseViewControllersInstaller;
}
// Type: ::BaseViewControllersInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5474))
// CS Name: BaseViewControllersInstaller
class CORDL_TYPE BaseViewControllersInstaller : public Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BaseViewControllersInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseViewControllersInstaller", modifiers: " const&", def_value: None }]
constexpr BaseViewControllersInstaller(BaseViewControllersInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseViewControllersInstaller", modifiers: "&&", def_value: None }]
constexpr BaseViewControllersInstaller(BaseViewControllersInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseViewControllersInstaller(void* ptr) noexcept : Zenject::ScriptableObjectInstaller(ptr) {
}


  constexpr BaseViewControllersInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseViewControllersInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseViewControllersInstaller& operator=(BaseViewControllersInstaller&& o) noexcept = default;
  constexpr BaseViewControllersInstaller& operator=(BaseViewControllersInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SimpleDialogPromptViewController __declspec(property(get=__get__simpleDialogPromptViewControllerPrefab, put=__set__simpleDialogPromptViewControllerPrefab))  _simpleDialogPromptViewControllerPrefab;

constexpr void __set__simpleDialogPromptViewControllerPrefab(GlobalNamespace::SimpleDialogPromptViewController value) ;

constexpr GlobalNamespace::SimpleDialogPromptViewController __get__simpleDialogPromptViewControllerPrefab() const;

 GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController __declspec(property(get=__get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab, put=__set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab))  _safeAreaFocusedSimpleDialogPromptViewControllerPrefab;

constexpr void __set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab(GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController value) ;

constexpr GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController __get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x2117190 size 0xac virtual true final false
 void InstallBindings() ;

static GlobalNamespace::BaseViewControllersInstaller New_ctor() ;

/// @brief Method .ctor addr 0x211723c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BaseViewControllersInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseViewControllersInstaller, "", "BaseViewControllersInstaller");
