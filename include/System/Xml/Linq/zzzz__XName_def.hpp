#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Xml::Linq {
class XNamespace;
}
// Forward declare root types
namespace System::Xml::Linq {
class XName;
}
// Type: System.Xml.Linq::XName
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15427))
// CS Name: System.Xml.Linq.XName
class CORDL_TYPE XName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::System::Xml::Linq::XName>
constexpr operator  ::System::IEquatable_1<::System::Xml::Linq::XName>() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XName() = default;

// Ctor Parameters [CppParam { name: "", ty: "XName", modifiers: " const&", def_value: None }]
constexpr XName(XName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XName", modifiers: "&&", def_value: None }]
constexpr XName(XName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XName& operator=(XName&& o) noexcept = default;
  constexpr XName& operator=(XName const& o) noexcept = default;
                


// Fields

 ::System::Xml::Linq::XNamespace __declspec(property(get=__get__ns, put=__set__ns))  _ns;

constexpr void __set__ns(::System::Xml::Linq::XNamespace value) ;

constexpr ::System::Xml::Linq::XNamespace __get__ns() const;

 ::StringW __declspec(property(get=__get__localName, put=__set__localName))  _localName;

constexpr void __set__localName(::StringW value) ;

constexpr ::StringW __get__localName() const;

 int32_t __declspec(property(get=__get__hashCode, put=__set__hashCode))  _hashCode;

constexpr void __set__hashCode(int32_t value) ;

constexpr int32_t __get__hashCode() const;


// Properties

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::System::Xml::Linq::XNamespace __declspec(property(get=get_Namespace))  Namespace;

 ::StringW __declspec(property(get=get_NamespaceName))  NamespaceName;


// Methods

// Ctor Parameters [CppParam { name: "ns", ty: "::System::Xml::Linq::XNamespace", modifiers: "", def_value: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None }]
explicit XName(::System::Xml::Linq::XNamespace ns, ::StringW localName) ;

/// @brief Method .ctor addr 0x26cd6e0 size 0xb8 virtual false final false
 void _ctor(::System::Xml::Linq::XNamespace ns, ::StringW localName) ;

/// @brief Method get_LocalName addr 0x26cd798 size 0x8 virtual false final false
 ::StringW get_LocalName() ;

/// @brief Method get_Namespace addr 0x26cd7a0 size 0x8 virtual false final false
 ::System::Xml::Linq::XNamespace get_Namespace() ;

/// @brief Method get_NamespaceName addr 0x26c889c size 0x1c virtual false final false
 ::StringW get_NamespaceName() ;

/// @brief Method ToString addr 0x26cd7a8 size 0x90 virtual true final false
 ::StringW ToString() ;

/// @brief Method Get addr 0x26cd838 size 0x154 virtual false final false
static ::System::Xml::Linq::XName Get(::StringW expandedName) ;

/// @brief Method Get addr 0x26cde4c size 0x24 virtual false final false
static ::System::Xml::Linq::XName Get(::StringW localName, ::StringW namespaceName) ;

/// @brief Method op_Implicit addr 0x26cde70 size 0xc virtual false final false
static ::System::Xml::Linq::XName op_Implicit___System__Xml__Linq__XName(::StringW expandedName) ;

/// @brief Method Equals addr 0x26cde7c size 0xc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26cde88 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x26c8148 size 0xc virtual false final false
static bool op_Equality(::System::Xml::Linq::XName left, ::System::Xml::Linq::XName right) ;

/// @brief Method System.IEquatable<System.Xml.Linq.XName>.Equals addr 0x26cde90 size 0xc virtual true final true
 bool System_IEquatable_System_Xml_Linq_XName__Equals(::System::Xml::Linq::XName other) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x26cde9c size 0x40 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters []
explicit XName() ;

/// @brief Method .ctor addr 0x26cdedc size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Linq::XName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XName, "System.Xml.Linq", "XName");
