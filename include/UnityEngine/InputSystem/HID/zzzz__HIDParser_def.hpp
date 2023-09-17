#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HID__UsagePage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HID__HIDReportType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag;
}
namespace UnityEngine::InputSystem::HID {
class HIDParser;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal;
}
namespace UnityEngine::InputSystem::HID {
struct ____UnityEngine__InputSystem__HID__HIDParser__HIDReportData;
}
// Type: ::HIDReportData
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6489))
// CS Name: UnityEngine.InputSystem.HID.HIDParser::HIDReportData
struct CORDL_TYPE ____UnityEngine__InputSystem__HID__HIDParser__HIDReportData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportType", ty: "::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDReportType", modifiers: "", def_value: None }, CppParam { name: "currentBitOffset", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDReportData(int32_t reportId, ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDReportType reportType, int32_t currentBitOffset) noexcept;


                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDReportData(____UnityEngine__InputSystem__HID__HIDParser__HIDReportData const&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDReportData(____UnityEngine__InputSystem__HID__HIDParser__HIDReportData&&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDReportData& operator=(____UnityEngine__InputSystem__HID__HIDParser__HIDReportData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDReportData& operator=(____UnityEngine__InputSystem__HID__HIDParser__HIDReportData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__HID__HIDParser__HIDReportData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_reportId, put=__set_reportId))  reportId;

constexpr void __set_reportId(int32_t value) ;

constexpr int32_t __get_reportId() const;

 ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDReportType __declspec(property(get=__get_reportType, put=__set_reportType))  reportType;

constexpr void __set_reportType(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDReportType value) ;

constexpr ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDReportType __get_reportType() const;

 int32_t __declspec(property(get=__get_currentBitOffset, put=__set_currentBitOffset))  currentBitOffset;

constexpr void __set_currentBitOffset(int32_t value) ;

constexpr int32_t __get_currentBitOffset() const;


// Methods

/// @brief Method FindOrAddReport addr 0x294c194 size 0x18c virtual false final false
static int32_t FindOrAddReport(::System::Nullable_1<int32_t> reportId, ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDReportType reportType, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDReportData> reports) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDItemTypeAndTag
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6490))
// CS Name: UnityEngine.InputSystem.HID.HIDParser::HIDItemTypeAndTag
struct CORDL_TYPE ____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag(____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag(____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag&&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag& operator=(____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag& operator=(____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag_Unwrapped : int32_t {
__Input = 128,
__Output = 144,
__Feature = 176,
__Collection = 160,
__EndCollection = 192,
__UsagePage = 4,
__LogicalMinimum = 20,
__LogicalMaximum = 36,
__PhysicalMinimum = 52,
__PhysicalMaximum = 68,
__UnitExponent = 84,
__Unit = 100,
__ReportSize = 116,
__ReportID = 132,
__ReportCount = 148,
__Push = 164,
__Pop = 180,
__Usage = 8,
__UsageMinimum = 24,
__UsageMaximum = 40,
__DesignatorIndex = 56,
__DesignatorMinimum = 72,
__DesignatorMaximum = 88,
__StringIndex = 120,
__StringMinimum = 136,
__StringMaximum = 152,
__Delimiter = 168,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Input offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Input;

/// @brief Field Output offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Output;

/// @brief Field Feature offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Feature;

/// @brief Field Collection offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Collection;

/// @brief Field EndCollection offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const EndCollection;

/// @brief Field UsagePage offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const UsagePage;

/// @brief Field LogicalMinimum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const LogicalMinimum;

/// @brief Field LogicalMaximum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const LogicalMaximum;

/// @brief Field PhysicalMinimum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const PhysicalMinimum;

/// @brief Field PhysicalMaximum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const PhysicalMaximum;

/// @brief Field UnitExponent offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const UnitExponent;

/// @brief Field Unit offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Unit;

/// @brief Field ReportSize offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const ReportSize;

/// @brief Field ReportID offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const ReportID;

/// @brief Field ReportCount offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const ReportCount;

/// @brief Field Push offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Push;

/// @brief Field Pop offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Pop;

/// @brief Field Usage offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Usage;

/// @brief Field UsageMinimum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const UsageMinimum;

/// @brief Field UsageMaximum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const UsageMaximum;

/// @brief Field DesignatorIndex offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const DesignatorIndex;

/// @brief Field DesignatorMinimum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const DesignatorMinimum;

/// @brief Field DesignatorMaximum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const DesignatorMaximum;

/// @brief Field StringIndex offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const StringIndex;

/// @brief Field StringMinimum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const StringMinimum;

/// @brief Field StringMaximum offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const StringMaximum;

/// @brief Field Delimiter offset 0
static ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag const Delimiter;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDItemStateLocal
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6491))
// CS Name: UnityEngine.InputSystem.HID.HIDParser::HIDItemStateLocal
struct CORDL_TYPE ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "usage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "usageMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "usageMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "designatorIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "designatorMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "designatorMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "stringIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "stringMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "stringMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "usageList", ty: "::System::Collections::Generic::List_1<int32_t>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal(::System::Nullable_1<int32_t> usage, ::System::Nullable_1<int32_t> usageMinimum, ::System::Nullable_1<int32_t> usageMaximum, ::System::Nullable_1<int32_t> designatorIndex, ::System::Nullable_1<int32_t> designatorMinimum, ::System::Nullable_1<int32_t> designatorMaximum, ::System::Nullable_1<int32_t> stringIndex, ::System::Nullable_1<int32_t> stringMinimum, ::System::Nullable_1<int32_t> stringMaximum, ::System::Collections::Generic::List_1<int32_t> usageList) noexcept;


                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal(____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal const&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal(____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal&&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal& operator=(____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal& operator=(____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_usage, put=__set_usage))  usage;

constexpr void __set_usage(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_usage() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_usageMinimum, put=__set_usageMinimum))  usageMinimum;

constexpr void __set_usageMinimum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_usageMinimum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_usageMaximum, put=__set_usageMaximum))  usageMaximum;

constexpr void __set_usageMaximum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_usageMaximum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_designatorIndex, put=__set_designatorIndex))  designatorIndex;

