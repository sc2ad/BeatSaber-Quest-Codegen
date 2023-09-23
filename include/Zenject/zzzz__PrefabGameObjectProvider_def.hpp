#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class PrefabGameObjectProvider;
}
// Type: Zenject::PrefabGameObjectProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11134))
// CS Name: Zenject.PrefabGameObjectProvider
class CORDL_TYPE PrefabGameObjectProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PrefabGameObjectProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabGameObjectProvider", modifiers: " const&", def_value: None }]
constexpr PrefabGameObjectProvider(PrefabGameObjectProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabGameObjectProvider", modifiers: "&&", def_value: None }]
constexpr PrefabGameObjectProvider(PrefabGameObjectProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabGameObjectProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrefabGameObjectProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabGameObjectProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabGameObjectProvider& operator=(PrefabGameObjectProvider&& o) noexcept = default;
  constexpr PrefabGameObjectProvider& operator=(PrefabGameObjectProvider const& o) noexcept = default;
                


// Fields

 Zenject::IPrefabInstantiator __declspec(property(get=__get__prefabCreator, put=__set__prefabCreator))  _prefabCreator;

constexpr void __set__prefabCreator(Zenject::IPrefabInstantiator value) ;

constexpr Zenject::IPrefabInstantiator __get__prefabCreator() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "prefabCreator", ty: "Zenject::IPrefabInstantiator", modifiers: "", def_value: None }]
explicit PrefabGameObjectProvider(Zenject::IPrefabInstantiator prefabCreator) ;

/// @brief Method .ctor addr 0x2d8e258 size 0x28 virtual false final false
 void _ctor(Zenject::IPrefabInstantiator prefabCreator) ;

/// @brief Method get_IsCached addr 0x2d8e280 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8e288 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d8e290 size 0x6c virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8e2fc size 0x150 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::PrefabGameObjectProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabGameObjectProvider, "Zenject", "PrefabGameObjectProvider");
