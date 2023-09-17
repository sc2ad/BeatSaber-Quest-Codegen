#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::ProBuilder {
struct RectSelectMode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct PickerOptions;
}
// Type: UnityEngine.ProBuilder::PickerOptions
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12126))
// CS Name: UnityEngine.ProBuilder.PickerOptions
struct CORDL_TYPE PickerOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_depthTest_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_rectSelectMode_k__BackingField", ty: "::UnityEngine::ProBuilder::RectSelectMode", modifiers: "", def_value: None }]
constexpr PickerOptions(bool _depthTest_k__BackingField, ::UnityEngine::ProBuilder::RectSelectMode _rectSelectMode_k__BackingField) noexcept;


                    constexpr PickerOptions(PickerOptions const&) = default;
                    constexpr PickerOptions(PickerOptions&&) = default;
                    constexpr PickerOptions& operator=(PickerOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PickerOptions& operator=(PickerOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PickerOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get__depthTest_k__BackingField, put=__set__depthTest_k__BackingField))  _depthTest_k__BackingField;

constexpr void __set__depthTest_k__BackingField(bool value) ;

constexpr bool __get__depthTest_k__BackingField() const;

 ::UnityEngine::ProBuilder::RectSelectMode __declspec(property(get=__get__rectSelectMode_k__BackingField, put=__set__rectSelectMode_k__BackingField))  _rectSelectMode_k__BackingField;

constexpr void __set__rectSelectMode_k__BackingField(::UnityEngine::ProBuilder::RectSelectMode value) ;

constexpr ::UnityEngine::ProBuilder::RectSelectMode __get__rectSelectMode_k__BackingField() const;

static ::UnityEngine::ProBuilder::PickerOptions __declspec(property(get=__get_k_Default, put=__set_k_Default))  k_Default;

static void __set_k_Default(::UnityEngine::ProBuilder::PickerOptions value) ;

static ::UnityEngine::ProBuilder::PickerOptions __get_k_Default() ;


// Properties

 bool __declspec(property(get=get_depthTest, put=set_depthTest))  depthTest;

 ::UnityEngine::ProBuilder::RectSelectMode __declspec(property(get=get_rectSelectMode, put=set_rectSelectMode))  rectSelectMode;

static ::UnityEngine::ProBuilder::PickerOptions __declspec(property(get=get_Default))  Default;


// Methods

/// @brief Method get_depthTest addr 0x29d2670 size 0x8 virtual false final false
 bool get_depthTest() ;

/// @brief Method set_depthTest addr 0x29d2678 size 0xc virtual false final false
 void set_depthTest(bool value) ;

/// @brief Method get_rectSelectMode addr 0x29d2684 size 0x8 virtual false final false
 ::UnityEngine::ProBuilder::RectSelectMode get_rectSelectMode() ;

/// @brief Method set_rectSelectMode addr 0x29d268c size 0x8 virtual false final false
 void set_rectSelectMode(::UnityEngine::ProBuilder::RectSelectMode value) ;

/// @brief Method get_Default addr 0x29d2694 size 0x58 virtual false final false
static ::UnityEngine::ProBuilder::PickerOptions get_Default() ;

/// @brief Method Equals addr 0x29d26ec size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x29d2784 size 0x38 virtual false final false
 bool Equals(::UnityEngine::ProBuilder::PickerOptions other) ;

/// @brief Method GetHashCode addr 0x29d27bc size 0x3c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x29d27f8 size 0x34 virtual false final false
static bool op_Equality(::UnityEngine::ProBuilder::PickerOptions a, ::UnityEngine::ProBuilder::PickerOptions b) ;

/// @brief Method op_Inequality addr 0x29d282c size 0x34 virtual false final false
static bool op_Inequality(::UnityEngine::ProBuilder::PickerOptions a, ::UnityEngine::ProBuilder::PickerOptions b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PickerOptions, "UnityEngine.ProBuilder", "PickerOptions");
