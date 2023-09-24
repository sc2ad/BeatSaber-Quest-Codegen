#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::ComponentModel {
struct System__ComponentModel__AttributeCollection__AttributeEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Type;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Attribute;
}
// Forward declare root types
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
struct System__ComponentModel__AttributeCollection__AttributeEntry;
}
// Type: ::AttributeEntry
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8255))
// CS Name: System.ComponentModel.AttributeCollection::AttributeEntry
struct CORDL_TYPE System__ComponentModel__AttributeCollection__AttributeEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__ComponentModel__AttributeCollection__AttributeEntry(System::Type type, int32_t index) noexcept;


                    constexpr System__ComponentModel__AttributeCollection__AttributeEntry(System__ComponentModel__AttributeCollection__AttributeEntry const&) = default;
                    constexpr System__ComponentModel__AttributeCollection__AttributeEntry(System__ComponentModel__AttributeCollection__AttributeEntry&&) = default;
                    constexpr System__ComponentModel__AttributeCollection__AttributeEntry& operator=(System__ComponentModel__AttributeCollection__AttributeEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__ComponentModel__AttributeCollection__AttributeEntry& operator=(System__ComponentModel__AttributeCollection__AttributeEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__AttributeCollection__AttributeEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::AttributeCollection
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8256))
// CS Name: System.ComponentModel.AttributeCollection
class CORDL_TYPE AttributeCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AttributeEntry = System::ComponentModel::System__ComponentModel__AttributeCollection__AttributeEntry;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AttributeCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: " const&", def_value: None }]
constexpr AttributeCollection(AttributeCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "&&", def_value: None }]
constexpr AttributeCollection(AttributeCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AttributeCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeCollection& operator=(AttributeCollection&& o) noexcept = default;
  constexpr AttributeCollection& operator=(AttributeCollection const& o) noexcept = default;
                


// Fields

static System::ComponentModel::AttributeCollection __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::ComponentModel::AttributeCollection value) ;

static System::ComponentModel::AttributeCollection __get_Empty() ;

static System::Collections::Hashtable __declspec(property(get=__get_s_defaultAttributes, put=__set_s_defaultAttributes))  s_defaultAttributes;

static void __set_s_defaultAttributes(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_s_defaultAttributes() ;

 ::ArrayW<System::Attribute> __declspec(property(get=__get__attributes, put=__set__attributes))  _attributes;

constexpr void __set__attributes(::ArrayW<System::Attribute> value) ;

constexpr ::ArrayW<System::Attribute> __get__attributes() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_internalSyncObject, put=__set_s_internalSyncObject))  s_internalSyncObject;

static void __set_s_internalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_internalSyncObject() ;

 ::ArrayW<System::ComponentModel::System__ComponentModel__AttributeCollection__AttributeEntry> __declspec(property(get=__get__foundAttributeTypes, put=__set__foundAttributeTypes))  _foundAttributeTypes;

constexpr void __set__foundAttributeTypes(::ArrayW<System::ComponentModel::System__ComponentModel__AttributeCollection__AttributeEntry> value) ;

constexpr ::ArrayW<System::ComponentModel::System__ComponentModel__AttributeCollection__AttributeEntry> __get__foundAttributeTypes() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 ::ArrayW<System::Attribute> __declspec(property(get=get_Attributes))  Attributes;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Attribute __declspec(property(get=get_Item))  Item;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 int32_t __declspec(property(get=System_Collections_ICollection_get_Count))  System_Collections_ICollection_Count;


// Methods

static System::ComponentModel::AttributeCollection New_ctor(::ArrayW<System::Attribute> attributes) ;

/// @brief Method .ctor addr 0x2772f08 size 0x124 virtual false final false
 void _ctor(::ArrayW<System::Attribute> attributes) ;

/// @brief Method get_Attributes addr 0x277302c size 0x8 virtual true final false
 ::ArrayW<System::Attribute> get_Attributes() ;

/// @brief Method get_Count addr 0x2773034 size 0x24 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x2773058 size 0x4d8 virtual true final false
 System::Attribute get_Item(System::Type attributeType) ;

/// @brief Method Contains addr 0x2773a80 size 0x60 virtual false final false
 bool Contains(System::Attribute attribute) ;

/// @brief Method GetDefaultAttribute addr 0x2773530 size 0x550 virtual false final false
 System::Attribute GetDefaultAttribute(System::Type attributeType) ;

/// @brief Method GetEnumerator addr 0x2773ae0 size 0x24 virtual false final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x2773b04 size 0x8 virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x2773b0c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.ICollection.get_Count addr 0x2773b14 size 0x24 virtual true final true
 int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2773b38 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method CopyTo addr 0x2773b3c size 0x6c virtual true final true
 void CopyTo(System::Array array, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::AttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::AttributeCollection, "System.ComponentModel", "AttributeCollection");
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__AttributeCollection__AttributeEntry, "System.ComponentModel", "AttributeCollection/AttributeEntry");