constexpr void __set_designatorIndex(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_designatorIndex() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_designatorMinimum, put=__set_designatorMinimum))  designatorMinimum;

constexpr void __set_designatorMinimum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_designatorMinimum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_designatorMaximum, put=__set_designatorMaximum))  designatorMaximum;

constexpr void __set_designatorMaximum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_designatorMaximum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_stringIndex, put=__set_stringIndex))  stringIndex;

constexpr void __set_stringIndex(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_stringIndex() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_stringMinimum, put=__set_stringMinimum))  stringMinimum;

constexpr void __set_stringMinimum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_stringMinimum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_stringMaximum, put=__set_stringMaximum))  stringMaximum;

constexpr void __set_stringMaximum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_stringMaximum() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_usageList, put=__set_usageList))  usageList;

constexpr void __set_usageList(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get_usageList() const;


// Methods

/// @brief Method Reset addr 0x294c134 size 0x60 virtual false final false
static void Reset(ByRef<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal> state) ;

/// @brief Method SetUsage addr 0x294be38 size 0x158 virtual false final false
 void SetUsage(int32_t value) ;

/// @brief Method GetUsage addr 0x294c01c size 0x118 virtual false final false
 int32_t GetUsage(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: ::HIDItemStateGlobal
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6492))
// CS Name: UnityEngine.InputSystem.HID.HIDParser::HIDItemStateGlobal
struct CORDL_TYPE ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "usagePage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "logicalMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "logicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "physicalMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "physicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "unitExponent", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "unit", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "reportSize", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "reportCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "reportId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal(::System::Nullable_1<int32_t> usagePage, ::System::Nullable_1<int32_t> logicalMinimum, ::System::Nullable_1<int32_t> logicalMaximum, ::System::Nullable_1<int32_t> physicalMinimum, ::System::Nullable_1<int32_t> physicalMaximum, ::System::Nullable_1<int32_t> unitExponent, ::System::Nullable_1<int32_t> unit, ::System::Nullable_1<int32_t> reportSize, ::System::Nullable_1<int32_t> reportCount, ::System::Nullable_1<int32_t> reportId) noexcept;


                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal(____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal const&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal(____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal&&) = default;
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal& operator=(____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal& operator=(____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_usagePage, put=__set_usagePage))  usagePage;

constexpr void __set_usagePage(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_usagePage() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_logicalMinimum, put=__set_logicalMinimum))  logicalMinimum;

