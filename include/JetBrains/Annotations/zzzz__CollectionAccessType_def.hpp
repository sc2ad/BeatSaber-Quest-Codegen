#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
struct CollectionAccessType;
}
// Type: JetBrains.Annotations::CollectionAccessType
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15726))
// CS Name: JetBrains.Annotations.CollectionAccessType
struct CORDL_TYPE CollectionAccessType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollectionAccessType(int32_t value__) noexcept;


                    constexpr CollectionAccessType(CollectionAccessType const&) = default;
                    constexpr CollectionAccessType(CollectionAccessType&&) = default;
                    constexpr CollectionAccessType& operator=(CollectionAccessType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CollectionAccessType& operator=(CollectionAccessType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CollectionAccessType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CollectionAccessType_Unwrapped : int32_t {
__None = 0,
__Read = 1,
__ModifyExistingContent = 2,
__UpdatedContent = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CollectionAccessType_Unwrapped () const noexcept {
return std::bit_cast<__CollectionAccessType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::JetBrains::Annotations::CollectionAccessType const None;

/// @brief Field Read offset 0
static ::JetBrains::Annotations::CollectionAccessType const Read;

/// @brief Field ModifyExistingContent offset 0
static ::JetBrains::Annotations::CollectionAccessType const ModifyExistingContent;

/// @brief Field UpdatedContent offset 0
static ::JetBrains::Annotations::CollectionAccessType const UpdatedContent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::CollectionAccessType, "JetBrains.Annotations", "CollectionAccessType");
