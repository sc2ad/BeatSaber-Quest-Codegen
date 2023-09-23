#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Zenject {
struct RootResolveMethods;
}
namespace Zenject {
struct ValidationErrorResponses;
}
namespace Zenject {
struct SignalDefaultSyncModes;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct SignalMissingHandlerResponses;
}
// Forward declare root types
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class Zenject__ZenjectSettings__SignalSettings;
}
// Type: ::SignalSettings
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11115))
// CS Name: Zenject.ZenjectSettings::SignalSettings
class CORDL_TYPE Zenject__ZenjectSettings__SignalSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__ZenjectSettings__SignalSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ZenjectSettings__SignalSettings", modifiers: " const&", def_value: None }]
constexpr Zenject__ZenjectSettings__SignalSettings(Zenject__ZenjectSettings__SignalSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ZenjectSettings__SignalSettings", modifiers: "&&", def_value: None }]
constexpr Zenject__ZenjectSettings__SignalSettings(Zenject__ZenjectSettings__SignalSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__ZenjectSettings__SignalSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__ZenjectSettings__SignalSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__ZenjectSettings__SignalSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__ZenjectSettings__SignalSettings& operator=(Zenject__ZenjectSettings__SignalSettings&& o) noexcept = default;
  constexpr Zenject__ZenjectSettings__SignalSettings& operator=(Zenject__ZenjectSettings__SignalSettings const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__ZenjectSettings__SignalSettings __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(Zenject::Zenject__ZenjectSettings__SignalSettings value) ;

static Zenject::Zenject__ZenjectSettings__SignalSettings __get_Default() ;

 Zenject::SignalDefaultSyncModes __declspec(property(get=__get__defaultSyncMode, put=__set__defaultSyncMode))  _defaultSyncMode;

constexpr void __set__defaultSyncMode(Zenject::SignalDefaultSyncModes value) ;

constexpr Zenject::SignalDefaultSyncModes __get__defaultSyncMode() const;

 Zenject::SignalMissingHandlerResponses __declspec(property(get=__get__missingHandlerDefaultResponse, put=__set__missingHandlerDefaultResponse))  _missingHandlerDefaultResponse;

constexpr void __set__missingHandlerDefaultResponse(Zenject::SignalMissingHandlerResponses value) ;

constexpr Zenject::SignalMissingHandlerResponses __get__missingHandlerDefaultResponse() const;

 bool __declspec(property(get=__get__requireStrictUnsubscribe, put=__set__requireStrictUnsubscribe))  _requireStrictUnsubscribe;

constexpr void __set__requireStrictUnsubscribe(bool value) ;

constexpr bool __get__requireStrictUnsubscribe() const;

 int32_t __declspec(property(get=__get__defaultAsyncTickPriority, put=__set__defaultAsyncTickPriority))  _defaultAsyncTickPriority;

constexpr void __set__defaultAsyncTickPriority(int32_t value) ;

constexpr int32_t __get__defaultAsyncTickPriority() const;


// Properties

 int32_t __declspec(property(get=get_DefaultAsyncTickPriority))  DefaultAsyncTickPriority;

 Zenject::SignalDefaultSyncModes __declspec(property(get=get_DefaultSyncMode))  DefaultSyncMode;

 Zenject::SignalMissingHandlerResponses __declspec(property(get=get_MissingHandlerDefaultResponse))  MissingHandlerDefaultResponse;

 bool __declspec(property(get=get_RequireStrictUnsubscribe))  RequireStrictUnsubscribe;


// Methods

// Ctor Parameters [CppParam { name: "defaultSyncMode", ty: "Zenject::SignalDefaultSyncModes", modifiers: "", def_value: None }, CppParam { name: "missingHandlerDefaultResponse", ty: "Zenject::SignalMissingHandlerResponses", modifiers: "", def_value: None }, CppParam { name: "requireStrictUnsubscribe", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "defaultAsyncTickPriority", ty: "int32_t", modifiers: "", def_value: None }]
explicit Zenject__ZenjectSettings__SignalSettings(Zenject::SignalDefaultSyncModes defaultSyncMode, Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse, bool requireStrictUnsubscribe, int32_t defaultAsyncTickPriority) ;

/// @brief Method .ctor addr 0x2d8b148 size 0x44 virtual false final false
 void _ctor(Zenject::SignalDefaultSyncModes defaultSyncMode, Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse, bool requireStrictUnsubscribe, int32_t defaultAsyncTickPriority) ;

// Ctor Parameters []
explicit Zenject__ZenjectSettings__SignalSettings() ;

/// @brief Method .ctor addr 0x2d8b18c size 0x30 virtual false final false
 void _ctor() ;

/// @brief Method get_DefaultAsyncTickPriority addr 0x2d8b1bc size 0x8 virtual false final false
 int32_t get_DefaultAsyncTickPriority() ;

/// @brief Method get_DefaultSyncMode addr 0x2d8b1c4 size 0x8 virtual false final false
 Zenject::SignalDefaultSyncModes get_DefaultSyncMode() ;

/// @brief Method get_MissingHandlerDefaultResponse addr 0x2d8b1cc size 0x8 virtual false final false
 Zenject::SignalMissingHandlerResponses get_MissingHandlerDefaultResponse() ;

/// @brief Method get_RequireStrictUnsubscribe addr 0x2d8b1d4 size 0x8 virtual false final false
 bool get_RequireStrictUnsubscribe() ;

/// @brief Method __zenCreate addr 0x2d8b258 size 0x74 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d8b2cc size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ZenjectSettings
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11116))
// CS Name: Zenject.ZenjectSettings
class CORDL_TYPE ZenjectSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SignalSettings = Zenject::Zenject__ZenjectSettings__SignalSettings;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ZenjectSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectSettings", modifiers: " const&", def_value: None }]
constexpr ZenjectSettings(ZenjectSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectSettings", modifiers: "&&", def_value: None }]
constexpr ZenjectSettings(ZenjectSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ZenjectSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectSettings& operator=(ZenjectSettings&& o) noexcept = default;
  constexpr ZenjectSettings& operator=(ZenjectSettings const& o) noexcept = default;
                


// Fields

static Zenject::ZenjectSettings __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(Zenject::ZenjectSettings value) ;

static Zenject::ZenjectSettings __get_Default() ;

 bool __declspec(property(get=__get__ensureDeterministicDestructionOrderOnApplicationQuit, put=__set__ensureDeterministicDestructionOrderOnApplicationQuit))  _ensureDeterministicDestructionOrderOnApplicationQuit;

constexpr void __set__ensureDeterministicDestructionOrderOnApplicationQuit(bool value) ;

constexpr bool __get__ensureDeterministicDestructionOrderOnApplicationQuit() const;

 bool __declspec(property(get=__get__displayWarningWhenResolvingDuringInstall, put=__set__displayWarningWhenResolvingDuringInstall))  _displayWarningWhenResolvingDuringInstall;

constexpr void __set__displayWarningWhenResolvingDuringInstall(bool value) ;

constexpr bool __get__displayWarningWhenResolvingDuringInstall() const;

 Zenject::RootResolveMethods __declspec(property(get=__get__validationRootResolveMethod, put=__set__validationRootResolveMethod))  _validationRootResolveMethod;

constexpr void __set__validationRootResolveMethod(Zenject::RootResolveMethods value) ;

constexpr Zenject::RootResolveMethods __get__validationRootResolveMethod() const;

 Zenject::ValidationErrorResponses __declspec(property(get=__get__validationErrorResponse, put=__set__validationErrorResponse))  _validationErrorResponse;

constexpr void __set__validationErrorResponse(Zenject::ValidationErrorResponses value) ;

constexpr Zenject::ValidationErrorResponses __get__validationErrorResponse() const;

 Zenject::Zenject__ZenjectSettings__SignalSettings __declspec(property(get=__get__signalSettings, put=__set__signalSettings))  _signalSettings;

constexpr void __set__signalSettings(Zenject::Zenject__ZenjectSettings__SignalSettings value) ;

constexpr Zenject::Zenject__ZenjectSettings__SignalSettings __get__signalSettings() const;


// Properties

 Zenject::Zenject__ZenjectSettings__SignalSettings __declspec(property(get=get_Signals))  Signals;

 Zenject::ValidationErrorResponses __declspec(property(get=get_ValidationErrorResponse))  ValidationErrorResponse;

 Zenject::RootResolveMethods __declspec(property(get=get_ValidationRootResolveMethod))  ValidationRootResolveMethod;

 bool __declspec(property(get=get_DisplayWarningWhenResolvingDuringInstall))  DisplayWarningWhenResolvingDuringInstall;

 bool __declspec(property(get=get_EnsureDeterministicDestructionOrderOnApplicationQuit))  EnsureDeterministicDestructionOrderOnApplicationQuit;


// Methods

// Ctor Parameters [CppParam { name: "validationErrorResponse", ty: "Zenject::ValidationErrorResponses", modifiers: "", def_value: None }, CppParam { name: "validationRootResolveMethod", ty: "Zenject::RootResolveMethods", modifiers: "", def_value: None }, CppParam { name: "displayWarningWhenResolvingDuringInstall", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ensureDeterministicDestructionOrderOnApplicationQuit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "signalSettings", ty: "Zenject::Zenject__ZenjectSettings__SignalSettings", modifiers: "", def_value: None }]
explicit ZenjectSettings(Zenject::ValidationErrorResponses validationErrorResponse, Zenject::RootResolveMethods validationRootResolveMethod, bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit, Zenject::Zenject__ZenjectSettings__SignalSettings signalSettings) ;

/// @brief Method .ctor addr 0x2d8aff4 size 0xa0 virtual false final false
 void _ctor(Zenject::ValidationErrorResponses validationErrorResponse, Zenject::RootResolveMethods validationRootResolveMethod, bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit, Zenject::Zenject__ZenjectSettings__SignalSettings signalSettings) ;

// Ctor Parameters []
explicit ZenjectSettings() ;

/// @brief Method .ctor addr 0x2d8b094 size 0x18 virtual false final false
 void _ctor() ;

/// @brief Method get_Signals addr 0x2d8b0ac size 0x8 virtual false final false
 Zenject::Zenject__ZenjectSettings__SignalSettings get_Signals() ;

/// @brief Method get_ValidationErrorResponse addr 0x2d8b0b4 size 0x8 virtual false final false
 Zenject::ValidationErrorResponses get_ValidationErrorResponse() ;

/// @brief Method get_ValidationRootResolveMethod addr 0x2d8b0bc size 0x8 virtual false final false
 Zenject::RootResolveMethods get_ValidationRootResolveMethod() ;

/// @brief Method get_DisplayWarningWhenResolvingDuringInstall addr 0x2d8b0c4 size 0x8 virtual false final false
 bool get_DisplayWarningWhenResolvingDuringInstall() ;

/// @brief Method get_EnsureDeterministicDestructionOrderOnApplicationQuit addr 0x2d8b0cc size 0x8 virtual false final false
 bool get_EnsureDeterministicDestructionOrderOnApplicationQuit() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenjectSettings);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectSettings, "Zenject", "ZenjectSettings");
NEED_NO_BOX(Zenject::Zenject__ZenjectSettings__SignalSettings);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ZenjectSettings__SignalSettings, "Zenject", "ZenjectSettings/SignalSettings");
