#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IPrefabProvider;
}
namespace System {
class Type;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabInstaller;
}
namespace Zenject {
class Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0;
}
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11217))
// CS Name: Zenject.SubContainerCreatorByNewPrefabInstaller::<>c__DisplayClass3_0
class CORDL_TYPE Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0(Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0(Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0& operator=(Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0&& o) noexcept = default;
  constexpr Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0& operator=(Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 Zenject::SubContainerCreatorByNewPrefabInstaller __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::SubContainerCreatorByNewPrefabInstaller value) ;

constexpr Zenject::SubContainerCreatorByNewPrefabInstaller __get___4__this() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_args() const;


// Methods

// Ctor Parameters []
explicit Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x2d93050 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x2d93058 size 0x178 virtual false final false
 void _AddInstallers_b__0(Zenject::DiContainer subContainer) ;

/// @brief Method __zenCreate addr 0x2d931d0 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9322c size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11216))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11218))
// CS Name: Zenject.SubContainerCreatorByNewPrefabInstaller
class CORDL_TYPE SubContainerCreatorByNewPrefabInstaller : public Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
// Declarations
using __c__DisplayClass3_0 = Zenject::Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SubContainerCreatorByNewPrefabInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabInstaller", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabInstaller(SubContainerCreatorByNewPrefabInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabInstaller", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabInstaller(SubContainerCreatorByNewPrefabInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewPrefabInstaller(void* ptr) noexcept : Zenject::SubContainerCreatorByNewPrefabDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewPrefabInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabInstaller& operator=(SubContainerCreatorByNewPrefabInstaller&& o) noexcept = default;
  constexpr SubContainerCreatorByNewPrefabInstaller& operator=(SubContainerCreatorByNewPrefabInstaller const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__installerType, put=__set__installerType))  _installerType;

constexpr void __set__installerType(System::Type value) ;

constexpr System::Type __get__installerType() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get__extraArgs, put=__set__extraArgs))  _extraArgs;

constexpr void __set__extraArgs(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get__extraArgs() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "prefabProvider", ty: "Zenject::IPrefabProvider", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "installerType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArgs", ty: "System::Collections::Generic::List_1<Zenject::TypeValuePair>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByNewPrefabInstaller(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Type installerType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method .ctor addr 0x2d92e84 size 0xd8 virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Type installerType, System::Collections::Generic::List_1<Zenject::TypeValuePair> extraArgs) ;

/// @brief Method AddInstallers addr 0x2d92f5c size 0xf4 virtual true final false
 void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::GameObjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByNewPrefabInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefabInstaller, "Zenject", "SubContainerCreatorByNewPrefabInstaller");
NEED_NO_BOX(Zenject::Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0, "Zenject", "SubContainerCreatorByNewPrefabInstaller/<>c__DisplayClass3_0");
