#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class GameObjectContext;
}
namespace System {
class Type;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewGameObjectInstaller;
}
namespace Zenject {
class Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0;
}
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11198))
// CS Name: Zenject.SubContainerCreatorByNewGameObjectInstaller::<>c__DisplayClass3_0
class CORDL_TYPE Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0(Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0(Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0& operator=(Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0&& o) noexcept = default;
  constexpr Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0& operator=(Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 Zenject::SubContainerCreatorByNewGameObjectInstaller __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::SubContainerCreatorByNewGameObjectInstaller value) ;

constexpr Zenject::SubContainerCreatorByNewGameObjectInstaller __get___4__this() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_args() const;


// Methods

// Ctor Parameters []
explicit Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x2d925c0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x2d92624 size 0x178 virtual false final false
 void _AddInstallers_b__0(Zenject::DiContainer subContainer) ;

/// @brief Method __zenCreate addr 0x2d9279c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d927f8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewGameObjectInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11197))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11199))
// CS Name: Zenject.SubContainerCreatorByNewGameObjectInstaller
class CORDL_TYPE SubContainerCreatorByNewGameObjectInstaller : public Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
public:
// Declarations
using __c__DisplayClass3_0 = Zenject::Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByNewGameObjectInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectInstaller", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewGameObjectInstaller(SubContainerCreatorByNewGameObjectInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectInstaller", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewGameObjectInstaller(SubContainerCreatorByNewGameObjectInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewGameObjectInstaller(void* ptr) noexcept : Zenject::SubContainerCreatorByNewGameObjectDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewGameObjectInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewGameObjectInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewGameObjectInstaller& operator=(SubContainerCreatorByNewGameObjectInstaller&& o) noexcept = default;
  constexpr SubContainerCreatorByNewGameObjectInstaller& operator=(SubContainerCreatorByNewGameObjectInstaller const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__installerType, put=__set__installerType))  _installerType;

constexpr void __set__installerType(System::Type value) ;

constexpr System::Type __get__installerType() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get__extraArgs, put=__set__extraArgs))  _extraArgs;

constexpr void __set__extraArgs(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get__extraArgs() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "installerType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArgs", ty: "System::Collections::Generic::List_1<Zenject::TypeValuePair>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByNewGameObjectInstaller(Zenject::DiContainer container, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Type installerType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method .ctor addr 0x2d923fc size 0xd0 virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Type installerType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method AddInstallers addr 0x2d924cc size 0xf4 virtual true final false
 void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::GameObjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByNewGameObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectInstaller, "Zenject", "SubContainerCreatorByNewGameObjectInstaller");
NEED_NO_BOX(Zenject::Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__SubContainerCreatorByNewGameObjectInstaller____c__DisplayClass3_0, "Zenject", "SubContainerCreatorByNewGameObjectInstaller/<>c__DisplayClass3_0");
