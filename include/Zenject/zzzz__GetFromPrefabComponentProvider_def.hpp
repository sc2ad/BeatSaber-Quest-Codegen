#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
class GetFromPrefabComponentProvider;
}
// Type: Zenject::GetFromPrefabComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11131))
// CS Name: Zenject.GetFromPrefabComponentProvider
class CORDL_TYPE GetFromPrefabComponentProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GetFromPrefabComponentProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "GetFromPrefabComponentProvider", modifiers: " const&", def_value: None }]
constexpr GetFromPrefabComponentProvider(GetFromPrefabComponentProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GetFromPrefabComponentProvider", modifiers: "&&", def_value: None }]
constexpr GetFromPrefabComponentProvider(GetFromPrefabComponentProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GetFromPrefabComponentProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GetFromPrefabComponentProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GetFromPrefabComponentProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GetFromPrefabComponentProvider& operator=(GetFromPrefabComponentProvider&& o) noexcept = default;
  constexpr GetFromPrefabComponentProvider& operator=(GetFromPrefabComponentProvider const& o) noexcept = default;
                


// Fields

 Zenject::IPrefabInstantiator __declspec(property(get=__get__prefabInstantiator, put=__set__prefabInstantiator))  _prefabInstantiator;

constexpr void __set__prefabInstantiator(Zenject::IPrefabInstantiator value) ;

constexpr Zenject::IPrefabInstantiator __get__prefabInstantiator() const;

 System::Type __declspec(property(get=__get__componentType, put=__set__componentType))  _componentType;

constexpr void __set__componentType(System::Type value) ;

constexpr System::Type __get__componentType() const;

 bool __declspec(property(get=__get__matchSingle, put=__set__matchSingle))  _matchSingle;

constexpr void __set__matchSingle(bool value) ;

constexpr bool __get__matchSingle() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

static Zenject::GetFromPrefabComponentProvider New_ctor(System::Type componentType, Zenject::IPrefabInstantiator prefabInstantiator, bool matchSingle) ;

/// @brief Method .ctor addr 0x2d8dba0 size 0x3c virtual false final false
 void _ctor(System::Type componentType, Zenject::IPrefabInstantiator prefabInstantiator, bool matchSingle) ;

/// @brief Method get_IsCached addr 0x2d8dbdc size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8dbe4 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d8dbec size 0x8 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8dbf4 size 0x304 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::GetFromPrefabComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::GetFromPrefabComponentProvider, "Zenject", "GetFromPrefabComponentProvider");
