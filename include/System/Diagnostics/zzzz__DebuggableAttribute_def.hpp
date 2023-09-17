#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Diagnostics {
struct ____System__Diagnostics__DebuggableAttribute__DebuggingModes;
}
namespace System::Diagnostics {
class DebuggableAttribute;
}
// Type: ::DebuggingModes
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3717))
// CS Name: System.Diagnostics.DebuggableAttribute::DebuggingModes
struct CORDL_TYPE ____System__Diagnostics__DebuggableAttribute__DebuggingModes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Diagnostics__DebuggableAttribute__DebuggingModes(int32_t value__) noexcept;


                    constexpr ____System__Diagnostics__DebuggableAttribute__DebuggingModes(____System__Diagnostics__DebuggableAttribute__DebuggingModes const&) = default;
                    constexpr ____System__Diagnostics__DebuggableAttribute__DebuggingModes(____System__Diagnostics__DebuggableAttribute__DebuggingModes&&) = default;
                    constexpr ____System__Diagnostics__DebuggableAttribute__DebuggingModes& operator=(____System__Diagnostics__DebuggableAttribute__DebuggingModes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Diagnostics__DebuggableAttribute__DebuggingModes& operator=(____System__Diagnostics__DebuggableAttribute__DebuggingModes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Diagnostics__DebuggableAttribute__DebuggingModes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Diagnostics__DebuggableAttribute__DebuggingModes_Unwrapped : int32_t {
__None = 0,
__Default = 1,
__DisableOptimizations = 256,
__IgnoreSymbolStoreSequencePoints = 2,
__EnableEditAndContinue = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Diagnostics__DebuggableAttribute__DebuggingModes_Unwrapped () const noexcept {
return std::bit_cast<______System__Diagnostics__DebuggableAttribute__DebuggingModes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes const None;

/// @brief Field Default offset 0
static ::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes const Default;

/// @brief Field DisableOptimizations offset 0
static ::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes const DisableOptimizations;

/// @brief Field IgnoreSymbolStoreSequencePoints offset 0
static ::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes const IgnoreSymbolStoreSequencePoints;

/// @brief Field EnableEditAndContinue offset 0
static ::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes const EnableEditAndContinue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
// Type: System.Diagnostics::DebuggableAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3718))
// CS Name: System.Diagnostics.DebuggableAttribute
class CORDL_TYPE DebuggableAttribute : public ::System::Attribute {
public:
// Declarations
using DebuggingModes = ::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DebuggableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: " const&", def_value: None }]
constexpr DebuggableAttribute(DebuggableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "&&", def_value: None }]
constexpr DebuggableAttribute(DebuggableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebuggableAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr DebuggableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebuggableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebuggableAttribute& operator=(DebuggableAttribute&& o) noexcept = default;
  constexpr DebuggableAttribute& operator=(DebuggableAttribute const& o) noexcept = default;
                


// Fields

 ::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes __declspec(property(get=__get_m_debuggingModes, put=__set_m_debuggingModes))  m_debuggingModes;

constexpr void __set_m_debuggingModes(::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes value) ;

constexpr ::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes __get_m_debuggingModes() const;


// Methods

// Ctor Parameters [CppParam { name: "modes", ty: "::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes", modifiers: "", def_value: None }]
explicit DebuggableAttribute(::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes modes) ;

/// @brief Method .ctor addr 0x240bf50 size 0x28 virtual false final false
 void _ctor(::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes modes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::____System__Diagnostics__DebuggableAttribute__DebuggingModes, "System.Diagnostics", "DebuggableAttribute/DebuggingModes");
NEED_NO_BOX(::System::Diagnostics::DebuggableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggableAttribute, "System.Diagnostics", "DebuggableAttribute");
