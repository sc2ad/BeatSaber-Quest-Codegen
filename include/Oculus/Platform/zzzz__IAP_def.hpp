#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class ProductList;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class Purchase;
}
// Forward declare root types
namespace Oculus::Platform {
class IAP;
}
// Type: Oculus.Platform::IAP
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13330))
// CS Name: Oculus.Platform.IAP
class CORDL_TYPE IAP : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IAP() = default;

// Ctor Parameters [CppParam { name: "", ty: "IAP", modifiers: " const&", def_value: None }]
constexpr IAP(IAP const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IAP", modifiers: "&&", def_value: None }]
constexpr IAP(IAP&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAP(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IAP& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IAP& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IAP& operator=(IAP&& o) noexcept = default;
  constexpr IAP& operator=(IAP const& o) noexcept = default;
                


// Methods

/// @brief Method ConsumePurchase addr 0x25954ec size 0x150 virtual false final false
static Oculus::Platform::Request ConsumePurchase(::StringW sku) ;

/// @brief Method GetProductsBySKU addr 0x259563c size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList> GetProductsBySKU(::ArrayW<::StringW> skus) ;

/// @brief Method GetViewerPurchases addr 0x25957b4 size 0x15c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> GetViewerPurchases() ;

/// @brief Method GetViewerPurchasesDurableCache addr 0x2595910 size 0x15c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> GetViewerPurchasesDurableCache() ;

/// @brief Method LaunchCheckoutFlow addr 0x2595a6c size 0x1bc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Purchase> LaunchCheckoutFlow(::StringW sku) ;

/// @brief Method GetNextProductListPage addr 0x2595c28 size 0x1e0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList> GetNextProductListPage(Oculus::Platform::Models::ProductList list) ;

/// @brief Method GetNextPurchaseListPage addr 0x2595e08 size 0x1e0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> GetNextPurchaseListPage(Oculus::Platform::Models::PurchaseList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::IAP);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::IAP, "Oculus.Platform", "IAP");
