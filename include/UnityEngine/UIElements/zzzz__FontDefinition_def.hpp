#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Font;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct FontDefinition;
}
// Type: UnityEngine.UIElements::FontDefinition
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7383))
// CS Name: UnityEngine.UIElements.FontDefinition
struct CORDL_TYPE FontDefinition : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::FontDefinition>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::FontDefinition>() const;

// Ctor Parameters [CppParam { name: "m_Font", ty: "UnityEngine::Font", modifiers: "", def_value: None }, CppParam { name: "m_FontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }]
constexpr FontDefinition(UnityEngine::Font m_Font, UnityEngine::TextCore::Text::FontAsset m_FontAsset) noexcept;


                    constexpr FontDefinition(FontDefinition const&) = default;
                    constexpr FontDefinition(FontDefinition&&) = default;
                    constexpr FontDefinition& operator=(FontDefinition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontDefinition& operator=(FontDefinition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontDefinition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Font __declspec(property(get=__get_m_Font, put=__set_m_Font))  m_Font;

constexpr void __set_m_Font(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_m_Font() const;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_m_FontAsset, put=__set_m_FontAsset))  m_FontAsset;

constexpr void __set_m_FontAsset(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_m_FontAsset() const;


// Properties

 UnityEngine::Font __declspec(property(get=get_font))  font;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=get_fontAsset))  fontAsset;


// Methods

/// @brief Method get_font addr 0x2cf58cc size 0x8 virtual false final false
 UnityEngine::Font get_font() ;

/// @brief Method get_fontAsset addr 0x2cf58d4 size 0x8 virtual false final false
 UnityEngine::TextCore::Text::FontAsset get_fontAsset() ;

/// @brief Method FromFont addr 0x2cf58dc size 0x8 virtual false final false
static UnityEngine::UIElements::FontDefinition FromFont(UnityEngine::Font f) ;

/// @brief Method FromSDFFont addr 0x2cf58e4 size 0xc virtual false final false
static UnityEngine::UIElements::FontDefinition FromSDFFont(UnityEngine::TextCore::Text::FontAsset f) ;

/// @brief Method FromObject addr 0x2cf58f0 size 0x118 virtual false final false
static UnityEngine::UIElements::FontDefinition FromObject(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method IsEmpty addr 0x2cf5a08 size 0x98 virtual false final false
 bool IsEmpty() ;

/// @brief Method ToString addr 0x2cf5aa0 size 0x90 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x2cf5b30 size 0x48 virtual true final true
 bool Equals(UnityEngine::UIElements::FontDefinition other) ;

/// @brief Method Equals addr 0x2cf5b78 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf5bf0 size 0xe0 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2cf5cd0 size 0x2c virtual false final false
static bool op_Equality(UnityEngine::UIElements::FontDefinition left, UnityEngine::UIElements::FontDefinition right) ;

/// @brief Method op_Inequality addr 0x2cf5cfc size 0x30 virtual false final false
static bool op_Inequality(UnityEngine::UIElements::FontDefinition left, UnityEngine::UIElements::FontDefinition right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::FontDefinition, "UnityEngine.UIElements", "FontDefinition");
