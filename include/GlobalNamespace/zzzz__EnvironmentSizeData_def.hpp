#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__EnvironmentSizeData__CeilingType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__EnvironmentSizeData__FloorType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__EnvironmentSizeData__TrackLaneType;
}
namespace GlobalNamespace {
class EnvironmentSizeData;
}
// Type: ::FloorType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4206))
// CS Name: EnvironmentSizeData::FloorType
struct CORDL_TYPE ____GlobalNamespace__EnvironmentSizeData__FloorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentSizeData__FloorType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__EnvironmentSizeData__FloorType(____GlobalNamespace__EnvironmentSizeData__FloorType const&) = default;
                    constexpr ____GlobalNamespace__EnvironmentSizeData__FloorType(____GlobalNamespace__EnvironmentSizeData__FloorType&&) = default;
                    constexpr ____GlobalNamespace__EnvironmentSizeData__FloorType& operator=(____GlobalNamespace__EnvironmentSizeData__FloorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__EnvironmentSizeData__FloorType& operator=(____GlobalNamespace__EnvironmentSizeData__FloorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnvironmentSizeData__FloorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__EnvironmentSizeData__FloorType_Unwrapped : int32_t {
__NoFloor = 0,
__CloseTo0 = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__EnvironmentSizeData__FloorType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__EnvironmentSizeData__FloorType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoFloor offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType const NoFloor;

/// @brief Field CloseTo0 offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType const CloseTo0;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CeilingType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4207))
// CS Name: EnvironmentSizeData::CeilingType
struct CORDL_TYPE ____GlobalNamespace__EnvironmentSizeData__CeilingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentSizeData__CeilingType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__EnvironmentSizeData__CeilingType(____GlobalNamespace__EnvironmentSizeData__CeilingType const&) = default;
                    constexpr ____GlobalNamespace__EnvironmentSizeData__CeilingType(____GlobalNamespace__EnvironmentSizeData__CeilingType&&) = default;
                    constexpr ____GlobalNamespace__EnvironmentSizeData__CeilingType& operator=(____GlobalNamespace__EnvironmentSizeData__CeilingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__EnvironmentSizeData__CeilingType& operator=(____GlobalNamespace__EnvironmentSizeData__CeilingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnvironmentSizeData__CeilingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__EnvironmentSizeData__CeilingType_Unwrapped : int32_t {
__NoCeiling = 0,
__LowCeiling = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__EnvironmentSizeData__CeilingType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__EnvironmentSizeData__CeilingType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoCeiling offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType const NoCeiling;

/// @brief Field LowCeiling offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType const LowCeiling;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackLaneType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4208))
// CS Name: EnvironmentSizeData::TrackLaneType
struct CORDL_TYPE ____GlobalNamespace__EnvironmentSizeData__TrackLaneType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentSizeData__TrackLaneType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__EnvironmentSizeData__TrackLaneType(____GlobalNamespace__EnvironmentSizeData__TrackLaneType const&) = default;
                    constexpr ____GlobalNamespace__EnvironmentSizeData__TrackLaneType(____GlobalNamespace__EnvironmentSizeData__TrackLaneType&&) = default;
                    constexpr ____GlobalNamespace__EnvironmentSizeData__TrackLaneType& operator=(____GlobalNamespace__EnvironmentSizeData__TrackLaneType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__EnvironmentSizeData__TrackLaneType& operator=(____GlobalNamespace__EnvironmentSizeData__TrackLaneType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnvironmentSizeData__TrackLaneType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__EnvironmentSizeData__TrackLaneType_Unwrapped : int32_t {
__None = 0,
__Normal = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__EnvironmentSizeData__TrackLaneType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__EnvironmentSizeData__TrackLaneType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType const None;

/// @brief Field Normal offset 0
static ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType const Normal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnvironmentSizeData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4209))
// CS Name: EnvironmentSizeData
class CORDL_TYPE EnvironmentSizeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TrackLaneType = ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType;

using CeilingType = ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType;

using FloorType = ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EnvironmentSizeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSizeData", modifiers: " const&", def_value: None }]
constexpr EnvironmentSizeData(EnvironmentSizeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSizeData", modifiers: "&&", def_value: None }]
constexpr EnvironmentSizeData(EnvironmentSizeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentSizeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvironmentSizeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentSizeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentSizeData& operator=(EnvironmentSizeData&& o) noexcept = default;
  constexpr EnvironmentSizeData& operator=(EnvironmentSizeData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType __declspec(property(get=__get__floorType, put=__set__floorType))  _floorType;

constexpr void __set__floorType(::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType __get__floorType() const;

 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType __declspec(property(get=__get__ceilingType, put=__set__ceilingType))  _ceilingType;

constexpr void __set__ceilingType(::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType __get__ceilingType() const;

 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType __declspec(property(get=__get__trackLaneType, put=__set__trackLaneType))  _trackLaneType;

constexpr void __set__trackLaneType(::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType __get__trackLaneType() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType __declspec(property(get=get_floorType))  floorType;

 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType __declspec(property(get=get_ceilingType))  ceilingType;

 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType __declspec(property(get=get_trackLaneType))  trackLaneType;


// Methods

/// @brief Method get_floorType addr 0x21bf47c size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType get_floorType() ;

/// @brief Method get_ceilingType addr 0x21bf484 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType get_ceilingType() ;

/// @brief Method get_trackLaneType addr 0x21bf48c size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType get_trackLaneType() ;

// Ctor Parameters []
explicit EnvironmentSizeData() ;

/// @brief Method .ctor addr 0x21bf494 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__CeilingType, "", "EnvironmentSizeData/CeilingType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__FloorType, "", "EnvironmentSizeData/FloorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnvironmentSizeData__TrackLaneType, "", "EnvironmentSizeData/TrackLaneType");
NEED_NO_BOX(::GlobalNamespace::EnvironmentSizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData, "", "EnvironmentSizeData");
