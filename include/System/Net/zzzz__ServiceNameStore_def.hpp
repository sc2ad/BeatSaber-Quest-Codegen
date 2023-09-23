#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Authentication::ExtendedProtection {
class ServiceNameCollection;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net {
class ServiceNameStore;
}
// Type: System.Net::ServiceNameStore
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7960))
// CS Name: System.Net.ServiceNameStore
class CORDL_TYPE ServiceNameStore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ServiceNameStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServiceNameStore", modifiers: " const&", def_value: None }]
constexpr ServiceNameStore(ServiceNameStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServiceNameStore", modifiers: "&&", def_value: None }]
constexpr ServiceNameStore(ServiceNameStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServiceNameStore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServiceNameStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServiceNameStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServiceNameStore& operator=(ServiceNameStore&& o) noexcept = default;
  constexpr ServiceNameStore& operator=(ServiceNameStore const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_serviceNames, put=__set_serviceNames))  serviceNames;

constexpr void __set_serviceNames(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_serviceNames() const;

 System::Security::Authentication::ExtendedProtection::ServiceNameCollection __declspec(property(get=__get_serviceNameCollection, put=__set_serviceNameCollection))  serviceNameCollection;

constexpr void __set_serviceNameCollection(System::Security::Authentication::ExtendedProtection::ServiceNameCollection value) ;

constexpr System::Security::Authentication::ExtendedProtection::ServiceNameCollection __get_serviceNameCollection() const;


// Methods

// Ctor Parameters []
explicit ServiceNameStore() ;

/// @brief Method .ctor addr 0x28171e8 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ServiceNameStore);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServiceNameStore, "System.Net", "ServiceNameStore");
