#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleVariable;
}
// Type: UnityEngine.UIElements::StyleVariable
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7364))
// CS Name: UnityEngine.UIElements.StyleVariable
struct CORDL_TYPE StyleVariable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: None }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle>", modifiers: "", def_value: None }]
constexpr StyleVariable(::StringW name, ::UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles) noexcept;


                    constexpr StyleVariable(StyleVariable const&) = default;
                    constexpr StyleVariable(StyleVariable&&) = default;
                    constexpr StyleVariable& operator=(StyleVariable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleVariable& operator=(StyleVariable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleVariable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_sheet, put=__set_sheet))  sheet;

constexpr void __set_sheet(::UnityEngine::UIElements::StyleSheet value) ;

constexpr ::UnityEngine::UIElements::StyleSheet __get_sheet() const;

 ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> __declspec(property(get=__get_handles, put=__set_handles))  handles;

constexpr void __set_handles(::ArrayW<::UnityEngine::UIElements::StyleValueHandle> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> __get_handles() const;


// Methods

/// @brief Method .ctor addr 0x2cf262c size 0xc virtual false final false
 void _ctor(::StringW name, ::UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> handles) ;

/// @brief Method GetHashCode addr 0x2cf2638 size 0x78 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariable, "UnityEngine.UIElements", "StyleVariable");
