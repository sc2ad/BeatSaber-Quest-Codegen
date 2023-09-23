#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ServiceNameCollection;
}
// Type: System.Security.Authentication.ExtendedProtection::ServiceNameCollection
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3762))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7816))
// CS Name: System.Security.Authentication.ExtendedProtection.ServiceNameCollection
class CORDL_TYPE ServiceNameCollection : public System::Collections::ReadOnlyCollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ServiceNameCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServiceNameCollection", modifiers: " const&", def_value: None }]
constexpr ServiceNameCollection(ServiceNameCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServiceNameCollection", modifiers: "&&", def_value: None }]
constexpr ServiceNameCollection(ServiceNameCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServiceNameCollection(void* ptr) noexcept : System::Collections::ReadOnlyCollectionBase(ptr) {
}


  constexpr ServiceNameCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServiceNameCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServiceNameCollection& operator=(ServiceNameCollection&& o) noexcept = default;
  constexpr ServiceNameCollection& operator=(ServiceNameCollection const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Authentication::ExtendedProtection
NEED_NO_BOX(System::Security::Authentication::ExtendedProtection::ServiceNameCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Authentication::ExtendedProtection::ServiceNameCollection, "System.Security.Authentication.ExtendedProtection", "ServiceNameCollection");
