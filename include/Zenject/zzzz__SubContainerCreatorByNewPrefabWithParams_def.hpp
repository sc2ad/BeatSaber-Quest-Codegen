#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Zenject {
class Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace Zenject {
class IPrefabProvider;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class InjectableInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabWithParams;
}
namespace Zenject {
class Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0;
}
// Type: ::<>c__DisplayClass7_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11234))
// CS Name: Zenject.SubContainerCreatorByNewPrefabWithParams::<>c__DisplayClass7_0
class CORDL_TYPE Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0(Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0(Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0& operator=(Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0&& o) noexcept = default;
  constexpr Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0& operator=(Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 Zenject::TypeValuePair __declspec(property(get=__get_argPair, put=__set_argPair))  argPair;

constexpr void __set_argPair(Zenject::TypeValuePair value) ;

constexpr Zenject::TypeValuePair __get_argPair() const;


// Methods

static Zenject::Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0 New_ctor() ;

/// @brief Method .ctor addr 0x2d93a48 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateTempContainer>b__0 addr 0x2d93bfc size 0x70 virtual false final false
 bool _CreateTempContainer_b__0(Zenject::InjectableInfo x) ;

/// @brief Method <CreateTempContainer>b__1 addr 0x2d93c6c size 0x20 virtual false final false
 int32_t _CreateTempContainer_b__1(Zenject::InjectableInfo x) ;

/// @brief Method __zenCreate addr 0x2d93c8c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d93ce8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabWithParams
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11235))
// CS Name: Zenject.SubContainerCreatorByNewPrefabWithParams
class CORDL_TYPE SubContainerCreatorByNewPrefabWithParams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass7_0 = Zenject::Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0;

/// @brief Convert operator to Zenject::ISubContainerCreator
constexpr operator  Zenject::ISubContainerCreator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByNewPrefabWithParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabWithParams", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabWithParams(SubContainerCreatorByNewPrefabWithParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabWithParams", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabWithParams(SubContainerCreatorByNewPrefabWithParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewPrefabWithParams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorByNewPrefabWithParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabWithParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabWithParams& operator=(SubContainerCreatorByNewPrefabWithParams&& o) noexcept = default;
  constexpr SubContainerCreatorByNewPrefabWithParams& operator=(SubContainerCreatorByNewPrefabWithParams const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 Zenject::IPrefabProvider __declspec(property(get=__get__prefabProvider, put=__set__prefabProvider))  _prefabProvider;

constexpr void __set__prefabProvider(Zenject::IPrefabProvider value) ;

constexpr Zenject::IPrefabProvider __get__prefabProvider() const;

 System::Type __declspec(property(get=__get__installerType, put=__set__installerType))  _installerType;

constexpr void __set__installerType(System::Type value) ;

constexpr System::Type __get__installerType() const;

 Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;


// Properties

 Zenject::DiContainer __declspec(property(get=get_Container))  Container;


// Methods

static Zenject::SubContainerCreatorByNewPrefabWithParams New_ctor(System::Type installerType, Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method .ctor addr 0x2d934e0 size 0x40 virtual false final false
 void _ctor(System::Type installerType, Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method get_Container addr 0x2d93520 size 0x8 virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method CreateTempContainer addr 0x2d93528 size 0x49c virtual false final false
 Zenject::DiContainer CreateTempContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args) ;

/// @brief Method CreateSubContainer addr 0x2d93a50 size 0x1ac virtual true final true
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext parentContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByNewPrefabWithParams);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefabWithParams, "Zenject", "SubContainerCreatorByNewPrefabWithParams");
NEED_NO_BOX(Zenject::Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__SubContainerCreatorByNewPrefabWithParams____c__DisplayClass7_0, "Zenject", "SubContainerCreatorByNewPrefabWithParams/<>c__DisplayClass7_0");
