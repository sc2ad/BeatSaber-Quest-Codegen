#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class Product;
}
// Type: Oculus.Platform.Models::Product
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13463))
// CS Name: Oculus.Platform.Models.Product
class CORDL_TYPE Product : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Product() = default;

// Ctor Parameters [CppParam { name: "", ty: "Product", modifiers: " const&", def_value: None }]
constexpr Product(Product const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Product", modifiers: "&&", def_value: None }]
constexpr Product(Product&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Product(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Product& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Product& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Product& operator=(Product&& o) noexcept = default;
  constexpr Product& operator=(Product const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Description, put=__set_Description))  Description;

constexpr void __set_Description(::StringW value) ;

constexpr ::StringW __get_Description() const;

 ::StringW __declspec(property(get=__get_FormattedPrice, put=__set_FormattedPrice))  FormattedPrice;

constexpr void __set_FormattedPrice(::StringW value) ;

constexpr ::StringW __get_FormattedPrice() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 ::StringW __declspec(property(get=__get_Sku, put=__set_Sku))  Sku;

constexpr void __set_Sku(::StringW value) ;

constexpr ::StringW __get_Sku() const;


// Methods

static Oculus::Platform::Models::Product New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a2408 size 0xa8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Product);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Product, "Oculus.Platform.Models", "Product");
