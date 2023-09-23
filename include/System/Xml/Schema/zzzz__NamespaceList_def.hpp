#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
struct System__Xml__Schema__NamespaceList__ListType;
}
namespace System::Xml::Schema {
class NamespaceList;
}
// Type: ::ListType
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11640))
// CS Name: System.Xml.Schema.NamespaceList::ListType
struct CORDL_TYPE System__Xml__Schema__NamespaceList__ListType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__NamespaceList__ListType(int32_t value__) noexcept;


                    constexpr System__Xml__Schema__NamespaceList__ListType(System__Xml__Schema__NamespaceList__ListType const&) = default;
                    constexpr System__Xml__Schema__NamespaceList__ListType(System__Xml__Schema__NamespaceList__ListType&&) = default;
                    constexpr System__Xml__Schema__NamespaceList__ListType& operator=(System__Xml__Schema__NamespaceList__ListType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__NamespaceList__ListType& operator=(System__Xml__Schema__NamespaceList__ListType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__NamespaceList__ListType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__Schema__NamespaceList__ListType_Unwrapped : int32_t {
__Any = 0,
__Other = 1,
__Set = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__Schema__NamespaceList__ListType_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__Schema__NamespaceList__ListType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Any offset 0
static System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType const Any;

/// @brief Field Other offset 0
static System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType const Other;

/// @brief Field Set offset 0
static System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType const Set;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::NamespaceList
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11641))
// CS Name: System.Xml.Schema.NamespaceList
class CORDL_TYPE NamespaceList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ListType = System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NamespaceList() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamespaceList", modifiers: " const&", def_value: None }]
constexpr NamespaceList(NamespaceList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamespaceList", modifiers: "&&", def_value: None }]
constexpr NamespaceList(NamespaceList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamespaceList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NamespaceList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamespaceList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamespaceList& operator=(NamespaceList&& o) noexcept = default;
  constexpr NamespaceList& operator=(NamespaceList const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType value) ;

constexpr System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType __get_type() const;

 System::Collections::Hashtable __declspec(property(get=__get_set, put=__set_set))  set;

constexpr void __set_set(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_set() const;

 ::StringW __declspec(property(get=__get_targetNamespace, put=__set_targetNamespace))  targetNamespace;

constexpr void __set_targetNamespace(::StringW value) ;

constexpr ::StringW __get_targetNamespace() const;


// Properties

 System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType __declspec(property(get=get_Type))  Type;

 ::StringW __declspec(property(get=get_Excluded))  Excluded;

 System::Collections::ICollection __declspec(property(get=get_Enumerate))  Enumerate;


// Methods

// Ctor Parameters []
explicit NamespaceList() ;

/// @brief Method .ctor addr 0x273015c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "namespaces", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "targetNamespace", ty: "::StringW", modifiers: "", def_value: None }]
explicit NamespaceList(::StringW namespaces, ::StringW targetNamespace) ;

/// @brief Method .ctor addr 0x2730164 size 0x2a0 virtual false final false
 void _ctor(::StringW namespaces, ::StringW targetNamespace) ;

/// @brief Method get_Type addr 0x2730404 size 0x8 virtual false final false
 System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType get_Type() ;

/// @brief Method get_Excluded addr 0x273040c size 0x8 virtual false final false
 ::StringW get_Excluded() ;

/// @brief Method get_Enumerate addr 0x2730414 size 0x6c virtual false final false
 System::Collections::ICollection get_Enumerate() ;

/// @brief Method Allows addr 0x2730480 size 0x84 virtual true final false
 bool Allows(::StringW ns) ;

/// @brief Method Allows addr 0x2730504 size 0x20 virtual false final false
 bool Allows(System::Xml::XmlQualifiedName qname) ;

/// @brief Method ToString addr 0x2730524 size 0x4c8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType, "System.Xml.Schema", "NamespaceList/ListType");
NEED_NO_BOX(System::Xml::Schema::NamespaceList);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::NamespaceList, "System.Xml.Schema", "NamespaceList");
