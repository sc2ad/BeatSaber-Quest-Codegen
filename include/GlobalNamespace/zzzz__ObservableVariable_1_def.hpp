#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IObservableChange;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
template<typename T>
class IValue_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ObservableVariable_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ObservableVariable_1<T>;
}
// Type: ::ObservableVariable`1
// Type: ::ObservableVariable`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13903))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13903), inst: 2 })
// CS Name: ObservableVariable`1
class CORDL_TYPE ObservableVariable_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<T>
constexpr operator  GlobalNamespace::IValue_1<T>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ObservableVariable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariable_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariable_1(ObservableVariable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariable_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariable_1(ObservableVariable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObservableVariable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariable_1& operator=(ObservableVariable_1&& o) noexcept = default;
  constexpr ObservableVariable_1& operator=(ObservableVariable_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 T __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(T value) ;

constexpr T __get__value() const;


// Properties

 T __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(T value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static T op_Implicit_T(GlobalNamespace::ObservableVariable_1<T> obj) ;

// Ctor Parameters []
explicit ObservableVariable_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ObservableVariable_1, "", "ObservableVariable`1");
