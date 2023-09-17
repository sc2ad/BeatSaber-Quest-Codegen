#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Xml {
class XmlNameTable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct ____System__Xml__XmlNamespaceManager__NamespaceDeclaration;
}
// Type: ::NamespaceDeclaration
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11511))
// CS Name: System.Xml.XmlNamespaceManager::NamespaceDeclaration
struct CORDL_TYPE ____System__Xml__XmlNamespaceManager__NamespaceDeclaration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "scopeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "previousNsIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Xml__XmlNamespaceManager__NamespaceDeclaration(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex) noexcept;


                    constexpr ____System__Xml__XmlNamespaceManager__NamespaceDeclaration(____System__Xml__XmlNamespaceManager__NamespaceDeclaration const&) = default;
                    constexpr ____System__Xml__XmlNamespaceManager__NamespaceDeclaration(____System__Xml__XmlNamespaceManager__NamespaceDeclaration&&) = default;
                    constexpr ____System__Xml__XmlNamespaceManager__NamespaceDeclaration& operator=(____System__Xml__XmlNamespaceManager__NamespaceDeclaration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Xml__XmlNamespaceManager__NamespaceDeclaration& operator=(____System__Xml__XmlNamespaceManager__NamespaceDeclaration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Xml__XmlNamespaceManager__NamespaceDeclaration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 ::StringW __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(::StringW value) ;

constexpr ::StringW __get_uri() const;

 int32_t __declspec(property(get=__get_scopeId, put=__set_scopeId))  scopeId;

constexpr void __set_scopeId(int32_t value) ;

constexpr int32_t __get_scopeId() const;

 int32_t __declspec(property(get=__get_previousNsIndex, put=__set_previousNsIndex))  previousNsIndex;

constexpr void __set_previousNsIndex(int32_t value) ;

constexpr int32_t __get_previousNsIndex() const;


// Methods

/// @brief Method Set addr 0x27145ac size 0xc virtual false final false
 void Set(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::XmlNamespaceManager
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11512))
// CS Name: System.Xml.XmlNamespaceManager
class CORDL_TYPE XmlNamespaceManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NamespaceDeclaration = ::System::Xml::____System__Xml__XmlNamespaceManager__NamespaceDeclaration;

/// @brief Convert operator to ::System::Xml::IXmlNamespaceResolver
constexpr operator  ::System::Xml::IXmlNamespaceResolver() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~XmlNamespaceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNamespaceManager", modifiers: " const&", def_value: None }]
constexpr XmlNamespaceManager(XmlNamespaceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNamespaceManager", modifiers: "&&", def_value: None }]
constexpr XmlNamespaceManager(XmlNamespaceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNamespaceManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlNamespaceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNamespaceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNamespaceManager& operator=(XmlNamespaceManager&& o) noexcept = default;
  constexpr XmlNamespaceManager& operator=(XmlNamespaceManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<::System::Xml::____System__Xml__XmlNamespaceManager__NamespaceDeclaration> __declspec(property(get=__get_nsdecls, put=__set_nsdecls))  nsdecls;

constexpr void __set_nsdecls(::ArrayW<::System::Xml::____System__Xml__XmlNamespaceManager__NamespaceDeclaration> value) ;

constexpr ::ArrayW<::System::Xml::____System__Xml__XmlNamespaceManager__NamespaceDeclaration> __get_nsdecls() const;

 int32_t __declspec(property(get=__get_lastDecl, put=__set_lastDecl))  lastDecl;

constexpr void __set_lastDecl(int32_t value) ;

constexpr int32_t __get_lastDecl() const;

 ::System::Xml::XmlNameTable __declspec(property(get=__get_nameTable, put=__set_nameTable))  nameTable;

constexpr void __set_nameTable(::System::Xml::XmlNameTable value) ;

constexpr ::System::Xml::XmlNameTable __get_nameTable() const;

 int32_t __declspec(property(get=__get_scopeId, put=__set_scopeId))  scopeId;

constexpr void __set_scopeId(int32_t value) ;

constexpr int32_t __get_scopeId() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get_hashTable, put=__set_hashTable))  hashTable;

constexpr void __set_hashTable(::System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get_hashTable() const;

 bool __declspec(property(get=__get_useHashtable, put=__set_useHashtable))  useHashtable;

constexpr void __set_useHashtable(bool value) ;

constexpr bool __get_useHashtable() const;

 ::StringW __declspec(property(get=__get_xml, put=__set_xml))  xml;

constexpr void __set_xml(::StringW value) ;

constexpr ::StringW __get_xml() const;

 ::StringW __declspec(property(get=__get_xmlNs, put=__set_xmlNs))  xmlNs;

constexpr void __set_xmlNs(::StringW value) ;

constexpr ::StringW __get_xmlNs() const;


// Properties

 ::System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 ::StringW __declspec(property(get=get_DefaultNamespace))  DefaultNamespace;


// Methods

// Ctor Parameters []
explicit XmlNamespaceManager() ;

/// @brief Method .ctor addr 0x27143e8 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "nameTable", ty: "::System::Xml::XmlNameTable", modifiers: "", def_value: None }]
explicit XmlNamespaceManager(::System::Xml::XmlNameTable nameTable) ;

/// @brief Method .ctor addr 0x27143f0 size 0x1bc virtual false final false
 void _ctor(::System::Xml::XmlNameTable nameTable) ;

/// @brief Method get_NameTable addr 0x27145b8 size 0x8 virtual true final false
 ::System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method get_DefaultNamespace addr 0x27145c0 size 0x70 virtual true final false
 ::StringW get_DefaultNamespace() ;

/// @brief Method PushScope addr 0x2714630 size 0x10 virtual true final false
 void PushScope() ;

/// @brief Method PopScope addr 0x2714640 size 0xd8 virtual true final false
 bool PopScope() ;

/// @brief Method AddNamespace addr 0x2714718 size 0x3a4 virtual true final false
 void AddNamespace(::StringW prefix, ::StringW uri) ;

/// @brief Method RemoveNamespace addr 0x2714c48 size 0x13c virtual true final false
 void RemoveNamespace(::StringW prefix, ::StringW uri) ;

/// @brief Method GetEnumerator addr 0x2714d84 size 0x170 virtual true final false
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method LookupNamespace addr 0x2714ef4 size 0x4c virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method LookupNamespaceDecl addr 0x2714abc size 0x18c virtual false final false
 int32_t LookupNamespaceDecl(::StringW prefix) ;

/// @brief Method LookupPrefix addr 0x2714f40 size 0xc4 virtual true final false
 ::StringW LookupPrefix(::StringW uri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamespaceManager, "System.Xml", "XmlNamespaceManager");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::____System__Xml__XmlNamespaceManager__NamespaceDeclaration, "System.Xml", "XmlNamespaceManager/NamespaceDeclaration");
