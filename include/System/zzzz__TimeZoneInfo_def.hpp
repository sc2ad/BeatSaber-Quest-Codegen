#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTimeKind;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct DayOfWeek;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct TimeZoneInfoOptions;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__DirectoryEntry;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System::Globalization {
struct DaylightTimeStruct;
}
// Forward declare root types
namespace System {
struct System__TimeZoneInfo__TZVersion;
}
namespace System {
class System__TimeZoneInfo__AdjustmentRule;
}
namespace System {
class System__TimeZoneInfo__CachedData;
}
namespace System {
class System__TimeZoneInfo____c;
}
namespace System {
class System__TimeZoneInfo____c__DisplayClass16_0;
}
namespace System {
class TimeZoneInfo;
}
namespace System {
struct System__TimeZoneInfo__TZifHead;
}
namespace System {
struct System__TimeZoneInfo__TZifType;
}
namespace System {
struct System__TimeZoneInfo__TransitionTime;
}
// Type: ::TZifType
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2313))
// CS Name: System.TimeZoneInfo::TZifType
struct CORDL_TYPE System__TimeZoneInfo__TZifType : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "UtcOffset", ty: "System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__TimeZoneInfo__TZifType(System::TimeSpan UtcOffset, bool IsDst, uint8_t AbbreviationIndex) noexcept;


                    constexpr System__TimeZoneInfo__TZifType(System__TimeZoneInfo__TZifType const&) = default;
                    constexpr System__TimeZoneInfo__TZifType(System__TimeZoneInfo__TZifType&&) = default;
                    constexpr System__TimeZoneInfo__TZifType& operator=(System__TimeZoneInfo__TZifType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__TimeZoneInfo__TZifType& operator=(System__TimeZoneInfo__TZifType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__TimeZoneInfo__TZifType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::TimeSpan __declspec(property(get=__get_UtcOffset, put=__set_UtcOffset))  UtcOffset;

constexpr void __set_UtcOffset(System::TimeSpan value) ;

constexpr System::TimeSpan __get_UtcOffset() const;

 bool __declspec(property(get=__get_IsDst, put=__set_IsDst))  IsDst;

constexpr void __set_IsDst(bool value) ;

constexpr bool __get_IsDst() const;

 uint8_t __declspec(property(get=__get_AbbreviationIndex, put=__set_AbbreviationIndex))  AbbreviationIndex;

constexpr void __set_AbbreviationIndex(uint8_t value) ;

constexpr uint8_t __get_AbbreviationIndex() const;


// Methods

/// @brief Method .ctor addr 0x23abb8c size 0x140 virtual false final false
 void _ctor(::ArrayW<uint8_t> data, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::TZifHead
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2314))
// CS Name: System.TimeZoneInfo::TZifHead
struct CORDL_TYPE System__TimeZoneInfo__TZifHead : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "System::System__TimeZoneInfo__TZVersion", modifiers: "", def_value: None }, CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LeapCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TypeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr System__TimeZoneInfo__TZifHead(uint32_t Magic, System::System__TimeZoneInfo__TZVersion Version, uint32_t IsGmtCount, uint32_t IsStdCount, uint32_t LeapCount, uint32_t TimeCount, uint32_t TypeCount, uint32_t CharCount) noexcept;


                    constexpr System__TimeZoneInfo__TZifHead(System__TimeZoneInfo__TZifHead const&) = default;
                    constexpr System__TimeZoneInfo__TZifHead(System__TimeZoneInfo__TZifHead&&) = default;
                    constexpr System__TimeZoneInfo__TZifHead& operator=(System__TimeZoneInfo__TZifHead const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__TimeZoneInfo__TZifHead& operator=(System__TimeZoneInfo__TZifHead&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__TimeZoneInfo__TZifHead(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_Magic, put=__set_Magic))  Magic;

constexpr void __set_Magic(uint32_t value) ;

constexpr uint32_t __get_Magic() const;

 System::System__TimeZoneInfo__TZVersion __declspec(property(get=__get_Version, put=__set_Version))  Version;

constexpr void __set_Version(System::System__TimeZoneInfo__TZVersion value) ;

constexpr System::System__TimeZoneInfo__TZVersion __get_Version() const;

 uint32_t __declspec(property(get=__get_IsGmtCount, put=__set_IsGmtCount))  IsGmtCount;

constexpr void __set_IsGmtCount(uint32_t value) ;

constexpr uint32_t __get_IsGmtCount() const;

 uint32_t __declspec(property(get=__get_IsStdCount, put=__set_IsStdCount))  IsStdCount;

constexpr void __set_IsStdCount(uint32_t value) ;

constexpr uint32_t __get_IsStdCount() const;

 uint32_t __declspec(property(get=__get_LeapCount, put=__set_LeapCount))  LeapCount;

constexpr void __set_LeapCount(uint32_t value) ;

constexpr uint32_t __get_LeapCount() const;

 uint32_t __declspec(property(get=__get_TimeCount, put=__set_TimeCount))  TimeCount;

constexpr void __set_TimeCount(uint32_t value) ;

constexpr uint32_t __get_TimeCount() const;

 uint32_t __declspec(property(get=__get_TypeCount, put=__set_TypeCount))  TypeCount;

constexpr void __set_TypeCount(uint32_t value) ;

constexpr uint32_t __get_TypeCount() const;

 uint32_t __declspec(property(get=__get_CharCount, put=__set_CharCount))  CharCount;

constexpr void __set_CharCount(uint32_t value) ;

constexpr uint32_t __get_CharCount() const;


// Methods

/// @brief Method .ctor addr 0x23ab9d8 size 0x1b4 virtual false final false
 void _ctor(::ArrayW<uint8_t> data, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::TZVersion
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2315))
// CS Name: System.TimeZoneInfo::TZVersion
struct CORDL_TYPE System__TimeZoneInfo__TZVersion : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__TimeZoneInfo__TZVersion(uint8_t value__) noexcept;


                    constexpr System__TimeZoneInfo__TZVersion(System__TimeZoneInfo__TZVersion const&) = default;
                    constexpr System__TimeZoneInfo__TZVersion(System__TimeZoneInfo__TZVersion&&) = default;
                    constexpr System__TimeZoneInfo__TZVersion& operator=(System__TimeZoneInfo__TZVersion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__TimeZoneInfo__TZVersion& operator=(System__TimeZoneInfo__TZVersion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__TimeZoneInfo__TZVersion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__TimeZoneInfo__TZVersion_Unwrapped : uint8_t {
__V1 = 0u,
__V2 = 1u,
__V3 = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__TimeZoneInfo__TZVersion_Unwrapped () const noexcept {
return std::bit_cast<__System__TimeZoneInfo__TZVersion_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field V1 offset 0
static System::System__TimeZoneInfo__TZVersion const V1;

/// @brief Field V2 offset 0
static System::System__TimeZoneInfo__TZVersion const V2;

/// @brief Field V3 offset 0
static System::System__TimeZoneInfo__TZVersion const V3;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::AdjustmentRule
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2316))
// CS Name: System.TimeZoneInfo::AdjustmentRule
class CORDL_TYPE System__TimeZoneInfo__AdjustmentRule : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::System__TimeZoneInfo__AdjustmentRule>
constexpr operator  System::IEquatable_1<System::System__TimeZoneInfo__AdjustmentRule>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~System__TimeZoneInfo__AdjustmentRule() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TimeZoneInfo__AdjustmentRule", modifiers: " const&", def_value: None }]
constexpr System__TimeZoneInfo__AdjustmentRule(System__TimeZoneInfo__AdjustmentRule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TimeZoneInfo__AdjustmentRule", modifiers: "&&", def_value: None }]
constexpr System__TimeZoneInfo__AdjustmentRule(System__TimeZoneInfo__AdjustmentRule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__TimeZoneInfo__AdjustmentRule(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__TimeZoneInfo__AdjustmentRule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__TimeZoneInfo__AdjustmentRule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__TimeZoneInfo__AdjustmentRule& operator=(System__TimeZoneInfo__AdjustmentRule&& o) noexcept = default;
  constexpr System__TimeZoneInfo__AdjustmentRule& operator=(System__TimeZoneInfo__AdjustmentRule const& o) noexcept = default;
                


// Fields

 System::DateTime __declspec(property(get=__get__dateStart, put=__set__dateStart))  _dateStart;

constexpr void __set__dateStart(System::DateTime value) ;

constexpr System::DateTime __get__dateStart() const;

 System::DateTime __declspec(property(get=__get__dateEnd, put=__set__dateEnd))  _dateEnd;

constexpr void __set__dateEnd(System::DateTime value) ;

constexpr System::DateTime __get__dateEnd() const;

 System::TimeSpan __declspec(property(get=__get__daylightDelta, put=__set__daylightDelta))  _daylightDelta;

constexpr void __set__daylightDelta(System::TimeSpan value) ;

constexpr System::TimeSpan __get__daylightDelta() const;

 System::System__TimeZoneInfo__TransitionTime __declspec(property(get=__get__daylightTransitionStart, put=__set__daylightTransitionStart))  _daylightTransitionStart;

constexpr void __set__daylightTransitionStart(System::System__TimeZoneInfo__TransitionTime value) ;

constexpr System::System__TimeZoneInfo__TransitionTime __get__daylightTransitionStart() const;

 System::System__TimeZoneInfo__TransitionTime __declspec(property(get=__get__daylightTransitionEnd, put=__set__daylightTransitionEnd))  _daylightTransitionEnd;

constexpr void __set__daylightTransitionEnd(System::System__TimeZoneInfo__TransitionTime value) ;

constexpr System::System__TimeZoneInfo__TransitionTime __get__daylightTransitionEnd() const;

 System::TimeSpan __declspec(property(get=__get__baseUtcOffsetDelta, put=__set__baseUtcOffsetDelta))  _baseUtcOffsetDelta;

constexpr void __set__baseUtcOffsetDelta(System::TimeSpan value) ;

constexpr System::TimeSpan __get__baseUtcOffsetDelta() const;

 bool __declspec(property(get=__get__noDaylightTransitions, put=__set__noDaylightTransitions))  _noDaylightTransitions;

constexpr void __set__noDaylightTransitions(bool value) ;

constexpr bool __get__noDaylightTransitions() const;


// Properties

 System::DateTime __declspec(property(get=get_DateStart))  DateStart;

 System::DateTime __declspec(property(get=get_DateEnd))  DateEnd;

 System::TimeSpan __declspec(property(get=get_DaylightDelta))  DaylightDelta;

 System::System__TimeZoneInfo__TransitionTime __declspec(property(get=get_DaylightTransitionStart))  DaylightTransitionStart;

 System::System__TimeZoneInfo__TransitionTime __declspec(property(get=get_DaylightTransitionEnd))  DaylightTransitionEnd;

 System::TimeSpan __declspec(property(get=get_BaseUtcOffsetDelta))  BaseUtcOffsetDelta;

 bool __declspec(property(get=get_NoDaylightTransitions))  NoDaylightTransitions;

 bool __declspec(property(get=get_HasDaylightSaving))  HasDaylightSaving;


// Methods

/// @brief Method get_DateStart addr 0x23b0890 size 0x8 virtual false final false
 System::DateTime get_DateStart() ;

/// @brief Method get_DateEnd addr 0x23b0898 size 0x8 virtual false final false
 System::DateTime get_DateEnd() ;

/// @brief Method get_DaylightDelta addr 0x23b08a0 size 0x8 virtual false final false
 System::TimeSpan get_DaylightDelta() ;

/// @brief Method get_DaylightTransitionStart addr 0x23b08a8 size 0x14 virtual false final false
 System::System__TimeZoneInfo__TransitionTime get_DaylightTransitionStart() ;

/// @brief Method get_DaylightTransitionEnd addr 0x23b08bc size 0x14 virtual false final false
 System::System__TimeZoneInfo__TransitionTime get_DaylightTransitionEnd() ;

/// @brief Method get_BaseUtcOffsetDelta addr 0x23b08d0 size 0x8 virtual false final false
 System::TimeSpan get_BaseUtcOffsetDelta() ;

/// @brief Method get_NoDaylightTransitions addr 0x23b08d8 size 0x8 virtual false final false
 bool get_NoDaylightTransitions() ;

/// @brief Method get_HasDaylightSaving addr 0x23ac9bc size 0x15c virtual false final false
 bool get_HasDaylightSaving() ;

/// @brief Method Equals addr 0x23ad8f8 size 0x164 virtual true final true
 bool Equals(System::System__TimeZoneInfo__AdjustmentRule other) ;

/// @brief Method GetHashCode addr 0x23b09ec size 0xc virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "dateStart", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "dateEnd", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "daylightDelta", ty: "System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "daylightTransitionStart", ty: "System::System__TimeZoneInfo__TransitionTime", modifiers: "", def_value: None }, CppParam { name: "daylightTransitionEnd", ty: "System::System__TimeZoneInfo__TransitionTime", modifiers: "", def_value: None }, CppParam { name: "baseUtcOffsetDelta", ty: "System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "noDaylightTransitions", ty: "bool", modifiers: "", def_value: None }]
explicit System__TimeZoneInfo__AdjustmentRule(System::DateTime dateStart, System::DateTime dateEnd, System::TimeSpan daylightDelta, System::System__TimeZoneInfo__TransitionTime daylightTransitionStart, System::System__TimeZoneInfo__TransitionTime daylightTransitionEnd, System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions) ;

/// @brief Method .ctor addr 0x23b09f8 size 0xc8 virtual false final false
 void _ctor(System::DateTime dateStart, System::DateTime dateEnd, System::TimeSpan daylightDelta, System::System__TimeZoneInfo__TransitionTime daylightTransitionStart, System::System__TimeZoneInfo__TransitionTime daylightTransitionEnd, System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions) ;

/// @brief Method CreateAdjustmentRule addr 0x23a7470 size 0x110 virtual false final false
static System::System__TimeZoneInfo__AdjustmentRule CreateAdjustmentRule(System::DateTime dateStart, System::DateTime dateEnd, System::TimeSpan daylightDelta, System::System__TimeZoneInfo__TransitionTime daylightTransitionStart, System::System__TimeZoneInfo__TransitionTime daylightTransitionEnd) ;

/// @brief Method CreateAdjustmentRule addr 0x23a9dac size 0xf0 virtual false final false
static System::System__TimeZoneInfo__AdjustmentRule CreateAdjustmentRule(System::DateTime dateStart, System::DateTime dateEnd, System::TimeSpan daylightDelta, System::System__TimeZoneInfo__TransitionTime daylightTransitionStart, System::System__TimeZoneInfo__TransitionTime daylightTransitionEnd, System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions) ;

/// @brief Method IsStartDateMarkerForBeginningOfYear addr 0x23aed50 size 0xb0 virtual false final false
 bool IsStartDateMarkerForBeginningOfYear() ;

/// @brief Method IsEndDateMarkerForEndOfYear addr 0x23aee00 size 0xb0 virtual false final false
 bool IsEndDateMarkerForEndOfYear() ;

/// @brief Method ValidateAdjustmentRule addr 0x23b0ac0 size 0x44c virtual false final false
static void ValidateAdjustmentRule(System::DateTime dateStart, System::DateTime dateEnd, System::TimeSpan daylightDelta, System::System__TimeZoneInfo__TransitionTime daylightTransitionStart, System::System__TimeZoneInfo__TransitionTime daylightTransitionEnd, bool noDaylightTransitions) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x23b0f48 size 0x118 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x23b1060 size 0x244 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit System__TimeZoneInfo__AdjustmentRule(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b12a4 size 0x418 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters []
explicit System__TimeZoneInfo__AdjustmentRule() ;

/// @brief Method .ctor addr 0x23b16bc size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::TransitionTime
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2317))
// CS Name: System.TimeZoneInfo::TransitionTime
struct CORDL_TYPE System__TimeZoneInfo__TransitionTime : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::System__TimeZoneInfo__TransitionTime>
constexpr operator  System::IEquatable_1<System::System__TimeZoneInfo__TransitionTime>() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_dayOfWeek", ty: "System::DayOfWeek", modifiers: "", def_value: None }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: None }]
constexpr System__TimeZoneInfo__TransitionTime(System::DateTime _timeOfDay, uint8_t _month, uint8_t _week, uint8_t _day, System::DayOfWeek _dayOfWeek, bool _isFixedDateRule) noexcept;


                    constexpr System__TimeZoneInfo__TransitionTime(System__TimeZoneInfo__TransitionTime const&) = default;
                    constexpr System__TimeZoneInfo__TransitionTime(System__TimeZoneInfo__TransitionTime&&) = default;
                    constexpr System__TimeZoneInfo__TransitionTime& operator=(System__TimeZoneInfo__TransitionTime const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__TimeZoneInfo__TransitionTime& operator=(System__TimeZoneInfo__TransitionTime&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__TimeZoneInfo__TransitionTime(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::DateTime __declspec(property(get=__get__timeOfDay, put=__set__timeOfDay))  _timeOfDay;

constexpr void __set__timeOfDay(System::DateTime value) ;

constexpr System::DateTime __get__timeOfDay() const;

 uint8_t __declspec(property(get=__get__month, put=__set__month))  _month;

constexpr void __set__month(uint8_t value) ;

constexpr uint8_t __get__month() const;

 uint8_t __declspec(property(get=__get__week, put=__set__week))  _week;

constexpr void __set__week(uint8_t value) ;

constexpr uint8_t __get__week() const;

 uint8_t __declspec(property(get=__get__day, put=__set__day))  _day;

constexpr void __set__day(uint8_t value) ;

constexpr uint8_t __get__day() const;

 System::DayOfWeek __declspec(property(get=__get__dayOfWeek, put=__set__dayOfWeek))  _dayOfWeek;

constexpr void __set__dayOfWeek(System::DayOfWeek value) ;

constexpr System::DayOfWeek __get__dayOfWeek() const;

 bool __declspec(property(get=__get__isFixedDateRule, put=__set__isFixedDateRule))  _isFixedDateRule;

constexpr void __set__isFixedDateRule(bool value) ;

constexpr bool __get__isFixedDateRule() const;


// Properties

 System::DateTime __declspec(property(get=get_TimeOfDay))  TimeOfDay;

 int32_t __declspec(property(get=get_Month))  Month;

 int32_t __declspec(property(get=get_Week))  Week;

 int32_t __declspec(property(get=get_Day))  Day;

 System::DayOfWeek __declspec(property(get=get_DayOfWeek))  DayOfWeek;

 bool __declspec(property(get=get_IsFixedDateRule))  IsFixedDateRule;


// Methods

/// @brief Method get_TimeOfDay addr 0x23b16f4 size 0x8 virtual false final false
 System::DateTime get_TimeOfDay() ;

/// @brief Method get_Month addr 0x23b16fc size 0x8 virtual false final false
 int32_t get_Month() ;

/// @brief Method get_Week addr 0x23b1704 size 0x8 virtual false final false
 int32_t get_Week() ;

/// @brief Method get_Day addr 0x23b170c size 0x8 virtual false final false
 int32_t get_Day() ;

/// @brief Method get_DayOfWeek addr 0x23b1714 size 0x8 virtual false final false
 System::DayOfWeek get_DayOfWeek() ;

/// @brief Method get_IsFixedDateRule addr 0x23b171c size 0x8 virtual false final false
 bool get_IsFixedDateRule() ;

/// @brief Method Equals addr 0x23b1724 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Inequality addr 0x23b08e0 size 0x34 virtual false final false
static bool op_Inequality(System::System__TimeZoneInfo__TransitionTime t1, System::System__TimeZoneInfo__TransitionTime t2) ;

/// @brief Method Equals addr 0x23b0914 size 0xd8 virtual true final true
 bool Equals(System::System__TimeZoneInfo__TransitionTime other) ;

/// @brief Method GetHashCode addr 0x23b17b4 size 0x14 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method .ctor addr 0x23b17c8 size 0x70 virtual false final false
 void _ctor(System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, System::DayOfWeek dayOfWeek, bool isFixedDateRule) ;

/// @brief Method CreateFixedDateRule addr 0x23a7410 size 0x60 virtual false final false
static System::System__TimeZoneInfo__TransitionTime CreateFixedDateRule(System::DateTime timeOfDay, int32_t month, int32_t day) ;

/// @brief Method CreateFloatingDateRule addr 0x23aaefc size 0x68 virtual false final false
static System::System__TimeZoneInfo__TransitionTime CreateFloatingDateRule(System::DateTime timeOfDay, int32_t month, int32_t week, System::DayOfWeek dayOfWeek) ;

/// @brief Method ValidateTransitionTime addr 0x23b1838 size 0x24c virtual false final false
static void ValidateTransitionTime(System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, System::DayOfWeek dayOfWeek) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x23b1a84 size 0xf0 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x23b1b74 size 0x1ac virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b1d20 size 0x37c virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::CachedData
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2318))
// CS Name: System.TimeZoneInfo::CachedData
class CORDL_TYPE System__TimeZoneInfo__CachedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__TimeZoneInfo__CachedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TimeZoneInfo__CachedData", modifiers: " const&", def_value: None }]
constexpr System__TimeZoneInfo__CachedData(System__TimeZoneInfo__CachedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TimeZoneInfo__CachedData", modifiers: "&&", def_value: None }]
constexpr System__TimeZoneInfo__CachedData(System__TimeZoneInfo__CachedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__TimeZoneInfo__CachedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__TimeZoneInfo__CachedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__TimeZoneInfo__CachedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__TimeZoneInfo__CachedData& operator=(System__TimeZoneInfo__CachedData&& o) noexcept = default;
  constexpr System__TimeZoneInfo__CachedData& operator=(System__TimeZoneInfo__CachedData const& o) noexcept = default;
                


// Fields

 System::TimeZoneInfo __declspec(property(get=__get__localTimeZone, put=__set__localTimeZone))  _localTimeZone;

constexpr void __set__localTimeZone(System::TimeZoneInfo value) ;

constexpr System::TimeZoneInfo __get__localTimeZone() const;


// Properties

 System::TimeZoneInfo __declspec(property(get=get_Local))  Local;


// Methods

/// @brief Method CreateLocal addr 0x23b209c size 0x190 virtual false final false
 System::TimeZoneInfo CreateLocal() ;

/// @brief Method get_Local addr 0x23ac160 size 0x38 virtual false final false
 System::TimeZoneInfo get_Local() ;

/// @brief Method GetCorrespondingKind addr 0x23ac210 size 0x8c virtual false final false
 System::DateTimeKind GetCorrespondingKind(System::TimeZoneInfo timeZone) ;

// Ctor Parameters []
explicit System__TimeZoneInfo__CachedData() ;

/// @brief Method .ctor addr 0x23b0850 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::<>c__DisplayClass16_0
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2319))
// CS Name: System.TimeZoneInfo::<>c__DisplayClass16_0
class CORDL_TYPE System__TimeZoneInfo____c__DisplayClass16_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~System__TimeZoneInfo____c__DisplayClass16_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TimeZoneInfo____c__DisplayClass16_0", modifiers: " const&", def_value: None }]
constexpr System__TimeZoneInfo____c__DisplayClass16_0(System__TimeZoneInfo____c__DisplayClass16_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TimeZoneInfo____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
constexpr System__TimeZoneInfo____c__DisplayClass16_0(System__TimeZoneInfo____c__DisplayClass16_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__TimeZoneInfo____c__DisplayClass16_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__TimeZoneInfo____c__DisplayClass16_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__TimeZoneInfo____c__DisplayClass16_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__TimeZoneInfo____c__DisplayClass16_0& operator=(System__TimeZoneInfo____c__DisplayClass16_0&& o) noexcept = default;
  constexpr System__TimeZoneInfo____c__DisplayClass16_0& operator=(System__TimeZoneInfo____c__DisplayClass16_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_localtimeFilePath, put=__set_localtimeFilePath))  localtimeFilePath;

constexpr void __set_localtimeFilePath(::StringW value) ;

constexpr ::StringW __get_localtimeFilePath() const;

 ::StringW __declspec(property(get=__get_posixrulesFilePath, put=__set_posixrulesFilePath))  posixrulesFilePath;

constexpr void __set_posixrulesFilePath(::StringW value) ;

constexpr ::StringW __get_posixrulesFilePath() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_rawData, put=__set_rawData))  rawData;

constexpr void __set_rawData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_rawData() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::StringW __declspec(property(get=__get_timeZoneDirectory, put=__set_timeZoneDirectory))  timeZoneDirectory;

constexpr void __set_timeZoneDirectory(::StringW value) ;

constexpr ::StringW __get_timeZoneDirectory() const;


// Methods

// Ctor Parameters []
explicit System__TimeZoneInfo____c__DisplayClass16_0() ;

/// @brief Method .ctor addr 0x23a8750 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FindTimeZoneId>b__0 addr 0x23b222c size 0xf4 virtual false final false
 bool _FindTimeZoneId_b__0(::StringW filePath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::<>c
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2320))
// CS Name: System.TimeZoneInfo::<>c
class CORDL_TYPE System__TimeZoneInfo____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__TimeZoneInfo____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TimeZoneInfo____c", modifiers: " const&", def_value: None }]
constexpr System__TimeZoneInfo____c(System__TimeZoneInfo____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TimeZoneInfo____c", modifiers: "&&", def_value: None }]
constexpr System__TimeZoneInfo____c(System__TimeZoneInfo____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__TimeZoneInfo____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__TimeZoneInfo____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__TimeZoneInfo____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__TimeZoneInfo____c& operator=(System__TimeZoneInfo____c&& o) noexcept = default;
  constexpr System__TimeZoneInfo____c& operator=(System__TimeZoneInfo____c const& o) noexcept = default;
                


// Fields

static System::System__TimeZoneInfo____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::System__TimeZoneInfo____c value) ;

static System::System__TimeZoneInfo____c __get___9() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__34_1, put=__set___9__34_1))  __9__34_1;

static void __set___9__34_1(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__34_1() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__34_0, put=__set___9__34_0))  __9__34_0;

static void __set___9__34_0(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__34_0() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__35_0, put=__set___9__35_0))  __9__35_0;

