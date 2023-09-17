#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
// Type: UnityEngine.InputSystem.LowLevel::InputMetrics
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6635))
// CS Name: UnityEngine.InputSystem.LowLevel.InputMetrics
struct CORDL_TYPE InputMetrics : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_maxNumDevices_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentNumDevices_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_maxStateSizeInBytes_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentStateSizeInBytes_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentControlCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentLayoutCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventBytes_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalUpdateCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventProcessingTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_totalEventLagTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }]
constexpr InputMetrics(int32_t _maxNumDevices_k__BackingField, int32_t _currentNumDevices_k__BackingField, int32_t _maxStateSizeInBytes_k__BackingField, int32_t _currentStateSizeInBytes_k__BackingField, int32_t _currentControlCount_k__BackingField, int32_t _currentLayoutCount_k__BackingField, int32_t _totalEventBytes_k__BackingField, int32_t _totalEventCount_k__BackingField, int32_t _totalUpdateCount_k__BackingField, double_t _totalEventProcessingTime_k__BackingField, double_t _totalEventLagTime_k__BackingField) noexcept;


                    constexpr InputMetrics(InputMetrics const&) = default;
                    constexpr InputMetrics(InputMetrics&&) = default;
                    constexpr InputMetrics& operator=(InputMetrics const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputMetrics& operator=(InputMetrics&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputMetrics(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__maxNumDevices_k__BackingField, put=__set__maxNumDevices_k__BackingField))  _maxNumDevices_k__BackingField;

constexpr void __set__maxNumDevices_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxNumDevices_k__BackingField() const;

 int32_t __declspec(property(get=__get__currentNumDevices_k__BackingField, put=__set__currentNumDevices_k__BackingField))  _currentNumDevices_k__BackingField;

constexpr void __set__currentNumDevices_k__BackingField(int32_t value) ;

constexpr int32_t __get__currentNumDevices_k__BackingField() const;

 int32_t __declspec(property(get=__get__maxStateSizeInBytes_k__BackingField, put=__set__maxStateSizeInBytes_k__BackingField))  _maxStateSizeInBytes_k__BackingField;

constexpr void __set__maxStateSizeInBytes_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxStateSizeInBytes_k__BackingField() const;

 int32_t __declspec(property(get=__get__currentStateSizeInBytes_k__BackingField, put=__set__currentStateSizeInBytes_k__BackingField))  _currentStateSizeInBytes_k__BackingField;

constexpr void __set__currentStateSizeInBytes_k__BackingField(int32_t value) ;

constexpr int32_t __get__currentStateSizeInBytes_k__BackingField() const;

 int32_t __declspec(property(get=__get__currentControlCount_k__BackingField, put=__set__currentControlCount_k__BackingField))  _currentControlCount_k__BackingField;

constexpr void __set__currentControlCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__currentControlCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__currentLayoutCount_k__BackingField, put=__set__currentLayoutCount_k__BackingField))  _currentLayoutCount_k__BackingField;

constexpr void __set__currentLayoutCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__currentLayoutCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__totalEventBytes_k__BackingField, put=__set__totalEventBytes_k__BackingField))  _totalEventBytes_k__BackingField;

constexpr void __set__totalEventBytes_k__BackingField(int32_t value) ;

constexpr int32_t __get__totalEventBytes_k__BackingField() const;

 int32_t __declspec(property(get=__get__totalEventCount_k__BackingField, put=__set__totalEventCount_k__BackingField))  _totalEventCount_k__BackingField;

constexpr void __set__totalEventCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__totalEventCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__totalUpdateCount_k__BackingField, put=__set__totalUpdateCount_k__BackingField))  _totalUpdateCount_k__BackingField;

constexpr void __set__totalUpdateCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__totalUpdateCount_k__BackingField() const;

 double_t __declspec(property(get=__get__totalEventProcessingTime_k__BackingField, put=__set__totalEventProcessingTime_k__BackingField))  _totalEventProcessingTime_k__BackingField;

constexpr void __set__totalEventProcessingTime_k__BackingField(double_t value) ;

constexpr double_t __get__totalEventProcessingTime_k__BackingField() const;

 double_t __declspec(property(get=__get__totalEventLagTime_k__BackingField, put=__set__totalEventLagTime_k__BackingField))  _totalEventLagTime_k__BackingField;

constexpr void __set__totalEventLagTime_k__BackingField(double_t value) ;

