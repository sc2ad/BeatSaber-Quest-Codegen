#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements::UIR {
struct OwnedState;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
// Type: UnityEngine.UIElements.UIR::BMPAlloc
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7474))
// CS Name: UnityEngine.UIElements.UIR.BMPAlloc
struct CORDL_TYPE BMPAlloc : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "page", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageLine", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "bitIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "ownedState", ty: "::UnityEngine::UIElements::UIR::OwnedState", modifiers: "", def_value: None }]
constexpr BMPAlloc(int32_t page, uint16_t pageLine, uint8_t bitIndex, ::UnityEngine::UIElements::UIR::OwnedState ownedState) noexcept;


                    constexpr BMPAlloc(BMPAlloc const&) = default;
                    constexpr BMPAlloc(BMPAlloc&&) = default;
                    constexpr BMPAlloc& operator=(BMPAlloc const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BMPAlloc& operator=(BMPAlloc&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BMPAlloc(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_Invalid, put=__set_Invalid))  Invalid;

static void __set_Invalid(::UnityEngine::UIElements::UIR::BMPAlloc value) ;

static ::UnityEngine::UIElements::UIR::BMPAlloc __get_Invalid() ;

 int32_t __declspec(property(get=__get_page, put=__set_page))  page;

constexpr void __set_page(int32_t value) ;

constexpr int32_t __get_page() const;

 uint16_t __declspec(property(get=__get_pageLine, put=__set_pageLine))  pageLine;

constexpr void __set_pageLine(uint16_t value) ;

constexpr uint16_t __get_pageLine() const;

 uint8_t __declspec(property(get=__get_bitIndex, put=__set_bitIndex))  bitIndex;

constexpr void __set_bitIndex(uint8_t value) ;

constexpr uint8_t __get_bitIndex() const;

 ::UnityEngine::UIElements::UIR::OwnedState __declspec(property(get=__get_ownedState, put=__set_ownedState))  ownedState;

constexpr void __set_ownedState(::UnityEngine::UIElements::UIR::OwnedState value) ;

constexpr ::UnityEngine::UIElements::UIR::OwnedState __get_ownedState() const;


// Methods

/// @brief Method Equals addr 0x2d11c84 size 0x38 virtual false final false
 bool Equals(::UnityEngine::UIElements::UIR::BMPAlloc other) ;

/// @brief Method IsValid addr 0x2d11cbc size 0x10 virtual false final false
 bool IsValid() ;

/// @brief Method ToString addr 0x2d11ccc size 0xf4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BMPAlloc, "UnityEngine.UIElements.UIR", "BMPAlloc");
