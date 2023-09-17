#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace TMPro {
struct TagValueType;
}
namespace TMPro {
struct TagUnitType;
}
// Forward declare root types
namespace TMPro {
struct RichTextTagAttribute;
}
// Type: TMPro::RichTextTagAttribute
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12268))
// CS Name: TMPro.RichTextTagAttribute
struct CORDL_TYPE RichTextTagAttribute : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueType", ty: "::TMPro::TagValueType", modifiers: "", def_value: None }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitType", ty: "::TMPro::TagUnitType", modifiers: "", def_value: None }]
constexpr RichTextTagAttribute(int32_t nameHashCode, int32_t valueHashCode, ::TMPro::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength, ::TMPro::TagUnitType unitType) noexcept;


                    constexpr RichTextTagAttribute(RichTextTagAttribute const&) = default;
                    constexpr RichTextTagAttribute(RichTextTagAttribute&&) = default;
                    constexpr RichTextTagAttribute& operator=(RichTextTagAttribute const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RichTextTagAttribute& operator=(RichTextTagAttribute&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RichTextTagAttribute(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_nameHashCode, put=__set_nameHashCode))  nameHashCode;

constexpr void __set_nameHashCode(int32_t value) ;

constexpr int32_t __get_nameHashCode() const;

 int32_t __declspec(property(get=__get_valueHashCode, put=__set_valueHashCode))  valueHashCode;

constexpr void __set_valueHashCode(int32_t value) ;

constexpr int32_t __get_valueHashCode() const;

 ::TMPro::TagValueType __declspec(property(get=__get_valueType, put=__set_valueType))  valueType;

constexpr void __set_valueType(::TMPro::TagValueType value) ;

constexpr ::TMPro::TagValueType __get_valueType() const;

 int32_t __declspec(property(get=__get_valueStartIndex, put=__set_valueStartIndex))  valueStartIndex;

constexpr void __set_valueStartIndex(int32_t value) ;

constexpr int32_t __get_valueStartIndex() const;

 int32_t __declspec(property(get=__get_valueLength, put=__set_valueLength))  valueLength;

constexpr void __set_valueLength(int32_t value) ;

constexpr int32_t __get_valueLength() const;

 ::TMPro::TagUnitType __declspec(property(get=__get_unitType, put=__set_unitType))  unitType;

constexpr void __set_unitType(::TMPro::TagUnitType value) ;

constexpr ::TMPro::TagUnitType __get_unitType() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::RichTextTagAttribute, "TMPro", "RichTextTagAttribute");
