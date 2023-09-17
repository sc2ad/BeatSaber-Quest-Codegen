#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ColorPage;
}
// Type: UnityEngine.UIElements::ColorPage
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7431))
// CS Name: UnityEngine.UIElements.ColorPage
struct CORDL_TYPE ColorPage : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr ColorPage(bool isValid, ::UnityEngine::Color32 pageAndID) noexcept;


                    constexpr ColorPage(ColorPage const&) = default;
                    constexpr ColorPage(ColorPage&&) = default;
                    constexpr ColorPage& operator=(ColorPage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColorPage& operator=(ColorPage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColorPage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_isValid, put=__set_isValid))  isValid;

constexpr void __set_isValid(bool value) ;

constexpr bool __get_isValid() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_pageAndID, put=__set_pageAndID))  pageAndID;

constexpr void __set_pageAndID(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_pageAndID() const;


// Methods

/// @brief Method Init addr 0x2d026c0 size 0x60 virtual false final false
static ::UnityEngine::UIElements::ColorPage Init(::UnityEngine::UIElements::UIR::RenderChain renderChain, ::UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColorPage, "UnityEngine.UIElements", "ColorPage");
