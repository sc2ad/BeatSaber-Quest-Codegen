#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class ICommandLineArgsProvider;
}
namespace GlobalNamespace {
class EnvironmentCommandLineArgsProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomizableEnvironmentCommandLineArgsProviderSO;
}
// Type: ::CustomizableEnvironmentCommandLineArgsProviderSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6032))
// CS Name: CustomizableEnvironmentCommandLineArgsProviderSO
class CORDL_TYPE CustomizableEnvironmentCommandLineArgsProviderSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ICommandLineArgsProvider
constexpr operator  ::GlobalNamespace::ICommandLineArgsProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CustomizableEnvironmentCommandLineArgsProviderSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomizableEnvironmentCommandLineArgsProviderSO", modifiers: " const&", def_value: None }]
constexpr CustomizableEnvironmentCommandLineArgsProviderSO(CustomizableEnvironmentCommandLineArgsProviderSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomizableEnvironmentCommandLineArgsProviderSO", modifiers: "&&", def_value: None }]
constexpr CustomizableEnvironmentCommandLineArgsProviderSO(CustomizableEnvironmentCommandLineArgsProviderSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomizableEnvironmentCommandLineArgsProviderSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr CustomizableEnvironmentCommandLineArgsProviderSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomizableEnvironmentCommandLineArgsProviderSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomizableEnvironmentCommandLineArgsProviderSO& operator=(CustomizableEnvironmentCommandLineArgsProviderSO&& o) noexcept = default;
  constexpr CustomizableEnvironmentCommandLineArgsProviderSO& operator=(CustomizableEnvironmentCommandLineArgsProviderSO const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__useCustomCommandLineArgs, put=__set__useCustomCommandLineArgs))  _useCustomCommandLineArgs;

constexpr void __set__useCustomCommandLineArgs(bool value) ;

constexpr bool __get__useCustomCommandLineArgs() const;

 bool __declspec(property(get=__get__useEnvironmentCommandLineArgs, put=__set__useEnvironmentCommandLineArgs))  _useEnvironmentCommandLineArgs;

constexpr void __set__useEnvironmentCommandLineArgs(bool value) ;

constexpr bool __get__useEnvironmentCommandLineArgs() const;

 ::StringW __declspec(property(get=__get__customCommandLineArgs, put=__set__customCommandLineArgs))  _customCommandLineArgs;

constexpr void __set__customCommandLineArgs(::StringW value) ;

constexpr ::StringW __get__customCommandLineArgs() const;

static ::GlobalNamespace::EnvironmentCommandLineArgsProvider __declspec(property(get=__get__environmentCommandLineArgsProvider, put=__set__environmentCommandLineArgsProvider))  _environmentCommandLineArgsProvider;

static void __set__environmentCommandLineArgsProvider(::GlobalNamespace::EnvironmentCommandLineArgsProvider value) ;

static ::GlobalNamespace::EnvironmentCommandLineArgsProvider __get__environmentCommandLineArgsProvider() ;


// Methods

/// @brief Method GetCommandLineArgs addr 0x21a8cc0 size 0x174 virtual true final true
 ::ArrayW<::StringW> GetCommandLineArgs() ;

// Ctor Parameters []
explicit CustomizableEnvironmentCommandLineArgsProviderSO() ;

/// @brief Method .ctor addr 0x21a8e3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO, "", "CustomizableEnvironmentCommandLineArgsProviderSO");
