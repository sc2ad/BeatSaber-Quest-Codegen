#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualElementStyleSheetSet;
}
// Type: UnityEngine.UIElements::VisualElementStyleSheetSet
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6945))
// CS Name: UnityEngine.UIElements.VisualElementStyleSheetSet
struct CORDL_TYPE VisualElementStyleSheetSet : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>() const;

// Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }]
constexpr VisualElementStyleSheetSet(::UnityEngine::UIElements::VisualElement m_Element) noexcept;


                    constexpr VisualElementStyleSheetSet(VisualElementStyleSheetSet const&) = default;
                    constexpr VisualElementStyleSheetSet(VisualElementStyleSheetSet&&) = default;
                    constexpr VisualElementStyleSheetSet& operator=(VisualElementStyleSheetSet const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VisualElementStyleSheetSet& operator=(VisualElementStyleSheetSet&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VisualElementStyleSheetSet(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Element, put=__set_m_Element))  m_Element;

constexpr void __set_m_Element(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_Element() const;


// Methods

/// @brief Method .ctor addr 0x2c4f498 size 0x8 virtual false final false
 void _ctor(::UnityEngine::UIElements::VisualElement element) ;

/// @brief Method Add addr 0x2c4f4a0 size 0x1d0 virtual false final false
 void Add(::UnityEngine::UIElements::StyleSheet styleSheet) ;

/// @brief Method Remove addr 0x2c4f670 size 0x134 virtual false final false
 bool Remove(::UnityEngine::UIElements::StyleSheet styleSheet) ;

/// @brief Method Equals addr 0x2c4f7a4 size 0xc virtual true final true
 bool Equals(::UnityEngine::UIElements::VisualElementStyleSheetSet other) ;

/// @brief Method Equals addr 0x2c4f7b0 size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2c4f82c size 0x18 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementStyleSheetSet, "UnityEngine.UIElements", "VisualElementStyleSheetSet");
