#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace HMUI {
template<typename T>
class IValueChanger_1;
}
// Forward declare root types
namespace HMUI {
template<typename T>
class ValueChangedBinder_1;
}
namespace HMUI {
template<::cordl_internals::il2cpp_reference_type T>
class ValueChangedBinder_1<T>;
}
namespace HMUI {
template<>
class ValueChangedBinder_1<int32_t>;
}
// Type: HMUI::ValueChangedBinder`1
// Type: HMUI::ValueChangedBinder`1
namespace HMUI {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13578))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13578), inst: 2 })
// CS Name: HMUI.ValueChangedBinder`1
class CORDL_TYPE ValueChangedBinder_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ValueChangedBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedBinder_1", modifiers: " const&", def_value: None }]
constexpr ValueChangedBinder_1(ValueChangedBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedBinder_1", modifiers: "&&", def_value: None }]
constexpr ValueChangedBinder_1(ValueChangedBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueChangedBinder_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValueChangedBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueChangedBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueChangedBinder_1& operator=(ValueChangedBinder_1&& o) noexcept = default;
  constexpr ValueChangedBinder_1& operator=(ValueChangedBinder_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> __declspec(property(get=__get__bindings, put=__set__bindings))  _bindings;

constexpr void __set__bindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> value) ;

constexpr System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> __get__bindings() const;


// Methods

// Ctor Parameters []
explicit ValueChangedBinder_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "valueChanger", ty: "HMUI::IValueChanger_1<T>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Action_1<T>", modifiers: "", def_value: None }]
explicit ValueChangedBinder_1(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action) ;

// Ctor Parameters [CppParam { name: "bindingData", ty: "System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>>", modifiers: "", def_value: None }]
explicit ValueChangedBinder_1(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init() ;

/// @brief Method AddBindings addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>,System::Action_1<T>>> bindingData) ;

/// @brief Method AddBinding addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBinding(HMUI::IValueChanger_1<T> valueChanger, System::Action_1<T> action) ;

/// @brief Method ClearBindings addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearBindings() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ValueChangedBinder`1
namespace HMUI {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13578))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13578), inst: 92 })
// CS Name: HMUI.ValueChangedBinder`1
class CORDL_TYPE ValueChangedBinder_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ValueChangedBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedBinder_1", modifiers: " const&", def_value: None }]
constexpr ValueChangedBinder_1(ValueChangedBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueChangedBinder_1", modifiers: "&&", def_value: None }]
constexpr ValueChangedBinder_1(ValueChangedBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueChangedBinder_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValueChangedBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueChangedBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueChangedBinder_1& operator=(ValueChangedBinder_1&& o) noexcept = default;
  constexpr ValueChangedBinder_1& operator=(ValueChangedBinder_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<int32_t>,System::Action_1<int32_t>>> __declspec(property(get=__get__bindings, put=__set__bindings))  _bindings;

constexpr void __set__bindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<int32_t>,System::Action_1<int32_t>>> value) ;

constexpr System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<int32_t>,System::Action_1<int32_t>>> __get__bindings() const;


// Methods

// Ctor Parameters []
explicit ValueChangedBinder_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "valueChanger", ty: "HMUI::IValueChanger_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Action_1<int32_t>", modifiers: "", def_value: None }]
explicit ValueChangedBinder_1(HMUI::IValueChanger_1<int32_t> valueChanger, System::Action_1<int32_t> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(HMUI::IValueChanger_1<int32_t> valueChanger, System::Action_1<int32_t> action) ;

// Ctor Parameters [CppParam { name: "bindingData", ty: "System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<int32_t>,System::Action_1<int32_t>>>", modifiers: "", def_value: None }]
explicit ValueChangedBinder_1(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<int32_t>,System::Action_1<int32_t>>> bindingData) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<int32_t>,System::Action_1<int32_t>>> bindingData) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init() ;

/// @brief Method AddBindings addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<int32_t>,System::Action_1<int32_t>>> bindingData) ;

/// @brief Method AddBinding addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddBinding(HMUI::IValueChanger_1<int32_t> valueChanger, System::Action_1<int32_t> action) ;

/// @brief Method ClearBindings addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearBindings() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::ValueChangedBinder_1, "HMUI", "ValueChangedBinder`1");
