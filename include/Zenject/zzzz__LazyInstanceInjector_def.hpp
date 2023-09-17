#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class LazyInstanceInjector;
}
// Type: Zenject::LazyInstanceInjector
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11110))
// CS Name: Zenject.LazyInstanceInjector
class CORDL_TYPE LazyInstanceInjector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LazyInstanceInjector() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyInstanceInjector", modifiers: " const&", def_value: None }]
constexpr LazyInstanceInjector(LazyInstanceInjector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyInstanceInjector", modifiers: "&&", def_value: None }]
constexpr LazyInstanceInjector(LazyInstanceInjector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyInstanceInjector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LazyInstanceInjector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyInstanceInjector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyInstanceInjector& operator=(LazyInstanceInjector&& o) noexcept = default;
  constexpr LazyInstanceInjector& operator=(LazyInstanceInjector const& o) noexcept = default;
                


// Fields

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__instancesToInject, put=__set__instancesToInject))  _instancesToInject;

constexpr void __set__instancesToInject(::System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> __get__instancesToInject() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Instances))  Instances;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }]
explicit LazyInstanceInjector(::Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x2d8ac14 size 0x90 virtual false final false
 void _ctor(::Zenject::DiContainer container) ;

/// @brief Method get_Instances addr 0x2d8aca4 size 0x8 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> get_Instances() ;

/// @brief Method AddInstance addr 0x2d8acac size 0x58 virtual false final false
 void AddInstance(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method AddInstances addr 0x2d8ad04 size 0x58 virtual false final false
 void AddInstances(::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> instances) ;

/// @brief Method LazyInject addr 0x2d8ad5c size 0x7c virtual false final false
 void LazyInject(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method LazyInjectAll addr 0x2d8add8 size 0x21c virtual false final false
 void LazyInjectAll() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::LazyInstanceInjector);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::LazyInstanceInjector, "Zenject", "LazyInstanceInjector");
