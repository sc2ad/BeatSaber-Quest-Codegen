#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Security::Policy {
class Evidence;
}
namespace System::Security::Policy {
class System__Security__Policy__Evidence__EvidenceEnumerator;
}
// Type: ::EvidenceEnumerator
namespace System::Security::Policy {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2896))
// CS Name: System.Security.Policy.Evidence::EvidenceEnumerator
class CORDL_TYPE System__Security__Policy__Evidence__EvidenceEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Security__Policy__Evidence__EvidenceEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Policy__Evidence__EvidenceEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Security__Policy__Evidence__EvidenceEnumerator(System__Security__Policy__Evidence__EvidenceEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__Policy__Evidence__EvidenceEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Security__Policy__Evidence__EvidenceEnumerator(System__Security__Policy__Evidence__EvidenceEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__Policy__Evidence__EvidenceEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Security__Policy__Evidence__EvidenceEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Security__Policy__Evidence__EvidenceEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Security__Policy__Evidence__EvidenceEnumerator& operator=(System__Security__Policy__Evidence__EvidenceEnumerator&& o) noexcept = default;
  constexpr System__Security__Policy__Evidence__EvidenceEnumerator& operator=(System__Security__Policy__Evidence__EvidenceEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::IEnumerator __declspec(property(get=__get_currentEnum, put=__set_currentEnum))  currentEnum;

constexpr void __set_currentEnum(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_currentEnum() const;

 System::Collections::IEnumerator __declspec(property(get=__get_hostEnum, put=__set_hostEnum))  hostEnum;

constexpr void __set_hostEnum(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_hostEnum() const;

 System::Collections::IEnumerator __declspec(property(get=__get_assemblyEnum, put=__set_assemblyEnum))  assemblyEnum;

constexpr void __set_assemblyEnum(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_assemblyEnum() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "hostenum", ty: "System::Collections::IEnumerator", modifiers: "", def_value: None }, CppParam { name: "assemblyenum", ty: "System::Collections::IEnumerator", modifiers: "", def_value: None }]
explicit System__Security__Policy__Evidence__EvidenceEnumerator(System::Collections::IEnumerator hostenum, System::Collections::IEnumerator assemblyenum) ;

/// @brief Method .ctor addr 0x22ea55c size 0x30 virtual false final false
 void _ctor(System::Collections::IEnumerator hostenum, System::Collections::IEnumerator assemblyenum) ;

/// @brief Method MoveNext addr 0x22ea58c size 0x128 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x22ea6b4 size 0x120 virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x22ea7d4 size 0xa4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Policy
// Type: System.Security.Policy::Evidence
namespace System::Security::Policy {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2897))
// CS Name: System.Security.Policy.Evidence
class CORDL_TYPE Evidence : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EvidenceEnumerator = System::Security::Policy::System__Security__Policy__Evidence__EvidenceEnumerator;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Evidence() = default;

// Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: " const&", def_value: None }]
constexpr Evidence(Evidence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: "&&", def_value: None }]
constexpr Evidence(Evidence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Evidence(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Evidence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Evidence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Evidence& operator=(Evidence&& o) noexcept = default;
  constexpr Evidence& operator=(Evidence const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__locked, put=__set__locked))  _locked;

constexpr void __set__locked(bool value) ;

constexpr bool __get__locked() const;

 System::Collections::ArrayList __declspec(property(get=__get_hostEvidenceList, put=__set_hostEvidenceList))  hostEvidenceList;

constexpr void __set_hostEvidenceList(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_hostEvidenceList() const;

 System::Collections::ArrayList __declspec(property(get=__get_assemblyEvidenceList, put=__set_assemblyEvidenceList))  assemblyEvidenceList;

constexpr void __set_assemblyEvidenceList(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_assemblyEvidenceList() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

// Ctor Parameters []
explicit Evidence() ;

/// @brief Method .ctor addr 0x22ea378 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Count addr 0x22ea380 size 0x5c virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsSynchronized addr 0x22ea3dc size 0x8 virtual true final true
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x22ea3e4 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method CopyTo addr 0x22ea3e8 size 0xc4 virtual true final true
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method GetEnumerator addr 0x22ea4ac size 0xb0 virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Policy
NEED_NO_BOX(System::Security::Policy::Evidence);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Policy::Evidence, "System.Security.Policy", "Evidence");
NEED_NO_BOX(System::Security::Policy::System__Security__Policy__Evidence__EvidenceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Policy::System__Security__Policy__Evidence__EvidenceEnumerator, "System.Security.Policy", "Evidence/EvidenceEnumerator");
