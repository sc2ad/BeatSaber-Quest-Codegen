#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class LazyHelper;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Threading {
struct LazyThreadSafetyMode;
}
// Forward declare root types
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
class Lazy_1<T>;
}
// Type: System::Lazy`1
// Type: System::Lazy`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2431))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2431), inst: 2 })
// CS Name: System.Lazy`1
class CORDL_TYPE Lazy_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Lazy_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: " const&", def_value: None }]
constexpr Lazy_1(Lazy_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "&&", def_value: None }]
constexpr Lazy_1(Lazy_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Lazy_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Lazy_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Lazy_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Lazy_1& operator=(Lazy_1&& o) noexcept = default;
  constexpr Lazy_1& operator=(Lazy_1 const& o) noexcept = default;
                


// Fields

 System::LazyHelper __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(System::LazyHelper value) ;

constexpr System::LazyHelper __get__state() const;

 System::Func_1<T> __declspec(property(get=__get__factory, put=__set__factory))  _factory;

constexpr void __set__factory(System::Func_1<T> value) ;

constexpr System::Func_1<T> __get__factory() const;

 T __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(T value) ;

constexpr T __get__value() const;


// Properties

 bool __declspec(property(get=get_IsValueCreated))  IsValueCreated;

 T __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method CreateViaDefaultConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
static T CreateViaDefaultConstructor() ;

static System::Lazy_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static System::Lazy_1<T> New_ctor(System::Func_1<T> valueFactory) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_1<T> valueFactory) ;

static System::Lazy_1<T> New_ctor(System::Func_1<T> valueFactory, System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_1<T> valueFactory, System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) ;

/// @brief Method ViaConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
 void ViaConstructor() ;

/// @brief Method ViaFactory addr 0x0 size 0xffffffffffffffff virtual false final false
 void ViaFactory(System::Threading::LazyThreadSafetyMode mode) ;

/// @brief Method ExecutionAndPublication addr 0x0 size 0xffffffffffffffff virtual false final false
 void ExecutionAndPublication(System::LazyHelper executionAndPublication, bool useDefaultConstructor) ;

/// @brief Method PublicationOnly addr 0x0 size 0xffffffffffffffff virtual false final false
 void PublicationOnly(System::LazyHelper publicationOnly, T possibleValue) ;

/// @brief Method PublicationOnlyViaConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
 void PublicationOnlyViaConstructor(System::LazyHelper initializer) ;

/// @brief Method PublicationOnlyViaFactory addr 0x0 size 0xffffffffffffffff virtual false final false
 void PublicationOnlyViaFactory(System::LazyHelper initializer) ;

/// @brief Method PublicationOnlyWaitForOtherThreadToPublish addr 0x0 size 0xffffffffffffffff virtual false final false
 void PublicationOnlyWaitForOtherThreadToPublish() ;

/// @brief Method CreateValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T CreateValue() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method get_IsValueCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsValueCreated() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Lazy_1, "System", "Lazy`1");
