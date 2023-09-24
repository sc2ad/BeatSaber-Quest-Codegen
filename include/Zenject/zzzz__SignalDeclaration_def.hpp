#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Zenject {
class Zenject__ZenjectSettings__SignalSettings;
}
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct SignalMissingHandlerResponses;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class Zenject__SignalDeclaration__Factory;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class Zenject__SignalDeclaration__Factory;
}
// Type: Zenject::SignalDeclaration
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10601))
// CS Name: Zenject.SignalDeclaration
class CORDL_TYPE SignalDeclaration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Factory = Zenject::Zenject__SignalDeclaration__Factory;

/// @brief Convert operator to Zenject::ITickable
constexpr operator  Zenject::ITickable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SignalDeclaration() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclaration", modifiers: " const&", def_value: None }]
constexpr SignalDeclaration(SignalDeclaration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclaration", modifiers: "&&", def_value: None }]
constexpr SignalDeclaration(SignalDeclaration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalDeclaration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalDeclaration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalDeclaration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalDeclaration& operator=(SignalDeclaration&& o) noexcept = default;
  constexpr SignalDeclaration& operator=(SignalDeclaration const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Zenject::SignalSubscription> __declspec(property(get=__get__subscriptions, put=__set__subscriptions))  _subscriptions;

constexpr void __set__subscriptions(System::Collections::Generic::List_1<Zenject::SignalSubscription> value) ;

constexpr System::Collections::Generic::List_1<Zenject::SignalSubscription> __get__subscriptions() const;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__asyncQueue, put=__set__asyncQueue))  _asyncQueue;

constexpr void __set__asyncQueue(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get__asyncQueue() const;

 Zenject::BindingId __declspec(property(get=__get__bindingId, put=__set__bindingId))  _bindingId;

constexpr void __set__bindingId(Zenject::BindingId value) ;

constexpr Zenject::BindingId __get__bindingId() const;

 Zenject::SignalMissingHandlerResponses __declspec(property(get=__get__missingHandlerResponses, put=__set__missingHandlerResponses))  _missingHandlerResponses;

constexpr void __set__missingHandlerResponses(Zenject::SignalMissingHandlerResponses value) ;

constexpr Zenject::SignalMissingHandlerResponses __get__missingHandlerResponses() const;

 bool __declspec(property(get=__get__isAsync, put=__set__isAsync))  _isAsync;

constexpr void __set__isAsync(bool value) ;

constexpr bool __get__isAsync() const;

 Zenject::Zenject__ZenjectSettings__SignalSettings __declspec(property(get=__get__settings, put=__set__settings))  _settings;

constexpr void __set__settings(Zenject::Zenject__ZenjectSettings__SignalSettings value) ;

constexpr Zenject::Zenject__ZenjectSettings__SignalSettings __get__settings() const;

 int32_t __declspec(property(get=__get__TickPriority_k__BackingField, put=__set__TickPriority_k__BackingField))  _TickPriority_k__BackingField;

constexpr void __set__TickPriority_k__BackingField(int32_t value) ;

constexpr int32_t __get__TickPriority_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_TickPriority, put=set_TickPriority))  TickPriority;

 bool __declspec(property(get=get_IsAsync))  IsAsync;

 Zenject::BindingId __declspec(property(get=get_BindingId))  BindingId;


// Methods

static Zenject::SignalDeclaration New_ctor(Zenject::SignalDeclarationBindInfo bindInfo, Zenject::ZenjectSettings zenjectSettings) ;

/// @brief Method .ctor addr 0x2d49380 size 0x188 virtual false final false
 void _ctor(Zenject::SignalDeclarationBindInfo bindInfo, Zenject::ZenjectSettings zenjectSettings) ;

/// @brief Method get_TickPriority addr 0x2d49508 size 0x8 virtual false final false
 int32_t get_TickPriority() ;

/// @brief Method set_TickPriority addr 0x2d49510 size 0x8 virtual false final false
 void set_TickPriority(int32_t value) ;

/// @brief Method get_IsAsync addr 0x2d49518 size 0x8 virtual false final false
 bool get_IsAsync() ;

/// @brief Method get_BindingId addr 0x2d49520 size 0xc virtual false final false
 Zenject::BindingId get_BindingId() ;

/// @brief Method Dispose addr 0x2d4952c size 0x154 virtual true final true
 void Dispose() ;

/// @brief Method Fire addr 0x2d49688 size 0x2dc virtual false final false
 void Fire(::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method FireInternal addr 0x2d49964 size 0x23c virtual false final false
 void FireInternal(System::Collections::Generic::List_1<Zenject::SignalSubscription> subscriptions, ::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method Tick addr 0x2d49bc4 size 0x320 virtual true final true
 void Tick() ;

/// @brief Method Add addr 0x2d49ee4 size 0xdc virtual false final false
 void Add(Zenject::SignalSubscription subscription) ;

/// @brief Method Remove addr 0x2d49fc0 size 0x58 virtual false final false
 void Remove(Zenject::SignalSubscription subscription) ;

/// @brief Method __zenCreate addr 0x2d4a018 size 0x11c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d4a134 size 0x304 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::Factory
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10947)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10947), inst: 3373 }), TypeDefinitionIndex(TypeDefinitionIndex(10596)), TypeDefinitionIndex(TypeDefinitionIndex(10601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10600))
// CS Name: Zenject.SignalDeclaration::Factory
class CORDL_TYPE Zenject__SignalDeclaration__Factory : public Zenject::PlaceholderFactory_2<Zenject::SignalDeclarationBindInfo,Zenject::SignalDeclaration> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__SignalDeclaration__Factory() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalDeclaration__Factory", modifiers: " const&", def_value: None }]
constexpr Zenject__SignalDeclaration__Factory(Zenject__SignalDeclaration__Factory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalDeclaration__Factory", modifiers: "&&", def_value: None }]
constexpr Zenject__SignalDeclaration__Factory(Zenject__SignalDeclaration__Factory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SignalDeclaration__Factory(void* ptr) noexcept : Zenject::PlaceholderFactory_2<Zenject::SignalDeclarationBindInfo,Zenject::SignalDeclaration>(ptr) {
}


  constexpr Zenject__SignalDeclaration__Factory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SignalDeclaration__Factory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SignalDeclaration__Factory& operator=(Zenject__SignalDeclaration__Factory&& o) noexcept = default;
  constexpr Zenject__SignalDeclaration__Factory& operator=(Zenject__SignalDeclaration__Factory const& o) noexcept = default;
                


// Methods

static Zenject::Zenject__SignalDeclaration__Factory New_ctor() ;

/// @brief Method .ctor addr 0x2d4a438 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d4a480 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d4a4d8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalDeclaration);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalDeclaration, "Zenject", "SignalDeclaration");
NEED_NO_BOX(Zenject::Zenject__SignalDeclaration__Factory);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__SignalDeclaration__Factory, "Zenject", "SignalDeclaration/Factory");
