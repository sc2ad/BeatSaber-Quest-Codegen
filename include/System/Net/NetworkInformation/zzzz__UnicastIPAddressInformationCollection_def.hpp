#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformation;
}
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
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class Collection_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformationCollection;
}
// Type: System.Net.NetworkInformation::UnicastIPAddressInformationCollection
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8108))
// CS Name: System.Net.NetworkInformation.UnicastIPAddressInformationCollection
class CORDL_TYPE UnicastIPAddressInformationCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation>
constexpr operator  System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Net::NetworkInformation::UnicastIPAddressInformation>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Net::NetworkInformation::UnicastIPAddressInformation>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnicastIPAddressInformationCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformationCollection", modifiers: " const&", def_value: None }]
constexpr UnicastIPAddressInformationCollection(UnicastIPAddressInformationCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformationCollection", modifiers: "&&", def_value: None }]
constexpr UnicastIPAddressInformationCollection(UnicastIPAddressInformationCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnicastIPAddressInformationCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnicastIPAddressInformationCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnicastIPAddressInformationCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnicastIPAddressInformationCollection& operator=(UnicastIPAddressInformationCollection&& o) noexcept = default;
  constexpr UnicastIPAddressInformationCollection& operator=(UnicastIPAddressInformationCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation> __declspec(property(get=__get_addresses, put=__set_addresses))  addresses;

constexpr void __set_addresses(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation> value) ;

constexpr System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation> __get_addresses() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

static System::Net::NetworkInformation::UnicastIPAddressInformationCollection New_ctor() ;

/// @brief Method .ctor addr 0x2859618 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method CopyTo addr 0x2859694 size 0x68 virtual true final false
 void CopyTo(::ArrayW<System::Net::NetworkInformation::UnicastIPAddressInformation> array, int32_t offset) ;

/// @brief Method get_Count addr 0x28596fc size 0x50 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x285974c size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method Add addr 0x2859754 size 0x60 virtual true final false
 void Add(System::Net::NetworkInformation::UnicastIPAddressInformation address) ;

/// @brief Method InternalAdd addr 0x28597b4 size 0x58 virtual false final false
 void InternalAdd(System::Net::NetworkInformation::UnicastIPAddressInformation address) ;

/// @brief Method Contains addr 0x285980c size 0x58 virtual true final false
 bool Contains(System::Net::NetworkInformation::UnicastIPAddressInformation address) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2859864 size 0x10 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x2859874 size 0x50 virtual true final false
 System::Collections::Generic::IEnumerator_1<System::Net::NetworkInformation::UnicastIPAddressInformation> GetEnumerator() ;

/// @brief Method Remove addr 0x28598c4 size 0x60 virtual true final false
 bool Remove(System::Net::NetworkInformation::UnicastIPAddressInformation address) ;

/// @brief Method Clear addr 0x2859924 size 0x60 virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::UnicastIPAddressInformationCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnicastIPAddressInformationCollection, "System.Net.NetworkInformation", "UnicastIPAddressInformationCollection");
