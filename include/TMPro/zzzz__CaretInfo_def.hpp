#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace TMPro {
struct CaretPosition;
}
// Forward declare root types
namespace TMPro {
struct CaretInfo;
}
// Type: TMPro::CaretInfo
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12397))
// CS Name: TMPro.CaretInfo
struct CORDL_TYPE CaretInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "TMPro::CaretPosition", modifiers: "", def_value: None }]
constexpr CaretInfo(int32_t index, TMPro::CaretPosition position) noexcept;


                    constexpr CaretInfo(CaretInfo const&) = default;
                    constexpr CaretInfo(CaretInfo&&) = default;
                    constexpr CaretInfo& operator=(CaretInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CaretInfo& operator=(CaretInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CaretInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 TMPro::CaretPosition __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(TMPro::CaretPosition value) ;

constexpr TMPro::CaretPosition __get_position() const;


// Methods

/// @brief Method .ctor addr 0x2ab1704 size 0x8 virtual false final false
 void _ctor(int32_t index, TMPro::CaretPosition position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::CaretInfo, "TMPro", "CaretInfo");
