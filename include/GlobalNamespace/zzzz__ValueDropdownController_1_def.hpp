#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace System {
struct Int32Enum;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ValueDropdownController_1;
}
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__ValueDropdownController_1____c;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ValueDropdownController_1<T>;
}
namespace GlobalNamespace {
template<>
class ValueDropdownController_1<::System::Int32Enum>;
}
namespace GlobalNamespace {
template<>
class ValueDropdownController_1<float_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__ValueDropdownController_1____c<T>;
}
namespace GlobalNamespace {
template<>
class ____GlobalNamespace__ValueDropdownController_1____c<::System::Int32Enum>;
}
namespace GlobalNamespace {
template<>
class ____GlobalNamespace__ValueDropdownController_1____c<float_t>;
}
// Type: ::<>c
// Type: ::ValueDropdownController`1
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5693))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5693), inst: 2 })
// CS Name: ValueDropdownController`1::<>c
class CORDL_TYPE ____GlobalNamespace__ValueDropdownController_1____c<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__ValueDropdownController_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ValueDropdownController_1____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ValueDropdownController_1____c(____GlobalNamespace__ValueDropdownController_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ValueDropdownController_1____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ValueDropdownController_1____c(____GlobalNamespace__ValueDropdownController_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ValueDropdownController_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(____GlobalNamespace__ValueDropdownController_1____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(____GlobalNamespace__ValueDropdownController_1____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<T> value) ;

static ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<T> __get___9() ;

static ::System::Func_2<::System::Tuple_2<T,::StringW>,::StringW> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(::System::Func_2<::System::Tuple_2<T,::StringW>,::StringW> value) ;

static ::System::Func_2<::System::Tuple_2<T,::StringW>,::StringW> __get___9__7_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__ValueDropdownController_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__7_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW _Start_b__7_0(::System::Tuple_2<T,::StringW> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5693))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5693), inst: 374 })
// CS Name: ValueDropdownController`1::<>c
class CORDL_TYPE ____GlobalNamespace__ValueDropdownController_1____c<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__ValueDropdownController_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ValueDropdownController_1____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ValueDropdownController_1____c(____GlobalNamespace__ValueDropdownController_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ValueDropdownController_1____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ValueDropdownController_1____c(____GlobalNamespace__ValueDropdownController_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ValueDropdownController_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(____GlobalNamespace__ValueDropdownController_1____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(____GlobalNamespace__ValueDropdownController_1____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<float_t> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<float_t> value) ;

static ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<float_t> __get___9() ;

static ::System::Func_2<::System::Tuple_2<float_t,::StringW>,::StringW> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(::System::Func_2<::System::Tuple_2<float_t,::StringW>,::StringW> value) ;

static ::System::Func_2<::System::Tuple_2<float_t,::StringW>,::StringW> __get___9__7_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__ValueDropdownController_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__7_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW _Start_b__7_0(::System::Tuple_2<float_t,::StringW> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5693))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5693), inst: 4825 })
// CS Name: ValueDropdownController`1::<>c
class CORDL_TYPE ____GlobalNamespace__ValueDropdownController_1____c<::System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__ValueDropdownController_1____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ValueDropdownController_1____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ValueDropdownController_1____c(____GlobalNamespace__ValueDropdownController_1____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ValueDropdownController_1____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ValueDropdownController_1____c(____GlobalNamespace__ValueDropdownController_1____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ValueDropdownController_1____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(____GlobalNamespace__ValueDropdownController_1____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__ValueDropdownController_1____c& operator=(____GlobalNamespace__ValueDropdownController_1____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<::System::Int32Enum> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<::System::Int32Enum> value) ;

static ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<::System::Int32Enum> __get___9() ;

static ::System::Func_2<::System::Tuple_2<::System::Int32Enum,::StringW>,::StringW> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(::System::Func_2<::System::Tuple_2<::System::Int32Enum,::StringW>,::StringW> value) ;

static ::System::Func_2<::System::Tuple_2<::System::Int32Enum,::StringW>,::StringW> __get___9__7_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__ValueDropdownController_1____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__7_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW _Start_b__7_0(::System::Tuple_2<::System::Int32Enum,::StringW> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ValueDropdownController`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166)), TypeDefinitionIndex(TypeDefinitionIndex(5694))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5694), inst: 2 })
// CS Name: ValueDropdownController`1
class CORDL_TYPE ValueDropdownController_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ValueDropdownController_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: " const&", def_value: None }]
constexpr ValueDropdownController_1(ValueDropdownController_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "&&", def_value: None }]
constexpr ValueDropdownController_1(ValueDropdownController_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueDropdownController_1(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ValueDropdownController_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueDropdownController_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueDropdownController_1& operator=(ValueDropdownController_1&& o) noexcept = default;
  constexpr ValueDropdownController_1& operator=(ValueDropdownController_1 const& o) noexcept = default;
                


// Fields

 ::HMUI::SimpleTextDropdown __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown))  _simpleTextDropdown;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown value) ;

constexpr ::HMUI::SimpleTextDropdown __get__simpleTextDropdown() const;

 ::System::Action_2<int32_t,T> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T> value) ;

