#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UI {
class InputField;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Tuple_4;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IObservableChange;
}
// Forward declare root types
namespace HMUI {
template<typename T>
class HMUI__InputFieldDataBinder____c__3_1;
}
namespace HMUI {
template<typename T0,typename T1>
class HMUI__InputFieldDataBinder____c__DisplayClass2_0_2;
}
namespace HMUI {
template<::cordl_internals::il2cpp_reference_type T>
class HMUI__InputFieldDataBinder____c__3_1<T>;
}
namespace HMUI {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
class HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1>;
}
namespace HMUI {
class InputFieldDataBinder;
}
// Type: ::<>c__DisplayClass2_0`2
// Type: ::<>c__3`1
// Type: HMUI::InputFieldDataBinder
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13568))
// CS Name: HMUI.InputFieldDataBinder
class CORDL_TYPE InputFieldDataBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using __c__3_1 = HMUI::HMUI__InputFieldDataBinder____c__3_1<T>;

template<typename T0,typename T1>
using __c__DisplayClass2_0_2 = HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InputFieldDataBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder", modifiers: " const&", def_value: None }]
constexpr InputFieldDataBinder(InputFieldDataBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder", modifiers: "&&", def_value: None }]
constexpr InputFieldDataBinder(InputFieldDataBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputFieldDataBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputFieldDataBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputFieldDataBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputFieldDataBinder& operator=(InputFieldDataBinder&& o) noexcept = default;
  constexpr InputFieldDataBinder& operator=(InputFieldDataBinder const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,GlobalNamespace::IObservableChange,UnityEngine::Events::UnityAction_1<::StringW>,System::Action>> __declspec(property(get=__get__bindings, put=__set__bindings))  _bindings;

constexpr void __set__bindings(System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,GlobalNamespace::IObservableChange,UnityEngine::Events::UnityAction_1<::StringW>,System::Action>> value) ;

constexpr System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,GlobalNamespace::IObservableChange,UnityEngine::Events::UnityAction_1<::StringW>,System::Action>> __get__bindings() const;


// Methods

// Ctor Parameters []
explicit InputFieldDataBinder() ;

/// @brief Method .ctor addr 0x1fa5e64 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method AddBindings addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T0,typename T1>
 void AddBindings(System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField,T0,System::Func_2<::StringW,T1>,System::Func_2<T1,::StringW>>> bindingData) ;

/// @brief Method AddStringBindings addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void AddStringBindings(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::InputField,T>> bindingData) ;

/// @brief Method ClearBindings addr 0x1fa5ee4 size 0x2c4 virtual false final false
 void ClearBindings() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass2_0`2
namespace HMUI {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13566))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13566), inst: 80 })
// CS Name: HMUI.InputFieldDataBinder::<>c__DisplayClass2_0`2
class CORDL_TYPE HMUI__InputFieldDataBinder____c__DisplayClass2_0_2<T0,T1> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__InputFieldDataBinder____c__DisplayClass2_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__InputFieldDataBinder____c__DisplayClass2_0_2", modifiers: " const&", def_value: None }]
constexpr HMUI__InputFieldDataBinder____c__DisplayClass2_0_2(HMUI__InputFieldDataBinder____c__DisplayClass2_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__InputFieldDataBinder____c__DisplayClass2_0_2", modifiers: "&&", def_value: None }]
constexpr HMUI__InputFieldDataBinder____c__DisplayClass2_0_2(HMUI__InputFieldDataBinder____c__DisplayClass2_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__InputFieldDataBinder____c__DisplayClass2_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__InputFieldDataBinder____c__DisplayClass2_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__InputFieldDataBinder____c__DisplayClass2_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__InputFieldDataBinder____c__DisplayClass2_0_2& operator=(HMUI__InputFieldDataBinder____c__DisplayClass2_0_2&& o) noexcept = default;
  constexpr HMUI__InputFieldDataBinder____c__DisplayClass2_0_2& operator=(HMUI__InputFieldDataBinder____c__DisplayClass2_0_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<::StringW,T1> __declspec(property(get=__get_toValueConvertor, put=__set_toValueConvertor))  toValueConvertor;

constexpr void __set_toValueConvertor(System::Func_2<::StringW,T1> value) ;

constexpr System::Func_2<::StringW,T1> __get_toValueConvertor() const;

 T0 __declspec(property(get=__get_valueItem, put=__set_valueItem))  valueItem;

constexpr void __set_valueItem(T0 value) ;

constexpr T0 __get_valueItem() const;

 UnityEngine::UI::InputField __declspec(property(get=__get_inputField, put=__set_inputField))  inputField;

constexpr void __set_inputField(UnityEngine::UI::InputField value) ;

constexpr UnityEngine::UI::InputField __get_inputField() const;

 System::Func_2<T1,::StringW> __declspec(property(get=__get_toStringConvertor, put=__set_toStringConvertor))  toStringConvertor;

constexpr void __set_toStringConvertor(System::Func_2<T1,::StringW> value) ;

constexpr System::Func_2<T1,::StringW> __get_toStringConvertor() const;


// Methods

// Ctor Parameters []
explicit HMUI__InputFieldDataBinder____c__DisplayClass2_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <AddBindings>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _AddBindings_b__0(::StringW value) ;

/// @brief Method <AddBindings>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _AddBindings_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__3`1
namespace HMUI {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13567))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13567), inst: 2 })
// CS Name: HMUI.InputFieldDataBinder::<>c__3`1
class CORDL_TYPE HMUI__InputFieldDataBinder____c__3_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HMUI__InputFieldDataBinder____c__3_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__InputFieldDataBinder____c__3_1", modifiers: " const&", def_value: None }]
constexpr HMUI__InputFieldDataBinder____c__3_1(HMUI__InputFieldDataBinder____c__3_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__InputFieldDataBinder____c__3_1", modifiers: "&&", def_value: None }]
constexpr HMUI__InputFieldDataBinder____c__3_1(HMUI__InputFieldDataBinder____c__3_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__InputFieldDataBinder____c__3_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__InputFieldDataBinder____c__3_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__InputFieldDataBinder____c__3_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__InputFieldDataBinder____c__3_1& operator=(HMUI__InputFieldDataBinder____c__3_1&& o) noexcept = default;
  constexpr HMUI__InputFieldDataBinder____c__3_1& operator=(HMUI__InputFieldDataBinder____c__3_1 const& o) noexcept = default;
                


// Fields

static HMUI::HMUI__InputFieldDataBinder____c__3_1<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HMUI::HMUI__InputFieldDataBinder____c__3_1<T> value) ;

static HMUI::HMUI__InputFieldDataBinder____c__3_1<T> __get___9() ;

static System::Func_2<::StringW,::StringW> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<::StringW,::StringW> value) ;

static System::Func_2<::StringW,::StringW> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit HMUI__InputFieldDataBinder____c__3_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <AddStringBindings>b__3_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW _AddStringBindings_b__3_0(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::HMUI__InputFieldDataBinder____c__3_1, "HMUI", "InputFieldDataBinder/<>c__3`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::HMUI__InputFieldDataBinder____c__DisplayClass2_0_2, "HMUI", "InputFieldDataBinder/<>c__DisplayClass2_0`2");
NEED_NO_BOX(HMUI::InputFieldDataBinder);
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldDataBinder, "HMUI", "InputFieldDataBinder");
