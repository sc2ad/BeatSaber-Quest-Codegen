#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json::Utilities {
template<typename TFirst,typename TSecond>
class BidirectionalDictionary_2;
}
namespace System {
class Exception;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalBase;
}
namespace Newtonsoft::Json::Serialization {
class Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer;
}
// Type: ::ReferenceEqualsEqualityComparer
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11891))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalBase::ReferenceEqualsEqualityComparer
class CORDL_TYPE Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer(Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer(Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer&& o) noexcept = default;
  constexpr Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer& operator=(Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer const& o) noexcept = default;
                


// Methods

/// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.Equals addr 0x25037cc size 0xc virtual true final true
 bool System_Collections_Generic_IEqualityComparer_System_Object__Equals(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

/// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode addr 0x25037d8 size 0xc virtual true final true
 int32_t System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer() ;

/// @brief Method .ctor addr 0x25032cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonSerializerInternalBase
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11892))
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalBase
class CORDL_TYPE JsonSerializerInternalBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ReferenceEqualsEqualityComparer = Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~JsonSerializerInternalBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalBase", modifiers: " const&", def_value: None }]
constexpr JsonSerializerInternalBase(JsonSerializerInternalBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalBase", modifiers: "&&", def_value: None }]
constexpr JsonSerializerInternalBase(JsonSerializerInternalBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonSerializerInternalBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonSerializerInternalBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonSerializerInternalBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonSerializerInternalBase& operator=(JsonSerializerInternalBase&& o) noexcept = default;
  constexpr JsonSerializerInternalBase& operator=(JsonSerializerInternalBase const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Serialization::ErrorContext __declspec(property(get=__get__currentErrorContext, put=__set__currentErrorContext))  _currentErrorContext;

constexpr void __set__currentErrorContext(Newtonsoft::Json::Serialization::ErrorContext value) ;

constexpr Newtonsoft::Json::Serialization::ErrorContext __get__currentErrorContext() const;

 Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__mappings, put=__set__mappings))  _mappings;

constexpr void __set__mappings(Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value) ;

constexpr Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __get__mappings() const;

 Newtonsoft::Json::JsonSerializer __declspec(property(get=__get_Serializer, put=__set_Serializer))  Serializer;

constexpr void __set_Serializer(Newtonsoft::Json::JsonSerializer value) ;

constexpr Newtonsoft::Json::JsonSerializer __get_Serializer() const;

 Newtonsoft::Json::Serialization::ITraceWriter __declspec(property(get=__get_TraceWriter, put=__set_TraceWriter))  TraceWriter;

constexpr void __set_TraceWriter(Newtonsoft::Json::Serialization::ITraceWriter value) ;

constexpr Newtonsoft::Json::Serialization::ITraceWriter __get_TraceWriter() const;

 Newtonsoft::Json::Serialization::JsonSerializerProxy __declspec(property(get=__get_InternalSerializer, put=__set_InternalSerializer))  InternalSerializer;

constexpr void __set_InternalSerializer(Newtonsoft::Json::Serialization::JsonSerializerProxy value) ;

constexpr Newtonsoft::Json::Serialization::JsonSerializerProxy __get_InternalSerializer() const;


// Properties

 Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_DefaultReferenceMappings))  DefaultReferenceMappings;


// Methods

// Ctor Parameters [CppParam { name: "serializer", ty: "Newtonsoft::Json::JsonSerializer", modifiers: "", def_value: None }]
explicit JsonSerializerInternalBase(Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method .ctor addr 0x2503244 size 0x88 virtual false final false
 void _ctor(Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method get_DefaultReferenceMappings addr 0x24f6894 size 0x110 virtual false final false
 Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> get_DefaultReferenceMappings() ;

/// @brief Method GetErrorContext addr 0x25032d4 size 0xec virtual false final false
 Newtonsoft::Json::Serialization::ErrorContext GetErrorContext(::bs_hook::Il2CppWrapperType currentObject, ::bs_hook::Il2CppWrapperType member, ::StringW path, System::Exception error) ;

/// @brief Method ClearErrorContext addr 0x25033c0 size 0x64 virtual false final false
 void ClearErrorContext() ;

/// @brief Method IsErrorHandled addr 0x2503424 size 0x3a8 virtual false final false
 bool IsErrorHandled(::bs_hook::Il2CppWrapperType currentObject, Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType keyValue, Newtonsoft::Json::IJsonLineInfo lineInfo, ::StringW path, System::Exception ex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonSerializerInternalBase);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonSerializerInternalBase, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase");
NEED_NO_BOX(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase/ReferenceEqualsEqualityComparer");
