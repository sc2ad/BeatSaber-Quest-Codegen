#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__FaceState;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPermissionsRequester__Permission;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRFaceExpressions__FaceExpression;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence;
}
namespace GlobalNamespace {
class OVRFaceExpressions;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator;
}
// Type: ::FaceRegionConfidence
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8464))
// CS Name: OVRFaceExpressions::FaceRegionConfidence
struct CORDL_TYPE GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence(GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence const&) = default;
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence(GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence&&) = default;
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence& operator=(GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence& operator=(GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence_Unwrapped : int32_t {
__Lower = 0,
__Upper = 1,
__Max = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Lower offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence const Lower;

/// @brief Field Upper offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence const Upper;

/// @brief Field Max offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FaceExpression
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8465))
// CS Name: OVRFaceExpressions::FaceExpression
struct CORDL_TYPE GlobalNamespace__OVRFaceExpressions__FaceExpression : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRFaceExpressions__FaceExpression(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRFaceExpressions__FaceExpression(GlobalNamespace__OVRFaceExpressions__FaceExpression const&) = default;
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceExpression(GlobalNamespace__OVRFaceExpressions__FaceExpression&&) = default;
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceExpression& operator=(GlobalNamespace__OVRFaceExpressions__FaceExpression const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceExpression& operator=(GlobalNamespace__OVRFaceExpressions__FaceExpression&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRFaceExpressions__FaceExpression(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRFaceExpressions__FaceExpression_Unwrapped : int32_t {
__BrowLowererL = 0,
__BrowLowererR = 1,
__CheekPuffL = 2,
__CheekPuffR = 3,
__CheekRaiserL = 4,
__CheekRaiserR = 5,
__CheekSuckL = 6,
__CheekSuckR = 7,
__ChinRaiserB = 8,
__ChinRaiserT = 9,
__DimplerL = 10,
__DimplerR = 11,
__EyesClosedL = 12,
__EyesClosedR = 13,
__EyesLookDownL = 14,
__EyesLookDownR = 15,
__EyesLookLeftL = 16,
__EyesLookLeftR = 17,
__EyesLookRightL = 18,
__EyesLookRightR = 19,
__EyesLookUpL = 20,
__EyesLookUpR = 21,
__InnerBrowRaiserL = 22,
__InnerBrowRaiserR = 23,
__JawDrop = 24,
__JawSidewaysLeft = 25,
__JawSidewaysRight = 26,
__JawThrust = 27,
__LidTightenerL = 28,
__LidTightenerR = 29,
__LipCornerDepressorL = 30,
__LipCornerDepressorR = 31,
__LipCornerPullerL = 32,
__LipCornerPullerR = 33,
__LipFunnelerLB = 34,
__LipFunnelerLT = 35,
__LipFunnelerRB = 36,
__LipFunnelerRT = 37,
__LipPressorL = 38,
__LipPressorR = 39,
__LipPuckerL = 40,
__LipPuckerR = 41,
__LipStretcherL = 42,
__LipStretcherR = 43,
__LipSuckLB = 44,
__LipSuckLT = 45,
__LipSuckRB = 46,
__LipSuckRT = 47,
__LipTightenerL = 48,
__LipTightenerR = 49,
__LipsToward = 50,
__LowerLipDepressorL = 51,
__LowerLipDepressorR = 52,
__MouthLeft = 53,
__MouthRight = 54,
__NoseWrinklerL = 55,
__NoseWrinklerR = 56,
__OuterBrowRaiserL = 57,
__OuterBrowRaiserR = 58,
__UpperLidRaiserL = 59,
__UpperLidRaiserR = 60,
__UpperLipRaiserL = 61,
__UpperLipRaiserR = 62,
__Max = 63,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRFaceExpressions__FaceExpression_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRFaceExpressions__FaceExpression_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BrowLowererL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const BrowLowererL;

/// @brief Field BrowLowererR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const BrowLowererR;

/// @brief Field CheekPuffL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const CheekPuffL;

/// @brief Field CheekPuffR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const CheekPuffR;

/// @brief Field CheekRaiserL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const CheekRaiserL;

/// @brief Field CheekRaiserR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const CheekRaiserR;

/// @brief Field CheekSuckL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const CheekSuckL;

/// @brief Field CheekSuckR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const CheekSuckR;

/// @brief Field ChinRaiserB offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const ChinRaiserB;

/// @brief Field ChinRaiserT offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const ChinRaiserT;

/// @brief Field DimplerL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const DimplerL;

/// @brief Field DimplerR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const DimplerR;

/// @brief Field EyesClosedL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesClosedL;

/// @brief Field EyesClosedR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesClosedR;

/// @brief Field EyesLookDownL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesLookDownL;

/// @brief Field EyesLookDownR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesLookDownR;

/// @brief Field EyesLookLeftL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesLookLeftL;

/// @brief Field EyesLookLeftR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesLookLeftR;

/// @brief Field EyesLookRightL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesLookRightL;

/// @brief Field EyesLookRightR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesLookRightR;

/// @brief Field EyesLookUpL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesLookUpL;

/// @brief Field EyesLookUpR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const EyesLookUpR;

/// @brief Field InnerBrowRaiserL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const InnerBrowRaiserL;

/// @brief Field InnerBrowRaiserR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const InnerBrowRaiserR;

/// @brief Field JawDrop offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const JawDrop;

/// @brief Field JawSidewaysLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const JawSidewaysLeft;

/// @brief Field JawSidewaysRight offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const JawSidewaysRight;

/// @brief Field JawThrust offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const JawThrust;

/// @brief Field LidTightenerL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LidTightenerL;

/// @brief Field LidTightenerR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LidTightenerR;

/// @brief Field LipCornerDepressorL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipCornerDepressorL;

/// @brief Field LipCornerDepressorR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipCornerDepressorR;

/// @brief Field LipCornerPullerL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipCornerPullerL;

/// @brief Field LipCornerPullerR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipCornerPullerR;

/// @brief Field LipFunnelerLB offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipFunnelerLB;

/// @brief Field LipFunnelerLT offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipFunnelerLT;

/// @brief Field LipFunnelerRB offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipFunnelerRB;

/// @brief Field LipFunnelerRT offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipFunnelerRT;

/// @brief Field LipPressorL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipPressorL;

/// @brief Field LipPressorR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipPressorR;

/// @brief Field LipPuckerL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipPuckerL;

/// @brief Field LipPuckerR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipPuckerR;

/// @brief Field LipStretcherL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipStretcherL;

/// @brief Field LipStretcherR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipStretcherR;

/// @brief Field LipSuckLB offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipSuckLB;

/// @brief Field LipSuckLT offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipSuckLT;

/// @brief Field LipSuckRB offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipSuckRB;

/// @brief Field LipSuckRT offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipSuckRT;

/// @brief Field LipTightenerL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipTightenerL;

/// @brief Field LipTightenerR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipTightenerR;

/// @brief Field LipsToward offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LipsToward;

/// @brief Field LowerLipDepressorL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LowerLipDepressorL;

/// @brief Field LowerLipDepressorR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const LowerLipDepressorR;

/// @brief Field MouthLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const MouthLeft;

/// @brief Field MouthRight offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const MouthRight;

/// @brief Field NoseWrinklerL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const NoseWrinklerL;

/// @brief Field NoseWrinklerR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const NoseWrinklerR;

/// @brief Field OuterBrowRaiserL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const OuterBrowRaiserL;

/// @brief Field OuterBrowRaiserR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const OuterBrowRaiserR;

/// @brief Field UpperLidRaiserL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const UpperLidRaiserL;

/// @brief Field UpperLidRaiserR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const UpperLidRaiserR;

/// @brief Field UpperLipRaiserL offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const UpperLipRaiserL;

/// @brief Field UpperLipRaiserR offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const UpperLipRaiserR;

/// @brief Field Max offset 0
static GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FaceExpressionsEnumerator
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8466))
// CS Name: OVRFaceExpressions::FaceExpressionsEnumerator
struct CORDL_TYPE GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<float_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<float_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator(::ArrayW<float_t> _faceExpressions, int32_t _index, int32_t _count) noexcept;


                    constexpr GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator(GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator const&) = default;
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator(GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator&&) = default;
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator& operator=(GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator& operator=(GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get__faceExpressions, put=__set__faceExpressions))  _faceExpressions;

constexpr void __set__faceExpressions(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__faceExpressions() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Properties

 float_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x25b069c size 0x24 virtual false final false
 void _ctor(::ArrayW<float_t> array) ;

/// @brief Method MoveNext addr 0x25b07c8 size 0x1c virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x25b07e4 size 0x34 virtual true final true
 float_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x25b0818 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x25b0878 size 0xc virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x25b0884 size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRFaceExpressions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8467))
// CS Name: OVRFaceExpressions
class CORDL_TYPE OVRFaceExpressions : public UnityEngine::MonoBehaviour {
public:
// Declarations
using FaceExpressionsEnumerator = GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator;

using FaceExpression = GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression;

using FaceRegionConfidence = GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<float_t>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<float_t>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<float_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<float_t>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OVRFaceExpressions() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions", modifiers: " const&", def_value: None }]
constexpr OVRFaceExpressions(OVRFaceExpressions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions", modifiers: "&&", def_value: None }]
constexpr OVRFaceExpressions(OVRFaceExpressions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRFaceExpressions(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRFaceExpressions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRFaceExpressions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRFaceExpressions& operator=(OVRFaceExpressions&& o) noexcept = default;
  constexpr OVRFaceExpressions& operator=(OVRFaceExpressions const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__ValidExpressions_k__BackingField, put=__set__ValidExpressions_k__BackingField))  _ValidExpressions_k__BackingField;

constexpr void __set__ValidExpressions_k__BackingField(bool value) ;

constexpr bool __get__ValidExpressions_k__BackingField() const;

 bool __declspec(property(get=__get__EyeFollowingBlendshapesValid_k__BackingField, put=__set__EyeFollowingBlendshapesValid_k__BackingField))  _EyeFollowingBlendshapesValid_k__BackingField;

constexpr void __set__EyeFollowingBlendshapesValid_k__BackingField(bool value) ;

constexpr bool __get__EyeFollowingBlendshapesValid_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__FaceState __declspec(property(get=__get__currentFaceState, put=__set__currentFaceState))  _currentFaceState;

constexpr void __set__currentFaceState(GlobalNamespace::GlobalNamespace__OVRPlugin__FaceState value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__FaceState __get__currentFaceState() const;

/// @brief Field FaceTrackingPermission offset 0
static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission const FaceTrackingPermission;

 System::Action_1<::StringW> __declspec(property(get=__get__onPermissionGranted, put=__set__onPermissionGranted))  _onPermissionGranted;

constexpr void __set__onPermissionGranted(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get__onPermissionGranted() const;

static int32_t __declspec(property(get=__get__trackingInstanceCount, put=__set__trackingInstanceCount))  _trackingInstanceCount;

static void __set__trackingInstanceCount(int32_t value) ;

static int32_t __get__trackingInstanceCount() ;


// Properties

 bool __declspec(property(get=get_FaceTrackingEnabled))  FaceTrackingEnabled;

 bool __declspec(property(get=get_ValidExpressions, put=set_ValidExpressions))  ValidExpressions;

 bool __declspec(property(get=get_EyeFollowingBlendshapesValid, put=set_EyeFollowingBlendshapesValid))  EyeFollowingBlendshapesValid;

 float_t __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method get_FaceTrackingEnabled addr 0x25afdf4 size 0x50 virtual false final false
 bool get_FaceTrackingEnabled() ;

/// @brief Method get_ValidExpressions addr 0x25afe44 size 0x8 virtual false final false
 bool get_ValidExpressions() ;

/// @brief Method set_ValidExpressions addr 0x25afe4c size 0xc virtual false final false
 void set_ValidExpressions(bool value) ;

/// @brief Method get_EyeFollowingBlendshapesValid addr 0x25afe58 size 0x8 virtual false final false
 bool get_EyeFollowingBlendshapesValid() ;

/// @brief Method set_EyeFollowingBlendshapesValid addr 0x25afe60 size 0xc virtual false final false
 void set_EyeFollowingBlendshapesValid(bool value) ;

/// @brief Method Awake addr 0x25afe6c size 0x7c virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x25afee8 size 0x78 virtual false final false
 void OnEnable() ;

/// @brief Method OnPermissionGranted addr 0x25b0038 size 0x60 virtual false final false
 void OnPermissionGranted(::StringW permissionId) ;

/// @brief Method StartFaceTracking addr 0x25aff60 size 0xd8 virtual false final false
 bool StartFaceTracking() ;

/// @brief Method OnDisable addr 0x25b0098 size 0x88 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x25b0120 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x25b012c size 0x94 virtual false final false
 void Update() ;

/// @brief Method get_Item addr 0x25b01c0 size 0x100 virtual false final false
 float_t get_Item(GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression expression) ;

/// @brief Method TryGetFaceExpressionWeight addr 0x25b0320 size 0x54 virtual false final false
 bool TryGetFaceExpressionWeight(GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression expression, ByRef<float_t> weight) ;

/// @brief Method TryGetWeightConfidence addr 0x25b0374 size 0x54 virtual false final false
 bool TryGetWeightConfidence(GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence region, ByRef<float_t> weightConfidence) ;

/// @brief Method CheckValidity addr 0x25b02c0 size 0x60 virtual false final false
 void CheckValidity() ;

/// @brief Method CopyTo addr 0x25b03c8 size 0x250 virtual false final false
 void CopyTo(::ArrayW<float_t> array, int32_t startIndex) ;

/// @brief Method ToArray addr 0x25b0618 size 0x64 virtual false final false
 ::ArrayW<float_t> ToArray() ;

/// @brief Method GetEnumerator addr 0x25b067c size 0x20 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator addr 0x25b06c0 size 0x74 virtual true final true
 System::Collections::Generic::IEnumerator_1<float_t> System_Collections_Generic_IEnumerable_System_Single__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x25b0734 size 0x74 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Count addr 0x25b07a8 size 0x18 virtual true final true
 int32_t get_Count() ;

// Ctor Parameters []
explicit OVRFaceExpressions() ;

/// @brief Method .ctor addr 0x25b07c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression, "", "OVRFaceExpressions/FaceExpression");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceRegionConfidence, "", "OVRFaceExpressions/FaceRegionConfidence");
NEED_NO_BOX(GlobalNamespace::OVRFaceExpressions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRFaceExpressions, "", "OVRFaceExpressions");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpressionsEnumerator, "", "OVRFaceExpressions/FaceExpressionsEnumerator");
