#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
namespace System::Collections {
class IList;
}
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
namespace System::Collections {
class IDictionary;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json::Linq {
class JTokenReader;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
struct Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace Newtonsoft::Json::Serialization {
class Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
class Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c;
}
namespace Newtonsoft::Json::Serialization {
class Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0;
}
// Type: ::PropertyPresence
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11893))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PropertyPresence
struct CORDL_TYPE Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence(int32_t value__) noexcept;


                    constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence(Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence const&) = default;
                    constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence(Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence&&) = default;
                    constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence_Unwrapped : int32_t {
__None = 0,
__Null = 1,
__Value = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence_Unwrapped () const noexcept {
return std::bit_cast<__Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence const None;

/// @brief Field Null offset 0
static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence const Null;

/// @brief Field Value offset 0
static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence const Value;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
// Type: ::CreatorPropertyContext
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11894))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreatorPropertyContext
class CORDL_TYPE Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext(Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext(Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext&& o) noexcept = default;
  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 Newtonsoft::Json::Serialization::JsonProperty __declspec(property(get=__get_Property, put=__set_Property))  Property;

constexpr void __set_Property(Newtonsoft::Json::Serialization::JsonProperty value) ;

constexpr Newtonsoft::Json::Serialization::JsonProperty __get_Property() const;

 Newtonsoft::Json::Serialization::JsonProperty __declspec(property(get=__get_ConstructorProperty, put=__set_ConstructorProperty))  ConstructorProperty;

constexpr void __set_ConstructorProperty(Newtonsoft::Json::Serialization::JsonProperty value) ;

constexpr Newtonsoft::Json::Serialization::JsonProperty __get_ConstructorProperty() const;

 System::Nullable_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> __declspec(property(get=__get_Presence, put=__set_Presence))  Presence;

constexpr void __set_Presence(System::Nullable_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> __get_Presence() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Value() const;

 bool __declspec(property(get=__get_Used, put=__set_Used))  Used;

constexpr void __set_Used(bool value) ;

constexpr bool __get_Used() const;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext() ;

/// @brief Method .ctor addr 0x250f8a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
// Type: ::<>c__DisplayClass36_0
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11895))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>c__DisplayClass36_0
class CORDL_TYPE Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0(Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0(Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0&& o) noexcept = default;
  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0 const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Serialization::JsonProperty __declspec(property(get=__get_property, put=__set_property))  property;

constexpr void __set_property(Newtonsoft::Json::Serialization::JsonProperty value) ;

constexpr Newtonsoft::Json::Serialization::JsonProperty __get_property() const;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0() ;

/// @brief Method .ctor addr 0x250f8ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateObjectUsingCreatorWithParameters>b__1 addr 0x250f8b4 size 0x24 virtual false final false
 bool _CreateObjectUsingCreatorWithParameters_b__1(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
// Type: ::<>c
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11896))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader::<>c
class CORDL_TYPE Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c(Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c(Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c&& o) noexcept = default;
  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c value) ;

static Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c __get___9() ;

static System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> __declspec(property(get=__get___9__36_0, put=__set___9__36_0))  __9__36_0;

static void __set___9__36_0(System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> value) ;

static System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> __get___9__36_0() ;

static System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> __declspec(property(get=__get___9__36_2, put=__set___9__36_2))  __9__36_2;

static void __set___9__36_2(System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> value) ;

static System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,::StringW> __get___9__36_2() ;

static System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::JsonProperty> __declspec(property(get=__get___9__41_0, put=__set___9__41_0))  __9__41_0;

static void __set___9__41_0(System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::JsonProperty> value) ;

static System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::JsonProperty> __get___9__41_0() ;

static System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> __declspec(property(get=__get___9__41_1, put=__set___9__41_1))  __9__41_1;

static void __set___9__41_1(System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> value) ;

static System::Func_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> __get___9__41_1() ;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c() ;

/// @brief Method .ctor addr 0x250f93c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateObjectUsingCreatorWithParameters>b__36_0 addr 0x250f944 size 0x18 virtual false final false
 ::StringW _CreateObjectUsingCreatorWithParameters_b__36_0(Newtonsoft::Json::Serialization::JsonProperty p) ;

/// @brief Method <CreateObjectUsingCreatorWithParameters>b__36_2 addr 0x250f95c size 0x18 virtual false final false
 ::StringW _CreateObjectUsingCreatorWithParameters_b__36_2(Newtonsoft::Json::Serialization::JsonProperty p) ;

