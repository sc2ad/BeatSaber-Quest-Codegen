#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Security::AccessControl {
class AceEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Security::AccessControl {
class GenericAcl;
}
// Type: System.Security.AccessControl::GenericAcl
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3032))
// CS Name: System.Security.AccessControl.GenericAcl
class CORDL_TYPE GenericAcl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericAcl() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericAcl", modifiers: " const&", def_value: None }]
constexpr GenericAcl(GenericAcl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericAcl", modifiers: "&&", def_value: None }]
constexpr GenericAcl(GenericAcl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericAcl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericAcl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericAcl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericAcl& operator=(GenericAcl&& o) noexcept = default;
  constexpr GenericAcl& operator=(GenericAcl const& o) noexcept = default;
                


// Fields

static uint8_t __declspec(property(get=__get_AclRevision, put=__set_AclRevision))  AclRevision;

static void __set_AclRevision(uint8_t value) ;

static uint8_t __get_AclRevision() ;

static uint8_t __declspec(property(get=__get_AclRevisionDS, put=__set_AclRevisionDS))  AclRevisionDS;

static void __set_AclRevisionDS(uint8_t value) ;

static uint8_t __get_AclRevisionDS() ;

static int32_t __declspec(property(get=__get_MaxBinaryLength, put=__set_MaxBinaryLength))  MaxBinaryLength;

static void __set_MaxBinaryLength(int32_t value) ;

static int32_t __get_MaxBinaryLength() ;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 System::Security::AccessControl::GenericAce __declspec(property(get=get_Item, put=set_Item))  Item;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

static System::Security::AccessControl::GenericAcl New_ctor() ;

/// @brief Method .ctor addr 0x2316014 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsSynchronized addr 0x2318a74 size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::AccessControl::GenericAce get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Item(int32_t index, System::Security::AccessControl::GenericAce value) ;

/// @brief Method get_SyncRoot addr 0x2318a7c size 0x4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method CopyTo addr 0x2318a80 size 0x18c virtual false final false
 void CopyTo(::ArrayW<System::Security::AccessControl::GenericAce> array, int32_t index) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x2318c0c size 0x84 virtual true final true
 void System_Collections_ICollection_CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x2316900 size 0x6c virtual false final false
 System::Security::AccessControl::AceEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2318c90 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::GenericAcl);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::GenericAcl, "System.Security.AccessControl", "GenericAcl");
