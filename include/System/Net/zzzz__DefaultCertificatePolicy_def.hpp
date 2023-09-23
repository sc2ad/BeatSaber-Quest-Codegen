#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Net {
class DefaultCertificatePolicy;
}
// Type: System.Net::DefaultCertificatePolicy
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8009))
// CS Name: System.Net.DefaultCertificatePolicy
class CORDL_TYPE DefaultCertificatePolicy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultCertificatePolicy() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultCertificatePolicy", modifiers: " const&", def_value: None }]
constexpr DefaultCertificatePolicy(DefaultCertificatePolicy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultCertificatePolicy", modifiers: "&&", def_value: None }]
constexpr DefaultCertificatePolicy(DefaultCertificatePolicy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultCertificatePolicy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultCertificatePolicy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultCertificatePolicy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultCertificatePolicy& operator=(DefaultCertificatePolicy&& o) noexcept = default;
  constexpr DefaultCertificatePolicy& operator=(DefaultCertificatePolicy const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::DefaultCertificatePolicy);
DEFINE_IL2CPP_ARG_TYPE(System::Net::DefaultCertificatePolicy, "System.Net", "DefaultCertificatePolicy");
