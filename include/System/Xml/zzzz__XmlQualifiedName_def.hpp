#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml {
class System__Xml__XmlQualifiedName__HashCodeOfStringDelegate;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Type: ::HashCodeOfStringDelegate
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11514))
// CS Name: System.Xml.XmlQualifiedName::HashCodeOfStringDelegate
class CORDL_TYPE System__Xml__XmlQualifiedName__HashCodeOfStringDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Xml__XmlQualifiedName__HashCodeOfStringDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlQualifiedName__HashCodeOfStringDelegate", modifiers: " const&", def_value: None }]
constexpr System__Xml__XmlQualifiedName__HashCodeOfStringDelegate(System__Xml__XmlQualifiedName__HashCodeOfStringDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlQualifiedName__HashCodeOfStringDelegate", modifiers: "&&", def_value: None }]
constexpr System__Xml__XmlQualifiedName__HashCodeOfStringDelegate(System__Xml__XmlQualifiedName__HashCodeOfStringDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlQualifiedName__HashCodeOfStringDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Xml__XmlQualifiedName__HashCodeOfStringDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__XmlQualifiedName__HashCodeOfStringDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__XmlQualifiedName__HashCodeOfStringDelegate& operator=(System__Xml__XmlQualifiedName__HashCodeOfStringDelegate&& o) noexcept = default;
  constexpr System__Xml__XmlQualifiedName__HashCodeOfStringDelegate& operator=(System__Xml__XmlQualifiedName__HashCodeOfStringDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit System__Xml__XmlQualifiedName__HashCodeOfStringDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2715608 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x271594c size 0x14 virtual true final false
 int32_t Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::XmlQualifiedName
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11515))
// CS Name: System.Xml.XmlQualifiedName
class CORDL_TYPE XmlQualifiedName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HashCodeOfStringDelegate = System::Xml::System__Xml__XmlQualifiedName__HashCodeOfStringDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlQualifiedName() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName", modifiers: " const&", def_value: None }]
constexpr XmlQualifiedName(XmlQualifiedName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName", modifiers: "&&", def_value: None }]
constexpr XmlQualifiedName(XmlQualifiedName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlQualifiedName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlQualifiedName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlQualifiedName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlQualifiedName& operator=(XmlQualifiedName&& o) noexcept = default;
  constexpr XmlQualifiedName& operator=(XmlQualifiedName const& o) noexcept = default;
                


// Fields

static System::Xml::System__Xml__XmlQualifiedName__HashCodeOfStringDelegate __declspec(property(get=__get_hashCodeDelegate, put=__set_hashCodeDelegate))  hashCodeDelegate;

static void __set_hashCodeDelegate(System::Xml::System__Xml__XmlQualifiedName__HashCodeOfStringDelegate value) ;

static System::Xml::System__Xml__XmlQualifiedName__HashCodeOfStringDelegate __get_hashCodeDelegate() ;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_ns, put=__set_ns))  ns;

constexpr void __set_ns(::StringW value) ;

constexpr ::StringW __get_ns() const;

 int32_t __declspec(property(get=__get_hash, put=__set_hash))  hash;

constexpr void __set_hash(int32_t value) ;

constexpr int32_t __get_hash() const;

static System::Xml::XmlQualifiedName __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::Xml::XmlQualifiedName value) ;

static System::Xml::XmlQualifiedName __get_Empty() ;


// Properties

 ::StringW __declspec(property(get=get_Namespace))  Namespace;

 ::StringW __declspec(property(get=get_Name))  Name;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

// Ctor Parameters []
explicit XmlQualifiedName() ;

/// @brief Method .ctor addr 0x2715004 size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlQualifiedName(::StringW name) ;

/// @brief Method .ctor addr 0x27150e4 size 0x60 virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlQualifiedName(::StringW name, ::StringW ns) ;

/// @brief Method .ctor addr 0x2715058 size 0x8c virtual false final false
 void _ctor(::StringW name, ::StringW ns) ;

/// @brief Method get_Namespace addr 0x2715144 size 0x8 virtual false final false
 ::StringW get_Namespace() ;

/// @brief Method get_Name addr 0x271514c size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method GetHashCode addr 0x2715154 size 0xcc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_IsEmpty addr 0x271539c size 0x3c virtual false final false
 bool get_IsEmpty() ;

/// @brief Method ToString addr 0x27153d8 size 0x70 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x2715448 size 0xe0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method op_Equality addr 0x2715598 size 0x68 virtual false final false
static bool op_Equality(System::Xml::XmlQualifiedName a, System::Xml::XmlQualifiedName b) ;

/// @brief Method op_Inequality addr 0x2715528 size 0x70 virtual false final false
static bool op_Inequality(System::Xml::XmlQualifiedName a, System::Xml::XmlQualifiedName b) ;

/// @brief Method GetHashCodeDelegate addr 0x2715220 size 0x17c virtual false final false
static System::Xml::System__Xml__XmlQualifiedName__HashCodeOfStringDelegate GetHashCodeDelegate() ;

/// @brief Method IsRandomizedHashingDisabled addr 0x2715600 size 0x8 virtual false final false
static bool IsRandomizedHashingDisabled() ;

/// @brief Method GetHashCodeOfString addr 0x27156e0 size 0x1c virtual false final false
static int32_t GetHashCodeOfString(::StringW s, int32_t length, int64_t additionalEntropy) ;

/// @brief Method Init addr 0x27156fc size 0xc virtual false final false
 void Init(::StringW name, ::StringW ns) ;

/// @brief Method Parse addr 0x2715708 size 0x1b4 virtual false final false
static System::Xml::XmlQualifiedName Parse(::StringW s, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::StringW> prefix) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::System__Xml__XmlQualifiedName__HashCodeOfStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlQualifiedName__HashCodeOfStringDelegate, "System.Xml", "XmlQualifiedName/HashCodeOfStringDelegate");
NEED_NO_BOX(System::Xml::XmlQualifiedName);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlQualifiedName, "System.Xml", "XmlQualifiedName");
