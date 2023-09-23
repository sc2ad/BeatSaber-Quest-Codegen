#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class TickableManager;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
template<typename T>
class LazyInject_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class SignalDeclaration;
}
// Forward declare root types
namespace Zenject {
class SignalDeclarationAsyncInitializer;
}
// Type: Zenject::SignalDeclarationAsyncInitializer
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10610))
// CS Name: Zenject.SignalDeclarationAsyncInitializer
class CORDL_TYPE SignalDeclarationAsyncInitializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IInitializable
constexpr operator  Zenject::IInitializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SignalDeclarationAsyncInitializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationAsyncInitializer", modifiers: " const&", def_value: None }]
constexpr SignalDeclarationAsyncInitializer(SignalDeclarationAsyncInitializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationAsyncInitializer", modifiers: "&&", def_value: None }]
constexpr SignalDeclarationAsyncInitializer(SignalDeclarationAsyncInitializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalDeclarationAsyncInitializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalDeclarationAsyncInitializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalDeclarationAsyncInitializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalDeclarationAsyncInitializer& operator=(SignalDeclarationAsyncInitializer&& o) noexcept = default;
  constexpr SignalDeclarationAsyncInitializer& operator=(SignalDeclarationAsyncInitializer const& o) noexcept = default;
                


// Fields

 Zenject::LazyInject_1<Zenject::TickableManager> __declspec(property(get=__get__tickManager, put=__set__tickManager))  _tickManager;

constexpr void __set__tickManager(Zenject::LazyInject_1<Zenject::TickableManager> value) ;

constexpr Zenject::LazyInject_1<Zenject::TickableManager> __get__tickManager() const;

 System::Collections::Generic::List_1<Zenject::SignalDeclaration> __declspec(property(get=__get__declarations, put=__set__declarations))  _declarations;

constexpr void __set__declarations(System::Collections::Generic::List_1<Zenject::SignalDeclaration> value) ;

constexpr System::Collections::Generic::List_1<Zenject::SignalDeclaration> __get__declarations() const;


// Methods

// Ctor Parameters [CppParam { name: "declarations", ty: "System::Collections::Generic::List_1<Zenject::SignalDeclaration>", modifiers: "", def_value: None }, CppParam { name: "tickManager", ty: "Zenject::LazyInject_1<Zenject::TickableManager>", modifiers: "", def_value: None }]
explicit SignalDeclarationAsyncInitializer(System::Collections::Generic::List_1<Zenject::SignalDeclaration> declarations, Zenject::LazyInject_1<Zenject::TickableManager> tickManager) ;

/// @brief Method .ctor addr 0x2d4cce8 size 0x2c virtual false final false
 void _ctor(System::Collections::Generic::List_1<Zenject::SignalDeclaration> declarations, Zenject::LazyInject_1<Zenject::TickableManager> tickManager) ;

/// @brief Method Initialize addr 0x2d4cd14 size 0x104 virtual true final true
 void Initialize() ;

/// @brief Method __zenCreate addr 0x2d4ce18 size 0x11c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d4cf34 size 0x304 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalDeclarationAsyncInitializer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalDeclarationAsyncInitializer, "Zenject", "SignalDeclarationAsyncInitializer");
