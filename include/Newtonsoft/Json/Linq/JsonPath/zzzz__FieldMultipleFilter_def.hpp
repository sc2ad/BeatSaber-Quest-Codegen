#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
struct ____System__Collections__Generic__List_1__Enumerator;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class FieldMultipleFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c;
}
// Type: ::<>c
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11958))
// CS Name: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter::<>c
class CORDL_TYPE ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c", modifiers: " const&", def_value: None }]
constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c(____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c", modifiers: "&&", def_value: None }]
constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c(____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c& operator=(____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c&& o) noexcept = default;
  constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c& operator=(____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c const& o) noexcept = default;
                


// Fields

static ::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c value) ;

static ::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c __get___9() ;

static ::System::Func_2<::StringW,::StringW> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(::System::Func_2<::StringW,::StringW> value) ;

static ::System::Func_2<::StringW,::StringW> __get___9__4_0() ;


// Methods

// Ctor Parameters []
explicit ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c() ;

/// @brief Method .ctor addr 0x2536074 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ExecuteFilter>b__4_0 addr 0x253607c size 0x50 virtual false final false
 ::StringW _ExecuteFilter_b__4_0(::StringW n) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
// Type: ::<ExecuteFilter>d__4
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11959))
// CS Name: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter::<ExecuteFilter>d__4
class CORDL_TYPE ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4", modifiers: " const&", def_value: None }]
constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4(____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4", modifiers: "&&", def_value: None }]
constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4(____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4& operator=(____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4&& o) noexcept = default;
  constexpr ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4& operator=(____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::Newtonsoft::Json::Linq::JToken value) ;

constexpr ::Newtonsoft::Json::Linq::JToken __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> __get_current() const;

 ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___3__current, put=__set___3__current))  __3__current;

constexpr void __set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> __get___3__current() const;

 ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter value) ;

constexpr ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter __get___4__this() const;

 ::Newtonsoft::Json::Linq::JObject __declspec(property(get=__get__o_5__1, put=__set__o_5__1))  _o_5__1;

constexpr void __set__o_5__1(::Newtonsoft::Json::Linq::JObject value) ;

constexpr ::Newtonsoft::Json::Linq::JObject __get__o_5__1() const;

 bool __declspec(property(get=__get_errorWhenNoMatch, put=__set_errorWhenNoMatch))  errorWhenNoMatch;

constexpr void __set_errorWhenNoMatch(bool value) ;

constexpr bool __get_errorWhenNoMatch() const;

 bool __declspec(property(get=__get___3__errorWhenNoMatch, put=__set___3__errorWhenNoMatch))  __3__errorWhenNoMatch;

constexpr void __set___3__errorWhenNoMatch(bool value) ;

constexpr bool __get___3__errorWhenNoMatch() const;

 ::StringW __declspec(property(get=__get__name_5__2, put=__set__name_5__2))  _name_5__2;

constexpr void __set__name_5__2(::StringW value) ;

constexpr ::StringW __get__name_5__2() const;

 ::Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__t_5__3, put=__set__t_5__3))  _t_5__3;

constexpr void __set__t_5__3(::Newtonsoft::Json::Linq::JToken value) ;

constexpr ::Newtonsoft::Json::Linq::JToken __get__t_5__3() const;

 ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken> __get___7__wrap1() const;

 ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::StringW> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::StringW> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__List_1__Enumerator<::StringW> __get___7__wrap2() const;


// Properties

 ::Newtonsoft::Json::Linq::JToken __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2535fc4 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x25360cc size 0xb0 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x253617c size 0x6d8 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x25368a4 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x2536854 size 0x50 virtual false final false
 void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x2536954 size 0x8 virtual true final true
 ::Newtonsoft::Json::Linq::JToken System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x253695c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x253699c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator addr 0x25369a4 size 0xb0 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2536a54 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
// Type: Newtonsoft.Json.Linq.JsonPath::FieldMultipleFilter
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11962))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11960))
// CS Name: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter
class CORDL_TYPE FieldMultipleFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
// Declarations
using _ExecuteFilter_d__4 = ::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4;

using __c = ::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~FieldMultipleFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter", modifiers: " const&", def_value: None }]
constexpr FieldMultipleFilter(FieldMultipleFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter", modifiers: "&&", def_value: None }]
constexpr FieldMultipleFilter(FieldMultipleFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FieldMultipleFilter(void* ptr) noexcept : ::Newtonsoft::Json::Linq::JsonPath::PathFilter(ptr) {
}


  constexpr FieldMultipleFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FieldMultipleFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FieldMultipleFilter& operator=(FieldMultipleFilter&& o) noexcept = default;
  constexpr FieldMultipleFilter& operator=(FieldMultipleFilter const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__Names_k__BackingField, put=__set__Names_k__BackingField))  _Names_k__BackingField;

constexpr void __set__Names_k__BackingField(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__Names_k__BackingField() const;


// Properties

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_Names, put=set_Names))  Names;


// Methods

/// @brief Method get_Names addr 0x2535f38 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::StringW> get_Names() ;

/// @brief Method set_Names addr 0x2535f40 size 0x8 virtual false final false
 void set_Names(::System::Collections::Generic::List_1<::StringW> value) ;

/// @brief Method ExecuteFilter addr 0x2535f48 size 0x7c virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> current, bool errorWhenNoMatch) ;

// Ctor Parameters []
explicit FieldMultipleFilter() ;

/// @brief Method .ctor addr 0x2536008 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter___ExecuteFilter_d__4, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter/<ExecuteFilter>d__4");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::____Newtonsoft__Json__Linq__JsonPath__FieldMultipleFilter____c, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter/<>c");
