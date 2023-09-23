#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
namespace System {
class Action;
}
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyDebugger__ConditionEvaluation;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyDebugger__DebugComparer;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyDebugger__DebugVariable;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyDebugger__MessageType;
}
namespace Tayx::Graphy {
class GraphyDebugger;
}
namespace Tayx::Graphy {
class Tayx__Graphy__GraphyDebugger__DebugPacket;
}
namespace Tayx::Graphy {
class Tayx__Graphy__GraphyDebugger____c;
}
namespace Tayx::Graphy {
class Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0;
}
namespace Tayx::Graphy {
class Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0;
}
namespace Tayx::Graphy {
class Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0;
}
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyDebugger__DebugCondition;
}
// Type: ::DebugVariable
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15173))
// CS Name: Tayx.Graphy.GraphyDebugger::DebugVariable
struct CORDL_TYPE Tayx__Graphy__GraphyDebugger__DebugVariable : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger__DebugVariable(int32_t value__) noexcept;


                    constexpr Tayx__Graphy__GraphyDebugger__DebugVariable(Tayx__Graphy__GraphyDebugger__DebugVariable const&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__DebugVariable(Tayx__Graphy__GraphyDebugger__DebugVariable&&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__DebugVariable& operator=(Tayx__Graphy__GraphyDebugger__DebugVariable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Tayx__Graphy__GraphyDebugger__DebugVariable& operator=(Tayx__Graphy__GraphyDebugger__DebugVariable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger__DebugVariable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Tayx__Graphy__GraphyDebugger__DebugVariable_Unwrapped : int32_t {
__Fps = 0,
__Fps_Min = 1,
__Fps_Max = 2,
__Fps_Avg = 3,
__Ram_Allocated = 4,
__Ram_Reserved = 5,
__Ram_Mono = 6,
__Audio_DB = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Tayx__Graphy__GraphyDebugger__DebugVariable_Unwrapped () const noexcept {
return std::bit_cast<__Tayx__Graphy__GraphyDebugger__DebugVariable_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Fps offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable const Fps;

/// @brief Field Fps_Min offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable const Fps_Min;

/// @brief Field Fps_Max offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable const Fps_Max;

/// @brief Field Fps_Avg offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable const Fps_Avg;

/// @brief Field Ram_Allocated offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable const Ram_Allocated;

/// @brief Field Ram_Reserved offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable const Ram_Reserved;

/// @brief Field Ram_Mono offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable const Ram_Mono;

/// @brief Field Audio_DB offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable const Audio_DB;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::DebugComparer
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15174))
// CS Name: Tayx.Graphy.GraphyDebugger::DebugComparer
struct CORDL_TYPE Tayx__Graphy__GraphyDebugger__DebugComparer : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger__DebugComparer(int32_t value__) noexcept;


                    constexpr Tayx__Graphy__GraphyDebugger__DebugComparer(Tayx__Graphy__GraphyDebugger__DebugComparer const&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__DebugComparer(Tayx__Graphy__GraphyDebugger__DebugComparer&&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__DebugComparer& operator=(Tayx__Graphy__GraphyDebugger__DebugComparer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Tayx__Graphy__GraphyDebugger__DebugComparer& operator=(Tayx__Graphy__GraphyDebugger__DebugComparer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger__DebugComparer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Tayx__Graphy__GraphyDebugger__DebugComparer_Unwrapped : int32_t {
__Less_than = 0,
__Equals_or_less_than = 1,
__Equals = 2,
__Equals_or_greater_than = 3,
__Greater_than = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Tayx__Graphy__GraphyDebugger__DebugComparer_Unwrapped () const noexcept {
return std::bit_cast<__Tayx__Graphy__GraphyDebugger__DebugComparer_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Less_than offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer const Less_than;

/// @brief Field Equals_or_less_than offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer const Equals_or_less_than;

/// @brief Field Equals offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer const Equals;

/// @brief Field Equals_or_greater_than offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer const Equals_or_greater_than;

/// @brief Field Greater_than offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer const Greater_than;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::ConditionEvaluation
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15175))
// CS Name: Tayx.Graphy.GraphyDebugger::ConditionEvaluation
struct CORDL_TYPE Tayx__Graphy__GraphyDebugger__ConditionEvaluation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger__ConditionEvaluation(int32_t value__) noexcept;


                    constexpr Tayx__Graphy__GraphyDebugger__ConditionEvaluation(Tayx__Graphy__GraphyDebugger__ConditionEvaluation const&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__ConditionEvaluation(Tayx__Graphy__GraphyDebugger__ConditionEvaluation&&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__ConditionEvaluation& operator=(Tayx__Graphy__GraphyDebugger__ConditionEvaluation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Tayx__Graphy__GraphyDebugger__ConditionEvaluation& operator=(Tayx__Graphy__GraphyDebugger__ConditionEvaluation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger__ConditionEvaluation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Tayx__Graphy__GraphyDebugger__ConditionEvaluation_Unwrapped : int32_t {
__All_conditions_must_be_met = 0,
__Only_one_condition_has_to_be_met = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Tayx__Graphy__GraphyDebugger__ConditionEvaluation_Unwrapped () const noexcept {
return std::bit_cast<__Tayx__Graphy__GraphyDebugger__ConditionEvaluation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All_conditions_must_be_met offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation const All_conditions_must_be_met;

/// @brief Field Only_one_condition_has_to_be_met offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation const Only_one_condition_has_to_be_met;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::MessageType
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15176))
// CS Name: Tayx.Graphy.GraphyDebugger::MessageType
struct CORDL_TYPE Tayx__Graphy__GraphyDebugger__MessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger__MessageType(int32_t value__) noexcept;


                    constexpr Tayx__Graphy__GraphyDebugger__MessageType(Tayx__Graphy__GraphyDebugger__MessageType const&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__MessageType(Tayx__Graphy__GraphyDebugger__MessageType&&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__MessageType& operator=(Tayx__Graphy__GraphyDebugger__MessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Tayx__Graphy__GraphyDebugger__MessageType& operator=(Tayx__Graphy__GraphyDebugger__MessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger__MessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Tayx__Graphy__GraphyDebugger__MessageType_Unwrapped : int32_t {
__Log = 0,
__Warning = 1,
__Error = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Tayx__Graphy__GraphyDebugger__MessageType_Unwrapped () const noexcept {
return std::bit_cast<__Tayx__Graphy__GraphyDebugger__MessageType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Log offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType const Log;

/// @brief Field Warning offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType const Warning;

/// @brief Field Error offset 0
static Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType const Error;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::DebugCondition
namespace Tayx::Graphy {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15177))
// CS Name: Tayx.Graphy.GraphyDebugger::DebugCondition
struct CORDL_TYPE Tayx__Graphy__GraphyDebugger__DebugCondition : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Variable", ty: "Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable", modifiers: "", def_value: None }, CppParam { name: "Comparer", ty: "Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger__DebugCondition(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable Variable, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer Comparer, float_t Value) noexcept;


                    constexpr Tayx__Graphy__GraphyDebugger__DebugCondition(Tayx__Graphy__GraphyDebugger__DebugCondition const&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__DebugCondition(Tayx__Graphy__GraphyDebugger__DebugCondition&&) = default;
                    constexpr Tayx__Graphy__GraphyDebugger__DebugCondition& operator=(Tayx__Graphy__GraphyDebugger__DebugCondition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Tayx__Graphy__GraphyDebugger__DebugCondition& operator=(Tayx__Graphy__GraphyDebugger__DebugCondition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger__DebugCondition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable __declspec(property(get=__get_Variable, put=__set_Variable))  Variable;

constexpr void __set_Variable(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable __get_Variable() const;

 Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer __declspec(property(get=__get_Comparer, put=__set_Comparer))  Comparer;

constexpr void __set_Comparer(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer __get_Comparer() const;

 float_t __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(float_t value) ;

constexpr float_t __get_Value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::DebugPacket
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15178))
// CS Name: Tayx.Graphy.GraphyDebugger::DebugPacket
class CORDL_TYPE Tayx__Graphy__GraphyDebugger__DebugPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~Tayx__Graphy__GraphyDebugger__DebugPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger__DebugPacket", modifiers: " const&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger__DebugPacket(Tayx__Graphy__GraphyDebugger__DebugPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger__DebugPacket", modifiers: "&&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger__DebugPacket(Tayx__Graphy__GraphyDebugger__DebugPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger__DebugPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tayx__Graphy__GraphyDebugger__DebugPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger__DebugPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger__DebugPacket& operator=(Tayx__Graphy__GraphyDebugger__DebugPacket&& o) noexcept = default;
  constexpr Tayx__Graphy__GraphyDebugger__DebugPacket& operator=(Tayx__Graphy__GraphyDebugger__DebugPacket const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_Active, put=__set_Active))  Active;

constexpr void __set_Active(bool value) ;

constexpr bool __get_Active() const;

 int32_t __declspec(property(get=__get_Id, put=__set_Id))  Id;

constexpr void __set_Id(int32_t value) ;

constexpr int32_t __get_Id() const;

 bool __declspec(property(get=__get_ExecuteOnce, put=__set_ExecuteOnce))  ExecuteOnce;

constexpr void __set_ExecuteOnce(bool value) ;

constexpr bool __get_ExecuteOnce() const;

 float_t __declspec(property(get=__get_InitSleepTime, put=__set_InitSleepTime))  InitSleepTime;

constexpr void __set_InitSleepTime(float_t value) ;

constexpr float_t __get_InitSleepTime() const;

 float_t __declspec(property(get=__get_ExecuteSleepTime, put=__set_ExecuteSleepTime))  ExecuteSleepTime;

constexpr void __set_ExecuteSleepTime(float_t value) ;

constexpr float_t __get_ExecuteSleepTime() const;

 Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation __declspec(property(get=__get_ConditionEvaluation, put=__set_ConditionEvaluation))  ConditionEvaluation;

constexpr void __set_ConditionEvaluation(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation __get_ConditionEvaluation() const;

 System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> __declspec(property(get=__get_DebugConditions, put=__set_DebugConditions))  DebugConditions;

constexpr void __set_DebugConditions(System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> value) ;

constexpr System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> __get_DebugConditions() const;

 Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType __declspec(property(get=__get_MessageType, put=__set_MessageType))  MessageType;

constexpr void __set_MessageType(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType value) ;

constexpr Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType __get_MessageType() const;

 ::StringW __declspec(property(get=__get_Message, put=__set_Message))  Message;

constexpr void __set_Message(::StringW value) ;

constexpr ::StringW __get_Message() const;

 bool __declspec(property(get=__get_TakeScreenshot, put=__set_TakeScreenshot))  TakeScreenshot;

constexpr void __set_TakeScreenshot(bool value) ;

constexpr bool __get_TakeScreenshot() const;

 ::StringW __declspec(property(get=__get_ScreenshotFileName, put=__set_ScreenshotFileName))  ScreenshotFileName;

constexpr void __set_ScreenshotFileName(::StringW value) ;

constexpr ::StringW __get_ScreenshotFileName() const;

 bool __declspec(property(get=__get_DebugBreak, put=__set_DebugBreak))  DebugBreak;

constexpr void __set_DebugBreak(bool value) ;

constexpr bool __get_DebugBreak() const;

 UnityEngine::Events::UnityEvent __declspec(property(get=__get_UnityEvents, put=__set_UnityEvents))  UnityEvents;

constexpr void __set_UnityEvents(UnityEngine::Events::UnityEvent value) ;

constexpr UnityEngine::Events::UnityEvent __get_UnityEvents() const;

 System::Collections::Generic::List_1<System::Action> __declspec(property(get=__get_Callbacks, put=__set_Callbacks))  Callbacks;

constexpr void __set_Callbacks(System::Collections::Generic::List_1<System::Action> value) ;

constexpr System::Collections::Generic::List_1<System::Action> __get_Callbacks() const;

 bool __declspec(property(get=__get_canBeChecked, put=__set_canBeChecked))  canBeChecked;

constexpr void __set_canBeChecked(bool value) ;

constexpr bool __get_canBeChecked() const;

 bool __declspec(property(get=__get_executed, put=__set_executed))  executed;

constexpr void __set_executed(bool value) ;

constexpr bool __get_executed() const;

 float_t __declspec(property(get=__get_timePassed, put=__set_timePassed))  timePassed;

constexpr void __set_timePassed(float_t value) ;

constexpr float_t __get_timePassed() const;


// Properties

 bool __declspec(property(get=get_Check))  Check;


// Methods

/// @brief Method get_Check addr 0x286eef8 size 0x8 virtual false final false
 bool get_Check() ;

/// @brief Method Update addr 0x286e7f8 size 0x5c virtual false final false
 void Update() ;

/// @brief Method Executed addr 0x286eeec size 0xc virtual false final false
 void Executed() ;

// Ctor Parameters []
explicit Tayx__Graphy__GraphyDebugger__DebugPacket() ;

/// @brief Method .ctor addr 0x286dde0 size 0x11c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::<>c__DisplayClass18_0
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15179))
// CS Name: Tayx.Graphy.GraphyDebugger::<>c__DisplayClass18_0
class CORDL_TYPE Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0", modifiers: " const&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0(Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0(Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0& operator=(Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0&& o) noexcept = default;
  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0& operator=(Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_packetId, put=__set_packetId))  packetId;

constexpr void __set_packetId(int32_t value) ;

constexpr int32_t __get_packetId() const;


// Methods

// Ctor Parameters []
explicit Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0() ;

/// @brief Method .ctor addr 0x286e2c8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetFirstDebugPacketWithId>b__0 addr 0x286ef00 size 0x24 virtual false final false
 bool _GetFirstDebugPacketWithId_b__0(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::<>c__DisplayClass19_0
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15180))
// CS Name: Tayx.Graphy.GraphyDebugger::<>c__DisplayClass19_0
class CORDL_TYPE Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0", modifiers: " const&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0(Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0(Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0& operator=(Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0&& o) noexcept = default;
  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0& operator=(Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_packetId, put=__set_packetId))  packetId;

constexpr void __set_packetId(int32_t value) ;

constexpr int32_t __get_packetId() const;


// Methods

// Ctor Parameters []
explicit Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0() ;

/// @brief Method .ctor addr 0x286e3ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAllDebugPacketsWithId>b__0 addr 0x286ef24 size 0x24 virtual false final false
 bool _GetAllDebugPacketsWithId_b__0(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::<>c__DisplayClass21_0
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15181))
// CS Name: Tayx.Graphy.GraphyDebugger::<>c__DisplayClass21_0
class CORDL_TYPE Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0", modifiers: " const&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0(Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0(Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0& operator=(Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0&& o) noexcept = default;
  constexpr Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0& operator=(Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_packetId, put=__set_packetId))  packetId;

constexpr void __set_packetId(int32_t value) ;

constexpr int32_t __get_packetId() const;


// Methods

// Ctor Parameters []
explicit Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0() ;

/// @brief Method .ctor addr 0x286e52c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RemoveAllDebugPacketsWithId>b__0 addr 0x286ef48 size 0x24 virtual false final false
 bool _RemoveAllDebugPacketsWithId_b__0(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: ::<>c
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15182))
// CS Name: Tayx.Graphy.GraphyDebugger::<>c
class CORDL_TYPE Tayx__Graphy__GraphyDebugger____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Tayx__Graphy__GraphyDebugger____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger____c", modifiers: " const&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger____c(Tayx__Graphy__GraphyDebugger____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tayx__Graphy__GraphyDebugger____c", modifiers: "&&", def_value: None }]
constexpr Tayx__Graphy__GraphyDebugger____c(Tayx__Graphy__GraphyDebugger____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tayx__Graphy__GraphyDebugger____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tayx__Graphy__GraphyDebugger____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tayx__Graphy__GraphyDebugger____c& operator=(Tayx__Graphy__GraphyDebugger____c&& o) noexcept = default;
  constexpr Tayx__Graphy__GraphyDebugger____c& operator=(Tayx__Graphy__GraphyDebugger____c const& o) noexcept = default;
                


// Fields

static Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c value) ;

static Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c __get___9() ;

static System::Predicate_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> __declspec(property(get=__get___9__24_0, put=__set___9__24_0))  __9__24_0;

static void __set___9__24_0(System::Predicate_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> value) ;

static System::Predicate_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> __get___9__24_0() ;


// Methods

// Ctor Parameters []
explicit Tayx__Graphy__GraphyDebugger____c() ;

/// @brief Method .ctor addr 0x286efd0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CheckDebugPackets>b__24_0 addr 0x286efd8 size 0xc virtual false final false
 bool _CheckDebugPackets_b__24_0(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket packet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
// Type: Tayx.Graphy::GraphyDebugger
namespace Tayx::Graphy {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15193), inst: 2450 }), TypeDefinitionIndex(TypeDefinitionIndex(15193))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15183))
// CS Name: Tayx.Graphy.GraphyDebugger
class CORDL_TYPE GraphyDebugger : public Tayx::Graphy::Utils::G_Singleton_1<Tayx::Graphy::GraphyDebugger> {
public:
// Declarations
using __c = Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c;

using __c__DisplayClass21_0 = Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0;

using __c__DisplayClass19_0 = Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0;

using __c__DisplayClass18_0 = Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0;

using DebugPacket = Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket;

using DebugCondition = Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition;

using MessageType = Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType;

using ConditionEvaluation = Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation;

using DebugComparer = Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer;

using DebugVariable = Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GraphyDebugger() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger", modifiers: " const&", def_value: None }]
constexpr GraphyDebugger(GraphyDebugger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphyDebugger", modifiers: "&&", def_value: None }]
constexpr GraphyDebugger(GraphyDebugger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphyDebugger(void* ptr) noexcept : Tayx::Graphy::Utils::G_Singleton_1<Tayx::Graphy::GraphyDebugger>(ptr) {
}


  constexpr GraphyDebugger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphyDebugger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphyDebugger& operator=(GraphyDebugger&& o) noexcept = default;
  constexpr GraphyDebugger& operator=(GraphyDebugger const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> __declspec(property(get=__get_m_debugPackets, put=__set_m_debugPackets))  m_debugPackets;

constexpr void __set_m_debugPackets(System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> value) ;

constexpr System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> __get_m_debugPackets() const;

 Tayx::Graphy::Fps::G_FpsMonitor __declspec(property(get=__get_m_fpsMonitor, put=__set_m_fpsMonitor))  m_fpsMonitor;

constexpr void __set_m_fpsMonitor(Tayx::Graphy::Fps::G_FpsMonitor value) ;

constexpr Tayx::Graphy::Fps::G_FpsMonitor __get_m_fpsMonitor() const;

 Tayx::Graphy::Ram::G_RamMonitor __declspec(property(get=__get_m_ramMonitor, put=__set_m_ramMonitor))  m_ramMonitor;

constexpr void __set_m_ramMonitor(Tayx::Graphy::Ram::G_RamMonitor value) ;

constexpr Tayx::Graphy::Ram::G_RamMonitor __get_m_ramMonitor() const;

 Tayx::Graphy::Audio::G_AudioMonitor __declspec(property(get=__get_m_audioMonitor, put=__set_m_audioMonitor))  m_audioMonitor;

constexpr void __set_m_audioMonitor(Tayx::Graphy::Audio::G_AudioMonitor value) ;

constexpr Tayx::Graphy::Audio::G_AudioMonitor __get_m_audioMonitor() const;


// Methods

// Ctor Parameters []
explicit GraphyDebugger() ;

/// @brief Method .ctor addr 0x286d620 size 0xbc virtual false final false
 void _ctor() ;

/// @brief Method Start addr 0x286d6dc size 0xa0 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x286d77c size 0x4 virtual false final false
 void Update() ;

/// @brief Method AddNewDebugPacket addr 0x286db9c size 0xa8 virtual false final false
 void AddNewDebugPacket(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket newDebugPacket) ;

/// @brief Method AddNewDebugPacket addr 0x286dc44 size 0x19c virtual false final false
 void AddNewDebugPacket(int32_t newId, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition newDebugCondition, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, System::Action newCallback) ;

/// @brief Method AddNewDebugPacket addr 0x286defc size 0x118 virtual false final false
 void AddNewDebugPacket(int32_t newId, System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> newDebugConditions, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, System::Action newCallback) ;

/// @brief Method AddNewDebugPacket addr 0x286e014 size 0x130 virtual false final false
 void AddNewDebugPacket(int32_t newId, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition newDebugCondition, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, System::Collections::Generic::List_1<System::Action> newCallbacks) ;

/// @brief Method AddNewDebugPacket addr 0x286e144 size 0xac virtual false final false
 void AddNewDebugPacket(int32_t newId, System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition> newDebugConditions, Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType newMessageType, ::StringW newMessage, bool newDebugBreak, System::Collections::Generic::List_1<System::Action> newCallbacks) ;

/// @brief Method GetFirstDebugPacketWithId addr 0x286e1f0 size 0xd8 virtual false final false
 Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket GetFirstDebugPacketWithId(int32_t packetId) ;

/// @brief Method GetAllDebugPacketsWithId addr 0x286e2d0 size 0xdc virtual false final false
 System::Collections::Generic::List_1<Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket> GetAllDebugPacketsWithId(int32_t packetId) ;

/// @brief Method RemoveFirstDebugPacketWithId addr 0x286e3b4 size 0x8c virtual false final false
 void RemoveFirstDebugPacketWithId(int32_t packetId) ;

/// @brief Method RemoveAllDebugPacketsWithId addr 0x286e440 size 0xec virtual false final false
 void RemoveAllDebugPacketsWithId(int32_t packetId) ;

/// @brief Method AddCallbackToFirstDebugPacketWithId addr 0x286e534 size 0xd8 virtual false final false
 void AddCallbackToFirstDebugPacketWithId(System::Action callback, int32_t id) ;

/// @brief Method AddCallbackToAllDebugPacketWithId addr 0x286e60c size 0x1ec virtual false final false
 void AddCallbackToAllDebugPacketWithId(System::Action callback, int32_t id) ;

/// @brief Method CheckDebugPackets addr 0x286d780 size 0x41c virtual false final false
 void CheckDebugPackets() ;

/// @brief Method CheckIfConditionIsMet addr 0x286e854 size 0x110 virtual false final false
 bool CheckIfConditionIsMet(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition debugCondition) ;

/// @brief Method GetRequestedValueFromDebugVariable addr 0x286ed20 size 0x1cc virtual false final false
 float_t GetRequestedValueFromDebugVariable(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable debugVariable) ;

/// @brief Method ExecuteOperationsInDebugPacket addr 0x286e964 size 0x3bc virtual false final false
 void ExecuteOperationsInDebugPacket(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket debugPacket) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__ConditionEvaluation, "Tayx.Graphy", "GraphyDebugger/ConditionEvaluation");
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugComparer, "Tayx.Graphy", "GraphyDebugger/DebugComparer");
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugVariable, "Tayx.Graphy", "GraphyDebugger/DebugVariable");
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__MessageType, "Tayx.Graphy", "GraphyDebugger/MessageType");
NEED_NO_BOX(Tayx::Graphy::GraphyDebugger);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::GraphyDebugger, "Tayx.Graphy", "GraphyDebugger");
NEED_NO_BOX(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugPacket, "Tayx.Graphy", "GraphyDebugger/DebugPacket");
NEED_NO_BOX(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c, "Tayx.Graphy", "GraphyDebugger/<>c");
NEED_NO_BOX(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass18_0, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass18_0");
NEED_NO_BOX(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass19_0, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass19_0");
NEED_NO_BOX(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger____c__DisplayClass21_0, "Tayx.Graphy", "GraphyDebugger/<>c__DisplayClass21_0");
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Tayx__Graphy__GraphyDebugger__DebugCondition, "Tayx.Graphy", "GraphyDebugger/DebugCondition");
