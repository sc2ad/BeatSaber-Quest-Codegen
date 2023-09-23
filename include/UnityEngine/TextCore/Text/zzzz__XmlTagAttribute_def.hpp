#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::TextCore::Text {
struct TagValueType;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct XmlTagAttribute;
}
// Type: UnityEngine.TextCore.Text::XmlTagAttribute
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13520))
// CS Name: UnityEngine.TextCore.Text.XmlTagAttribute
struct CORDL_TYPE XmlTagAttribute : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueType", ty: "UnityEngine::TextCore::Text::TagValueType", modifiers: "", def_value: None }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlTagAttribute(int32_t nameHashCode, UnityEngine::TextCore::Text::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength, int32_t valueHashCode) noexcept;


                    constexpr XmlTagAttribute(XmlTagAttribute const&) = default;
                    constexpr XmlTagAttribute(XmlTagAttribute&&) = default;
                    constexpr XmlTagAttribute& operator=(XmlTagAttribute const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlTagAttribute& operator=(XmlTagAttribute&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlTagAttribute(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nameHashCode, put=__set_nameHashCode))  nameHashCode;

constexpr void __set_nameHashCode(int32_t value) ;

constexpr int32_t __get_nameHashCode() const;

 UnityEngine::TextCore::Text::TagValueType __declspec(property(get=__get_valueType, put=__set_valueType))  valueType;

constexpr void __set_valueType(UnityEngine::TextCore::Text::TagValueType value) ;

constexpr UnityEngine::TextCore::Text::TagValueType __get_valueType() const;

 int32_t __declspec(property(get=__get_valueStartIndex, put=__set_valueStartIndex))  valueStartIndex;

constexpr void __set_valueStartIndex(int32_t value) ;

constexpr int32_t __get_valueStartIndex() const;

 int32_t __declspec(property(get=__get_valueLength, put=__set_valueLength))  valueLength;

constexpr void __set_valueLength(int32_t value) ;

constexpr int32_t __get_valueLength() const;

 int32_t __declspec(property(get=__get_valueHashCode, put=__set_valueHashCode))  valueHashCode;

constexpr void __set_valueHashCode(int32_t value) ;

constexpr int32_t __get_valueHashCode() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::XmlTagAttribute, "UnityEngine.TextCore.Text", "XmlTagAttribute");
