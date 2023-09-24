#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Cms {
struct CmsAttributeTableParameter;
}
// Type: Org.BouncyCastle.Cms::CmsAttributeTableParameter
namespace Org::BouncyCastle::Cms {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(614))
// CS Name: Org.BouncyCastle.Cms.CmsAttributeTableParameter
struct CORDL_TYPE CmsAttributeTableParameter : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CmsAttributeTableParameter(int32_t value__) noexcept;


                    constexpr CmsAttributeTableParameter(CmsAttributeTableParameter const&) = default;
                    constexpr CmsAttributeTableParameter(CmsAttributeTableParameter&&) = default;
                    constexpr CmsAttributeTableParameter& operator=(CmsAttributeTableParameter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CmsAttributeTableParameter& operator=(CmsAttributeTableParameter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CmsAttributeTableParameter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CmsAttributeTableParameter_Unwrapped : int32_t {
__ContentType = 0,
__Digest = 1,
__Signature = 2,
__DigestAlgorithmIdentifier = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CmsAttributeTableParameter_Unwrapped () const noexcept {
return std::bit_cast<__CmsAttributeTableParameter_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ContentType offset 0
static Org::BouncyCastle::Cms::CmsAttributeTableParameter const ContentType;

/// @brief Field Digest offset 0
static Org::BouncyCastle::Cms::CmsAttributeTableParameter const Digest;

/// @brief Field Signature offset 0
static Org::BouncyCastle::Cms::CmsAttributeTableParameter const Signature;

/// @brief Field DigestAlgorithmIdentifier offset 0
static Org::BouncyCastle::Cms::CmsAttributeTableParameter const DigestAlgorithmIdentifier;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsAttributeTableParameter, "Org.BouncyCastle.Cms", "CmsAttributeTableParameter");