constexpr ::System::Action_2<int32_t,T> __get_didSelectCellWithIdxEvent() const;

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>> __declspec(property(get=__get__namedValues, put=__set__namedValues))  _namedValues;

constexpr void __set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>> __get__namedValues() const;


// Properties

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>> __declspec(property(get=get_namedValues))  namedValues;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t,T> value) ;

/// @brief Method get_namedValues addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>> get_namedValues() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDestroy() ;

/// @brief Method GetNamedValues addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T,::StringW>> GetNamedValues() ;

/// @brief Method GetSelectedItemValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetSelectedItemValue() ;

/// @brief Method SelectCellWithValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void SelectCellWithValue(T value) ;

/// @brief Method GetIdxForValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetIdxForValue(T value) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

// Ctor Parameters []
explicit ValueDropdownController_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ValueDropdownController`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5694)), TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5694), inst: 374 })
// CS Name: ValueDropdownController`1
class CORDL_TYPE ValueDropdownController_1<float_t> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ValueDropdownController_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: " const&", def_value: None }]
constexpr ValueDropdownController_1(ValueDropdownController_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "&&", def_value: None }]
constexpr ValueDropdownController_1(ValueDropdownController_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueDropdownController_1(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ValueDropdownController_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueDropdownController_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueDropdownController_1& operator=(ValueDropdownController_1&& o) noexcept = default;
  constexpr ValueDropdownController_1& operator=(ValueDropdownController_1 const& o) noexcept = default;
                


// Fields

 ::HMUI::SimpleTextDropdown __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown))  _simpleTextDropdown;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown value) ;

constexpr ::HMUI::SimpleTextDropdown __get__simpleTextDropdown() const;

 ::System::Action_2<int32_t,float_t> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<int32_t,float_t> value) ;

constexpr ::System::Action_2<int32_t,float_t> __get_didSelectCellWithIdxEvent() const;

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>> __declspec(property(get=__get__namedValues, put=__set__namedValues))  _namedValues;

constexpr void __set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>> __get__namedValues() const;


// Properties

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>> __declspec(property(get=get_namedValues))  namedValues;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_didSelectCellWithIdxEvent(::System::Action_2<int32_t,float_t> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t,float_t> value) ;

/// @brief Method get_namedValues addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>> get_namedValues() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDestroy() ;

/// @brief Method GetNamedValues addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t,::StringW>> GetNamedValues() ;

/// @brief Method GetSelectedItemValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetSelectedItemValue() ;

/// @brief Method SelectCellWithValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void SelectCellWithValue(float_t value) ;

/// @brief Method GetIdxForValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetIdxForValue(float_t value) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

// Ctor Parameters []
explicit ValueDropdownController_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ValueDropdownController`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166)), TypeDefinitionIndex(TypeDefinitionIndex(5694))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5694), inst: 4825 })
// CS Name: ValueDropdownController`1
class CORDL_TYPE ValueDropdownController_1<::System::Int32Enum> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c<::System::Int32Enum>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ValueDropdownController_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: " const&", def_value: None }]
constexpr ValueDropdownController_1(ValueDropdownController_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "&&", def_value: None }]
constexpr ValueDropdownController_1(ValueDropdownController_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueDropdownController_1(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ValueDropdownController_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueDropdownController_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueDropdownController_1& operator=(ValueDropdownController_1&& o) noexcept = default;
  constexpr ValueDropdownController_1& operator=(ValueDropdownController_1 const& o) noexcept = default;
                


// Fields

 ::HMUI::SimpleTextDropdown __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown))  _simpleTextDropdown;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown value) ;

constexpr ::HMUI::SimpleTextDropdown __get__simpleTextDropdown() const;

 ::System::Action_2<int32_t,::System::Int32Enum> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<int32_t,::System::Int32Enum> value) ;

constexpr ::System::Action_2<int32_t,::System::Int32Enum> __get_didSelectCellWithIdxEvent() const;

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::Int32Enum,::StringW>> __declspec(property(get=__get__namedValues, put=__set__namedValues))  _namedValues;

constexpr void __set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::Int32Enum,::StringW>> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::Int32Enum,::StringW>> __get__namedValues() const;


// Properties

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::Int32Enum,::StringW>> __declspec(property(get=get_namedValues))  namedValues;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_didSelectCellWithIdxEvent(::System::Action_2<int32_t,::System::Int32Enum> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t,::System::Int32Enum> value) ;

/// @brief Method get_namedValues addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::Int32Enum,::StringW>> get_namedValues() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDestroy() ;

/// @brief Method GetNamedValues addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::Int32Enum,::StringW>> GetNamedValues() ;

/// @brief Method GetSelectedItemValue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum GetSelectedItemValue() ;

/// @brief Method SelectCellWithValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void SelectCellWithValue(::System::Int32Enum value) ;

/// @brief Method GetIdxForValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetIdxForValue(::System::Int32Enum value) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

// Ctor Parameters []
explicit ValueDropdownController_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ValueDropdownController_1, "", "ValueDropdownController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__ValueDropdownController_1____c, "", "ValueDropdownController`1/<>c");
