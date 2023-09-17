#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__MissionObjectiveChecker__Status;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
// Type: ::Status
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5192))
// CS Name: MissionObjectiveChecker::Status
struct CORDL_TYPE ____GlobalNamespace__MissionObjectiveChecker__Status : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MissionObjectiveChecker__Status(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__MissionObjectiveChecker__Status(____GlobalNamespace__MissionObjectiveChecker__Status const&) = default;
                    constexpr ____GlobalNamespace__MissionObjectiveChecker__Status(____GlobalNamespace__MissionObjectiveChecker__Status&&) = default;
                    constexpr ____GlobalNamespace__MissionObjectiveChecker__Status& operator=(____GlobalNamespace__MissionObjectiveChecker__Status const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MissionObjectiveChecker__Status& operator=(____GlobalNamespace__MissionObjectiveChecker__Status&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MissionObjectiveChecker__Status(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__MissionObjectiveChecker__Status_Unwrapped : int32_t {
__None = 0,
__NotClearedYet = 1,
__NotFailedYet = 2,
__Cleared = 3,
__Failed = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__MissionObjectiveChecker__Status_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__MissionObjectiveChecker__Status_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status const None;

/// @brief Field NotClearedYet offset 0
static ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status const NotClearedYet;

/// @brief Field NotFailedYet offset 0
static ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status const NotFailedYet;

/// @brief Field Cleared offset 0
static ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status const Cleared;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5193))
// CS Name: MissionObjectiveChecker
class CORDL_TYPE MissionObjectiveChecker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Status = ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr MissionObjectiveChecker(MissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr MissionObjectiveChecker(MissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionObjectiveChecker(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionObjectiveChecker& operator=(MissionObjectiveChecker&& o) noexcept = default;
  constexpr MissionObjectiveChecker& operator=(MissionObjectiveChecker const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MissionObjectiveTypeSO __declspec(property(get=__get__missionObjectiveType, put=__set__missionObjectiveType))  _missionObjectiveType;

constexpr void __set__missionObjectiveType(::GlobalNamespace::MissionObjectiveTypeSO value) ;

constexpr ::GlobalNamespace::MissionObjectiveTypeSO __get__missionObjectiveType() const;

 ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> __declspec(property(get=__get_statusDidChangeEvent, put=__set_statusDidChangeEvent))  statusDidChangeEvent;

constexpr void __set_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> __get_statusDidChangeEvent() const;

 ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> __declspec(property(get=__get_checkedValueDidChangeEvent, put=__set_checkedValueDidChangeEvent))  checkedValueDidChangeEvent;

constexpr void __set_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> __get_checkedValueDidChangeEvent() const;

 ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status __get__status() const;

 int32_t __declspec(property(get=__get__checkedValue, put=__set__checkedValue))  _checkedValue;

constexpr void __set__checkedValue(int32_t value) ;

constexpr int32_t __get__checkedValue() const;

 ::GlobalNamespace::MissionObjective __declspec(property(get=__get__missionObjective, put=__set__missionObjective))  _missionObjective;

constexpr void __set__missionObjective(::GlobalNamespace::MissionObjective value) ;

constexpr ::GlobalNamespace::MissionObjective __get__missionObjective() const;

 bool __declspec(property(get=__get__disableChecking, put=__set__disableChecking))  _disableChecking;

constexpr void __set__disableChecking(bool value) ;

constexpr bool __get__disableChecking() const;


// Properties

 ::GlobalNamespace::MissionObjectiveTypeSO __declspec(property(get=get_missionObjectiveType))  missionObjectiveType;

 ::GlobalNamespace::MissionObjective __declspec(property(get=get_missionObjective))  missionObjective;

 bool __declspec(property(get=get_disableChecking, put=set_disableChecking))  disableChecking;

 ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status __declspec(property(get=get_status, put=set_status))  status;

 int32_t __declspec(property(get=get_checkedValue, put=set_checkedValue))  checkedValue;


// Methods

/// @brief Method add_statusDidChangeEvent addr 0x20d6ad4 size 0xb0 virtual false final false
 void add_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> value) ;

/// @brief Method remove_statusDidChangeEvent addr 0x20d6b84 size 0xb0 virtual false final false
 void remove_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> value) ;

/// @brief Method add_checkedValueDidChangeEvent addr 0x20d6c34 size 0xb0 virtual false final false
 void add_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> value) ;

/// @brief Method remove_checkedValueDidChangeEvent addr 0x20d6ce4 size 0xb0 virtual false final false
 void remove_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker> value) ;

/// @brief Method get_missionObjectiveType addr 0x20d6d94 size 0x8 virtual false final false
 ::GlobalNamespace::MissionObjectiveTypeSO get_missionObjectiveType() ;

/// @brief Method get_missionObjective addr 0x20d6d9c size 0x8 virtual false final false
 ::GlobalNamespace::MissionObjective get_missionObjective() ;

/// @brief Method get_disableChecking addr 0x20d6da4 size 0x8 virtual false final false
 bool get_disableChecking() ;

/// @brief Method set_disableChecking addr 0x20d6dac size 0xc virtual false final false
 void set_disableChecking(bool value) ;

/// @brief Method get_status addr 0x20d6db8 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status get_status() ;

/// @brief Method set_status addr 0x20d5b8c size 0x3c virtual false final false
 void set_status(::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status value) ;

/// @brief Method get_checkedValue addr 0x20d6dc0 size 0x8 virtual false final false
 int32_t get_checkedValue() ;

/// @brief Method set_checkedValue addr 0x20d5cec size 0x3c virtual false final false
 void set_checkedValue(int32_t value) ;

/// @brief Method SetCheckedMissionObjective addr 0x20d6dc8 size 0x10 virtual false final false
 void SetCheckedMissionObjective(::GlobalNamespace::MissionObjective missionObjective) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

// Ctor Parameters []
explicit MissionObjectiveChecker() ;

/// @brief Method .ctor addr 0x20d63f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MissionObjectiveChecker__Status, "", "MissionObjectiveChecker/Status");
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveChecker, "", "MissionObjectiveChecker");