/// @brief Method <PopulateObject>b__41_0 addr 0x250f974 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::JsonProperty _PopulateObject_b__41_0(Newtonsoft::Json::Serialization::JsonProperty m) ;

/// @brief Method <PopulateObject>b__41_1 addr 0x250f97c size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence _PopulateObject_b__41_1(Newtonsoft::Json::Serialization::JsonProperty m) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonSerializerInternalReader
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11892))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11897))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader
class CORDL_TYPE JsonSerializerInternalReader : public Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
// Declarations
using __c = Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c;

using __c__DisplayClass36_0 = Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0;

using CreatorPropertyContext = Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext;

using PropertyPresence = Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~JsonSerializerInternalReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: " const&", def_value: None }]
constexpr JsonSerializerInternalReader(JsonSerializerInternalReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "&&", def_value: None }]
constexpr JsonSerializerInternalReader(JsonSerializerInternalReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonSerializerInternalReader(void* ptr) noexcept : Newtonsoft::Json::Serialization::JsonSerializerInternalBase(ptr) {
}


  constexpr JsonSerializerInternalReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonSerializerInternalReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonSerializerInternalReader& operator=(JsonSerializerInternalReader&& o) noexcept = default;
  constexpr JsonSerializerInternalReader& operator=(JsonSerializerInternalReader const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "serializer", ty: "Newtonsoft::Json::JsonSerializer", modifiers: "", def_value: None }]
