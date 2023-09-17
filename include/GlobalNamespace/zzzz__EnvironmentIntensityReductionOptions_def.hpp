#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
// Type: ::CompressExpandReductionType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4200))
// CS Name: EnvironmentIntensityReductionOptions::CompressExpandReductionType
struct CORDL_TYPE ____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType(____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType const&) = default;
                    constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType(____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType&&) = default;
                    constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType& operator=(____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType& operator=(____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped : int32_t {
__Keep = 0,
__RemoveWithStrobeFilter = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Keep offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType const Keep;

/// @brief Field RemoveWithStrobeFilter offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType const RemoveWithStrobeFilter;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RotateRingsReductionType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4201))
// CS Name: EnvironmentIntensityReductionOptions::RotateRingsReductionType
struct CORDL_TYPE ____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType(____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType const&) = default;
                    constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType(____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType&&) = default;
                    constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType& operator=(____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType& operator=(____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped : int32_t {
__Keep = 0,
__RemoveWithStrobeFilter = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Keep offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType const Keep;

/// @brief Field RemoveWithStrobeFilter offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType const RemoveWithStrobeFilter;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnvironmentIntensityReductionOptions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4202))
// CS Name: EnvironmentIntensityReductionOptions
class CORDL_TYPE EnvironmentIntensityReductionOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RotateRingsReductionType = ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType;

using CompressExpandReductionType = ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EnvironmentIntensityReductionOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentIntensityReductionOptions", modifiers: " const&", def_value: None }]
constexpr EnvironmentIntensityReductionOptions(EnvironmentIntensityReductionOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentIntensityReductionOptions", modifiers: "&&", def_value: None }]
constexpr EnvironmentIntensityReductionOptions(EnvironmentIntensityReductionOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentIntensityReductionOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvironmentIntensityReductionOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentIntensityReductionOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentIntensityReductionOptions& operator=(EnvironmentIntensityReductionOptions&& o) noexcept = default;
  constexpr EnvironmentIntensityReductionOptions& operator=(EnvironmentIntensityReductionOptions const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType __declspec(property(get=__get__compressExpand, put=__set__compressExpand))  _compressExpand;

constexpr void __set__compressExpand(::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType __get__compressExpand() const;

 ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType __declspec(property(get=__get__rotateRings, put=__set__rotateRings))  _rotateRings;

constexpr void __set__rotateRings(::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType __get__rotateRings() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType __declspec(property(get=get_compressExpand))  compressExpand;

 ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType __declspec(property(get=get_rotateRings))  rotateRings;


// Methods

/// @brief Method get_compressExpand addr 0x21bef00 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType get_compressExpand() ;

/// @brief Method get_rotateRings addr 0x21bef08 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType get_rotateRings() ;

// Ctor Parameters []
explicit EnvironmentIntensityReductionOptions() ;

/// @brief Method .ctor addr 0x21bef10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__CompressExpandReductionType, "", "EnvironmentIntensityReductionOptions/CompressExpandReductionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnvironmentIntensityReductionOptions__RotateRingsReductionType, "", "EnvironmentIntensityReductionOptions/RotateRingsReductionType");
NEED_NO_BOX(::GlobalNamespace::EnvironmentIntensityReductionOptions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentIntensityReductionOptions, "", "EnvironmentIntensityReductionOptions");
