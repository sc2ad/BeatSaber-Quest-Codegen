#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
struct DesignerSerializationVisibility;
}
// Type: System.ComponentModel::DesignerSerializationVisibility
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8242))
// CS Name: System.ComponentModel.DesignerSerializationVisibility
struct CORDL_TYPE DesignerSerializationVisibility : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DesignerSerializationVisibility(int32_t value__) noexcept;


                    constexpr DesignerSerializationVisibility(DesignerSerializationVisibility const&) = default;
                    constexpr DesignerSerializationVisibility(DesignerSerializationVisibility&&) = default;
                    constexpr DesignerSerializationVisibility& operator=(DesignerSerializationVisibility const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DesignerSerializationVisibility& operator=(DesignerSerializationVisibility&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DesignerSerializationVisibility(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DesignerSerializationVisibility_Unwrapped : int32_t {
__Hidden = 0,
__Visible = 1,
__Content = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DesignerSerializationVisibility_Unwrapped () const noexcept {
return std::bit_cast<__DesignerSerializationVisibility_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Hidden offset 0
static System::ComponentModel::DesignerSerializationVisibility const Hidden;

/// @brief Field Visible offset 0
static System::ComponentModel::DesignerSerializationVisibility const Visible;

/// @brief Field Content offset 0
static System::ComponentModel::DesignerSerializationVisibility const Content;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerSerializationVisibility, "System.ComponentModel", "DesignerSerializationVisibility");
