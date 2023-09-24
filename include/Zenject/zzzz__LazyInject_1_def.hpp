#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IValidatable;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class LazyInject_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type T>
class LazyInject_1<T>;
}
// Type: Zenject::LazyInject`1
// Type: Zenject::LazyInject`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11059))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11059), inst: 2 })
// CS Name: Zenject.LazyInject`1
class CORDL_TYPE LazyInject_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IValidatable
constexpr operator  Zenject::IValidatable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LazyInject_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyInject_1", modifiers: " const&", def_value: None }]
constexpr LazyInject_1(LazyInject_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyInject_1", modifiers: "&&", def_value: None }]
constexpr LazyInject_1(LazyInject_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyInject_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LazyInject_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyInject_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyInject_1& operator=(LazyInject_1&& o) noexcept = default;
  constexpr LazyInject_1& operator=(LazyInject_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 Zenject::InjectContext __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(Zenject::InjectContext value) ;

constexpr Zenject::InjectContext __get__context() const;

 bool __declspec(property(get=__get__hasValue, put=__set__hasValue))  _hasValue;

constexpr void __set__hasValue(bool value) ;

constexpr bool __get__hasValue() const;

 T __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(T value) ;

constexpr T __get__value() const;


// Properties

 T __declspec(property(get=get_Value))  Value;


// Methods

static Zenject::LazyInject_1<T> New_ctor(Zenject::DiContainer container, Zenject::InjectContext context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::InjectContext context) ;

/// @brief Method Zenject.IValidatable.Validate addr 0x0 size 0xffffffffffffffff virtual true final true
 void Zenject_IValidatable_Validate() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::LazyInject_1, "Zenject", "LazyInject`1");
