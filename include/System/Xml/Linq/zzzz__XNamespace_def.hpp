#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml::Linq {
class XName;
}
namespace System::Xml::Linq {
template<typename TValue>
class XHashtable_1;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Xml::Linq {
class XNamespace;
}
// Type: System.Xml.Linq::XNamespace
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15428))
// CS Name: System.Xml.Linq.XNamespace
class CORDL_TYPE XNamespace : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XNamespace() = default;

// Ctor Parameters [CppParam { name: "", ty: "XNamespace", modifiers: " const&", def_value: None }]
constexpr XNamespace(XNamespace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XNamespace", modifiers: "&&", def_value: None }]
constexpr XNamespace(XNamespace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XNamespace(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XNamespace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XNamespace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XNamespace& operator=(XNamespace&& o) noexcept = default;
  constexpr XNamespace& operator=(XNamespace const& o) noexcept = default;
                


// Fields

static System::Xml::Linq::XHashtable_1<System::WeakReference> __declspec(property(get=__get_s_namespaces, put=__set_s_namespaces))  s_namespaces;

static void __set_s_namespaces(System::Xml::Linq::XHashtable_1<System::WeakReference> value) ;

static System::Xml::Linq::XHashtable_1<System::WeakReference> __get_s_namespaces() ;

static System::WeakReference __declspec(property(get=__get_s_refNone, put=__set_s_refNone))  s_refNone;

static void __set_s_refNone(System::WeakReference value) ;

static System::WeakReference __get_s_refNone() ;

static System::WeakReference __declspec(property(get=__get_s_refXml, put=__set_s_refXml))  s_refXml;

static void __set_s_refXml(System::WeakReference value) ;

static System::WeakReference __get_s_refXml() ;

static System::WeakReference __declspec(property(get=__get_s_refXmlns, put=__set_s_refXmlns))  s_refXmlns;

static void __set_s_refXmlns(System::WeakReference value) ;

static System::WeakReference __get_s_refXmlns() ;

 ::StringW __declspec(property(get=__get__namespaceName, put=__set__namespaceName))  _namespaceName;

constexpr void __set__namespaceName(::StringW value) ;

constexpr ::StringW __get__namespaceName() const;

 int32_t __declspec(property(get=__get__hashCode, put=__set__hashCode))  _hashCode;

constexpr void __set__hashCode(int32_t value) ;

constexpr int32_t __get__hashCode() const;

 System::Xml::Linq::XHashtable_1<System::Xml::Linq::XName> __declspec(property(get=__get__names, put=__set__names))  _names;

constexpr void __set__names(System::Xml::Linq::XHashtable_1<System::Xml::Linq::XName> value) ;

constexpr System::Xml::Linq::XHashtable_1<System::Xml::Linq::XName> __get__names() const;


// Properties

 ::StringW __declspec(property(get=get_NamespaceName))  NamespaceName;

static System::Xml::Linq::XNamespace __declspec(property(get=get_None))  None;

static System::Xml::Linq::XNamespace __declspec(property(get=get_Xml))  Xml;

static System::Xml::Linq::XNamespace __declspec(property(get=get_Xmlns))  Xmlns;


// Methods

// Ctor Parameters [CppParam { name: "namespaceName", ty: "::StringW", modifiers: "", def_value: None }]
explicit XNamespace(::StringW namespaceName) ;

/// @brief Method .ctor addr 0x26cdf14 size 0xf0 virtual false final false
 void _ctor(::StringW namespaceName) ;

/// @brief Method get_NamespaceName addr 0x26ce004 size 0x8 virtual false final false
 ::StringW get_NamespaceName() ;

/// @brief Method GetName addr 0x26cdde8 size 0x64 virtual false final false
 System::Xml::Linq::XName GetName(::StringW localName) ;

/// @brief Method ToString addr 0x26ce00c size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_None addr 0x26cdd80 size 0x68 virtual false final false
static System::Xml::Linq::XNamespace get_None() ;

/// @brief Method get_Xml addr 0x26ce100 size 0x60 virtual false final false
static System::Xml::Linq::XNamespace get_Xml() ;

/// @brief Method get_Xmlns addr 0x26ce160 size 0x60 virtual false final false
static System::Xml::Linq::XNamespace get_Xmlns() ;

/// @brief Method Get addr 0x26cd3e4 size 0x64 virtual false final false
static System::Xml::Linq::XNamespace Get(::StringW namespaceName) ;

/// @brief Method op_Implicit addr 0x26ce1c0 size 0xc virtual false final false
static System::Xml::Linq::XNamespace op_Implicit_System__Xml__Linq__XNamespace(::StringW namespaceName) ;

/// @brief Method Equals addr 0x26ce1cc size 0xc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26ce1d8 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x26cc544 size 0xc virtual false final false
static bool op_Equality(System::Xml::Linq::XNamespace left, System::Xml::Linq::XNamespace right) ;

/// @brief Method op_Inequality addr 0x26ce1e0 size 0xc virtual false final false
static bool op_Inequality(System::Xml::Linq::XNamespace left, System::Xml::Linq::XNamespace right) ;

/// @brief Method GetName addr 0x26cdc74 size 0x10c virtual false final false
 System::Xml::Linq::XName GetName(::StringW localName, int32_t index, int32_t count) ;

/// @brief Method Get addr 0x26cd98c size 0x2e8 virtual false final false
static System::Xml::Linq::XNamespace Get(::StringW namespaceName, int32_t index, int32_t count) ;

/// @brief Method ExtractLocalName addr 0x26ce1ec size 0x18 virtual false final false
static ::StringW ExtractLocalName(System::Xml::Linq::XName n) ;

/// @brief Method ExtractNamespace addr 0x26ce204 size 0x78 virtual false final false
static ::StringW ExtractNamespace(System::WeakReference r) ;

/// @brief Method EnsureNamespace addr 0x26ce014 size 0xec virtual false final false
static System::Xml::Linq::XNamespace EnsureNamespace(ByRef<System::WeakReference> refNmsp, ::StringW namespaceName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
NEED_NO_BOX(System::Xml::Linq::XNamespace);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Linq::XNamespace, "System.Xml.Linq", "XNamespace");
