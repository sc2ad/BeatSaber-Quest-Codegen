#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AveragingValueRecorder;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AveragingValueRecorder__AverageValueData;
}
// Type: ::AverageValueData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5925))
// CS Name: AveragingValueRecorder::AverageValueData
struct CORDL_TYPE ____GlobalNamespace__AveragingValueRecorder__AverageValueData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_time_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AveragingValueRecorder__AverageValueData(float_t _value_k__BackingField, float_t _time_k__BackingField) noexcept;


                    constexpr ____GlobalNamespace__AveragingValueRecorder__AverageValueData(____GlobalNamespace__AveragingValueRecorder__AverageValueData const&) = default;
                    constexpr ____GlobalNamespace__AveragingValueRecorder__AverageValueData(____GlobalNamespace__AveragingValueRecorder__AverageValueData&&) = default;
                    constexpr ____GlobalNamespace__AveragingValueRecorder__AverageValueData& operator=(____GlobalNamespace__AveragingValueRecorder__AverageValueData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AveragingValueRecorder__AverageValueData& operator=(____GlobalNamespace__AveragingValueRecorder__AverageValueData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AveragingValueRecorder__AverageValueData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get__value_k__BackingField, put=__set__value_k__BackingField))  _value_k__BackingField;

constexpr void __set__value_k__BackingField(float_t value) ;

constexpr float_t __get__value_k__BackingField() const;

 float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

constexpr void __set__time_k__BackingField(float_t value) ;

constexpr float_t __get__time_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_value, put=set_value))  value;

 float_t __declspec(property(get=get_time, put=set_time))  time;


// Methods

/// @brief Method get_value addr 0x2193be0 size 0x8 virtual false final false
 float_t get_value() ;

/// @brief Method set_value addr 0x2193be8 size 0x8 virtual false final false
 void set_value(float_t value) ;

/// @brief Method get_time addr 0x2193bf0 size 0x8 virtual false final false
 float_t get_time() ;

/// @brief Method set_time addr 0x2193bf8 size 0x8 virtual false final false
 void set_time(float_t value) ;

/// @brief Method .ctor addr 0x2193bc0 size 0x8 virtual false final false
 void _ctor(float_t value, float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AveragingValueRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5926))
// CS Name: AveragingValueRecorder
class CORDL_TYPE AveragingValueRecorder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AverageValueData = ::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AveragingValueRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "AveragingValueRecorder", modifiers: " const&", def_value: None }]
constexpr AveragingValueRecorder(AveragingValueRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AveragingValueRecorder", modifiers: "&&", def_value: None }]
constexpr AveragingValueRecorder(AveragingValueRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AveragingValueRecorder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AveragingValueRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AveragingValueRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AveragingValueRecorder& operator=(AveragingValueRecorder&& o) noexcept = default;
  constexpr AveragingValueRecorder& operator=(AveragingValueRecorder const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__averageWindowDuration, put=__set__averageWindowDuration))  _averageWindowDuration;

constexpr void __set__averageWindowDuration(float_t value) ;

constexpr float_t __get__averageWindowDuration() const;

 float_t __declspec(property(get=__get__historyValuesPerSecond, put=__set__historyValuesPerSecond))  _historyValuesPerSecond;

constexpr void __set__historyValuesPerSecond(float_t value) ;

constexpr float_t __get__historyValuesPerSecond() const;

 int32_t __declspec(property(get=__get__historyValuesCount, put=__set__historyValuesCount))  _historyValuesCount;

constexpr void __set__historyValuesCount(int32_t value) ;

constexpr int32_t __get__historyValuesCount() const;

 ::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> __declspec(property(get=__get__averageWindowValues, put=__set__averageWindowValues))  _averageWindowValues;

constexpr void __set__averageWindowValues(::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> __get__averageWindowValues() const;

 ::System::Collections::Generic::Queue_1<float_t> __declspec(property(get=__get__historyValues, put=__set__historyValues))  _historyValues;

constexpr void __set__historyValues(::System::Collections::Generic::Queue_1<float_t> value) ;

constexpr ::System::Collections::Generic::Queue_1<float_t> __get__historyValues() const;

 float_t __declspec(property(get=__get__time, put=__set__time))  _time;

constexpr void __set__time(float_t value) ;

constexpr float_t __get__time() const;

 float_t __declspec(property(get=__get__historyTime, put=__set__historyTime))  _historyTime;

constexpr void __set__historyTime(float_t value) ;

constexpr float_t __get__historyTime() const;

 float_t __declspec(property(get=__get__averageValue, put=__set__averageValue))  _averageValue;

constexpr void __set__averageValue(float_t value) ;

constexpr float_t __get__averageValue() const;

 float_t __declspec(property(get=__get__averageWindowValuesDuration, put=__set__averageWindowValuesDuration))  _averageWindowValuesDuration;

constexpr void __set__averageWindowValuesDuration(float_t value) ;

constexpr float_t __get__averageWindowValuesDuration() const;

 float_t __declspec(property(get=__get__lastValue, put=__set__lastValue))  _lastValue;

constexpr void __set__lastValue(float_t value) ;

constexpr float_t __get__lastValue() const;


// Methods

// Ctor Parameters [CppParam { name: "averageWindowDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "historyWindowDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "historyValuesPerSecond", ty: "float_t", modifiers: "", def_value: None }]
explicit AveragingValueRecorder(float_t averageWindowDuration, float_t historyWindowDuration, float_t historyValuesPerSecond) ;

/// @brief Method .ctor addr 0x21937ac size 0x154 virtual false final false
 void _ctor(float_t averageWindowDuration, float_t historyWindowDuration, float_t historyValuesPerSecond) ;

/// @brief Method Update addr 0x2193900 size 0x2c0 virtual false final false
 void Update(float_t value, float_t deltaTime) ;

/// @brief Method GetAverageValue addr 0x2193bc8 size 0x8 virtual false final false
 float_t GetAverageValue() ;

/// @brief Method GetLastValue addr 0x2193bd0 size 0x8 virtual false final false
 float_t GetLastValue() ;

/// @brief Method GetHistoryValues addr 0x2193bd8 size 0x8 virtual false final false
 ::System::Collections::Generic::Queue_1<float_t> GetHistoryValues() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AveragingValueRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AveragingValueRecorder, "", "AveragingValueRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData, "", "AveragingValueRecorder/AverageValueData");
