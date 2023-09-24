#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
struct JEnumerable_1;
}
namespace System {
struct Guid;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken___Annotations_d__172;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
class IJEnumerable_1;
}
namespace System {
struct DateTime;
}
namespace System::Collections {
class IEnumerator;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace System {
class ICloneable;
}
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken___GetAncestors_d__41;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken___AfterSelf_d__42;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken__LineInfoAnnotation;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace System::Collections {
class IEnumerable;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JTokenEqualityComparer;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
class Newtonsoft__Json__Linq__JToken___Annotations_d__171_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
template<typename T>
class Newtonsoft__Json__Linq__JToken___Annotations_d__171_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken__LineInfoAnnotation;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken___AfterSelf_d__42;
}
namespace Newtonsoft::Json::Linq {
template<::cordl_internals::il2cpp_reference_type T>
class Newtonsoft__Json__Linq__JToken___Annotations_d__171_1<T>;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken___Annotations_d__172;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43;
}
namespace Newtonsoft::Json::Linq {
class Newtonsoft__Json__Linq__JToken___GetAncestors_d__41;
}
// Type: ::LineInfoAnnotation
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11938))
// CS Name: Newtonsoft.Json.Linq.JToken::LineInfoAnnotation
class CORDL_TYPE Newtonsoft__Json__Linq__JToken__LineInfoAnnotation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Newtonsoft__Json__Linq__JToken__LineInfoAnnotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken__LineInfoAnnotation", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken__LineInfoAnnotation(Newtonsoft__Json__Linq__JToken__LineInfoAnnotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken__LineInfoAnnotation", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken__LineInfoAnnotation(Newtonsoft__Json__Linq__JToken__LineInfoAnnotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JToken__LineInfoAnnotation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JToken__LineInfoAnnotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken__LineInfoAnnotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken__LineInfoAnnotation& operator=(Newtonsoft__Json__Linq__JToken__LineInfoAnnotation&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JToken__LineInfoAnnotation& operator=(Newtonsoft__Json__Linq__JToken__LineInfoAnnotation const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_LineNumber, put=__set_LineNumber))  LineNumber;

constexpr void __set_LineNumber(int32_t value) ;

constexpr int32_t __get_LineNumber() const;

 int32_t __declspec(property(get=__get_LinePosition, put=__set_LinePosition))  LinePosition;

constexpr void __set_LinePosition(int32_t value) ;

constexpr int32_t __get_LinePosition() const;


// Methods

static Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken__LineInfoAnnotation New_ctor(int32_t lineNumber, int32_t linePosition) ;

/// @brief Method .ctor addr 0x252d584 size 0x2c virtual false final false
 void _ctor(int32_t lineNumber, int32_t linePosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: ::<GetAncestors>d__41
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11939))
// CS Name: Newtonsoft.Json.Linq.JToken::<GetAncestors>d__41
class CORDL_TYPE Newtonsoft__Json__Linq__JToken___GetAncestors_d__41 : public ::bs_hook::Il2CppWrapperType {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Newtonsoft__Json__Linq__JToken___GetAncestors_d__41() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___GetAncestors_d__41", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___GetAncestors_d__41(Newtonsoft__Json__Linq__JToken___GetAncestors_d__41 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___GetAncestors_d__41", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___GetAncestors_d__41(Newtonsoft__Json__Linq__JToken___GetAncestors_d__41&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JToken___GetAncestors_d__41(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JToken___GetAncestors_d__41& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___GetAncestors_d__41& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___GetAncestors_d__41& operator=(Newtonsoft__Json__Linq__JToken___GetAncestors_d__41&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JToken___GetAncestors_d__41& operator=(Newtonsoft__Json__Linq__JToken___GetAncestors_d__41 const& o) noexcept = default;
                


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

 bool __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(bool value) ;

constexpr bool __get_self() const;

 bool __declspec(property(get=__get___3__self, put=__set___3__self))  __3__self;

constexpr void __set___3__self(bool value) ;

constexpr bool __get___3__self() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get___4__this() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__current_5__1, put=__set__current_5__1))  _current_5__1;

constexpr void __set__current_5__1(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__current_5__1() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___GetAncestors_d__41 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2525f58 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x252e4b0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x252e4b4 size 0x84 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x252e538 size 0x8 virtual true final true
 Newtonsoft::Json::Linq::JToken System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x252e540 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x252e580 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator addr 0x252e588 size 0xa8 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x252e630 size 0x1004 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: ::<AfterSelf>d__42
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11940))
// CS Name: Newtonsoft.Json.Linq.JToken::<AfterSelf>d__42
class CORDL_TYPE Newtonsoft__Json__Linq__JToken___AfterSelf_d__42 : public ::bs_hook::Il2CppWrapperType {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Newtonsoft__Json__Linq__JToken___AfterSelf_d__42() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___AfterSelf_d__42", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___AfterSelf_d__42(Newtonsoft__Json__Linq__JToken___AfterSelf_d__42 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___AfterSelf_d__42", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___AfterSelf_d__42(Newtonsoft__Json__Linq__JToken___AfterSelf_d__42&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JToken___AfterSelf_d__42(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JToken___AfterSelf_d__42& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___AfterSelf_d__42& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___AfterSelf_d__42& operator=(Newtonsoft__Json__Linq__JToken___AfterSelf_d__42&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JToken___AfterSelf_d__42& operator=(Newtonsoft__Json__Linq__JToken___AfterSelf_d__42 const& o) noexcept = default;
                


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

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get___4__this() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__o_5__1, put=__set__o_5__1))  _o_5__1;

constexpr void __set__o_5__1(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__o_5__1() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___AfterSelf_d__42 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x252f634 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x252f678 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x252f67c size 0x80 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x252f6fc size 0x8 virtual true final true
 Newtonsoft::Json::Linq::JToken System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x252f704 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x252f744 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator addr 0x252f74c size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x252f7ec size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: ::<BeforeSelf>d__43
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11941))
// CS Name: Newtonsoft.Json.Linq.JToken::<BeforeSelf>d__43
class CORDL_TYPE Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43 : public ::bs_hook::Il2CppWrapperType {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43(Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43(Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43& operator=(Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43& operator=(Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43 const& o) noexcept = default;
                


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

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get___4__this() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__o_5__1, put=__set__o_5__1))  _o_5__1;

constexpr void __set__o_5__1(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__o_5__1() const;


// Properties

 Newtonsoft::Json::Linq::JToken __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x252f7f0 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x252f834 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x252f838 size 0x94 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x252f8cc size 0x8 virtual true final true
 Newtonsoft::Json::Linq::JToken System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x252f8d4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x252f914 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator addr 0x252f91c size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x252f9bc size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: ::<Annotations>d__171`1
// Type: ::<Annotations>d__172
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11943))
// CS Name: Newtonsoft.Json.Linq.JToken::<Annotations>d__172
class CORDL_TYPE Newtonsoft__Json__Linq__JToken___Annotations_d__172 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Newtonsoft__Json__Linq__JToken___Annotations_d__172() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___Annotations_d__172", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__172(Newtonsoft__Json__Linq__JToken___Annotations_d__172 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___Annotations_d__172", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__172(Newtonsoft__Json__Linq__JToken___Annotations_d__172&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JToken___Annotations_d__172(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__172& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__172& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__172& operator=(Newtonsoft__Json__Linq__JToken___Annotations_d__172&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__172& operator=(Newtonsoft__Json__Linq__JToken___Annotations_d__172 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 System::Type __declspec(property(get=__get___3__type, put=__set___3__type))  __3__type;

constexpr void __set___3__type(System::Type value) ;

constexpr System::Type __get___3__type() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get___4__this() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__annotations_5__1, put=__set__annotations_5__1))  _annotations_5__1;

constexpr void __set__annotations_5__1(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__annotations_5__1() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___Annotations_d__172 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x252f9c0 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x252fa04 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x252fa08 size 0x1cc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x252fbd4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x252fbdc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x252fc1c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator addr 0x252fc24 size 0xa8 virtual true final true
 System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType> System_Collections_Generic_IEnumerable_System_Object__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x252fccc size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JToken
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11944))
// CS Name: Newtonsoft.Json.Linq.JToken
class CORDL_TYPE JToken : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Annotations_d__172 = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___Annotations_d__172;

template<typename T>
using _Annotations_d__171_1 = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___Annotations_d__171_1<T>;

using _BeforeSelf_d__43 = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43;

using _AfterSelf_d__42 = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___AfterSelf_d__42;

using _GetAncestors_d__41 = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___GetAncestors_d__41;

using LineInfoAnnotation = Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken__LineInfoAnnotation;

/// @brief Convert operator to Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>
constexpr operator  System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::IJsonLineInfo
constexpr operator  Newtonsoft::Json::IJsonLineInfo() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~JToken() = default;

// Ctor Parameters [CppParam { name: "", ty: "JToken", modifiers: " const&", def_value: None }]
constexpr JToken(JToken const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JToken", modifiers: "&&", def_value: None }]
constexpr JToken(JToken&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JToken(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JToken& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JToken& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JToken& operator=(JToken&& o) noexcept = default;
  constexpr JToken& operator=(JToken const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Linq::JTokenEqualityComparer __declspec(property(get=__get__equalityComparer, put=__set__equalityComparer))  _equalityComparer;

static void __set__equalityComparer(Newtonsoft::Json::Linq::JTokenEqualityComparer value) ;

static Newtonsoft::Json::Linq::JTokenEqualityComparer __get__equalityComparer() ;

 Newtonsoft::Json::Linq::JContainer __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(Newtonsoft::Json::Linq::JContainer value) ;

constexpr Newtonsoft::Json::Linq::JContainer __get__parent() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__previous, put=__set__previous))  _previous;

constexpr void __set__previous(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__previous() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get__next() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__annotations, put=__set__annotations))  _annotations;

constexpr void __set__annotations(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__annotations() const;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_BooleanTypes, put=__set_BooleanTypes))  BooleanTypes;

static void __set_BooleanTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_BooleanTypes() ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_NumberTypes, put=__set_NumberTypes))  NumberTypes;

static void __set_NumberTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_NumberTypes() ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_StringTypes, put=__set_StringTypes))  StringTypes;

static void __set_StringTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_StringTypes() ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_GuidTypes, put=__set_GuidTypes))  GuidTypes;

static void __set_GuidTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_GuidTypes() ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_TimeSpanTypes, put=__set_TimeSpanTypes))  TimeSpanTypes;

static void __set_TimeSpanTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_TimeSpanTypes() ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_UriTypes, put=__set_UriTypes))  UriTypes;

static void __set_UriTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_UriTypes() ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_CharTypes, put=__set_CharTypes))  CharTypes;

static void __set_CharTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_CharTypes() ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_DateTimeTypes, put=__set_DateTimeTypes))  DateTimeTypes;

static void __set_DateTimeTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_DateTimeTypes() ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __declspec(property(get=__get_BytesTypes, put=__set_BytesTypes))  BytesTypes;

static void __set_BytesTypes(::ArrayW<Newtonsoft::Json::Linq::JTokenType> value) ;

static ::ArrayW<Newtonsoft::Json::Linq::JTokenType> __get_BytesTypes() ;


// Properties

static Newtonsoft::Json::Linq::JTokenEqualityComparer __declspec(property(get=get_EqualityComparer))  EqualityComparer;

 Newtonsoft::Json::Linq::JContainer __declspec(property(get=get_Parent, put=set_Parent))  Parent;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Root))  Root;

 Newtonsoft::Json::Linq::JTokenType __declspec(property(get=get_Type))  Type;

 bool __declspec(property(get=get_HasValues))  HasValues;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Next, put=set_Next))  Next;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Previous, put=set_Previous))  Previous;

 ::StringW __declspec(property(get=get_Path))  Path;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Item, put=set_Item))  Item;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_First))  First;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=get_Last))  Last;

 Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item))  Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__Item;

 int32_t __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LineNumber))  Newtonsoft_Json_IJsonLineInfo_LineNumber;

 int32_t __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LinePosition))  Newtonsoft_Json_IJsonLineInfo_LinePosition;


// Methods

/// @brief Method get_EqualityComparer addr 0x251f5c4 size 0xc4 virtual false final false
static Newtonsoft::Json::Linq::JTokenEqualityComparer get_EqualityComparer() ;

/// @brief Method get_Parent addr 0x2525d60 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::JContainer get_Parent() ;

/// @brief Method set_Parent addr 0x2525d68 size 0x8 virtual false final false
 void set_Parent(Newtonsoft::Json::Linq::JContainer value) ;

/// @brief Method get_Root addr 0x251cb44 size 0x18 virtual false final false
 Newtonsoft::Json::Linq::JToken get_Root() ;

/// @brief Method CloneToken addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Linq::JToken CloneToken() ;

/// @brief Method DeepEquals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool DeepEquals(Newtonsoft::Json::Linq::JToken node) ;

/// @brief Method get_Type addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Method get_HasValues addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_HasValues() ;

/// @brief Method DeepEquals addr 0x251946c size 0x2c virtual false final false
static bool DeepEquals(Newtonsoft::Json::Linq::JToken t1, Newtonsoft::Json::Linq::JToken t2) ;

/// @brief Method get_Next addr 0x2525d70 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::JToken get_Next() ;

/// @brief Method set_Next addr 0x2525d78 size 0x8 virtual false final false
 void set_Next(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method get_Previous addr 0x2525d80 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::JToken get_Previous() ;

/// @brief Method set_Previous addr 0x2525d88 size 0x8 virtual false final false
 void set_Previous(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method get_Path addr 0x2524888 size 0x348 virtual false final false
 ::StringW get_Path() ;

static Newtonsoft::Json::Linq::JToken New_ctor() ;

/// @brief Method .ctor addr 0x251bfd8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method AddAfterSelf addr 0x2525d90 size 0xa0 virtual false final false
 void AddAfterSelf(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method AddBeforeSelf addr 0x2525e30 size 0xa0 virtual false final false
 void AddBeforeSelf(::bs_hook::Il2CppWrapperType content) ;

/// @brief Method Ancestors addr 0x2525ed0 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> Ancestors() ;

/// @brief Method AncestorsAndSelf addr 0x2525f50 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> AncestorsAndSelf() ;

/// @brief Method GetAncestors addr 0x2525ed8 size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> GetAncestors(bool self) ;

/// @brief Method AfterSelf addr 0x2525f9c size 0x68 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> AfterSelf() ;

/// @brief Method BeforeSelf addr 0x2526004 size 0x68 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> BeforeSelf() ;

/// @brief Method get_Item addr 0x252606c size 0x98 virtual true final false
 Newtonsoft::Json::Linq::JToken get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method set_Item addr 0x2526104 size 0x98 virtual true final false
 void set_Item(::bs_hook::Il2CppWrapperType key, Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method Value addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T Value(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method get_First addr 0x252619c size 0x98 virtual true final false
 Newtonsoft::Json::Linq::JToken get_First() ;

/// @brief Method get_Last addr 0x2526234 size 0x98 virtual true final false
 Newtonsoft::Json::Linq::JToken get_Last() ;

/// @brief Method Children addr 0x25262cc size 0x58 virtual true final false
 Newtonsoft::Json::Linq::JEnumerable_1<Newtonsoft::Json::Linq::JToken> Children() ;

/// @brief Method Children addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Newtonsoft::Json::Linq::JEnumerable_1<T> Children() ;

/// @brief Method Values addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> Values() ;

/// @brief Method Remove addr 0x2521b90 size 0x70 virtual false final false
 void Remove() ;

/// @brief Method Replace addr 0x251edf8 size 0x78 virtual false final false
 void Replace(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method WriteTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteTo(Newtonsoft::Json::JsonWriter writer, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method ToString addr 0x2526324 size 0x58 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x252637c size 0x250 virtual false final false
 ::StringW ToString(Newtonsoft::Json::Formatting formatting, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method EnsureValue addr 0x25265cc size 0x118 virtual false final false
static Newtonsoft::Json::Linq::JValue EnsureValue(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method GetType addr 0x25266e4 size 0xf8 virtual false final false
static ::StringW GetType(Newtonsoft::Json::Linq::JToken token) ;

/// @brief Method ValidateToken addr 0x25267dc size 0xcc virtual false final false
static bool ValidateToken(Newtonsoft::Json::Linq::JToken o, ::ArrayW<Newtonsoft::Json::Linq::JTokenType> validTypes, bool nullable) ;

/// @brief Method op_Explicit addr 0x25268a8 size 0x18c virtual false final false
static bool op_Explicit_bool(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2526a34 size 0x268 virtual false final false
static System::DateTimeOffset op_Explicit_System__DateTimeOffset(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2526c9c size 0x1d8 virtual false final false
static System::Nullable_1<bool> op_Explicit_System__Nullable_1_bool_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2526e74 size 0x18c virtual false final false
static int64_t op_Explicit_int64_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2527000 size 0x21c virtual false final false
static System::Nullable_1<System::DateTime> op_Explicit_System__Nullable_1_System__DateTime_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x252721c size 0x314 virtual false final false
static System::Nullable_1<System::DateTimeOffset> op_Explicit_System__Nullable_1_System__DateTimeOffset_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2527530 size 0x1f0 virtual false final false
static System::Nullable_1<System::Decimal> op_Explicit_System__Nullable_1_System__Decimal_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2527720 size 0x1d0 virtual false final false
static System::Nullable_1<double_t> op_Explicit_System__Nullable_1_double_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x25278f0 size 0x1d8 virtual false final false
static System::Nullable_1<char16_t> op_Explicit_System__Nullable_1_char16_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2527ac8 size 0x18c virtual false final false
static int32_t op_Explicit_int32_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2527c54 size 0x18c virtual false final false
static int16_t op_Explicit_int16_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2527de0 size 0x18c virtual false final false
static uint16_t op_Explicit_uint16_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2527f6c size 0x18c virtual false final false
static char16_t op_Explicit_char16_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x25280f8 size 0x18c virtual false final false
static uint8_t op_Explicit_uint8_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2528284 size 0x18c virtual false final false
static int8_t op_Explicit_int8_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2528410 size 0x1d8 virtual false final false
static System::Nullable_1<int32_t> op_Explicit_System__Nullable_1_int32_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x25285e8 size 0x1d8 virtual false final false
static System::Nullable_1<int16_t> op_Explicit_System__Nullable_1_int16_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x25287c0 size 0x1d8 virtual false final false
static System::Nullable_1<uint16_t> op_Explicit_System__Nullable_1_uint16_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2528998 size 0x1d8 virtual false final false
static System::Nullable_1<uint8_t> op_Explicit_System__Nullable_1_uint8_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2528b70 size 0x1d8 virtual false final false
static System::Nullable_1<int8_t> op_Explicit_System__Nullable_1_int8_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2528d48 size 0x1e4 virtual false final false
static System::DateTime op_Explicit_System__DateTime(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2528f2c size 0x1d4 virtual false final false
static System::Nullable_1<int64_t> op_Explicit_System__Nullable_1_int64_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2529100 size 0x1d4 virtual false final false
static System::Nullable_1<float_t> op_Explicit_System__Nullable_1_float_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x25292d4 size 0x18c virtual false final false
static System::Decimal op_Explicit_System__Decimal(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2529460 size 0x1d8 virtual false final false
static System::Nullable_1<uint32_t> op_Explicit_System__Nullable_1_uint32_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2529638 size 0x1d4 virtual false final false
static System::Nullable_1<uint64_t> op_Explicit_System__Nullable_1_uint64_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x252980c size 0x18c virtual false final false
static double_t op_Explicit_double_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2529998 size 0x18c virtual false final false
static float_t op_Explicit_float_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2529b24 size 0x224 virtual false final false
static ::StringW op_Explicit___StringW(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2529d48 size 0x18c virtual false final false
static uint32_t op_Explicit_uint32_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x2529ed4 size 0x18c virtual false final false
static uint64_t op_Explicit_uint64_t(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x252a060 size 0x228 virtual false final false
static ::ArrayW<uint8_t> op_Explicit___ArrayW_uint8_t_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x252a288 size 0x250 virtual false final false
static System::Guid op_Explicit_System__Guid(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x252a4d8 size 0x294 virtual false final false
static System::Nullable_1<System::Guid> op_Explicit_System__Nullable_1_System__Guid_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x252a76c size 0x204 virtual false final false
static System::TimeSpan op_Explicit_System__TimeSpan(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x252a970 size 0x248 virtual false final false
static System::Nullable_1<System::TimeSpan> op_Explicit_System__Nullable_1_System__TimeSpan_(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Explicit addr 0x252abb8 size 0x204 virtual false final false
static System::Uri op_Explicit_System__Uri(Newtonsoft::Json::Linq::JToken value) ;

/// @brief Method op_Implicit addr 0x252adbc size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(bool value) ;

/// @brief Method op_Implicit addr 0x252ae20 size 0x74 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::DateTimeOffset value) ;

/// @brief Method op_Implicit addr 0x252ae94 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(uint8_t value) ;

/// @brief Method op_Implicit addr 0x252aef8 size 0x98 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<uint8_t> value) ;

/// @brief Method op_Implicit addr 0x252af90 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(int8_t value) ;

/// @brief Method op_Implicit addr 0x252aff4 size 0x98 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<int8_t> value) ;

/// @brief Method op_Implicit addr 0x252b08c size 0x98 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<bool> value) ;

/// @brief Method op_Implicit addr 0x252b124 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(int64_t value) ;

/// @brief Method op_Implicit addr 0x252b188 size 0xa4 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<System::DateTime> value) ;

/// @brief Method op_Implicit addr 0x252b22c size 0xac virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<System::DateTimeOffset> value) ;

/// @brief Method op_Implicit addr 0x252b2d8 size 0xcc virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<System::Decimal> value) ;

/// @brief Method op_Implicit addr 0x252b3a4 size 0xa4 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<double_t> value) ;

/// @brief Method op_Implicit addr 0x252b448 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(int16_t value) ;

/// @brief Method op_Implicit addr 0x252b4ac size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(uint16_t value) ;

/// @brief Method op_Implicit addr 0x252b510 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(int32_t value) ;

/// @brief Method op_Implicit addr 0x252b574 size 0x98 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<int32_t> value) ;

/// @brief Method op_Implicit addr 0x252b60c size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::DateTime value) ;

/// @brief Method op_Implicit addr 0x252b670 size 0xa4 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<int64_t> value) ;

/// @brief Method op_Implicit addr 0x252b714 size 0x98 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<float_t> value) ;

/// @brief Method op_Implicit addr 0x252b7ac size 0x74 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Decimal value) ;

/// @brief Method op_Implicit addr 0x252b820 size 0x98 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<int16_t> value) ;

/// @brief Method op_Implicit addr 0x252b8b8 size 0x98 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<uint16_t> value) ;

/// @brief Method op_Implicit addr 0x252b950 size 0x98 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<uint32_t> value) ;

/// @brief Method op_Implicit addr 0x252b9e8 size 0xa4 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<uint64_t> value) ;

/// @brief Method op_Implicit addr 0x252ba8c size 0x6c virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(double_t value) ;

/// @brief Method op_Implicit addr 0x252baf8 size 0x6c virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(float_t value) ;

/// @brief Method op_Implicit addr 0x252bb64 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(::StringW value) ;

/// @brief Method op_Implicit addr 0x252bbc8 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(uint32_t value) ;

/// @brief Method op_Implicit addr 0x252bc2c size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(uint64_t value) ;

/// @brief Method op_Implicit addr 0x252bc90 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(::ArrayW<uint8_t> value) ;

/// @brief Method op_Implicit addr 0x252bcf4 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Uri value) ;

/// @brief Method op_Implicit addr 0x252bd58 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::TimeSpan value) ;

/// @brief Method op_Implicit addr 0x252bdbc size 0xa4 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<System::TimeSpan> value) ;

/// @brief Method op_Implicit addr 0x252be60 size 0x74 virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Guid value) ;

/// @brief Method op_Implicit addr 0x252bed4 size 0xac virtual false final false
static Newtonsoft::Json::Linq::JToken op_Implicit_Newtonsoft__Json__Linq__JToken(System::Nullable_1<System::Guid> value) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x252bf80 size 0x94 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator addr 0x252c014 size 0x70 virtual true final true
 System::Collections::Generic::IEnumerator_1<Newtonsoft::Json::Linq::JToken> System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method GetDeepHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDeepHashCode() ;

/// @brief Method Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.get_Item addr 0x252c084 size 0x10 virtual true final true
 Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken> Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method CreateReader addr 0x252c094 size 0x60 virtual false final false
 Newtonsoft::Json::JsonReader CreateReader() ;

/// @brief Method FromObjectInternal addr 0x25214a8 size 0x208 virtual false final false
static Newtonsoft::Json::Linq::JToken FromObjectInternal(::bs_hook::Il2CppWrapperType o, Newtonsoft::Json::JsonSerializer jsonSerializer) ;

/// @brief Method FromObject addr 0x252c0f4 size 0x68 virtual false final false
static Newtonsoft::Json::Linq::JToken FromObject(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method FromObject addr 0x252c15c size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken FromObject(::bs_hook::Il2CppWrapperType o, Newtonsoft::Json::JsonSerializer jsonSerializer) ;

/// @brief Method ToObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T ToObject() ;

/// @brief Method ToObject addr 0x252c1c0 size 0xae4 virtual false final false
 ::bs_hook::Il2CppWrapperType ToObject(System::Type objectType) ;

/// @brief Method ToObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T ToObject(Newtonsoft::Json::JsonSerializer jsonSerializer) ;

/// @brief Method ToObject addr 0x252cca4 size 0x1dc virtual false final false
 ::bs_hook::Il2CppWrapperType ToObject(System::Type objectType, Newtonsoft::Json::JsonSerializer jsonSerializer) ;

/// @brief Method ReadFrom addr 0x252ce80 size 0x58 virtual false final false
static Newtonsoft::Json::Linq::JToken ReadFrom(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method ReadFrom addr 0x252ced8 size 0x2bc virtual false final false
static Newtonsoft::Json::Linq::JToken ReadFrom(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method Parse addr 0x252d194 size 0x58 virtual false final false
static Newtonsoft::Json::Linq::JToken Parse(::StringW json) ;

/// @brief Method Parse addr 0x252d1ec size 0x264 virtual false final false
static Newtonsoft::Json::Linq::JToken Parse(::StringW json, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method Load addr 0x252d450 size 0x64 virtual false final false
static Newtonsoft::Json::Linq::JToken Load(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method Load addr 0x252d4b4 size 0x58 virtual false final false
static Newtonsoft::Json::Linq::JToken Load(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method SetLineInfo addr 0x251badc size 0x1a0 virtual false final false
 void SetLineInfo(Newtonsoft::Json::IJsonLineInfo lineInfo, Newtonsoft::Json::Linq::JsonLoadSettings settings) ;

/// @brief Method SetLineInfo addr 0x252d50c size 0x78 virtual false final false
 void SetLineInfo(int32_t lineNumber, int32_t linePosition) ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo addr 0x252d7cc size 0x54 virtual true final true
 bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber addr 0x252d820 size 0x54 virtual true final true
 int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition addr 0x252d874 size 0x54 virtual true final true
 int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition() ;

/// @brief Method SelectToken addr 0x252d8c8 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::JToken SelectToken(::StringW path) ;

/// @brief Method SelectToken addr 0x252d8d0 size 0x378 virtual false final false
 Newtonsoft::Json::Linq::JToken SelectToken(::StringW path, bool errorWhenNoMatch) ;

/// @brief Method SelectTokens addr 0x252dc48 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> SelectTokens(::StringW path) ;

/// @brief Method SelectTokens addr 0x252dc50 size 0x80 virtual false final false
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> SelectTokens(::StringW path, bool errorWhenNoMatch) ;

/// @brief Method System.ICloneable.Clone addr 0x252dcd0 size 0xc virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method DeepClone addr 0x252dcdc size 0xc virtual false final false
 Newtonsoft::Json::Linq::JToken DeepClone() ;

/// @brief Method AddAnnotation addr 0x252d5b0 size 0x21c virtual false final false
 void AddAnnotation(::bs_hook::Il2CppWrapperType annotation) ;

/// @brief Method Annotation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Annotation() ;

/// @brief Method Annotation addr 0x252dce8 size 0x138 virtual false final false
 ::bs_hook::Il2CppWrapperType Annotation(System::Type type) ;

/// @brief Method Annotations addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> Annotations() ;

/// @brief Method Annotations addr 0x252de20 size 0x74 virtual false final false
 System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> Annotations(System::Type type) ;

/// @brief Method RemoveAnnotations addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void RemoveAnnotations() ;

/// @brief Method RemoveAnnotations addr 0x252de94 size 0x1a8 virtual false final false
 void RemoveAnnotations(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
// Type: ::<Annotations>d__171`1
namespace Newtonsoft::Json::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11942))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11942), inst: 2 })
// CS Name: Newtonsoft.Json.Linq.JToken::<Annotations>d__171`1
class CORDL_TYPE Newtonsoft__Json__Linq__JToken___Annotations_d__171_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr operator  System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Newtonsoft__Json__Linq__JToken___Annotations_d__171_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___Annotations_d__171_1", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__171_1(Newtonsoft__Json__Linq__JToken___Annotations_d__171_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Linq__JToken___Annotations_d__171_1", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__171_1(Newtonsoft__Json__Linq__JToken___Annotations_d__171_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Linq__JToken___Annotations_d__171_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__171_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__171_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__171_1& operator=(Newtonsoft__Json__Linq__JToken___Annotations_d__171_1&& o) noexcept = default;
  constexpr Newtonsoft__Json__Linq__JToken___Annotations_d__171_1& operator=(Newtonsoft__Json__Linq__JToken___Annotations_d__171_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 T __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(T value) ;

constexpr T __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 Newtonsoft::Json::Linq::JToken __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Newtonsoft::Json::Linq::JToken value) ;

constexpr Newtonsoft::Json::Linq::JToken __get___4__this() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__annotations_5__1, put=__set__annotations_5__1))  _annotations_5__1;

constexpr void __set__annotations_5__1(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__annotations_5__1() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 T __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current))  System_Collections_Generic_IEnumerator_T__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___Annotations_d__171_1<T> New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___Annotations_d__171_1, "Newtonsoft.Json.Linq", "JToken/<Annotations>d__171`1");
NEED_NO_BOX(Newtonsoft::Json::Linq::JToken);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JToken, "Newtonsoft.Json.Linq", "JToken");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken__LineInfoAnnotation);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken__LineInfoAnnotation, "Newtonsoft.Json.Linq", "JToken/LineInfoAnnotation");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___AfterSelf_d__42);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___AfterSelf_d__42, "Newtonsoft.Json.Linq", "JToken/<AfterSelf>d__42");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___Annotations_d__172);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___Annotations_d__172, "Newtonsoft.Json.Linq", "JToken/<Annotations>d__172");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___BeforeSelf_d__43, "Newtonsoft.Json.Linq", "JToken/<BeforeSelf>d__43");
NEED_NO_BOX(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___GetAncestors_d__41);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::Newtonsoft__Json__Linq__JToken___GetAncestors_d__41, "Newtonsoft.Json.Linq", "JToken/<GetAncestors>d__41");
