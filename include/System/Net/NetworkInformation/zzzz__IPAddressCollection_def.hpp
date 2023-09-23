#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Net {
class IPAddress;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class Collection_1;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPAddressCollection;
}
// Type: System.Net.NetworkInformation::IPAddressCollection
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8098))
// CS Name: System.Net.NetworkInformation.IPAddressCollection
class CORDL_TYPE IPAddressCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Net::IPAddress>
constexpr operator  System::Collections::Generic::ICollection_1<System::Net::IPAddress>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Net::IPAddress>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Net::IPAddress>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IPAddressCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressCollection", modifiers: " const&", def_value: None }]
constexpr IPAddressCollection(IPAddressCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressCollection", modifiers: "&&", def_value: None }]
constexpr IPAddressCollection(IPAddressCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPAddressCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPAddressCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPAddressCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPAddressCollection& operator=(IPAddressCollection&& o) noexcept = default;
  constexpr IPAddressCollection& operator=(IPAddressCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ObjectModel::Collection_1<System::Net::IPAddress> __declspec(property(get=__get_addresses, put=__set_addresses))  addresses;

constexpr void __set_addresses(System::Collections::ObjectModel::Collection_1<System::Net::IPAddress> value) ;

constexpr System::Collections::ObjectModel::Collection_1<System::Net::IPAddress> __get_addresses() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

// Ctor Parameters []
explicit IPAddressCollection() ;

/// @brief Method .ctor addr 0x2858c58 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method CopyTo addr 0x2858cd4 size 0x68 virtual true final false
 void CopyTo(::ArrayW<System::Net::IPAddress> array, int32_t offset) ;

/// @brief Method get_Count addr 0x2858d3c size 0x50 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x2858d8c size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method Add addr 0x2858d94 size 0x60 virtual true final false
 void Add(System::Net::IPAddress address) ;

/// @brief Method InternalAdd addr 0x2858df4 size 0x58 virtual false final false
 void InternalAdd(System::Net::IPAddress address) ;

/// @brief Method Contains addr 0x2858e4c size 0x58 virtual true final false
 bool Contains(System::Net::IPAddress address) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2858ea4 size 0x10 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x2858eb4 size 0x50 virtual true final false
 System::Collections::Generic::IEnumerator_1<System::Net::IPAddress> GetEnumerator() ;

/// @brief Method Remove addr 0x2858f04 size 0x60 virtual true final false
 bool Remove(System::Net::IPAddress address) ;

/// @brief Method Clear addr 0x2858f64 size 0x60 virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::IPAddressCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::IPAddressCollection, "System.Net.NetworkInformation", "IPAddressCollection");
