#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformation;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::ObjectModel {
template<typename T>
class Collection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
// Type: System.Net.NetworkInformation::GatewayIPAddressInformationCollection
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8097))
// CS Name: System.Net.NetworkInformation.GatewayIPAddressInformationCollection
class CORDL_TYPE GatewayIPAddressInformationCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation>
constexpr operator  System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Net::NetworkInformation::GatewayIPAddressInformation>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Net::NetworkInformation::GatewayIPAddressInformation>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GatewayIPAddressInformationCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "GatewayIPAddressInformationCollection", modifiers: " const&", def_value: None }]
constexpr GatewayIPAddressInformationCollection(GatewayIPAddressInformationCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GatewayIPAddressInformationCollection", modifiers: "&&", def_value: None }]
constexpr GatewayIPAddressInformationCollection(GatewayIPAddressInformationCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GatewayIPAddressInformationCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GatewayIPAddressInformationCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GatewayIPAddressInformationCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GatewayIPAddressInformationCollection& operator=(GatewayIPAddressInformationCollection&& o) noexcept = default;
  constexpr GatewayIPAddressInformationCollection& operator=(GatewayIPAddressInformationCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation> __declspec(property(get=__get_addresses, put=__set_addresses))  addresses;

constexpr void __set_addresses(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation> value) ;

constexpr System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation> __get_addresses() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

// Ctor Parameters []
explicit GatewayIPAddressInformationCollection() ;

/// @brief Method .ctor addr 0x28588ec size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method CopyTo addr 0x2858968 size 0x68 virtual true final false
 void CopyTo(::ArrayW<System::Net::NetworkInformation::GatewayIPAddressInformation> array, int32_t offset) ;

/// @brief Method get_Count addr 0x28589d0 size 0x50 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x2858a20 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method Add addr 0x2858a28 size 0x60 virtual true final false
 void Add(System::Net::NetworkInformation::GatewayIPAddressInformation address) ;

/// @brief Method InternalAdd addr 0x2858a88 size 0x58 virtual false final false
 void InternalAdd(System::Net::NetworkInformation::GatewayIPAddressInformation address) ;

/// @brief Method Contains addr 0x2858ae0 size 0x58 virtual true final false
 bool Contains(System::Net::NetworkInformation::GatewayIPAddressInformation address) ;

/// @brief Method GetEnumerator addr 0x2858b38 size 0x50 virtual true final false
 System::Collections::Generic::IEnumerator_1<System::Net::NetworkInformation::GatewayIPAddressInformation> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2858b88 size 0x10 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Remove addr 0x2858b98 size 0x60 virtual true final false
 bool Remove(System::Net::NetworkInformation::GatewayIPAddressInformation address) ;

/// @brief Method Clear addr 0x2858bf8 size 0x60 virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::GatewayIPAddressInformationCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::GatewayIPAddressInformationCollection, "System.Net.NetworkInformation", "GatewayIPAddressInformationCollection");