static void __set___9__35_0(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__35_0() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__37_0, put=__set___9__37_0))  __9__37_0;

static void __set___9__37_0(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__37_0() ;

static System::Func_2<char16_t,bool> __declspec(property(get=__get___9__38_0, put=__set___9__38_0))  __9__38_0;

static void __set___9__38_0(System::Func_2<char16_t,bool> value) ;

static System::Func_2<char16_t,bool> __get___9__38_0() ;

static System::Comparison_1<System::System__TimeZoneInfo__AdjustmentRule> __declspec(property(get=__get___9__161_0, put=__set___9__161_0))  __9__161_0;

static void __set___9__161_0(System::Comparison_1<System::System__TimeZoneInfo__AdjustmentRule> value) ;

static System::Comparison_1<System::System__TimeZoneInfo__AdjustmentRule> __get___9__161_0() ;


// Methods

// Ctor Parameters []
explicit System__TimeZoneInfo____c() ;

/// @brief Method .ctor addr 0x23b2384 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <TZif_ParsePosixName>b__34_1 addr 0x23b238c size 0x10 virtual false final false
 bool _TZif_ParsePosixName_b__34_1(char16_t c) ;

/// @brief Method <TZif_ParsePosixName>b__34_0 addr 0x23b239c size 0x80 virtual false final false
 bool _TZif_ParsePosixName_b__34_0(char16_t c) ;

/// @brief Method <TZif_ParsePosixOffset>b__35_0 addr 0x23b24a0 size 0x88 virtual false final false
 bool _TZif_ParsePosixOffset_b__35_0(char16_t c) ;

/// @brief Method <TZif_ParsePosixDate>b__37_0 addr 0x23b2528 size 0x1c virtual false final false
 bool _TZif_ParsePosixDate_b__37_0(char16_t c) ;

/// @brief Method <TZif_ParsePosixTime>b__38_0 addr 0x23b2544 size 0x10 virtual false final false
 bool _TZif_ParsePosixTime_b__38_0(char16_t c) ;

/// @brief Method <CreateLocalUnity>b__161_0 addr 0x23b2554 size 0x34 virtual false final false
 int32_t _CreateLocalUnity_b__161_0(System::System__TimeZoneInfo__AdjustmentRule rule1, System::System__TimeZoneInfo__AdjustmentRule rule2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::TimeZoneInfo
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2321))
// CS Name: System.TimeZoneInfo
class CORDL_TYPE TimeZoneInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = System::System__TimeZoneInfo____c;

