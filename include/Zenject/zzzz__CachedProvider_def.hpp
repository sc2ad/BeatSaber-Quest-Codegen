#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Type;
}
namespace System {
class Action;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
class CachedProvider;
}
// Type: Zenject::CachedProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11121))
// CS Name: Zenject.CachedProvider
class CORDL_TYPE CachedProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CachedProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedProvider", modifiers: " const&", def_value: None }]
constexpr CachedProvider(CachedProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedProvider", modifiers: "&&", def_value: None }]
constexpr CachedProvider(CachedProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CachedProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CachedProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CachedProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CachedProvider& operator=(CachedProvider&& o) noexcept = default;
  constexpr CachedProvider& operator=(CachedProvider const& o) noexcept = default;
                


// Fields

 Zenject::IProvider __declspec(property(get=__get__creator, put=__set__creator))  _creator;

constexpr void __set__creator(Zenject::IProvider value) ;

constexpr Zenject::IProvider __get__creator() const;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__instances, put=__set__instances))  _instances;

constexpr void __set__instances(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get__instances() const;

 bool __declspec(property(get=__get__isCreatingInstance, put=__set__isCreatingInstance))  _isCreatingInstance;

constexpr void __set__isCreatingInstance(bool value) ;

constexpr bool __get__isCreatingInstance() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;

 int32_t __declspec(property(get=get_NumInstances))  NumInstances;


// Methods

static Zenject::CachedProvider New_ctor(Zenject::IProvider creator) ;

/// @brief Method .ctor addr 0x2d8bd98 size 0x28 virtual false final false
 void _ctor(Zenject::IProvider creator) ;

/// @brief Method get_IsCached addr 0x2d8c370 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8c378 size 0x28 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method get_NumInstances addr 0x2d8c108 size 0x4c virtual false final false
 int32_t get_NumInstances() ;

/// @brief Method ClearCache addr 0x2d8c3a0 size 0x8 virtual false final false
 void ClearCache() ;

/// @brief Method GetInstanceType addr 0x2d8c3a8 size 0xac virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8bdc0 size 0x288 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::CachedProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::CachedProvider, "Zenject", "CachedProvider");
