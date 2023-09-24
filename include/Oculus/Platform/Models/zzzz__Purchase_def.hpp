#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Purchase;
}
// Type: Oculus.Platform.Models::Purchase
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13465))
// CS Name: Oculus.Platform.Models.Purchase
class CORDL_TYPE Purchase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Purchase() = default;

// Ctor Parameters [CppParam { name: "", ty: "Purchase", modifiers: " const&", def_value: None }]
constexpr Purchase(Purchase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Purchase", modifiers: "&&", def_value: None }]
constexpr Purchase(Purchase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Purchase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Purchase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Purchase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Purchase& operator=(Purchase&& o) noexcept = default;
  constexpr Purchase& operator=(Purchase const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_DeveloperPayload, put=__set_DeveloperPayload))  DeveloperPayload;

constexpr void __set_DeveloperPayload(::StringW value) ;

constexpr ::StringW __get_DeveloperPayload() const;

 System::DateTime __declspec(property(get=__get_ExpirationTime, put=__set_ExpirationTime))  ExpirationTime;

constexpr void __set_ExpirationTime(System::DateTime value) ;

constexpr System::DateTime __get_ExpirationTime() const;

 System::DateTime __declspec(property(get=__get_GrantTime, put=__set_GrantTime))  GrantTime;

constexpr void __set_GrantTime(System::DateTime value) ;

constexpr System::DateTime __get_GrantTime() const;

 ::StringW __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(::StringW value) ;

constexpr ::StringW __get_ID() const;

 ::StringW __declspec(property(get=__get_ReportingId, put=__set_ReportingId))  ReportingId;

constexpr void __set_ReportingId(::StringW value) ;

constexpr ::StringW __get_ReportingId() const;

 ::StringW __declspec(property(get=__get_Sku, put=__set_Sku))  Sku;

constexpr void __set_Sku(::StringW value) ;

constexpr ::StringW __get_Sku() const;


// Methods

static Oculus::Platform::Models::Purchase New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a270c size 0xc8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Purchase);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Purchase, "Oculus.Platform.Models", "Purchase");
