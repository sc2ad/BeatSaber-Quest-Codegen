#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct ____UnityEngine__GUILayoutOption__Type;
}
namespace UnityEngine {
class GUILayoutOption;
}
// Type: ::Type
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14789))
// CS Name: UnityEngine.GUILayoutOption::Type
struct CORDL_TYPE ____UnityEngine__GUILayoutOption__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__GUILayoutOption__Type(int32_t value__) noexcept;


                    constexpr ____UnityEngine__GUILayoutOption__Type(____UnityEngine__GUILayoutOption__Type const&) = default;
                    constexpr ____UnityEngine__GUILayoutOption__Type(____UnityEngine__GUILayoutOption__Type&&) = default;
                    constexpr ____UnityEngine__GUILayoutOption__Type& operator=(____UnityEngine__GUILayoutOption__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__GUILayoutOption__Type& operator=(____UnityEngine__GUILayoutOption__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__GUILayoutOption__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__GUILayoutOption__Type_Unwrapped : int32_t {
__fixedWidth = 0,
__fixedHeight = 1,
__minWidth = 2,
__maxWidth = 3,
__minHeight = 4,
__maxHeight = 5,
__stretchWidth = 6,
__stretchHeight = 7,
__alignStart = 8,
__alignMiddle = 9,
__alignEnd = 10,
__alignJustify = 11,
__equalSize = 12,
__spacing = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__GUILayoutOption__Type_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__GUILayoutOption__Type_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field fixedWidth offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const fixedWidth;

/// @brief Field fixedHeight offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const fixedHeight;

/// @brief Field minWidth offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const minWidth;

/// @brief Field maxWidth offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const maxWidth;

/// @brief Field minHeight offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const minHeight;

/// @brief Field maxHeight offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const maxHeight;

/// @brief Field stretchWidth offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const stretchWidth;

/// @brief Field stretchHeight offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const stretchHeight;

/// @brief Field alignStart offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const alignStart;

/// @brief Field alignMiddle offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const alignMiddle;

/// @brief Field alignEnd offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const alignEnd;

/// @brief Field alignJustify offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const alignJustify;

/// @brief Field equalSize offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const equalSize;

/// @brief Field spacing offset 0
static ::UnityEngine::____UnityEngine__GUILayoutOption__Type const spacing;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::GUILayoutOption
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14790))
// CS Name: UnityEngine.GUILayoutOption
class CORDL_TYPE GUILayoutOption : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Type = ::UnityEngine::____UnityEngine__GUILayoutOption__Type;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GUILayoutOption() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutOption", modifiers: " const&", def_value: None }]
constexpr GUILayoutOption(GUILayoutOption const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutOption", modifiers: "&&", def_value: None }]
constexpr GUILayoutOption(GUILayoutOption&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUILayoutOption(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUILayoutOption& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUILayoutOption& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUILayoutOption& operator=(GUILayoutOption&& o) noexcept = default;
  constexpr GUILayoutOption& operator=(GUILayoutOption const& o) noexcept = default;
                


// Fields

 ::UnityEngine::____UnityEngine__GUILayoutOption__Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::UnityEngine::____UnityEngine__GUILayoutOption__Type value) ;

constexpr ::UnityEngine::____UnityEngine__GUILayoutOption__Type __get_type() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_value() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::____UnityEngine__GUILayoutOption__Type", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit GUILayoutOption(::UnityEngine::____UnityEngine__GUILayoutOption__Type type, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x2b95f04 size 0x30 virtual false final false
 void _ctor(::UnityEngine::____UnityEngine__GUILayoutOption__Type type, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::____UnityEngine__GUILayoutOption__Type, "UnityEngine", "GUILayoutOption/Type");
NEED_NO_BOX(::UnityEngine::GUILayoutOption);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutOption, "UnityEngine", "GUILayoutOption");