constexpr double_t __get__totalEventLagTime_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_maxNumDevices, put=set_maxNumDevices))  maxNumDevices;

 int32_t __declspec(property(get=get_currentNumDevices, put=set_currentNumDevices))  currentNumDevices;

 int32_t __declspec(property(get=get_maxStateSizeInBytes, put=set_maxStateSizeInBytes))  maxStateSizeInBytes;

 int32_t __declspec(property(get=get_currentStateSizeInBytes, put=set_currentStateSizeInBytes))  currentStateSizeInBytes;

 int32_t __declspec(property(get=get_currentControlCount, put=set_currentControlCount))  currentControlCount;

 int32_t __declspec(property(get=get_currentLayoutCount, put=set_currentLayoutCount))  currentLayoutCount;

 int32_t __declspec(property(get=get_totalEventBytes, put=set_totalEventBytes))  totalEventBytes;

 int32_t __declspec(property(get=get_totalEventCount, put=set_totalEventCount))  totalEventCount;

 int32_t __declspec(property(get=get_totalUpdateCount, put=set_totalUpdateCount))  totalUpdateCount;

 double_t __declspec(property(get=get_totalEventProcessingTime, put=set_totalEventProcessingTime))  totalEventProcessingTime;

 double_t __declspec(property(get=get_totalEventLagTime, put=set_totalEventLagTime))  totalEventLagTime;

 float_t __declspec(property(get=get_averageEventBytesPerFrame))  averageEventBytesPerFrame;

 double_t __declspec(property(get=get_averageProcessingTimePerEvent))  averageProcessingTimePerEvent;

 double_t __declspec(property(get=get_averageLagTimePerEvent))  averageLagTimePerEvent;


// Methods

/// @brief Method get_maxNumDevices addr 0x295e258 size 0x8 virtual false final false
 int32_t get_maxNumDevices() ;

/// @brief Method set_maxNumDevices addr 0x295e260 size 0x8 virtual false final false
 void set_maxNumDevices(int32_t value) ;

/// @brief Method get_currentNumDevices addr 0x295e268 size 0x8 virtual false final false
 int32_t get_currentNumDevices() ;

/// @brief Method set_currentNumDevices addr 0x295e270 size 0x8 virtual false final false
 void set_currentNumDevices(int32_t value) ;

/// @brief Method get_maxStateSizeInBytes addr 0x295e278 size 0x8 virtual false final false
 int32_t get_maxStateSizeInBytes() ;

/// @brief Method set_maxStateSizeInBytes addr 0x295e280 size 0x8 virtual false final false
 void set_maxStateSizeInBytes(int32_t value) ;

/// @brief Method get_currentStateSizeInBytes addr 0x295e288 size 0x8 virtual false final false
 int32_t get_currentStateSizeInBytes() ;

/// @brief Method set_currentStateSizeInBytes addr 0x295e290 size 0x8 virtual false final false
 void set_currentStateSizeInBytes(int32_t value) ;

/// @brief Method get_currentControlCount addr 0x295e298 size 0x8 virtual false final false
 int32_t get_currentControlCount() ;

/// @brief Method set_currentControlCount addr 0x295e2a0 size 0x8 virtual false final false
 void set_currentControlCount(int32_t value) ;

/// @brief Method get_currentLayoutCount addr 0x295e2a8 size 0x8 virtual false final false
 int32_t get_currentLayoutCount() ;

/// @brief Method set_currentLayoutCount addr 0x295e2b0 size 0x8 virtual false final false
 void set_currentLayoutCount(int32_t value) ;

/// @brief Method get_totalEventBytes addr 0x295e2b8 size 0x8 virtual false final false
 int32_t get_totalEventBytes() ;

/// @brief Method set_totalEventBytes addr 0x295e2c0 size 0x8 virtual false final false
 void set_totalEventBytes(int32_t value) ;

/// @brief Method get_totalEventCount addr 0x295e2c8 size 0x8 virtual false final false
 int32_t get_totalEventCount() ;

/// @brief Method set_totalEventCount addr 0x295e2d0 size 0x8 virtual false final false
 void set_totalEventCount(int32_t value) ;

/// @brief Method get_totalUpdateCount addr 0x295e2d8 size 0x8 virtual false final false
 int32_t get_totalUpdateCount() ;

/// @brief Method set_totalUpdateCount addr 0x295e2e0 size 0x8 virtual false final false
 void set_totalUpdateCount(int32_t value) ;

/// @brief Method get_totalEventProcessingTime addr 0x295e2e8 size 0x8 virtual false final false
 double_t get_totalEventProcessingTime() ;

/// @brief Method set_totalEventProcessingTime addr 0x295e2f0 size 0x8 virtual false final false
 void set_totalEventProcessingTime(double_t value) ;

/// @brief Method get_totalEventLagTime addr 0x295e2f8 size 0x8 virtual false final false
 double_t get_totalEventLagTime() ;

/// @brief Method set_totalEventLagTime addr 0x295e300 size 0x8 virtual false final false
 void set_totalEventLagTime(double_t value) ;

/// @brief Method get_averageEventBytesPerFrame addr 0x295e308 size 0x18 virtual false final false
 float_t get_averageEventBytesPerFrame() ;

/// @brief Method get_averageProcessingTimePerEvent addr 0x295e320 size 0x14 virtual false final false
 double_t get_averageProcessingTimePerEvent() ;

/// @brief Method get_averageLagTimePerEvent addr 0x295e334 size 0x14 virtual false final false
 double_t get_averageLagTimePerEvent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputMetrics, "UnityEngine.InputSystem.LowLevel", "InputMetrics");