constexpr void __set_logicalMinimum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_logicalMinimum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_logicalMaximum, put=__set_logicalMaximum))  logicalMaximum;

constexpr void __set_logicalMaximum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_logicalMaximum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_physicalMinimum, put=__set_physicalMinimum))  physicalMinimum;

constexpr void __set_physicalMinimum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_physicalMinimum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_physicalMaximum, put=__set_physicalMaximum))  physicalMaximum;

constexpr void __set_physicalMaximum(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_physicalMaximum() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_unitExponent, put=__set_unitExponent))  unitExponent;

constexpr void __set_unitExponent(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_unitExponent() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_unit, put=__set_unit))  unit;

constexpr void __set_unit(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_unit() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_reportSize, put=__set_reportSize))  reportSize;

constexpr void __set_reportSize(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_reportSize() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_reportCount, put=__set_reportCount))  reportCount;

constexpr void __set_reportCount(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_reportCount() const;

 ::System::Nullable_1<int32_t> __declspec(property(get=__get_reportId, put=__set_reportId))  reportId;

constexpr void __set_reportId(::System::Nullable_1<int32_t> value) ;

constexpr ::System::Nullable_1<int32_t> __get_reportId() const;


// Methods

/// @brief Method GetUsagePage addr 0x294bf90 size 0x8c virtual false final false
 ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__UsagePage GetUsagePage(int32_t index, ByRef<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal> localItemState) ;

/// @brief Method GetPhysicalMin addr 0x294c320 size 0xc4 virtual false final false
 int32_t GetPhysicalMin() ;

/// @brief Method GetPhysicalMax addr 0x294c3e4 size 0xb4 virtual false final false
 int32_t GetPhysicalMax() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
// Type: UnityEngine.InputSystem.HID::HIDParser
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6493))
// CS Name: UnityEngine.InputSystem.HID.HIDParser
class CORDL_TYPE HIDParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HIDItemStateGlobal = ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal;

using HIDItemStateLocal = ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal;

using HIDItemTypeAndTag = ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag;

using HIDReportData = ::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDReportData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HIDParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "HIDParser", modifiers: " const&", def_value: None }]
constexpr HIDParser(HIDParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HIDParser", modifiers: "&&", def_value: None }]
constexpr HIDParser(HIDParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HIDParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HIDParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HIDParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HIDParser& operator=(HIDParser&& o) noexcept = default;
  constexpr HIDParser& operator=(HIDParser const& o) noexcept = default;
                


// Methods

/// @brief Method ParseReportDescriptor addr 0x294bd50 size 0x70 virtual false final false
static bool ParseReportDescriptor(::ArrayW<uint8_t> buffer, ByRef<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor> deviceDescriptor) ;

/// @brief Method ParseReportDescriptor addr 0x294868c size 0xc44 virtual false final false
static bool ParseReportDescriptor(void* bufferPtr, int32_t bufferLength, ByRef<::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HID__HIDDeviceDescriptor> deviceDescriptor) ;

/// @brief Method ReadData addr 0x294bdc0 size 0x78 virtual false final false
static int32_t ReadData(int32_t itemSize, void* currentPtr, void* endPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::HID
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemTypeAndTag, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemTypeAndTag");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HIDParser);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser, "UnityEngine.InputSystem.HID", "HIDParser");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateGlobal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateGlobal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDItemStateLocal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateLocal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::____UnityEngine__InputSystem__HID__HIDParser__HIDReportData, "UnityEngine.InputSystem.HID", "HIDParser/HIDReportData");
