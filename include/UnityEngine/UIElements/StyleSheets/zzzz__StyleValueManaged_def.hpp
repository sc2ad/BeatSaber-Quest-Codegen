#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
// Type: UnityEngine.UIElements.StyleSheets::StyleValueManaged
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7567))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleValueManaged
struct CORDL_TYPE StyleValueManaged : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "id", ty: "UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr StyleValueManaged(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleKeyword keyword, ::bs_hook::Il2CppWrapperType value) noexcept;


                    constexpr StyleValueManaged(StyleValueManaged const&) = default;
                    constexpr StyleValueManaged(StyleValueManaged&&) = default;
                    constexpr StyleValueManaged& operator=(StyleValueManaged const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleValueManaged& operator=(StyleValueManaged&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleValueManaged(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleSheets::StylePropertyId __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(UnityEngine::UIElements::StyleSheets::StylePropertyId value) ;

constexpr UnityEngine::UIElements::StyleSheets::StylePropertyId __get_id() const;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_keyword, put=__set_keyword))  keyword;

constexpr void __set_keyword(UnityEngine::UIElements::StyleKeyword value) ;

constexpr UnityEngine::UIElements::StyleKeyword __get_keyword() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StyleValueManaged, "UnityEngine.UIElements.StyleSheets", "StyleValueManaged");
