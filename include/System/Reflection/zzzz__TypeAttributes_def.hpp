#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Reflection {
struct TypeAttributes;
}
// Type: System.Reflection::TypeAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3492))
// CS Name: System.Reflection.TypeAttributes
struct CORDL_TYPE TypeAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeAttributes(int32_t value__) noexcept;


                    constexpr TypeAttributes(TypeAttributes const&) = default;
                    constexpr TypeAttributes(TypeAttributes&&) = default;
                    constexpr TypeAttributes& operator=(TypeAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypeAttributes& operator=(TypeAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypeAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TypeAttributes_Unwrapped : int32_t {
__VisibilityMask = 7,
__NotPublic = 0,
__Public = 1,
__NestedPublic = 2,
__NestedPrivate = 3,
__NestedFamily = 4,
__NestedAssembly = 5,
__NestedFamANDAssem = 6,
__NestedFamORAssem = 7,
__LayoutMask = 24,
__AutoLayout = 0,
__SequentialLayout = 8,
__ExplicitLayout = 16,
__ClassSemanticsMask = 32,
__Class = 0,
__Interface = 32,
__Abstract = 128,
__Sealed = 256,
__SpecialName = 1024,
__Import = 4096,
__Serializable = 8192,
__WindowsRuntime = 16384,
__StringFormatMask = 196608,
__AnsiClass = 0,
__UnicodeClass = 65536,
__AutoClass = 131072,
__CustomFormatClass = 196608,
__CustomFormatMask = 12582912,
__BeforeFieldInit = 1048576,
__RTSpecialName = 2048,
__HasSecurity = 262144,
__ReservedMask = 264192,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeAttributes_Unwrapped () const noexcept {
return std::bit_cast<__TypeAttributes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VisibilityMask offset 0
static ::System::Reflection::TypeAttributes const VisibilityMask;

/// @brief Field NotPublic offset 0
static ::System::Reflection::TypeAttributes const NotPublic;

/// @brief Field Public offset 0
static ::System::Reflection::TypeAttributes const Public;

/// @brief Field NestedPublic offset 0
static ::System::Reflection::TypeAttributes const NestedPublic;

/// @brief Field NestedPrivate offset 0
static ::System::Reflection::TypeAttributes const NestedPrivate;

/// @brief Field NestedFamily offset 0
static ::System::Reflection::TypeAttributes const NestedFamily;

/// @brief Field NestedAssembly offset 0
static ::System::Reflection::TypeAttributes const NestedAssembly;

/// @brief Field NestedFamANDAssem offset 0
static ::System::Reflection::TypeAttributes const NestedFamANDAssem;

/// @brief Field NestedFamORAssem offset 0
static ::System::Reflection::TypeAttributes const NestedFamORAssem;

/// @brief Field LayoutMask offset 0
static ::System::Reflection::TypeAttributes const LayoutMask;

/// @brief Field AutoLayout offset 0
static ::System::Reflection::TypeAttributes const AutoLayout;

/// @brief Field SequentialLayout offset 0
static ::System::Reflection::TypeAttributes const SequentialLayout;

/// @brief Field ExplicitLayout offset 0
static ::System::Reflection::TypeAttributes const ExplicitLayout;

/// @brief Field ClassSemanticsMask offset 0
static ::System::Reflection::TypeAttributes const ClassSemanticsMask;

/// @brief Field Class offset 0
static ::System::Reflection::TypeAttributes const Class;

/// @brief Field Interface offset 0
static ::System::Reflection::TypeAttributes const Interface;

/// @brief Field Abstract offset 0
static ::System::Reflection::TypeAttributes const Abstract;

/// @brief Field Sealed offset 0
static ::System::Reflection::TypeAttributes const Sealed;

/// @brief Field SpecialName offset 0
static ::System::Reflection::TypeAttributes const SpecialName;

/// @brief Field Import offset 0
static ::System::Reflection::TypeAttributes const Import;

/// @brief Field Serializable offset 0
static ::System::Reflection::TypeAttributes const Serializable;

/// @brief Field WindowsRuntime offset 0
static ::System::Reflection::TypeAttributes const WindowsRuntime;

/// @brief Field StringFormatMask offset 0
static ::System::Reflection::TypeAttributes const StringFormatMask;

/// @brief Field AnsiClass offset 0
static ::System::Reflection::TypeAttributes const AnsiClass;

/// @brief Field UnicodeClass offset 0
static ::System::Reflection::TypeAttributes const UnicodeClass;

/// @brief Field AutoClass offset 0
static ::System::Reflection::TypeAttributes const AutoClass;

/// @brief Field CustomFormatClass offset 0
static ::System::Reflection::TypeAttributes const CustomFormatClass;

/// @brief Field CustomFormatMask offset 0
static ::System::Reflection::TypeAttributes const CustomFormatMask;

/// @brief Field BeforeFieldInit offset 0
static ::System::Reflection::TypeAttributes const BeforeFieldInit;

/// @brief Field RTSpecialName offset 0
static ::System::Reflection::TypeAttributes const RTSpecialName;

/// @brief Field HasSecurity offset 0
static ::System::Reflection::TypeAttributes const HasSecurity;

/// @brief Field ReservedMask offset 0
static ::System::Reflection::TypeAttributes const ReservedMask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeAttributes, "System.Reflection", "TypeAttributes");
