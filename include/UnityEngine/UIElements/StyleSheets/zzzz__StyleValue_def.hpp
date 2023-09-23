#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine {
struct Color;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
// Type: UnityEngine.UIElements.StyleSheets::StyleValue
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7566))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleValue
struct CORDL_TYPE StyleValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "id", ty: "UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "number", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "resource", ty: "System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr StyleValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleKeyword keyword, float_t number, UnityEngine::UIElements::Length length, UnityEngine::Color color, System::Runtime::InteropServices::GCHandle resource) noexcept;


                    constexpr StyleValue(StyleValue const&) = default;
                    constexpr StyleValue(StyleValue&&) = default;
                    constexpr StyleValue& operator=(StyleValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleValue& operator=(StyleValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 float_t __declspec(property(get=__get_number, put=__set_number))  number;

constexpr void __set_number(float_t value) ;

constexpr float_t __get_number() const;

 UnityEngine::UIElements::Length __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(UnityEngine::UIElements::Length value) ;

constexpr UnityEngine::UIElements::Length __get_length() const;

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 System::Runtime::InteropServices::GCHandle __declspec(property(get=__get_resource, put=__set_resource))  resource;

constexpr void __set_resource(System::Runtime::InteropServices::GCHandle value) ;

constexpr System::Runtime::InteropServices::GCHandle __get_resource() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StyleValue, "UnityEngine.UIElements.StyleSheets", "StyleValue");
