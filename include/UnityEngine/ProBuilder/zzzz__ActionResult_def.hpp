#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ____UnityEngine__ProBuilder__ActionResult__Status;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
// Type: ::Status
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12034))
// CS Name: UnityEngine.ProBuilder.ActionResult::Status
struct CORDL_TYPE ____UnityEngine__ProBuilder__ActionResult__Status : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__ProBuilder__ActionResult__Status(int32_t value__) noexcept;


                    constexpr ____UnityEngine__ProBuilder__ActionResult__Status(____UnityEngine__ProBuilder__ActionResult__Status const&) = default;
                    constexpr ____UnityEngine__ProBuilder__ActionResult__Status(____UnityEngine__ProBuilder__ActionResult__Status&&) = default;
                    constexpr ____UnityEngine__ProBuilder__ActionResult__Status& operator=(____UnityEngine__ProBuilder__ActionResult__Status const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__ProBuilder__ActionResult__Status& operator=(____UnityEngine__ProBuilder__ActionResult__Status&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__ActionResult__Status(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__ProBuilder__ActionResult__Status_Unwrapped : int32_t {
__Success = 0,
__Failure = 1,
__Canceled = 2,
__NoChange = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__ProBuilder__ActionResult__Status_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__ProBuilder__ActionResult__Status_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status const Success;

/// @brief Field Failure offset 0
static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status const Failure;

/// @brief Field Canceled offset 0
static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status const Canceled;

/// @brief Field NoChange offset 0
static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status const NoChange;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::ActionResult
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12035))
// CS Name: UnityEngine.ProBuilder.ActionResult
class CORDL_TYPE ActionResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Status = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ActionResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActionResult", modifiers: " const&", def_value: None }]
constexpr ActionResult(ActionResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActionResult", modifiers: "&&", def_value: None }]
constexpr ActionResult(ActionResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActionResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ActionResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActionResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActionResult& operator=(ActionResult&& o) noexcept = default;
  constexpr ActionResult& operator=(ActionResult const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status __declspec(property(get=__get__status_k__BackingField, put=__set__status_k__BackingField))  _status_k__BackingField;

constexpr void __set__status_k__BackingField(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status value) ;

constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status __get__status_k__BackingField() const;

 ::StringW __declspec(property(get=__get__notification_k__BackingField, put=__set__notification_k__BackingField))  _notification_k__BackingField;

constexpr void __set__notification_k__BackingField(::StringW value) ;

constexpr ::StringW __get__notification_k__BackingField() const;


// Properties

 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status __declspec(property(get=get_status, put=set_status))  status;

 ::StringW __declspec(property(get=get_notification, put=set_notification))  notification;

static ::UnityEngine::ProBuilder::ActionResult __declspec(property(get=get_Success))  Success;

static ::UnityEngine::ProBuilder::ActionResult __declspec(property(get=get_NoSelection))  NoSelection;

static ::UnityEngine::ProBuilder::ActionResult __declspec(property(get=get_UserCanceled))  UserCanceled;


// Methods

/// @brief Method get_status addr 0x29a2d80 size 0x8 virtual false final false
 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status get_status() ;

/// @brief Method set_status addr 0x29a2d88 size 0x8 virtual false final false
 void set_status(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status value) ;

/// @brief Method get_notification addr 0x29a2d90 size 0x8 virtual false final false
 ::StringW get_notification() ;

/// @brief Method set_notification addr 0x29a2d98 size 0x8 virtual false final false
 void set_notification(::StringW value) ;

// Ctor Parameters [CppParam { name: "status", ty: "::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status", modifiers: "", def_value: None }, CppParam { name: "notification", ty: "::StringW", modifiers: "", def_value: None }]
explicit ActionResult(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status status, ::StringW notification) ;

/// @brief Method .ctor addr 0x29a2da0 size 0x30 virtual false final false
 void _ctor(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status status, ::StringW notification) ;

/// @brief Method op_Implicit addr 0x29a2dd0 size 0x14 virtual false final false
static bool op_Implicit_bool(::UnityEngine::ProBuilder::ActionResult res) ;

/// @brief Method ToBool addr 0x29a2de4 size 0x10 virtual false final false
 bool ToBool() ;

/// @brief Method FromBool addr 0x29a2df4 size 0xa0 virtual false final false
static bool FromBool(bool success) ;

/// @brief Method get_Success addr 0x29a2e94 size 0x7c virtual false final false
static ::UnityEngine::ProBuilder::ActionResult get_Success() ;

/// @brief Method get_NoSelection addr 0x29a2f10 size 0x80 virtual false final false
static ::UnityEngine::ProBuilder::ActionResult get_NoSelection() ;

/// @brief Method get_UserCanceled addr 0x29a2f90 size 0x80 virtual false final false
static ::UnityEngine::ProBuilder::ActionResult get_UserCanceled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__ActionResult__Status, "UnityEngine.ProBuilder", "ActionResult/Status");
NEED_NO_BOX(::UnityEngine::ProBuilder::ActionResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ActionResult, "UnityEngine.ProBuilder", "ActionResult");
