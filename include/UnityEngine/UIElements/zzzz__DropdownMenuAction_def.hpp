#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__DropdownMenuAction__Status;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__DropdownMenuAction__Status;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
// Type: ::Status
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7034))
// CS Name: UnityEngine.UIElements.DropdownMenuAction::Status
struct CORDL_TYPE UnityEngine__UIElements__DropdownMenuAction__Status : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__DropdownMenuAction__Status(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__DropdownMenuAction__Status(UnityEngine__UIElements__DropdownMenuAction__Status const&) = default;
                    constexpr UnityEngine__UIElements__DropdownMenuAction__Status(UnityEngine__UIElements__DropdownMenuAction__Status&&) = default;
                    constexpr UnityEngine__UIElements__DropdownMenuAction__Status& operator=(UnityEngine__UIElements__DropdownMenuAction__Status const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__DropdownMenuAction__Status& operator=(UnityEngine__UIElements__DropdownMenuAction__Status&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DropdownMenuAction__Status(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__DropdownMenuAction__Status_Unwrapped : int32_t {
__None = 0,
__Normal = 1,
__Disabled = 2,
__Checked = 4,
__Hidden = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__DropdownMenuAction__Status_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__DropdownMenuAction__Status_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status const None;

/// @brief Field Normal offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status const Normal;

/// @brief Field Disabled offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status const Disabled;

/// @brief Field Checked offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status const Checked;

/// @brief Field Hidden offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status const Hidden;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::DropdownMenuAction
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7035))
// CS Name: UnityEngine.UIElements.DropdownMenuAction
class CORDL_TYPE DropdownMenuAction : public UnityEngine::UIElements::DropdownMenuItem {
public:
// Declarations
using Status = UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DropdownMenuAction() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuAction", modifiers: " const&", def_value: None }]
constexpr DropdownMenuAction(DropdownMenuAction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuAction", modifiers: "&&", def_value: None }]
constexpr DropdownMenuAction(DropdownMenuAction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownMenuAction(void* ptr) noexcept : UnityEngine::UIElements::DropdownMenuItem(ptr) {
}


  constexpr DropdownMenuAction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownMenuAction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownMenuAction& operator=(DropdownMenuAction&& o) noexcept = default;
  constexpr DropdownMenuAction& operator=(DropdownMenuAction const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;

 UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status __declspec(property(get=__get__status_k__BackingField, put=__set__status_k__BackingField))  _status_k__BackingField;

constexpr void __set__status_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status __get__status_k__BackingField() const;

 UnityEngine::UIElements::DropdownMenuEventInfo __declspec(property(get=__get__eventInfo_k__BackingField, put=__set__eventInfo_k__BackingField))  _eventInfo_k__BackingField;

constexpr void __set__eventInfo_k__BackingField(UnityEngine::UIElements::DropdownMenuEventInfo value) ;

constexpr UnityEngine::UIElements::DropdownMenuEventInfo __get__eventInfo_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__userData_k__BackingField, put=__set__userData_k__BackingField))  _userData_k__BackingField;

constexpr void __set__userData_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__userData_k__BackingField() const;

 System::Action_1<UnityEngine::UIElements::DropdownMenuAction> __declspec(property(get=__get_actionCallback, put=__set_actionCallback))  actionCallback;

constexpr void __set_actionCallback(System::Action_1<UnityEngine::UIElements::DropdownMenuAction> value) ;

constexpr System::Action_1<UnityEngine::UIElements::DropdownMenuAction> __get_actionCallback() const;

 System::Func_2<UnityEngine::UIElements::DropdownMenuAction,UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status> __declspec(property(get=__get_actionStatusCallback, put=__set_actionStatusCallback))  actionStatusCallback;

constexpr void __set_actionStatusCallback(System::Func_2<UnityEngine::UIElements::DropdownMenuAction,UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status> value) ;

constexpr System::Func_2<UnityEngine::UIElements::DropdownMenuAction,UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status> __get_actionStatusCallback() const;


// Properties

 UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status __declspec(property(put=set_status))  status;

 UnityEngine::UIElements::DropdownMenuEventInfo __declspec(property(put=set_eventInfo))  eventInfo;

 ::bs_hook::Il2CppWrapperType __declspec(property(put=set_userData))  userData;


// Methods

/// @brief Method set_status addr 0x2c8fc88 size 0x8 virtual false final false
 void set_status(UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status value) ;

/// @brief Method set_eventInfo addr 0x2c8fc90 size 0x8 virtual false final false
 void set_eventInfo(UnityEngine::UIElements::DropdownMenuEventInfo value) ;

/// @brief Method set_userData addr 0x2c8fc98 size 0x8 virtual false final false
 void set_userData(::bs_hook::Il2CppWrapperType value) ;

static UnityEngine::UIElements::DropdownMenuAction New_ctor(::StringW actionName, System::Action_1<UnityEngine::UIElements::DropdownMenuAction> actionCallback, System::Func_2<UnityEngine::UIElements::DropdownMenuAction,UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status> actionStatusCallback, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method .ctor addr 0x2c8fca0 size 0x44 virtual false final false
 void _ctor(::StringW actionName, System::Action_1<UnityEngine::UIElements::DropdownMenuAction> actionCallback, System::Func_2<UnityEngine::UIElements::DropdownMenuAction,UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status> actionStatusCallback, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method UpdateActionStatus addr 0x2c8fce4 size 0x3c virtual false final false
 void UpdateActionStatus(UnityEngine::UIElements::DropdownMenuEventInfo eventInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status, "UnityEngine.UIElements", "DropdownMenuAction/Status");
NEED_NO_BOX(UnityEngine::UIElements::DropdownMenuAction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DropdownMenuAction, "UnityEngine.UIElements", "DropdownMenuAction");