explicit JsonSerializerInternalReader(Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method .ctor addr 0x25037e4 size 0x4 virtual false final false
 void _ctor(Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method Populate addr 0x25037e8 size 0x538 virtual false final false
 void Populate(Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method GetContractSafe addr 0x2505528 size 0xc4 virtual false final false
 Newtonsoft::Json::Serialization::JsonContract GetContractSafe(System::Type type) ;

/// @brief Method Deserialize addr 0x25055ec size 0x348 virtual false final false
 ::bs_hook::Il2CppWrapperType Deserialize(Newtonsoft::Json::JsonReader reader, System::Type objectType, bool checkAdditionalContent) ;

/// @brief Method GetInternalSerializer addr 0x2506470 size 0x70 virtual false final false
 Newtonsoft::Json::Serialization::JsonSerializerProxy GetInternalSerializer() ;

/// @brief Method CreateJToken addr 0x25064e0 size 0x2e0 virtual false final false
 Newtonsoft::Json::Linq::JToken CreateJToken(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract) ;

/// @brief Method CreateJObject addr 0x25067c0 size 0x340 virtual false final false
 Newtonsoft::Json::Linq::JToken CreateJObject(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method CreateValueInternal addr 0x2505f70 size 0x494 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateValueInternal(Newtonsoft::Json::JsonReader reader, System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::bs_hook::Il2CppWrapperType existingValue) ;

/// @brief Method CoerceEmptyStringToNull addr 0x25080c8 size 0x104 virtual false final false
static bool CoerceEmptyStringToNull(System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract, ::StringW s) ;

/// @brief Method GetExpectedDescription addr 0x25081cc size 0xcc virtual false final false
 ::StringW GetExpectedDescription(Newtonsoft::Json::Serialization::JsonContract contract) ;

/// @brief Method GetConverter addr 0x2505934 size 0x6c virtual false final false
 Newtonsoft::Json::JsonConverter GetConverter(Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::JsonConverter memberConverter, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty) ;

/// @brief Method CreateObject addr 0x2506c1c size 0xa88 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateObject(Newtonsoft::Json::JsonReader reader, System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::bs_hook::Il2CppWrapperType existingValue) ;

/// @brief Method ReadMetadataPropertiesToken addr 0x2508298 size 0x728 virtual false final false
 bool ReadMetadataPropertiesToken(Newtonsoft::Json::Linq::JTokenReader reader, ByRef<System::Type> objectType, ByRef<Newtonsoft::Json::Serialization::JsonContract> contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::bs_hook::Il2CppWrapperType existingValue, ByRef<::bs_hook::Il2CppWrapperType> newValue, ByRef<::StringW> id) ;

/// @brief Method ReadMetadataProperties addr 0x25089c0 size 0x678 virtual false final false
 bool ReadMetadataProperties(Newtonsoft::Json::JsonReader reader, ByRef<System::Type> objectType, ByRef<Newtonsoft::Json::Serialization::JsonContract> contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::bs_hook::Il2CppWrapperType existingValue, ByRef<::bs_hook::Il2CppWrapperType> newValue, ByRef<::StringW> id) ;

/// @brief Method ResolveTypeName addr 0x2509ae4 size 0x500 virtual false final false
 void ResolveTypeName(Newtonsoft::Json::JsonReader reader, ByRef<System::Type> objectType, ByRef<Newtonsoft::Json::Serialization::JsonContract> contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, ::StringW qualifiedTypeName) ;

/// @brief Method EnsureArrayContract addr 0x2509fe4 size 0x180 virtual false final false
 Newtonsoft::Json::Serialization::JsonArrayContract EnsureArrayContract(Newtonsoft::Json::JsonReader reader, System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract) ;

/// @brief Method CreateList addr 0x25076a4 size 0x690 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateList(Newtonsoft::Json::JsonReader reader, System::Type objectType, Newtonsoft::Json::Serialization::JsonContract contract, Newtonsoft::Json::Serialization::JsonProperty member, ::bs_hook::Il2CppWrapperType existingValue, ::StringW id) ;

/// @brief Method HasNoDefinedType addr 0x2509038 size 0x98 virtual false final false
 bool HasNoDefinedType(Newtonsoft::Json::Serialization::JsonContract contract) ;

/// @brief Method EnsureType addr 0x2507d34 size 0x394 virtual false final false
 ::bs_hook::Il2CppWrapperType EnsureType(Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType value, System::Globalization::CultureInfo culture, Newtonsoft::Json::Serialization::JsonContract contract, System::Type targetType) ;

/// @brief Method SetPropertyValue addr 0x250aa70 size 0x480 virtual false final false
 bool SetPropertyValue(Newtonsoft::Json::Serialization::JsonProperty property, Newtonsoft::Json::JsonConverter propertyConverter, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method CalculatePropertyDetails addr 0x250aef0 size 0x358 virtual false final false
 bool CalculatePropertyDetails(Newtonsoft::Json::Serialization::JsonProperty property, ByRef<Newtonsoft::Json::JsonConverter> propertyConverter, Newtonsoft::Json::Serialization::JsonContainerContract containerContract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target, ByRef<bool> useExistingValue, ByRef<::bs_hook::Il2CppWrapperType> currentValue, ByRef<Newtonsoft::Json::Serialization::JsonContract> propertyContract, ByRef<bool> gottenCurrentValue) ;

/// @brief Method AddReference addr 0x250b374 size 0x3c4 virtual false final false
 void AddReference(Newtonsoft::Json::JsonReader reader, ::StringW id, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method HasFlag addr 0x250b368 size 0xc virtual false final false
 bool HasFlag(Newtonsoft::Json::DefaultValueHandling value, Newtonsoft::Json::DefaultValueHandling flag) ;

/// @brief Method ShouldSetPropertyValue addr 0x250b248 size 0x120 virtual false final false
 bool ShouldSetPropertyValue(Newtonsoft::Json::Serialization::JsonProperty property, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CreateNewList addr 0x250a164 size 0x268 virtual false final false
 System::Collections::IList CreateNewList(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonArrayContract contract, ByRef<bool> createdFromNonDefaultCreator) ;

/// @brief Method CreateNewDictionary addr 0x25092b8 size 0x1f8 virtual false final false
 System::Collections::IDictionary CreateNewDictionary(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonDictionaryContract contract, ByRef<bool> createdFromNonDefaultCreator) ;

/// @brief Method OnDeserializing addr 0x250b738 size 0x22c virtual false final false
 void OnDeserializing(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method OnDeserialized addr 0x250b964 size 0x22c virtual false final false
 void OnDeserialized(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method PopulateDictionary addr 0x2504238 size 0x8c8 virtual false final false
 ::bs_hook::Il2CppWrapperType PopulateDictionary(System::Collections::IDictionary dictionary, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonDictionaryContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, ::StringW id) ;

/// @brief Method PopulateMultidimensionalArray addr 0x250a3cc size 0x6a4 virtual false final false
 ::bs_hook::Il2CppWrapperType PopulateMultidimensionalArray(System::Collections::IList list, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonArrayContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, ::StringW id) ;

/// @brief Method ThrowUnexpectedEndException addr 0x250bb90 size 0x134 virtual false final false
 void ThrowUnexpectedEndException(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType currentObject, ::StringW message) ;

/// @brief Method PopulateList addr 0x2503d20 size 0x518 virtual false final false
 ::bs_hook::Il2CppWrapperType PopulateList(System::Collections::IList list, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonArrayContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, ::StringW id) ;

/// @brief Method CreateISerializable addr 0x25094b0 size 0x634 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateISerializable(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonISerializableContract contract, Newtonsoft::Json::Serialization::JsonProperty member, ::StringW id) ;

/// @brief Method CreateISerializableItem addr 0x24f5a18 size 0xf4 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateISerializableItem(Newtonsoft::Json::Linq::JToken token, System::Type type, Newtonsoft::Json::Serialization::JsonISerializableContract contract, Newtonsoft::Json::Serialization::JsonProperty member) ;

/// @brief Method CreateObjectUsingCreatorWithParameters addr 0x250bcc4 size 0x1b6c virtual false final false
 ::bs_hook::Il2CppWrapperType CreateObjectUsingCreatorWithParameters(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> creator, ::StringW id) ;

/// @brief Method DeserializeConvertable addr 0x2505b5c size 0x414 virtual false final false
 ::bs_hook::Il2CppWrapperType DeserializeConvertable(Newtonsoft::Json::JsonConverter converter, Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue) ;

/// @brief Method ResolvePropertyAndCreatorValues addr 0x250d830 size 0x620 virtual false final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext> ResolvePropertyAndCreatorValues(Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty containerProperty, Newtonsoft::Json::JsonReader reader, System::Type objectType) ;

/// @brief Method ReadForType addr 0x25059a0 size 0x1bc virtual false final false
 bool ReadForType(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonContract contract, bool hasConverter) ;

/// @brief Method CreateNewObject addr 0x25090d0 size 0x1e8 virtual false final false
 ::bs_hook::Il2CppWrapperType CreateNewObject(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonObjectContract objectContract, Newtonsoft::Json::Serialization::JsonProperty containerMember, Newtonsoft::Json::Serialization::JsonProperty containerProperty, ::StringW id, ByRef<bool> createdFromNonDefaultCreator) ;

/// @brief Method PopulateObject addr 0x2504b00 size 0xa28 virtual false final false
 ::bs_hook::Il2CppWrapperType PopulateObject(::bs_hook::Il2CppWrapperType newObject, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty member, ::StringW id) ;

/// @brief Method ShouldDeserialize addr 0x250e520 size 0x274 virtual false final false
 bool ShouldDeserialize(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonProperty property, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method CheckPropertyName addr 0x2506b00 size 0x11c virtual false final false
 bool CheckPropertyName(Newtonsoft::Json::JsonReader reader, ::StringW memberName) ;

/// @brief Method SetExtensionData addr 0x250e3ac size 0x174 virtual false final false
 void SetExtensionData(Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::JsonReader reader, ::StringW memberName, ::bs_hook::Il2CppWrapperType o) ;

/// @brief Method ReadExtensionDataValue addr 0x250e2f0 size 0xbc virtual false final false
 ::bs_hook::Il2CppWrapperType ReadExtensionDataValue(Newtonsoft::Json::Serialization::JsonObjectContract contract, Newtonsoft::Json::Serialization::JsonProperty member, Newtonsoft::Json::JsonReader reader) ;

/// @brief Method EndProcessProperty addr 0x250de50 size 0x4a0 virtual false final false
 void EndProcessProperty(::bs_hook::Il2CppWrapperType newObject, Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonObjectContract contract, int32_t initialDepth, Newtonsoft::Json::Serialization::JsonProperty property, Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence presence, bool setDefaultValue) ;

/// @brief Method SetPropertyPresence addr 0x250e794 size 0x1110 virtual false final false
 void SetPropertyPresence(Newtonsoft::Json::JsonReader reader, Newtonsoft::Json::Serialization::JsonProperty property, System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::JsonProperty,Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence> requiredProperties) ;

/// @brief Method HandleError addr 0x2506404 size 0x6c virtual false final false
 void HandleError(Newtonsoft::Json::JsonReader reader, bool readPastError, int32_t initialDepth) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__PropertyPresence, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/PropertyPresence");
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonSerializerInternalReader);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonSerializerInternalReader, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader");
NEED_NO_BOX(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader__CreatorPropertyContext, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/CreatorPropertyContext");
NEED_NO_BOX(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c");
NEED_NO_BOX(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalReader____c__DisplayClass36_0, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c__DisplayClass36_0");
