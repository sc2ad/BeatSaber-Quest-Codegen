#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class ScanFilter;
}
// Type: ::<ExecuteFilter>d__4
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11969))
// CS Name: Newtonsoft.Json.Linq.JsonPath.ScanFilter::<ExecuteFilter>d__4
class CORDL_TYPE Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4(Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4(Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4& operator=(Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4& operator=(Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> __get_current() const;

 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___3__current, put=__set___3__current))  __3__current;

constexpr void __set___3__current(System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> __get___3__current() const;

 Newtonsoft::Json::Linq::JsonPath::ScanFilter __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::JsonPath::ScanFilter value) ;

constexpr Newtonsoft::Json::Linq::JsonPath::ScanFilter __get___4__this() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__root_5__1, put=__set__root_5__1))  _root_5__1;

constexpr void __set__root_5__1(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__root_5__1() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__value_5__2, put=__set__value_5__2))  _value_5__2;

constexpr void __set__value_5__2(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__value_5__2() const;

 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> value) ;

constexpr System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> __get___7__wrap1() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Newtonsoft::Json::Linq::JsonPath::Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x253a6bc size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x253a700 size 0x2c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x253a72c size 0x4ec virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x253ac18 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x253acc8 size 0x8 virtual true final true
 Newtonsoft::Json::Linq::JToken System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x253acd0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x253ad10 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator addr 0x253ad18 size 0xa8 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x253adc0 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
// Type: Newtonsoft.Json.Linq.JsonPath::ScanFilter
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11962))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11970))
// CS Name: Newtonsoft.Json.Linq.JsonPath.ScanFilter
class CORDL_TYPE ScanFilter : public Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
// Declarations
using _ExecuteFilter_d__4 = Newtonsoft::Json::Linq::JsonPath::Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScanFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScanFilter", modifiers: " const&", def_value: None }]
constexpr ScanFilter(ScanFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScanFilter", modifiers: "&&", def_value: None }]
constexpr ScanFilter(ScanFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScanFilter(void* ptr) noexcept : Newtonsoft::Json::Linq::JsonPath::PathFilter(ptr) {
}


  constexpr ScanFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScanFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScanFilter& operator=(ScanFilter&& o) noexcept = default;
  constexpr ScanFilter& operator=(ScanFilter const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;


// Methods

/// @brief Method get_Name addr 0x253a63c size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x253a644 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method ExecuteFilter addr 0x253a64c size 0x70 virtual true final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> ExecuteFilter(System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> current, bool errorWhenNoMatch) ;

static Newtonsoft::Json::Linq::JsonPath::ScanFilter New_ctor() ;

/// @brief Method .ctor addr 0x25372dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(Newtonsoft::Json::Linq::JsonPath::Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JsonPath::Newtonsoft__Json__Linq__JsonPath__ScanFilter___ExecuteFilter_d__4, "Newtonsoft.Json.Linq.JsonPath", "ScanFilter/<ExecuteFilter>d__4");
NEED_NO_BOX(Newtonsoft::Json::Linq::JsonPath::ScanFilter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JsonPath::ScanFilter, "Newtonsoft.Json.Linq.JsonPath", "ScanFilter");
