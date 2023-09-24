#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__FormattedFloatListSettingsController__ValueType;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__FormattedFloatListSettingsController__ValueType;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
// Type: ::ValueType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5680))
// CS Name: FormattedFloatListSettingsController::ValueType
struct CORDL_TYPE GlobalNamespace__FormattedFloatListSettingsController__ValueType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__FormattedFloatListSettingsController__ValueType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__FormattedFloatListSettingsController__ValueType(GlobalNamespace__FormattedFloatListSettingsController__ValueType const&) = default;
                    constexpr GlobalNamespace__FormattedFloatListSettingsController__ValueType(GlobalNamespace__FormattedFloatListSettingsController__ValueType&&) = default;
                    constexpr GlobalNamespace__FormattedFloatListSettingsController__ValueType& operator=(GlobalNamespace__FormattedFloatListSettingsController__ValueType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__FormattedFloatListSettingsController__ValueType& operator=(GlobalNamespace__FormattedFloatListSettingsController__ValueType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FormattedFloatListSettingsController__ValueType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__FormattedFloatListSettingsController__ValueType_Unwrapped : int32_t {
__Normal = 0,
__Normalized = 1,
__InvertedNormalized = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__FormattedFloatListSettingsController__ValueType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__FormattedFloatListSettingsController__ValueType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType const Normal;

/// @brief Field Normalized offset 0
static GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType const Normalized;

/// @brief Field InvertedNormalized offset 0
static GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType const InvertedNormalized;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FormattedFloatListSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5681))
// CS Name: FormattedFloatListSettingsController
class CORDL_TYPE FormattedFloatListSettingsController : public GlobalNamespace::ListSettingsController {
public:
// Declarations
using ValueType = GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~FormattedFloatListSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsController", modifiers: " const&", def_value: None }]
constexpr FormattedFloatListSettingsController(FormattedFloatListSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsController", modifiers: "&&", def_value: None }]
constexpr FormattedFloatListSettingsController(FormattedFloatListSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormattedFloatListSettingsController(void* ptr) noexcept : GlobalNamespace::ListSettingsController(ptr) {
}


  constexpr FormattedFloatListSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormattedFloatListSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormattedFloatListSettingsController& operator=(FormattedFloatListSettingsController&& o) noexcept = default;
  constexpr FormattedFloatListSettingsController& operator=(FormattedFloatListSettingsController const& o) noexcept = default;
                


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get__values, put=__set__values))  _values;

constexpr void __set__values(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__values() const;

 ::StringW __declspec(property(get=__get__formattingString, put=__set__formattingString))  _formattingString;

constexpr void __set__formattingString(::StringW value) ;

constexpr ::StringW __get__formattingString() const;

 GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType __declspec(property(get=__get_valueType, put=__set_valueType))  valueType;

constexpr void __set_valueType(GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType value) ;

constexpr GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType __get_valueType() const;

 System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> __declspec(property(get=__get_valueDidChangeEvent, put=__set_valueDidChangeEvent))  valueDidChangeEvent;

constexpr void __set_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> value) ;

constexpr System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> __get_valueDidChangeEvent() const;

 float_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(float_t value) ;

constexpr float_t __get__value() const;

 float_t __declspec(property(get=__get__min, put=__set__min))  _min;

constexpr void __set__min(float_t value) ;

constexpr float_t __get__min() const;

 float_t __declspec(property(get=__get__max, put=__set__max))  _max;

constexpr void __set__max(float_t value) ;

constexpr float_t __get__max() const;

 bool __declspec(property(get=__get__hasValue, put=__set__hasValue))  _hasValue;

constexpr void __set__hasValue(bool value) ;

constexpr bool __get__hasValue() const;


// Properties

 float_t __declspec(property(get=get_value))  value;

 ::ArrayW<float_t> __declspec(property(get=get_values, put=set_values))  values;


// Methods

/// @brief Method add_valueDidChangeEvent addr 0x2152910 size 0xb0 virtual false final false
 void add_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> value) ;

/// @brief Method remove_valueDidChangeEvent addr 0x21529c0 size 0xb0 virtual false final false
 void remove_valueDidChangeEvent(System::Action_2<GlobalNamespace::FormattedFloatListSettingsController,float_t> value) ;

/// @brief Method get_value addr 0x2152a70 size 0x8 virtual false final false
 float_t get_value() ;

/// @brief Method get_values addr 0x2152a78 size 0x8 virtual false final false
 ::ArrayW<float_t> get_values() ;

/// @brief Method set_values addr 0x2152a80 size 0x38 virtual false final false
 void set_values(::ArrayW<float_t> value) ;

/// @brief Method SetValue addr 0x214c44c size 0x14 virtual false final false
 void SetValue(float_t value, bool callCallback) ;

/// @brief Method GetInitValues addr 0x2152b14 size 0x150 virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x2152c64 size 0x58 virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x2152cbc size 0xdc virtual true final false
 ::StringW TextForValue(int32_t idx) ;

static GlobalNamespace::FormattedFloatListSettingsController New_ctor() ;

/// @brief Method .ctor addr 0x2152d98 size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FormattedFloatListSettingsController__ValueType, "", "FormattedFloatListSettingsController/ValueType");
NEED_NO_BOX(GlobalNamespace::FormattedFloatListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsController, "", "FormattedFloatListSettingsController");
