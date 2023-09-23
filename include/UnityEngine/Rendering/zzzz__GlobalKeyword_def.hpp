#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
// Type: UnityEngine.Rendering::GlobalKeyword
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10306))
// CS Name: UnityEngine.Rendering.GlobalKeyword
struct CORDL_TYPE GlobalKeyword : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GlobalKeyword(::StringW m_Name, uint32_t m_Index) noexcept;


                    constexpr GlobalKeyword(GlobalKeyword const&) = default;
                    constexpr GlobalKeyword(GlobalKeyword&&) = default;
                    constexpr GlobalKeyword& operator=(GlobalKeyword const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalKeyword& operator=(GlobalKeyword&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalKeyword(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 uint32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(uint32_t value) ;

constexpr uint32_t __get_m_Index() const;


// Methods

/// @brief Method ToString addr 0x2b76fac size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::GlobalKeyword, "UnityEngine.Rendering", "GlobalKeyword");
