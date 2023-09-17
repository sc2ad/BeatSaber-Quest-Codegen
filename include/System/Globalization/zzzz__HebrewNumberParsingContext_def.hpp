#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Globalization {
struct ____System__Globalization__HebrewNumber__HS;
}
// Forward declare root types
namespace System::Globalization {
struct HebrewNumberParsingContext;
}
// Type: System.Globalization::HebrewNumberParsingContext
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3658))
// CS Name: System.Globalization.HebrewNumberParsingContext
struct CORDL_TYPE HebrewNumberParsingContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "state", ty: "::System::Globalization::____System__Globalization__HebrewNumber__HS", modifiers: "", def_value: None }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HebrewNumberParsingContext(::System::Globalization::____System__Globalization__HebrewNumber__HS state, int32_t result) noexcept;


                    constexpr HebrewNumberParsingContext(HebrewNumberParsingContext const&) = default;
                    constexpr HebrewNumberParsingContext(HebrewNumberParsingContext&&) = default;
                    constexpr HebrewNumberParsingContext& operator=(HebrewNumberParsingContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HebrewNumberParsingContext& operator=(HebrewNumberParsingContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HebrewNumberParsingContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Globalization::____System__Globalization__HebrewNumber__HS __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::System::Globalization::____System__Globalization__HebrewNumber__HS value) ;

constexpr ::System::Globalization::____System__Globalization__HebrewNumber__HS __get_state() const;

 int32_t __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(int32_t value) ;

constexpr int32_t __get_result() const;


// Methods

/// @brief Method .ctor addr 0x23e3414 size 0xc virtual false final false
 void _ctor(int32_t result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumberParsingContext, "System.Globalization", "HebrewNumberParsingContext");
