#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct LineInfo;
}
// Type: System.Xml::LineInfo
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11474))
// CS Name: System.Xml.LineInfo
struct CORDL_TYPE LineInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LineInfo(int32_t lineNo, int32_t linePos) noexcept;


                    constexpr LineInfo(LineInfo const&) = default;
                    constexpr LineInfo(LineInfo&&) = default;
                    constexpr LineInfo& operator=(LineInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LineInfo& operator=(LineInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LineInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_lineNo, put=__set_lineNo))  lineNo;

constexpr void __set_lineNo(int32_t value) ;

constexpr int32_t __get_lineNo() const;

 int32_t __declspec(property(get=__get_linePos, put=__set_linePos))  linePos;

constexpr void __set_linePos(int32_t value) ;

constexpr int32_t __get_linePos() const;


// Methods

/// @brief Method .ctor addr 0x26fea5c size 0x8 virtual false final false
 void _ctor(int32_t lineNo, int32_t linePos) ;

/// @brief Method Set addr 0x26fea64 size 0x8 virtual false final false
 void Set(int32_t lineNo, int32_t linePos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::LineInfo, "System.Xml", "LineInfo");
