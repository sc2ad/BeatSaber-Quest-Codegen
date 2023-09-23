#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRBoundary__BoundaryType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRBoundary__Node;
}
namespace GlobalNamespace {
class OVRBoundary;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRBoundary__BoundaryTestResult;
}
// Type: ::Node
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8446))
// CS Name: OVRBoundary::Node
struct CORDL_TYPE GlobalNamespace__OVRBoundary__Node : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRBoundary__Node(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRBoundary__Node(GlobalNamespace__OVRBoundary__Node const&) = default;
                    constexpr GlobalNamespace__OVRBoundary__Node(GlobalNamespace__OVRBoundary__Node&&) = default;
                    constexpr GlobalNamespace__OVRBoundary__Node& operator=(GlobalNamespace__OVRBoundary__Node const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRBoundary__Node& operator=(GlobalNamespace__OVRBoundary__Node&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRBoundary__Node(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRBoundary__Node_Unwrapped : int32_t {
__HandLeft = 3,
__HandRight = 4,
__Head = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRBoundary__Node_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRBoundary__Node_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HandLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRBoundary__Node const HandLeft;

/// @brief Field HandRight offset 0
static GlobalNamespace::GlobalNamespace__OVRBoundary__Node const HandRight;

/// @brief Field Head offset 0
static GlobalNamespace::GlobalNamespace__OVRBoundary__Node const Head;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BoundaryType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8447))
// CS Name: OVRBoundary::BoundaryType
struct CORDL_TYPE GlobalNamespace__OVRBoundary__BoundaryType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRBoundary__BoundaryType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRBoundary__BoundaryType(GlobalNamespace__OVRBoundary__BoundaryType const&) = default;
                    constexpr GlobalNamespace__OVRBoundary__BoundaryType(GlobalNamespace__OVRBoundary__BoundaryType&&) = default;
                    constexpr GlobalNamespace__OVRBoundary__BoundaryType& operator=(GlobalNamespace__OVRBoundary__BoundaryType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRBoundary__BoundaryType& operator=(GlobalNamespace__OVRBoundary__BoundaryType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRBoundary__BoundaryType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRBoundary__BoundaryType_Unwrapped : int32_t {
__OuterBoundary = 1,
__PlayArea = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRBoundary__BoundaryType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRBoundary__BoundaryType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OuterBoundary offset 0
static GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType const OuterBoundary;

/// @brief Field PlayArea offset 0
static GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType const PlayArea;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BoundaryTestResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8448))
// CS Name: OVRBoundary::BoundaryTestResult
struct CORDL_TYPE GlobalNamespace__OVRBoundary__BoundaryTestResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "IsTriggering", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ClosestPoint", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "ClosestPointNormal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRBoundary__BoundaryTestResult(bool IsTriggering, float_t ClosestDistance, UnityEngine::Vector3 ClosestPoint, UnityEngine::Vector3 ClosestPointNormal) noexcept;


                    constexpr GlobalNamespace__OVRBoundary__BoundaryTestResult(GlobalNamespace__OVRBoundary__BoundaryTestResult const&) = default;
                    constexpr GlobalNamespace__OVRBoundary__BoundaryTestResult(GlobalNamespace__OVRBoundary__BoundaryTestResult&&) = default;
                    constexpr GlobalNamespace__OVRBoundary__BoundaryTestResult& operator=(GlobalNamespace__OVRBoundary__BoundaryTestResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRBoundary__BoundaryTestResult& operator=(GlobalNamespace__OVRBoundary__BoundaryTestResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRBoundary__BoundaryTestResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_IsTriggering, put=__set_IsTriggering))  IsTriggering;

constexpr void __set_IsTriggering(bool value) ;

constexpr bool __get_IsTriggering() const;

 float_t __declspec(property(get=__get_ClosestDistance, put=__set_ClosestDistance))  ClosestDistance;

constexpr void __set_ClosestDistance(float_t value) ;

constexpr float_t __get_ClosestDistance() const;

 UnityEngine::Vector3 __declspec(property(get=__get_ClosestPoint, put=__set_ClosestPoint))  ClosestPoint;

constexpr void __set_ClosestPoint(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_ClosestPoint() const;

 UnityEngine::Vector3 __declspec(property(get=__get_ClosestPointNormal, put=__set_ClosestPointNormal))  ClosestPointNormal;

constexpr void __set_ClosestPointNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_ClosestPointNormal() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRBoundary
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8449))
// CS Name: OVRBoundary
class CORDL_TYPE OVRBoundary : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BoundaryTestResult = GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult;

using BoundaryType = GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType;

using Node = GlobalNamespace::GlobalNamespace__OVRBoundary__Node;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OVRBoundary() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRBoundary", modifiers: " const&", def_value: None }]
constexpr OVRBoundary(OVRBoundary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRBoundary", modifiers: "&&", def_value: None }]
constexpr OVRBoundary(OVRBoundary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRBoundary(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRBoundary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRBoundary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRBoundary& operator=(OVRBoundary&& o) noexcept = default;
  constexpr OVRBoundary& operator=(OVRBoundary const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_cachedVector3fSize, put=__set_cachedVector3fSize))  cachedVector3fSize;

static void __set_cachedVector3fSize(int32_t value) ;

static int32_t __get_cachedVector3fSize() ;

static GlobalNamespace::OVRNativeBuffer __declspec(property(get=__get_cachedGeometryNativeBuffer, put=__set_cachedGeometryNativeBuffer))  cachedGeometryNativeBuffer;

static void __set_cachedGeometryNativeBuffer(GlobalNamespace::OVRNativeBuffer value) ;

static GlobalNamespace::OVRNativeBuffer __get_cachedGeometryNativeBuffer() ;

static ::ArrayW<float_t> __declspec(property(get=__get_cachedGeometryManagedBuffer, put=__set_cachedGeometryManagedBuffer))  cachedGeometryManagedBuffer;

static void __set_cachedGeometryManagedBuffer(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_cachedGeometryManagedBuffer() ;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_cachedGeometryList, put=__set_cachedGeometryList))  cachedGeometryList;

constexpr void __set_cachedGeometryList(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_cachedGeometryList() const;


// Methods

/// @brief Method GetConfigured addr 0x25a58a8 size 0x98 virtual false final false
 bool GetConfigured() ;

/// @brief Method TestNode addr 0x25a96b0 size 0xc4 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult TestNode(GlobalNamespace::GlobalNamespace__OVRBoundary__Node node, GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType) ;

/// @brief Method TestPoint addr 0x25a977c size 0xe8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult TestPoint(UnityEngine::Vector3 point, GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType) ;

/// @brief Method GetGeometry addr 0x25a5940 size 0x43c virtual false final false
 ::ArrayW<UnityEngine::Vector3> GetGeometry(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType) ;

/// @brief Method GetDimensions addr 0x25a990c size 0xd0 virtual false final false
 UnityEngine::Vector3 GetDimensions(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType) ;

/// @brief Method GetVisible addr 0x25a99e0 size 0x98 virtual false final false
 bool GetVisible() ;

/// @brief Method SetVisible addr 0x25a9a78 size 0x9c virtual false final false
 void SetVisible(bool value) ;

// Ctor Parameters []
explicit OVRBoundary() ;

/// @brief Method .ctor addr 0x25a9b14 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType, "", "OVRBoundary/BoundaryType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRBoundary__Node, "", "OVRBoundary/Node");
NEED_NO_BOX(GlobalNamespace::OVRBoundary);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoundary, "", "OVRBoundary");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult, "", "OVRBoundary/BoundaryTestResult");