using __c__DisplayClass16_0 = System::System__TimeZoneInfo____c__DisplayClass16_0;

using CachedData = System::System__TimeZoneInfo__CachedData;

using TransitionTime = System::System__TimeZoneInfo__TransitionTime;

using AdjustmentRule = System::System__TimeZoneInfo__AdjustmentRule;

using TZVersion = System::System__TimeZoneInfo__TZVersion;

using TZifHead = System::System__TimeZoneInfo__TZifHead;

using TZifType = System::System__TimeZoneInfo__TZifType;

/// @brief Convert operator to System::IEquatable_1<System::TimeZoneInfo>
constexpr operator  System::IEquatable_1<System::TimeZoneInfo>() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TimeZoneInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: " const&", def_value: None }]
constexpr TimeZoneInfo(TimeZoneInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "&&", def_value: None }]
constexpr TimeZoneInfo(TimeZoneInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeZoneInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeZoneInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeZoneInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeZoneInfo& operator=(TimeZoneInfo&& o) noexcept = default;
  constexpr TimeZoneInfo& operator=(TimeZoneInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(::StringW value) ;

constexpr ::StringW __get__id() const;

 ::StringW __declspec(property(get=__get__displayName, put=__set__displayName))  _displayName;

constexpr void __set__displayName(::StringW value) ;

constexpr ::StringW __get__displayName() const;

 ::StringW __declspec(property(get=__get__standardDisplayName, put=__set__standardDisplayName))  _standardDisplayName;

constexpr void __set__standardDisplayName(::StringW value) ;

constexpr ::StringW __get__standardDisplayName() const;

 ::StringW __declspec(property(get=__get__daylightDisplayName, put=__set__daylightDisplayName))  _daylightDisplayName;

constexpr void __set__daylightDisplayName(::StringW value) ;

constexpr ::StringW __get__daylightDisplayName() const;

 System::TimeSpan __declspec(property(get=__get__baseUtcOffset, put=__set__baseUtcOffset))  _baseUtcOffset;

constexpr void __set__baseUtcOffset(System::TimeSpan value) ;

constexpr System::TimeSpan __get__baseUtcOffset() const;

 bool __declspec(property(get=__get__supportsDaylightSavingTime, put=__set__supportsDaylightSavingTime))  _supportsDaylightSavingTime;

constexpr void __set__supportsDaylightSavingTime(bool value) ;

constexpr bool __get__supportsDaylightSavingTime() const;

 ::ArrayW<System::System__TimeZoneInfo__AdjustmentRule> __declspec(property(get=__get__adjustmentRules, put=__set__adjustmentRules))  _adjustmentRules;

constexpr void __set__adjustmentRules(::ArrayW<System::System__TimeZoneInfo__AdjustmentRule> value) ;

constexpr ::ArrayW<System::System__TimeZoneInfo__AdjustmentRule> __get__adjustmentRules() const;

static System::TimeZoneInfo __declspec(property(get=__get_s_utcTimeZone, put=__set_s_utcTimeZone))  s_utcTimeZone;

static void __set_s_utcTimeZone(System::TimeZoneInfo value) ;

static System::TimeZoneInfo __get_s_utcTimeZone() ;

static System::System__TimeZoneInfo__CachedData __declspec(property(get=__get_s_cachedData, put=__set_s_cachedData))  s_cachedData;

static void __set_s_cachedData(System::System__TimeZoneInfo__CachedData value) ;

static System::System__TimeZoneInfo__CachedData __get_s_cachedData() ;

static System::DateTime __declspec(property(get=__get_s_maxDateOnly, put=__set_s_maxDateOnly))  s_maxDateOnly;

static void __set_s_maxDateOnly(System::DateTime value) ;

static System::DateTime __get_s_maxDateOnly() ;

static System::DateTime __declspec(property(get=__get_s_minDateOnly, put=__set_s_minDateOnly))  s_minDateOnly;

static void __set_s_minDateOnly(System::DateTime value) ;

static System::DateTime __get_s_minDateOnly() ;

static System::TimeSpan __declspec(property(get=__get_MaxOffset, put=__set_MaxOffset))  MaxOffset;

static void __set_MaxOffset(System::TimeSpan value) ;

static System::TimeSpan __get_MaxOffset() ;

static System::TimeSpan __declspec(property(get=__get_MinOffset, put=__set_MinOffset))  MinOffset;

static void __set_MinOffset(System::TimeSpan value) ;

static System::TimeSpan __get_MinOffset() ;


// Properties

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;

 ::StringW __declspec(property(get=get_StandardName))  StandardName;

 ::StringW __declspec(property(get=get_DaylightName))  DaylightName;

 System::TimeSpan __declspec(property(get=get_BaseUtcOffset))  BaseUtcOffset;

 bool __declspec(property(get=get_SupportsDaylightSavingTime))  SupportsDaylightSavingTime;

static System::TimeZoneInfo __declspec(property(get=get_Local))  Local;

static System::TimeZoneInfo __declspec(property(get=get_Utc))  Utc;


// Methods

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dstDisabled", ty: "bool", modifiers: "", def_value: None }]
explicit TimeZoneInfo(::ArrayW<uint8_t> data, ::StringW id, bool dstDisabled) ;

/// @brief Method .ctor addr 0x23a6210 size 0x434 virtual false final false
 void _ctor(::ArrayW<uint8_t> data, ::StringW id, bool dstDisabled) ;

/// @brief Method GetAdjustmentRules addr 0x23a7040 size 0x3d0 virtual false final false
 ::ArrayW<System::System__TimeZoneInfo__AdjustmentRule> GetAdjustmentRules() ;

/// @brief Method GetLocalTimeZone addr 0x23a7580 size 0x4c virtual false final false
static System::TimeZoneInfo GetLocalTimeZone(System::System__TimeZoneInfo__CachedData cachedData) ;

/// @brief Method TryGetLocalTzFile addr 0x23a7730 size 0x1b0 virtual false final false
static bool TryGetLocalTzFile(ByRef<::ArrayW<uint8_t>> rawData, ByRef<::StringW> id) ;

/// @brief Method GetTzEnvironmentVariable addr 0x23a78e0 size 0x98 virtual false final false
static ::StringW GetTzEnvironmentVariable() ;

/// @brief Method TryLoadTzFile addr 0x23a7978 size 0x190 virtual false final false
static bool TryLoadTzFile(::StringW tzFilePath, ByRef<::ArrayW<uint8_t>> rawData, ByRef<::StringW> id) ;

/// @brief Method FindTimeZoneIdUsingReadLink addr 0x23a7c54 size 0x10c virtual false final false
static ::StringW FindTimeZoneIdUsingReadLink(::StringW tzFilePath) ;

/// @brief Method GetDirectoryEntryFullPath addr 0x23a7fd4 size 0x18c virtual false final false
static ::StringW GetDirectoryEntryFullPath(ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry> dirent, ::StringW currentPath) ;

/// @brief Method EnumerateFilesRecursively addr 0x23a8160 size 0x5f0 virtual false final false
static void EnumerateFilesRecursively(::StringW path, System::Predicate_1<::StringW> condition) ;

/// @brief Method FindTimeZoneId addr 0x23a7d60 size 0x274 virtual false final false
static ::StringW FindTimeZoneId(::ArrayW<uint8_t> rawData) ;

/// @brief Method CompareTimeZoneFile addr 0x23a8758 size 0x38c virtual false final false
static bool CompareTimeZoneFile(::StringW filePath, ::ArrayW<uint8_t> buffer, ::ArrayW<uint8_t> rawData) ;

/// @brief Method GetLocalTimeZoneFromTzFile addr 0x23a75cc size 0x164 virtual false final false
static System::TimeZoneInfo GetLocalTimeZoneFromTzFile() ;

/// @brief Method GetTimeZoneFromTzData addr 0x23a8ae4 size 0x1c0 virtual false final false
static System::TimeZoneInfo GetTimeZoneFromTzData(::ArrayW<uint8_t> rawData, ::StringW id) ;

/// @brief Method GetTimeZoneDirectory addr 0x23a7b08 size 0x14c virtual false final false
static ::StringW GetTimeZoneDirectory() ;

/// @brief Method GetDateTimeNowUtcOffsetFromUtc addr 0x23a91a0 size 0x78 virtual false final false
static System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(System::DateTime time, ByRef<bool> isAmbiguousLocalDst) ;

/// @brief Method TZif_GenerateAdjustmentRules addr 0x23a6bc0 size 0x14c virtual false final false
static void TZif_GenerateAdjustmentRules(ByRef<::ArrayW<System::System__TimeZoneInfo__AdjustmentRule>> rules, System::TimeSpan baseUtcOffset, ::ArrayW<System::DateTime> dts, ::ArrayW<uint8_t> typeOfLocalTime, ::ArrayW<System::System__TimeZoneInfo__TZifType> transitionType, ::ArrayW<bool> StandardTime, ::ArrayW<bool> GmtTime, ::StringW futureTransitionsPosixFormat) ;

/// @brief Method TZif_GenerateAdjustmentRule addr 0x23a9568 size 0x6c8 virtual false final false
static void TZif_GenerateAdjustmentRule(ByRef<int32_t> index, System::TimeSpan timeZoneBaseUtcOffset, System::Collections::Generic::List_1<System::System__TimeZoneInfo__AdjustmentRule> rulesList, ::ArrayW<System::DateTime> dts, ::ArrayW<uint8_t> typeOfLocalTime, ::ArrayW<System::System__TimeZoneInfo__TZifType> transitionTypes, ::ArrayW<bool> StandardTime, ::ArrayW<bool> GmtTime, ::StringW futureTransitionsPosixFormat) ;

/// @brief Method TZif_CalculateTransitionOffsetFromBase addr 0x23a9cd4 size 0xd8 virtual false final false
static System::TimeSpan TZif_CalculateTransitionOffsetFromBase(System::TimeSpan transitionOffset, System::TimeSpan timeZoneBaseUtcOffset) ;

/// @brief Method TZif_GetEarlyDateTransitionType addr 0x23a9c30 size 0xa4 virtual false final false
static System::System__TimeZoneInfo__TZifType TZif_GetEarlyDateTransitionType(::ArrayW<System::System__TimeZoneInfo__TZifType> transitionTypes) ;

/// @brief Method TZif_CreateAdjustmentRuleForPosixFormat addr 0x23aa150 size 0x324 virtual false final false
static System::System__TimeZoneInfo__AdjustmentRule TZif_CreateAdjustmentRuleForPosixFormat(::StringW posixFormat, System::DateTime startTransitionDate, System::TimeSpan timeZoneBaseUtcOffset) ;

/// @brief Method TZif_ParseOffsetString addr 0x23aa670 size 0x1f8 virtual false final false
static System::Nullable_1<System::TimeSpan> TZif_ParseOffsetString(::StringW offset) ;

/// @brief Method ParseTimeOfDay addr 0x23aaac4 size 0x23c virtual false final false
static System::DateTime ParseTimeOfDay(::StringW time) ;

/// @brief Method TZif_CreateTransitionTimeFromPosixRule addr 0x23aa868 size 0x25c virtual false final false
static System::System__TimeZoneInfo__TransitionTime TZif_CreateTransitionTimeFromPosixRule(::StringW date, ::StringW time) ;

/// @brief Method TZif_ParseJulianDay addr 0x23aaf64 size 0x1cc virtual false final false
static void TZif_ParseJulianDay(::StringW date, ByRef<int32_t> month, ByRef<int32_t> day) ;

/// @brief Method TZif_ParseMDateRule addr 0x23aad00 size 0x1fc virtual false final false
static bool TZif_ParseMDateRule(::StringW dateRule, ByRef<int32_t> month, ByRef<int32_t> week, ByRef<System::DayOfWeek> dayOfWeek) ;

/// @brief Method TZif_ParsePosixFormat addr 0x23aa474 size 0x1fc virtual false final false
static bool TZif_ParsePosixFormat(::StringW posixFormat, ByRef<::StringW> standardName, ByRef<::StringW> standardOffset, ByRef<::StringW> daylightSavingsName, ByRef<::StringW> daylightSavingsOffset, ByRef<::StringW> start, ByRef<::StringW> startTime, ByRef<::StringW> end, ByRef<::StringW> endTime) ;

/// @brief Method TZif_ParsePosixName addr 0x23ab130 size 0x234 virtual false final false
static ::StringW TZif_ParsePosixName(::StringW posixFormat, ByRef<int32_t> index) ;

/// @brief Method TZif_ParsePosixOffset addr 0x23ab364 size 0x10c virtual false final false
static ::StringW TZif_ParsePosixOffset(::StringW posixFormat, ByRef<int32_t> index) ;

/// @brief Method TZif_ParsePosixDateTime addr 0x23ab470 size 0xdc virtual false final false
static void TZif_ParsePosixDateTime(::StringW posixFormat, ByRef<int32_t> index, ByRef<::StringW> date, ByRef<::StringW> time) ;

/// @brief Method TZif_ParsePosixDate addr 0x23ab5e4 size 0x10c virtual false final false
static ::StringW TZif_ParsePosixDate(::StringW posixFormat, ByRef<int32_t> index) ;

/// @brief Method TZif_ParsePosixTime addr 0x23ab6f0 size 0x10c virtual false final false
static ::StringW TZif_ParsePosixTime(::StringW posixFormat, ByRef<int32_t> index) ;

/// @brief Method TZif_ParsePosixString addr 0x23ab54c size 0x98 virtual false final false
static ::StringW TZif_ParsePosixString(::StringW posixFormat, ByRef<int32_t> index, System::Func_2<char16_t,bool> breakCondition) ;

/// @brief Method TZif_GetZoneAbbreviation addr 0x23a6b5c size 0x64 virtual false final false
static ::StringW TZif_GetZoneAbbreviation(::StringW zoneAbbreviations, int32_t index) ;

/// @brief Method TZif_ToInt32 addr 0x23ab7fc size 0x30 virtual false final false
static int32_t TZif_ToInt32(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method TZif_ToInt64 addr 0x23ab82c size 0x30 virtual false final false
static int64_t TZif_ToInt64(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method TZif_ToUnixTime addr 0x23ab85c size 0x88 virtual false final false
static int64_t TZif_ToUnixTime(::ArrayW<uint8_t> value, int32_t startIndex, System::System__TimeZoneInfo__TZVersion version) ;

/// @brief Method TZif_UnixTimeToDateTime addr 0x23ab8e4 size 0xf4 virtual false final false
static System::DateTime TZif_UnixTimeToDateTime(int64_t unixTime) ;

/// @brief Method TZif_ParseRaw addr 0x23a6644 size 0x518 virtual false final false
static void TZif_ParseRaw(::ArrayW<uint8_t> data, ByRef<System::System__TimeZoneInfo__TZifHead> t, ByRef<::ArrayW<System::DateTime>> dts, ByRef<::ArrayW<uint8_t>> typeOfLocalTime, ByRef<::ArrayW<System::System__TimeZoneInfo__TZifType>> transitionType, ByRef<::StringW> zoneAbbreviations, ByRef<::ArrayW<bool>> StandardTime, ByRef<::ArrayW<bool>> GmtTime, ByRef<::StringW> futureTransitionsPosixFormat) ;

/// @brief Method get_DisplayName addr 0x23abccc size 0x54 virtual false final false
 ::StringW get_DisplayName() ;

/// @brief Method get_StandardName addr 0x23abd20 size 0x54 virtual false final false
 ::StringW get_StandardName() ;

/// @brief Method get_DaylightName addr 0x23abd74 size 0x54 virtual false final false
 ::StringW get_DaylightName() ;

/// @brief Method get_BaseUtcOffset addr 0x23abdc8 size 0x8 virtual false final false
 System::TimeSpan get_BaseUtcOffset() ;

/// @brief Method get_SupportsDaylightSavingTime addr 0x23abdd0 size 0x8 virtual false final false
 bool get_SupportsDaylightSavingTime() ;

/// @brief Method GetPreviousAdjustmentRule addr 0x23abdd8 size 0x124 virtual false final false
 System::System__TimeZoneInfo__AdjustmentRule GetPreviousAdjustmentRule(System::System__TimeZoneInfo__AdjustmentRule rule, System::Nullable_1<int32_t> ruleIndex) ;

/// @brief Method GetUtcOffset addr 0x23abefc size 0x74 virtual false final false
 System::TimeSpan GetUtcOffset(System::DateTime dateTime) ;

/// @brief Method GetLocalUtcOffset addr 0x23ac0c4 size 0x9c virtual false final false
static System::TimeSpan GetLocalUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags) ;

/// @brief Method GetUtcOffset addr 0x23ac198 size 0x78 virtual false final false
 System::TimeSpan GetUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags) ;

/// @brief Method GetUtcOffset addr 0x23abf70 size 0x154 virtual false final false
 System::TimeSpan GetUtcOffset(System::DateTime dateTime, System::TimeZoneInfoOptions flags, System::System__TimeZoneInfo__CachedData cachedData) ;

/// @brief Method ConvertTime addr 0x23ac29c size 0x88 virtual false final false
static System::DateTime ConvertTime(System::DateTime dateTime, System::TimeZoneInfo sourceTimeZone, System::TimeZoneInfo destinationTimeZone, System::TimeZoneInfoOptions flags) ;

/// @brief Method ConvertTime addr 0x23ac528 size 0x3e8 virtual false final false
static System::DateTime ConvertTime(System::DateTime dateTime, System::TimeZoneInfo sourceTimeZone, System::TimeZoneInfo destinationTimeZone, System::TimeZoneInfoOptions flags, System::System__TimeZoneInfo__CachedData cachedData) ;

/// @brief Method ConvertTimeToUtc addr 0x23ad560 size 0xd0 virtual false final false
static System::DateTime ConvertTimeToUtc(System::DateTime dateTime, System::TimeZoneInfoOptions flags) ;

/// @brief Method Equals addr 0x23ad630 size 0x50 virtual true final true
 bool Equals(System::TimeZoneInfo other) ;

/// @brief Method Equals addr 0x23ad7f4 size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x23ad858 size 0xa0 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method HasSameRules addr 0x23ad680 size 0x174 virtual false final false
 bool HasSameRules(System::TimeZoneInfo other) ;

/// @brief Method get_Local addr 0x23a9218 size 0x80 virtual false final false
static System::TimeZoneInfo get_Local() ;

/// @brief Method ToString addr 0x23ada5c size 0x54 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_Utc addr 0x23adab0 size 0x58 virtual false final false
static System::TimeZoneInfo get_Utc() ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "baseUtcOffset", ty: "System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "standardDisplayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "daylightDisplayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "adjustmentRules", ty: "::ArrayW<System::System__TimeZoneInfo__AdjustmentRule>", modifiers: "", def_value: None }, CppParam { name: "disableDaylightSavingTime", ty: "bool", modifiers: "", def_value: None }]
explicit TimeZoneInfo(::StringW id, System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName, ::ArrayW<System::System__TimeZoneInfo__AdjustmentRule> adjustmentRules, bool disableDaylightSavingTime) ;

/// @brief Method .ctor addr 0x23adb08 size 0xec virtual false final false
 void _ctor(::StringW id, System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName, ::ArrayW<System::System__TimeZoneInfo__AdjustmentRule> adjustmentRules, bool disableDaylightSavingTime) ;

/// @brief Method CreateCustomTimeZone addr 0x23adbf4 size 0x9c virtual false final false
static System::TimeZoneInfo CreateCustomTimeZone(::StringW id, System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName) ;

/// @brief Method CreateCustomTimeZone addr 0x23adc90 size 0x10c virtual false final false
static System::TimeZoneInfo CreateCustomTimeZone(::StringW id, System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName, ::ArrayW<System::System__TimeZoneInfo__AdjustmentRule> adjustmentRules, bool disableDaylightSavingTime) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x23add9c size 0x1e4 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x23adf80 size 0x1dc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TimeZoneInfo(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23ae15c size 0x414 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetAdjustmentRuleForTime addr 0x23ac9b0 size 0xc virtual false final false
 System::System__TimeZoneInfo__AdjustmentRule GetAdjustmentRuleForTime(System::DateTime dateTime, ByRef<System::Nullable_1<int32_t>> ruleIndex) ;

/// @brief Method GetAdjustmentRuleForTime addr 0x23ae570 size 0x1b0 virtual false final false
 System::System__TimeZoneInfo__AdjustmentRule GetAdjustmentRuleForTime(System::DateTime dateTime, bool dateTimeisUtc, ByRef<System::Nullable_1<int32_t>> ruleIndex) ;

/// @brief Method CompareAdjustmentRuleToDateTime addr 0x23ae720 size 0x190 virtual false final false
 int32_t CompareAdjustmentRuleToDateTime(System::System__TimeZoneInfo__AdjustmentRule rule, System::System__TimeZoneInfo__AdjustmentRule previousRule, System::DateTime dateTime, System::DateTime dateOnly, bool dateTimeisUtc) ;

/// @brief Method ConvertToUtc addr 0x23ae8b0 size 0x8 virtual false final false
 System::DateTime ConvertToUtc(System::DateTime dateTime, System::TimeSpan daylightDelta, System::TimeSpan baseUtcOffsetDelta) ;

/// @brief Method ConvertFromUtc addr 0x23aea3c size 0x8 virtual false final false
 System::DateTime ConvertFromUtc(System::DateTime dateTime, System::TimeSpan daylightDelta, System::TimeSpan baseUtcOffsetDelta) ;

/// @brief Method ConvertToFromUtc addr 0x23ae8b8 size 0x184 virtual false final false
 System::DateTime ConvertToFromUtc(System::DateTime dateTime, System::TimeSpan daylightDelta, System::TimeSpan baseUtcOffsetDelta, bool convertToUtc) ;

/// @brief Method ConvertUtcToTimeZone addr 0x23ad37c size 0x1e4 virtual false final false
static System::DateTime ConvertUtcToTimeZone(int64_t ticks, System::TimeZoneInfo destinationTimeZone, ByRef<bool> isAmbiguousLocalDst) ;

/// @brief Method GetDaylightTime addr 0x23acb18 size 0x13c virtual false final false
 System::Globalization::DaylightTimeStruct GetDaylightTime(int32_t year, System::System__TimeZoneInfo__AdjustmentRule rule, System::Nullable_1<int32_t> ruleIndex) ;

/// @brief Method GetIsDaylightSavings addr 0x23ad000 size 0x37c virtual false final false
static bool GetIsDaylightSavings(System::DateTime time, System::System__TimeZoneInfo__AdjustmentRule rule, System::Globalization::DaylightTimeStruct daylightTime, System::TimeZoneInfoOptions flags) ;

/// @brief Method GetDaylightSavingsStartOffsetFromUtc addr 0x23af43c size 0xc8 virtual false final false
 System::TimeSpan GetDaylightSavingsStartOffsetFromUtc(System::TimeSpan baseUtcOffset, System::System__TimeZoneInfo__AdjustmentRule rule, System::Nullable_1<int32_t> ruleIndex) ;

/// @brief Method GetDaylightSavingsEndOffsetFromUtc addr 0x23af504 size 0x78 virtual false final false
 System::TimeSpan GetDaylightSavingsEndOffsetFromUtc(System::TimeSpan baseUtcOffset, System::System__TimeZoneInfo__AdjustmentRule rule) ;

/// @brief Method GetIsDaylightSavingsFromUtc addr 0x23af57c size 0x780 virtual false final false
static bool GetIsDaylightSavingsFromUtc(System::DateTime time, int32_t year, System::TimeSpan utc, System::System__TimeZoneInfo__AdjustmentRule rule, System::Nullable_1<int32_t> ruleIndex, ByRef<bool> isAmbiguousLocalDst, System::TimeZoneInfo zone) ;

/// @brief Method CheckIsDst addr 0x23aeeb0 size 0x1e0 virtual false final false
static bool CheckIsDst(System::DateTime startTime, System::DateTime time, System::DateTime endTime, bool ignoreYearAdjustment, System::System__TimeZoneInfo__AdjustmentRule rule) ;

/// @brief Method GetIsAmbiguousTime addr 0x23af090 size 0x3ac virtual false final false
static bool GetIsAmbiguousTime(System::DateTime time, System::System__TimeZoneInfo__AdjustmentRule rule, System::Globalization::DaylightTimeStruct daylightTime) ;

/// @brief Method GetIsInvalidTime addr 0x23acc54 size 0x3ac virtual false final false
static bool GetIsInvalidTime(System::DateTime time, System::System__TimeZoneInfo__AdjustmentRule rule, System::Globalization::DaylightTimeStruct daylightTime) ;

/// @brief Method GetUtcOffset addr 0x23ac394 size 0x194 virtual false final false
static System::TimeSpan GetUtcOffset(System::DateTime time, System::TimeZoneInfo zone, System::TimeZoneInfoOptions flags) ;

/// @brief Method GetUtcOffsetFromUtc addr 0x23ac324 size 0x70 virtual false final false
static System::TimeSpan GetUtcOffsetFromUtc(System::DateTime time, System::TimeZoneInfo zone) ;

/// @brief Method GetUtcOffsetFromUtc addr 0x23aea44 size 0x80 virtual false final false
static System::TimeSpan GetUtcOffsetFromUtc(System::DateTime time, System::TimeZoneInfo zone, ByRef<bool> isDaylightSavings) ;

/// @brief Method GetUtcOffsetFromUtc addr 0x23a9298 size 0x2d0 virtual false final false
static System::TimeSpan GetUtcOffsetFromUtc(System::DateTime time, System::TimeZoneInfo zone, ByRef<bool> isDaylightSavings, ByRef<bool> isAmbiguousLocalDst) ;

/// @brief Method TransitionTimeToDateTime addr 0x23aeac4 size 0x28c virtual false final false
static System::DateTime TransitionTimeToDateTime(int32_t year, System::System__TimeZoneInfo__TransitionTime transitionTime) ;

/// @brief Method ValidateTimeZoneInfo addr 0x23a6d0c size 0x334 virtual false final false
static void ValidateTimeZoneInfo(::StringW id, System::TimeSpan baseUtcOffset, ::ArrayW<System::System__TimeZoneInfo__AdjustmentRule> adjustmentRules, ByRef<bool> adjustmentRulesSupportDst) ;

/// @brief Method UtcOffsetOutOfRange addr 0x23afcfc size 0xf0 virtual false final false
static bool UtcOffsetOutOfRange(System::TimeSpan offset) ;

/// @brief Method GetUtcOffset addr 0x23afe24 size 0xc8 virtual false final false
static System::TimeSpan GetUtcOffset(System::TimeSpan baseUtcOffset, System::System__TimeZoneInfo__AdjustmentRule adjustmentRule) ;

/// @brief Method IsValidAdjustmentRuleOffest addr 0x23a9e9c size 0x74 virtual false final false
static bool IsValidAdjustmentRuleOffest(System::TimeSpan baseUtcOffset, System::System__TimeZoneInfo__AdjustmentRule adjustmentRule) ;

/// @brief Method NormalizeAdjustmentRuleOffset addr 0x23a9f10 size 0x240 virtual false final false
static void NormalizeAdjustmentRuleOffset(System::TimeSpan baseUtcOffset, ByRef<System::System__TimeZoneInfo__AdjustmentRule> adjustmentRule) ;

/// @brief Method GetTimeZoneDirectoryUnity addr 0x23afeec size 0x48 virtual false final false
static ::StringW GetTimeZoneDirectoryUnity() ;

/// @brief Method CreateAdjustmentRule addr 0x23aff34 size 0x7a8 virtual false final false
static System::Collections::Generic::List_1<System::System__TimeZoneInfo__AdjustmentRule> CreateAdjustmentRule(int32_t year, ByRef<::ArrayW<int64_t>> data, ByRef<::ArrayW<::StringW>> names, ::StringW standardNameCurrentYear, ::StringW daylightNameCurrentYear) ;

/// @brief Method CreateLocalUnity addr 0x23a8ca4 size 0x4a0 virtual false final false
static System::TimeZoneInfo CreateLocalUnity() ;

// Ctor Parameters []
explicit TimeZoneInfo() ;

/// @brief Method .ctor addr 0x23b0858 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__TimeZoneInfo__TZVersion, "System", "TimeZoneInfo/TZVersion");
NEED_NO_BOX(System::System__TimeZoneInfo__AdjustmentRule);
DEFINE_IL2CPP_ARG_TYPE(System::System__TimeZoneInfo__AdjustmentRule, "System", "TimeZoneInfo/AdjustmentRule");
NEED_NO_BOX(System::System__TimeZoneInfo__CachedData);
DEFINE_IL2CPP_ARG_TYPE(System::System__TimeZoneInfo__CachedData, "System", "TimeZoneInfo/CachedData");
NEED_NO_BOX(System::System__TimeZoneInfo____c);
DEFINE_IL2CPP_ARG_TYPE(System::System__TimeZoneInfo____c, "System", "TimeZoneInfo/<>c");
NEED_NO_BOX(System::System__TimeZoneInfo____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(System::System__TimeZoneInfo____c__DisplayClass16_0, "System", "TimeZoneInfo/<>c__DisplayClass16_0");
NEED_NO_BOX(System::TimeZoneInfo);
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo, "System", "TimeZoneInfo");
DEFINE_IL2CPP_ARG_TYPE(System::System__TimeZoneInfo__TZifHead, "System", "TimeZoneInfo/TZifHead");
DEFINE_IL2CPP_ARG_TYPE(System::System__TimeZoneInfo__TZifType, "System", "TimeZoneInfo/TZifType");
DEFINE_IL2CPP_ARG_TYPE(System::System__TimeZoneInfo__TransitionTime, "System", "TimeZoneInfo/TransitionTime");
