#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Type: System.Xml.Schema::SymbolsDictionary
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11538))
// CS Name: System.Xml.Schema.SymbolsDictionary
class CORDL_TYPE SymbolsDictionary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SymbolsDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "SymbolsDictionary", modifiers: " const&", def_value: None }]
constexpr SymbolsDictionary(SymbolsDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SymbolsDictionary", modifiers: "&&", def_value: None }]
constexpr SymbolsDictionary(SymbolsDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SymbolsDictionary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SymbolsDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SymbolsDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SymbolsDictionary& operator=(SymbolsDictionary&& o) noexcept = default;
  constexpr SymbolsDictionary& operator=(SymbolsDictionary const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_last, put=__set_last))  last;

constexpr void __set_last(int32_t value) ;

constexpr int32_t __get_last() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_names, put=__set_names))  names;

constexpr void __set_names(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_names() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_wildcards, put=__set_wildcards))  wildcards;

constexpr void __set_wildcards(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_wildcards() const;

 ::System::Collections::ArrayList __declspec(property(get=__get_particles, put=__set_particles))  particles;

constexpr void __set_particles(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get_particles() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_particleLast, put=__set_particleLast))  particleLast;

constexpr void __set_particleLast(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_particleLast() const;

 bool __declspec(property(get=__get_isUpaEnforced, put=__set_isUpaEnforced))  isUpaEnforced;

constexpr void __set_isUpaEnforced(bool value) ;

constexpr bool __get_isUpaEnforced() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsUpaEnforced, put=set_IsUpaEnforced))  IsUpaEnforced;


// Methods

// Ctor Parameters []
explicit SymbolsDictionary() ;

/// @brief Method .ctor addr 0x27191b4 size 0xa4 virtual false final false
 void _ctor() ;

/// @brief Method get_Count addr 0x2719258 size 0xc virtual false final false
 int32_t get_Count() ;

/// @brief Method get_IsUpaEnforced addr 0x2719264 size 0x8 virtual false final false
 bool get_IsUpaEnforced() ;

/// @brief Method set_IsUpaEnforced addr 0x271926c size 0xc virtual false final false
 void set_IsUpaEnforced(bool value) ;

/// @brief Method AddName addr 0x2719278 size 0x134 virtual false final false
 int32_t AddName(::System::Xml::XmlQualifiedName name, ::bs_hook::Il2CppWrapperType particle) ;

/// @brief Method AddNamespaceList addr 0x27193ac size 0x39c virtual false final false
 void AddNamespaceList(::System::Xml::Schema::NamespaceList list, ::bs_hook::Il2CppWrapperType particle, bool allowLocal) ;

/// @brief Method AddWildcard addr 0x2719748 size 0x168 virtual false final false
 void AddWildcard(::StringW wildcard, ::bs_hook::Il2CppWrapperType particle) ;

/// @brief Method GetNamespaceListSymbols addr 0x27198b0 size 0x78c virtual false final false
 ::System::Collections::ICollection GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList list) ;

/// @brief Method Exists addr 0x271a03c size 0x30 virtual false final false
 bool Exists(::System::Xml::XmlQualifiedName name) ;

/// @brief Method GetParticle addr 0x271a06c size 0x3c virtual false final false
 ::bs_hook::Il2CppWrapperType GetParticle(int32_t symbol) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::SymbolsDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SymbolsDictionary, "System.Xml.Schema", "SymbolsDictionary");
