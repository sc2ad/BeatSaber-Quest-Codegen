#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSpace__StorageLocation;
}
namespace GlobalNamespace {
struct OVRSpace;
}
// Type: ::StorageLocation
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8838))
// CS Name: OVRSpace::StorageLocation
struct CORDL_TYPE ____GlobalNamespace__OVRSpace__StorageLocation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRSpace__StorageLocation(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRSpace__StorageLocation(____GlobalNamespace__OVRSpace__StorageLocation const&) = default;
                    constexpr ____GlobalNamespace__OVRSpace__StorageLocation(____GlobalNamespace__OVRSpace__StorageLocation&&) = default;
                    constexpr ____GlobalNamespace__OVRSpace__StorageLocation& operator=(____GlobalNamespace__OVRSpace__StorageLocation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRSpace__StorageLocation& operator=(____GlobalNamespace__OVRSpace__StorageLocation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSpace__StorageLocation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRSpace__StorageLocation_Unwrapped : int32_t {
__Local = 0,
__Cloud = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRSpace__StorageLocation_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRSpace__StorageLocation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Local offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSpace__StorageLocation const Local;

/// @brief Field Cloud offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSpace__StorageLocation const Cloud;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSpace
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8839))
// CS Name: OVRSpace
struct CORDL_TYPE OVRSpace : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using StorageLocation = ::GlobalNamespace::____GlobalNamespace__OVRSpace__StorageLocation;

/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::OVRSpace>
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRSpace>() const;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr OVRSpace(uint64_t _Handle_k__BackingField) noexcept;


                    constexpr OVRSpace(OVRSpace const&) = default;
                    constexpr OVRSpace(OVRSpace&&) = default;
                    constexpr OVRSpace& operator=(OVRSpace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRSpace& operator=(OVRSpace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRSpace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get__Handle_k__BackingField, put=__set__Handle_k__BackingField))  _Handle_k__BackingField;

constexpr void __set__Handle_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__Handle_k__BackingField() const;


// Properties

 uint64_t __declspec(property(get=get_Handle))  Handle;

 bool __declspec(property(get=get_Valid))  Valid;


// Methods

/// @brief Method get_Handle addr 0x260cb60 size 0x8 virtual false final false
 uint64_t get_Handle() ;

/// @brief Method TryGetUuid addr 0x260cb68 size 0x6c virtual false final false
 bool TryGetUuid(ByRef<::System::Guid> uuid) ;

/// @brief Method get_Valid addr 0x2602d28 size 0x10 virtual false final false
 bool get_Valid() ;

/// @brief Method .ctor addr 0x260cbd4 size 0x8 virtual false final false
 void _ctor(uint64_t handle) ;

/// @brief Method ToString addr 0x260cbdc size 0x84 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x260cc60 size 0x10 virtual true final true
 bool Equals(::GlobalNamespace::OVRSpace other) ;

/// @brief Method Equals addr 0x260cc70 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x260cce8 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x260cd08 size 0xc virtual false final false
static bool op_Equality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs) ;

/// @brief Method op_Inequality addr 0x260cd14 size 0xc virtual false final false
static bool op_Inequality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs) ;

/// @brief Method op_Implicit addr 0x26088c8 size 0x4 virtual false final false
static ::GlobalNamespace::OVRSpace op_Implicit___GlobalNamespace__OVRSpace(uint64_t handle) ;

/// @brief Method op_Implicit addr 0x26029ac size 0x4 virtual false final false
static uint64_t op_Implicit_uint64_t(::GlobalNamespace::OVRSpace space) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSpace__StorageLocation, "", "OVRSpace/StorageLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpace, "", "OVRSpace");
